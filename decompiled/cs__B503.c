/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

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
