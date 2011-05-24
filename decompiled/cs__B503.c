/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B503_0CB3_001A_FEEE()
 *
 * @name f__B503_0CB3_001A_FEEE
 * @implements B503:0CB3:001A:FEEE ()
 * @implements B503:0CCD:0008:D6BB
 * @implements B503:0CD5:002E:9EAC
 * @implements B503:0D03:002D:828A
 * @implements B503:0D30:000A:9015
 * @implements B503:0D3A:0017:BC75
 * @implements B503:0D43:000E:7F53
 * @implements B503:0D51:0024:968B
 * @implements B503:0D75:0029:3F1C
 * @implements B503:0D9E:0011:3CD7
 * @implements B503:0DAF:000F:3925
 * @implements B503:0DB1:000D:8A41
 * @implements B503:0DBE:0005:856E
 * @implements B503:0DC1:0002:C1BA
 * @implements B503:0DC3:0021:7B5F
 * @implements B503:0DC6:001E:D498
 * @implements B503:0DD8:000C:5739
 * @implements B503:0DE4:0009:CB2D
 * @implements B503:0DE5:0008:CB0E
 * @implements B503:0DED:000A:E38E
 * @implements B503:0DF7:0008:AE7C
 *
 * Called From: B503:04CA:0013:3B9E
 */
void f__B503_0CB3_001A_FEEE()
{
l__0CB3:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x7E);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ds);
	emu_ax = 0x2B41;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x14);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0CCD); emu_cs = 0x01F7; emu_String_sprintf();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0CCD:
	emu_addw(&emu_sp, 0xA);
	emu_xorw(&emu_si, emu_si);
	goto l__0DE5;
l__0CD5:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A38);
	emu_addw(&emu_ax, emu_si);
	emu_bx = 0x6;
	emu_cwd();
	emu_idivw(&emu_ax, emu_bx);
	emu_get_memory16(emu_ss, emu_bp, -0x1A) = emu_dx;
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x1A);
	emu_dx = 0x1E;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x37FA));
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x37F8));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xA);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D03); emu_cs = 0x01F7; emu_String_strncpy();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0D03:
	emu_addw(&emu_sp, 0xA);
	emu_get_memory8(emu_ss, emu_bp, -0x7) = 0x0;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x81DC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x81DA));
	emu_ax = 0x63;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x7E);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xA);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x14);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D30); emu_cs = 0x34FC; overlay(0x34FC, 0); emu_Ini_GetString();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0D30:
	emu_addw(&emu_sp, 0x16);
	emu_orw(&emu_ax, emu_dx);
	if (emu_ax != 0) goto l__0D3A;
	goto l__0DE4;
l__0D3A:
	emu_movw(&emu_ax, emu_bp - 0x7F);
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_ss;
	emu_get_memory16(emu_ss, emu_bp, -0x18) = emu_ax;
l__0D43:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_cs); emu_push(0x0D51); emu_cs = 0x01F7; emu_String_ToInteger();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0D51:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_orw(&emu_di, emu_di);
	if (emu_di == 0) goto l__0DC1;
	emu_push(emu_di);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x37B6);
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_ax, 0x2AF8);
	emu_push(emu_ds);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x2B62;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xA);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D75); emu_cs = 0x01F7; emu_String_sprintf();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0D75:
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x81DC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x81DA));
	emu_ax = 0x50;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xA);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x14);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D9E); emu_cs = 0x34FC; overlay(0x34FC, 0); emu_Ini_GetString();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0D9E:
	emu_addw(&emu_sp, 0x16);
	emu_orw(&emu_ax, emu_dx);
	if (emu_ax == 0) goto l__0DB1;
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0DAF); f__B503_0F0C_0010_028B();
l__0DAF:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__0DB1:
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_push(emu_cs);
	emu_push(0x0DBE); f__B503_0DFF_0012_112D();
l__0DBE:
	emu_addw(&emu_sp, 0x6);
l__0DC1:
	goto l__0DC6;
l__0DC3:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x18));
l__0DC6:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x18));
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x2C);
		if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x2C) goto l__0DC3;
	}
l__0DD8:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x2C);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x2C) goto l__0DE4;
	goto l__0D43;
l__0DE4:
	emu_incw(&emu_si);
l__0DE5:
	emu_cmpw(&emu_si, 0x6);
	if ((int16)emu_si >= (int16)0x6) goto l__0DED;
	goto l__0CD5;
l__0DED:
	emu_push(emu_ds);
	emu_ax = 0x2B1D;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0DF7); f__B503_0F0C_0010_028B();
l__0DF7:
	emu_pop(&emu_cx);
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
 * Decompiled function f__B503_0DFF_0012_112D()
 *
 * @name f__B503_0DFF_0012_112D
 * @implements B503:0DFF:0012:112D ()
 * @implements B503:0E11:0011:B034
 * @implements B503:0E22:0029:A120
 * @implements B503:0E4B:001C:7696
 * @implements B503:0E67:0011:F8C9
 * @implements B503:0E78:0039:5737
 * @implements B503:0EB1:0011:8F4C
 * @implements B503:0EC2:0008:3318
 * @implements B503:0ECA:0016:7A82
 * @implements B503:0ECD:0013:9A88
 * @implements B503:0EE0:000E:69BD
 * @implements B503:0EEE:0016:1B71
 * @implements B503:0F04:0008:4947
 * @implements B503:0F07:0005:8BCF
 *
 * Called From: B503:0BD4:0018:8CAA
 * Called From: B503:0DBB:000F:3925
 * Called From: B503:0DBB:000D:8A41
 */
void f__B503_0DFF_0012_112D()
{
l__0DFF:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xC);
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0E11); emu_cs = 0x34B8; overlay(0x34B8, 0); emu_Unknown_B4B8_110D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0E11:
	emu_pop(&emu_cx);
	emu_push(emu_si);
	emu_push(emu_ds);
	emu_ax = 0x2B46;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x4);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E22); emu_cs = 0x01F7; emu_String_sprintf();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0E22:
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x81DC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x81DA));
	emu_ax = 0x50;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x4);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x2B5B;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E4B); emu_cs = 0x34FC; overlay(0x34FC, 0); emu_Ini_GetString();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0E4B:
	emu_addw(&emu_sp, 0x16);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x8);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x6);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x2B55;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E67); emu_cs = 0x01F7; emu_String_sscanf();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0E67:
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x81E4));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x81E2));
	emu_push(emu_cs); emu_push(0x0E78); emu_cs = 0x2903; emu_Sprites_GetCSIP();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0E78:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C44));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C42));
	emu_ax = 0x100;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_addw(&emu_ax, 0x18);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_addw(&emu_ax, 0x8);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0EB1); emu_cs = 0x2903; emu_GUI_DrawSprite();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0EB1:
	emu_addw(&emu_sp, 0x14);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0xA) == 0x0) goto l__0F07;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0EC2); f__B503_13C2_0008_C4BB();
l__0EC2:
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__0ECA;
	emu_xorw(&emu_ax, emu_ax);
	goto l__0ECD;
l__0ECA:
	emu_ax = 0x1;
l__0ECD:
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x0EE0); emu_cs = 0x260F; emu_Sprite_GetHeight();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0EE0:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x0EEE); emu_cs = 0x260F; emu_Sprite_GetWidth();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0EEE:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_addw(&emu_ax, 0x18);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_addw(&emu_ax, 0x8);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0F04); emu_cs = 0x3488; overlay(0x3488, 0); f__B488_0000_0027_45A9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0F04:
	emu_addw(&emu_sp, 0x10);
l__0F07:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B503_0F0C_0010_028B()
 *
 * @name f__B503_0F0C_0010_028B
 * @implements B503:0F0C:0010:028B ()
 * @implements B503:0F1C:0028:4A19
 * @implements B503:0F44:0015:E236
 * @implements B503:0F59:001D:21BD
 * @implements B503:0F76:0021:0C50
 * @implements B503:0F97:0005:85EE
 * @implements B503:0F9C:0020:EDC6
 * @implements B503:0FB7:0005:7741
 * @implements B503:0FBC:0021:44B2
 * @implements B503:0FDD:0011:7DB2
 * @implements B503:0FEE:000E:EEE2
 * @implements B503:0FFC:0027:CFE0
 * @implements B503:1000:0023:2C5B
 * @implements B503:1001:0022:259B
 * @implements B503:1023:0006:EFCE
 *
 * Called From: B503:02E7:0008:662D
 * Called From: B503:0385:0008:E584
 * Called From: B503:03EB:0008:65A2
 * Called From: B503:04EA:0008:2522
 * Called From: B503:084E:000C:45BE
 * Called From: B503:0DAC:0011:3CD7
 * Called From: B503:0DF4:000A:E38E
 */
void f__B503_0F0C_0010_028B()
{
l__0F0C:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0F1C); emu_cs = 0x2598; emu_GUI_Screen_SetActive();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0F1C:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xE;
	emu_push(emu_ax);
	emu_ax = 0x18;
	emu_push(emu_ax);
	emu_ax = 0xBA;
	emu_push(emu_ax);
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_ax = 0xA5;
	emu_push(emu_ax);
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0F44); emu_cs = 0x24D0; emu_GUI_Screen_Copy();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0F44:
	emu_addw(&emu_sp, 0x10);
	emu_ax = 0xBA;
	emu_push(emu_ax);
	emu_ax = 0x40;
	emu_push(emu_ax);
	emu_ax = 0x353F;
	emu_es = emu_ax;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x666C);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x666E);
	emu_push(0x0F59);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60E34: f__22A6_0E34_002B_E39A(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB503; emu_last_ip = 0x0F54; emu_last_length = 0x0015; emu_last_crc = 0xE236;
			emu_call();
			return;
	}
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0F59:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_ax = 0xB9;
	emu_push(emu_ax);
	emu_ax = 0xFF;
	emu_push(emu_ax);
	emu_ax = 0xAC;
	emu_push(emu_ax);
	emu_ax = 0x40;
	emu_push(emu_ax);
	emu_ax = 0x353F;
	emu_es = emu_ax;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6668);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x666A);
	emu_push(0x0F76);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60D31: emu_GUI_DrawFilledRectangle(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB503; emu_last_ip = 0x0F71; emu_last_length = 0x001D; emu_last_crc = 0x21BD;
			emu_call();
			return;
	}
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0F76:
	emu_addw(&emu_sp, 0xA);
	emu_ax = 0x12;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xC;
	emu_push(emu_ax);
	emu_ax = 0xAF;
	emu_push(emu_ax);
	emu_ax = 0x40;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0F97); emu_cs = 0x10E4; emu_GUI_DrawText_Wrapper();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0F97:
	emu_addw(&emu_sp, 0xE);
	goto l__0F9C;
l__0F9C:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76AE);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76AC);
	emu_addw(&emu_dx, 0x5A);
	emu_adcw(&emu_ax, 0x0);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x2B0E));
	if (emu_ax < emu_get_memory16(emu_ds, 0x00, 0x2B0E)) goto l__0F9C;
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x2B0E)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x2B0C));
		if (emu_dx < emu_get_memory16(emu_ds, 0x00, 0x2B0C)) goto l__0F9C;
	}
l__0FB7:
	emu_si = 0xB9;
	goto l__1001;
l__0FBC:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0xE;
	emu_push(emu_ax);
	emu_ax = 0x18;
	emu_push(emu_ax);
	emu_ax = 0xA5;
	emu_push(emu_ax);
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0FDD); emu_cs = 0x24D0; emu_GUI_Screen_Copy();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__0FDD:
	emu_addw(&emu_sp, 0x10);
	emu_get_memory16(emu_ds, 0x00, 0x76B6) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x76B4) = 0x3;
	goto l__0FEE;
l__0FEE:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76B4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B6));
	if (emu_ax == 0) goto l__1000;
	emu_push(emu_cs);
	emu_push(0x0FFC); f__B503_13C2_0008_C4BB();
l__0FFC:
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__0FEE;
l__1000:
	emu_decw(&emu_si);
l__1001:
	emu_cmpw(&emu_si, 0xAC);
	if ((int16)emu_si > (int16)0xAC) goto l__0FBC;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76AE);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76AC);
	emu_addw(&emu_dx, 0x5A);
	emu_adcw(&emu_ax, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x2B0E) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x2B0C) = emu_dx;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x1023); emu_cs = 0x2598; emu_GUI_Screen_SetActive();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__1023:
	emu_pop(&emu_cx);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B503_13C2_0008_C4BB()
 *
 * @name f__B503_13C2_0008_C4BB
 * @implements B503:13C2:0008:C4BB ()
 * @implements B503:13CA:0009:9868
 * @implements B503:13D3:0015:3017
 * @implements B503:13E8:0005:9519
 * @implements B503:13ED:0002:2597
 *
 * Called From: B503:0334:000E:A771
 * Called From: B503:038F:000A:1561
 * Called From: B503:03D6:000E:28E9
 * Called From: B503:0448:0006:5A1C
 * Called From: B503:0EBF:0011:8F4C
 * Called From: B503:0FF9:000E:EEE2
 */
void f__B503_13C2_0008_C4BB()
{
l__13C2:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_cs); emu_push(0x13CA); emu_cs = 0x29E8; emu_Input_Keyboard_NextKey();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__13CA:
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__13E8;
	emu_push(emu_cs); emu_push(0x13D3); emu_cs = 0x29E8; f__29E8_07FA_0020_177A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3503) { overlay(0x3503, 1); }
l__13D3:
	emu_cmpw(&emu_ax, 0x1B);
	if (emu_ax == 0x1B) {
		emu_ax = emu_get_memory16(emu_ds, 0x00, 0x81B4);
		emu_negw(&emu_ax, emu_ax);
		emu_sbbw(&emu_ax, emu_ax);
		emu_incw(&emu_ax);
		emu_get_memory16(emu_ds, 0x00, 0x81B4) = emu_ax;
		emu_push(emu_cs); emu_push(0x13E8); emu_cs = 0x29E8; emu_Input_History_Clear();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x3503) { overlay(0x3503, 1); }
	}
l__13E8:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x81B4);
	goto l__13ED;
l__13ED:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
