/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B518_0B1D_0014_307D()
 *
 * @name f__B518_0B1D_0014_307D
 * @implements B518:0B1D:0014:307D ()
 * @implements B518:0B31:0022:2268
 * @implements B518:0B53:0016:5213
 * @implements B518:0B64:0005:DD42
 * @implements B518:0B69:0032:05DD
 * @implements B518:0B7A:0021:F9AC
 * @implements B518:0B9B:0036:6E22
 * @implements B518:0BAC:0025:1972
 * @implements B518:0BAF:0022:6D86
 * @implements B518:0BD1:0021:7F09
 * @implements B518:0BF2:0027:2EE7
 * @implements B518:0C19:0011:0A68
 * @implements B518:0C2A:0004:6B9F
 * @implements B518:0C2C:0002:F0BA
 * @implements B518:0C2E:002A:A18C
 * @implements B518:0C58:0034:076C
 * @implements B518:0C8C:000B:4158
 * @implements B518:0C8F:0008:1040
 * @implements B518:0C97:001D:C8E7
 * @implements B518:0CB4:000D:A042
 * @implements B518:0CC1:0018:CBCF
 * @implements B518:0CD9:000B:890A
 * @implements B518:0CE4:0013:A981
 * @implements B518:0CF7:0029:5362
 * @implements B518:0CFA:0026:1733
 * @implements B518:0D03:001D:970B
 * @implements B518:0D20:0008:0683
 * @implements B518:0D28:0020:B1AE
 * @implements B518:0D48:001F:5EF1
 * @implements B518:0D67:0008:0683
 * @implements B518:0D6F:0005:91EE
 * @implements B518:0D74:001D:DCC9
 * @implements B518:0D91:0008:0683
 * @implements B518:0D99:0016:5F3A
 * @implements B518:0D9C:0013:5519
 * @implements B518:0DAF:000C:A157
 * @implements B518:0DBB:000C:8B4F
 * @implements B518:0DC7:000C:BD47
 * @implements B518:0DD3:0036:0F81
 * @implements B518:0E09:0015:5548
 * @implements B518:0E1E:0008:1199
 * @implements B518:0E26:0007:F77C
 *
 * Called From: B518:0079:000F:D58C
 * Called From: B518:0641:000C:688C
 */
void emu_GUI_HallOfFame_Internal_0B1D()
{
l__0B1D:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0B31); emu_cs = 0x2598; emu_GUI_Screen_SetActive();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__0B31:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998A));
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x2C4E;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0B53); emu_cs = 0x34CA; overlay(0x34CA, 0); emu_Sprites_LoadImage();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__0B53:
	emu_addw(&emu_sp, 0xE);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3A38), 0x0);
	if ((int16)emu_get_memory16(emu_ds, 0x00, 0x3A38) >= (int16)0x0) {
		emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3A38), 0x2);
		if ((int16)emu_get_memory16(emu_ds, 0x00, 0x3A38) <= (int16)0x2) goto l__0B69;
	}
l__0B64:
	emu_di = 0x1;
	goto l__0B7A;
l__0B69:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A38);
	emu_dx = 0x38;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x8);
	emu_cl = 0x3;
	emu_sarw(&emu_ax, emu_cl);
	emu_di = emu_ax;
l__0B7A:
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x38;
	emu_push(emu_ax);
	emu_ax = 0x7;
	emu_push(emu_ax);
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x88;
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0B9B); emu_cs = 0x24D0; emu_GUI_Screen_Copy();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__0B9B:
	emu_addw(&emu_sp, 0x10);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3A38), 0x0);
	if ((int16)emu_get_memory16(emu_ds, 0x00, 0x3A38) >= (int16)0x0) {
		emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3A38), 0x2);
		if ((int16)emu_get_memory16(emu_ds, 0x00, 0x3A38) <= (int16)0x2) goto l__0BAF;
	}
l__0BAC:
	emu_addw(&emu_di, 0x7);
l__0BAF:
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x38;
	emu_push(emu_ax);
	emu_ax = 0x7;
	emu_push(emu_ax);
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_ax = 0x21;
	emu_push(emu_ax);
	emu_ax = 0x88;
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0BD1); emu_cs = 0x24D0; emu_GUI_Screen_Copy();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__0BD1:
	emu_addw(&emu_sp, 0x10);
	emu_ax = 0x74;
	emu_push(emu_ax);
	emu_ax = 0xBF;
	emu_push(emu_ax);
	emu_ax = 0xAF;
	emu_push(emu_ax);
	emu_ax = 0x88;
	emu_push(emu_ax);
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_ax = 0x353F;
	emu_es = emu_ax;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6668);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x666A);
	emu_push(0x0BF2);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60D31: emu_GUI_DrawFilledRectangle(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB518; emu_last_ip = 0x0BED; emu_last_length = 0x0021; emu_last_crc = 0x7F09;
			emu_call();
			return;
	}
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__0BF2:
	emu_addw(&emu_sp, 0xA);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x1);
	if (emu_get_memory16(emu_ss, emu_bp,  0x8) != 0x1) goto l__0C2E;
	emu_ax = 0x74;
	emu_push(emu_ax);
	emu_ax = 0xBF;
	emu_push(emu_ax);
	emu_ax = 0x137;
	emu_push(emu_ax);
	emu_ax = 0x50;
	emu_push(emu_ax);
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_ax = 0x353F;
	emu_es = emu_ax;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6668);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x666A);
	emu_push(0x0C19);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60D31: emu_GUI_DrawFilledRectangle(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB518; emu_last_ip = 0x0C14; emu_last_length = 0x0027; emu_last_crc = 0x2EE7;
			emu_call();
			return;
	}
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__0C19:
	emu_addw(&emu_sp, 0xA);
	emu_cmpw(&emu_si, 0xFFFF);
	if (emu_si == 0xFFFF) goto l__0C2C;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0C2A); emu_GUI_HallOfFame_Internal_0EB1();
l__0C2A:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__0C2C:
	goto l__0C8F;
l__0C2E:
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x24;
	emu_push(emu_ax);
	emu_ax = 0x130;
	emu_push(emu_ax);
	emu_ax = 0x74;
	emu_push(emu_ax);
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_ax = 0x50;
	emu_push(emu_ax);
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_ax = 0x353F;
	emu_es = emu_ax;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6624);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x6626);
	emu_push(0x0C58);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6034F: emu_GFX_Screen_Copy2(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB518; emu_last_ip = 0x0C53; emu_last_length = 0x002A; emu_last_crc = 0xA18C;
			emu_call();
			return;
	}
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__0C58:
	emu_addw(&emu_sp, 0x10);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38B0), 0x1);
	if (emu_get_memory16(emu_ds, 0x00, 0x38B0) == 0x1) goto l__0C8F;
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x24;
	emu_push(emu_ax);
	emu_ax = 0x130;
	emu_push(emu_ax);
	emu_ax = 0x98;
	emu_push(emu_ax);
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_ax = 0x50;
	emu_push(emu_ax);
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_ax = 0x353F;
	emu_es = emu_ax;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6624);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x6626);
	emu_push(0x0C8C);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6034F: emu_GFX_Screen_Copy2(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB518; emu_last_ip = 0x0C87; emu_last_length = 0x0034; emu_last_crc = 0x076C;
			emu_call();
			return;
	}
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__0C8C:
	emu_addw(&emu_sp, 0x10);
l__0C8F:
	emu_cmpw(&emu_si, 0xFFFF);
	if (emu_si != 0xFFFF) goto l__0C97;
	goto l__0D74;
l__0C97:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x81EB);
	emu_bx = 0x3C;
	emu_cwd();
	emu_idivw(&emu_ax, emu_bx);
	emu_push(emu_dx);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x81EB);
	emu_bx = 0x3C;
	emu_cwd();
	emu_idivw(&emu_ax, emu_bx);
	emu_push(emu_ax);
	emu_ax = 0x16;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0CB4); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__0CB4:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0CC1); emu_cs = 0x01F7; emu_String_sprintf();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__0CC1:
	emu_addw(&emu_sp, 0xC);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x81EB), 0x3C);
	if ((int16)emu_get_memory16(emu_ds, 0x00, 0x81EB) >= (int16)0x3C) goto l__0D03;
	emu_ax = 0x30;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0CD9); emu_cs = 0x01F7; emu_String_strchr();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__0CD9:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	goto l__0CFA;
l__0CE4:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_incw(&emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x0CF7); emu_cs = 0x01F7; emu_String_strcpy();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__0CF7:
	emu_addw(&emu_sp, 0x8);
l__0CFA:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x20);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x20) goto l__0CE4;
l__0D03:
	emu_push(emu_si);
	emu_ax = 0x22;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xF;
	emu_push(emu_ax);
	emu_ax = 0xF;
	emu_push(emu_ax);
	emu_ax = 0x48;
	emu_push(emu_ax);
	emu_ax = 0x15;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D20); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__0D20:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D28); emu_cs = 0x10E4; emu_GUI_DrawText_Wrapper();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__0D28:
	emu_addw(&emu_sp, 0x10);
	emu_ax = 0x222;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xF;
	emu_push(emu_ax);
	emu_ax = 0xF;
	emu_push(emu_ax);
	emu_ax = 0xF8;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D48); emu_cs = 0x10E4; emu_GUI_DrawText_Wrapper();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__0D48:
	emu_addw(&emu_sp, 0xE);
	emu_ax = 0x122;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xF;
	emu_push(emu_ax);
	emu_ax = 0x26;
	emu_push(emu_ax);
	emu_ax = 0xA0;
	emu_push(emu_ax);
	emu_ax = 0x17;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D67); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__0D67:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D6F); emu_cs = 0x10E4; emu_GUI_DrawText_Wrapper();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__0D6F:
	emu_addw(&emu_sp, 0xE);
	goto l__0D9C;
l__0D74:
	emu_push(emu_si);
	emu_ax = 0x122;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xF;
	emu_push(emu_ax);
	emu_ax = 0xF;
	emu_push(emu_ax);
	emu_ax = 0xA0;
	emu_push(emu_ax);
	emu_ax = 0x150;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D91); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__0D91:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D99); emu_cs = 0x10E4; emu_GUI_DrawText_Wrapper();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__0D99:
	emu_addw(&emu_sp, 0x10);
l__0D9C:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A38);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__0DAF;
	emu_cmpw(&emu_ax, 0x1);
	if (emu_ax != 0x1) {
		emu_cmpw(&emu_ax, 0x2);
		if (emu_ax == 0x2) goto l__0DC7;
	}
	goto l__0DBB;
l__0DAF:
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x95;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
	goto l__0DD3;
l__0DBB:
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0xA5;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x2;
	goto l__0DD3;
l__0DC7:
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0xB5;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x1;
	goto l__0DD3;
l__0DD3:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3C34);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x3C32);
	emu_addw(&emu_dx, 0x2FD);
	emu_get_memory16(emu_ds, 0x00, 0x81EF) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x81ED) = emu_dx;
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_dx = 0x3;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x3C32);
	emu_addw(&emu_dx, emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x81EF));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x81ED));
	emu_push(emu_cs); emu_push(0x0E09); emu_cs = 0x01F7; emu_Tools_Memcopy();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__0E09:
	emu_addw(&emu_sp, 0xA);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_addw(&emu_get_memory16(emu_ds, 0x00, 0x81ED), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0x8) == 0x0) {
		emu_push(emu_cs);
		emu_push(0x0E1E); emu_GUI_HallOfFame_Tick();
	}
l__0E1E:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x0E26); emu_cs = 0x2598; emu_GUI_Screen_SetActive();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__0E26:
	emu_pop(&emu_cx);
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
 * Decompiled function f__B518_0EB1_000E_D2F5()
 *
 * @name f__B518_0EB1_000E_D2F5
 * @implements B518:0EB1:000E:D2F5 ()
 * @implements B518:0EBF:0027:CF00
 * @implements B518:0EE6:0008:0683
 * @implements B518:0EEE:002D:1F4E
 * @implements B518:0F1B:0007:98BA
 * @implements B518:0F1E:0004:893F
 *
 * Called From: B518:0300:000D:286D
 * Called From: B518:0C27:0011:0A68
 */
void emu_GUI_HallOfFame_Internal_0EB1()
{
l__0EB1:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0EBF); emu_GUI_HallOfFame_Internal_0F22();
l__0EBF:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_ax = 0x122;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x6;
	emu_push(emu_ax);
	emu_ax = 0x31;
	emu_push(emu_ax);
	emu_ax = 0xA0;
	emu_push(emu_ax);
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x37C0));
	emu_push(emu_cs); emu_push(0x0EE6); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__0EE6:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0EEE); emu_cs = 0x10E4; emu_GUI_DrawText_Wrapper();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__0EEE:
	emu_addw(&emu_sp, 0xE);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0x8) == 0x0) goto l__0F1E;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0xC;
	emu_push(emu_ax);
	emu_ax = 0x14;
	emu_push(emu_ax);
	emu_ax = 0x31;
	emu_push(emu_ax);
	emu_ax = 0xA;
	emu_push(emu_ax);
	emu_ax = 0x31;
	emu_push(emu_ax);
	emu_ax = 0xA;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0F1B); emu_cs = 0x2C17; emu_GUI_Screen_FadeIn();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__0F1B:
	emu_addw(&emu_sp, 0x10);
l__0F1E:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B518_0F22_0007_C8B1()
 *
 * @name f__B518_0F22_0007_C8B1
 * @implements B518:0F22:0007:C8B1 ()
 * @implements B518:0F29:0011:FCEF
 * @implements B518:0F3A:000F:0B00
 * @implements B518:0F3B:000E:8F00
 * @implements B518:0F40:0009:E784
 * @implements B518:0F49:0009:49AC
 * @implements B518:0F4C:0006:42F0
 * @implements B518:0F52:0002:2597
 *
 * Called From: B518:0EBC:000E:D2F5
 * Called From: B518:1163:0019:C8A2
 */
void emu_GUI_HallOfFame_Internal_0F22()
{
l__0F22:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_xorw(&emu_dx, emu_dx);
	goto l__0F3B;
l__0F29:
	emu_bx = emu_dx;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x37C2);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if ((int16)emu_ax <= (int16)emu_get_memory16(emu_ss, emu_bp,  0x6)) goto l__0F3A;
	goto l__0F40;
l__0F3A:
	emu_incw(&emu_dx);
l__0F3B:
	emu_cmpw(&emu_dx, 0xC);
	if ((int16)emu_dx < (int16)0xC) goto l__0F29;
l__0F40:
	emu_cmpw(&emu_dx, 0xB);
	if ((int16)emu_dx >= (int16)0xB) goto l__0F49;
	emu_ax = emu_dx;
	goto l__0F4C;
l__0F49:
	emu_ax = 0xB;
l__0F4C:
	emu_dx = emu_ax;
	emu_ax = emu_dx;
	goto l__0F52;
l__0F52:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B518_14D4_0013_5ED7()
 *
 * @name f__B518_14D4_0013_5ED7
 * @implements B518:14D4:0013:5ED7 ()
 * @implements B518:14E2:0005:3982
 * @implements B518:14E7:000B:B641
 *
 * Called From: B518:02F3:0009:1C6A
 * Called From: B518:030B:000B:2A27
 * Called From: B518:0450:000A:C8F6
 * Called From: B518:04DF:000A:2421
 * Called From: B518:04F5:0009:826A
 */
void emu_GUI_EndStats_Internal_14D4()
{
l__14D4:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cwd();
	emu_get_memory16(emu_ds, 0x00, 0x76B6) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x76B4) = emu_ax;
l__14E2:
	emu_push(emu_cs);
	emu_push(0x14E7); emu_GUI_HallOfFame_Tick();
l__14E7:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76B4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B6));
	if (emu_ax != 0) goto l__14E2;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
