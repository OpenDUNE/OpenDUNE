/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function emu_GUI_Option_CreateWindow()
 *
 * @name emu_GUI_Option_CreateWindow
 * @implements B4F2:0855:0013:A7FD ()
 * @implements B4F2:0868:0015:B404
 * @implements B4F2:087D:000C:EE8E
 * @implements B4F2:0889:0012:37F8
 * @implements B4F2:089B:000F:B3B1
 * @implements B4F2:08AA:0023:995F
 * @implements B4F2:08CD:002A:5752
 * @implements B4F2:08CF:0028:5BF2
 * @implements B4F2:08F7:0008:0683
 * @implements B4F2:08FF:000F:E61A
 * @implements B4F2:090E:002B:B1B5
 * @implements B4F2:0939:0008:0683
 * @implements B4F2:0941:0008:1728
 * @implements B4F2:0944:0005:ADA0
 * @implements B4F2:0949:0037:8E4A
 * @implements B4F2:0980:0008:3E9A
 * @implements B4F2:0988:0079:A2B2
 * @implements B4F2:0A01:000B:51A5
 * @implements B4F2:0A07:0005:3DBD
 * @implements B4F2:0A0C:000F:E74D
 * @implements B4F2:0A1B:00A8:6448
 * @implements B4F2:0A23:00A0:F132
 * @implements B4F2:0A44:007F:1761
 * @implements B4F2:0AC3:0015:5E76
 * @implements B4F2:0AD8:0010:CB6F
 * @implements B4F2:0AE8:000E:5E9D
 * @implements B4F2:0AF6:000F:CEE8
 * @implements B4F2:0B05:0044:6791
 * @implements B4F2:0B49:0051:E4E8
 * @implements B4F2:0B8D:000D:1EAE
 * @implements B4F2:0B9A:0008:0683
 * @implements B4F2:0BA2:0013:29DD
 * @implements B4F2:0BA5:0010:3E8C
 * @implements B4F2:0BA6:000F:3ECB
 * @implements B4F2:0BB5:000A:6986
 * @implements B4F2:0BBF:000D:BD29
 * @implements B4F2:0BCC:0061:4869
 * @implements B4F2:0C2D:000D:E03B
 * @implements B4F2:0C3A:0010:B81A
 * @implements B4F2:0C4A:0015:5B32
 * @implements B4F2:0C5F:006B:6F08
 * @implements B4F2:0CCA:000D:243D
 * @implements B4F2:0CD7:0010:BC84
 * @implements B4F2:0CE7:0015:5DF6
 * @implements B4F2:0CFC:000F:C398
 * @implements B4F2:0D06:0005:6168
 * @implements B4F2:0D0B:000B:EB1E
 * @implements B4F2:0D16:0025:F411
 * @implements B4F2:0D3B:0008:43E5
 * @implements B4F2:0D43:0008:64F7
 * @implements B4F2:0D4B:0007:F77C
 *
 * Called From: B4F2:0186:000C:D4B9
 * Called From: B4F2:029D:000C:9527
 * Called From: B4F2:039F:000C:ECA6
 * Called From: B4F2:051F:000C:DD04
 * Called From: B4F2:0669:000C:5C32
 * Called From: B4F2:06EC:000C:EB11
 * Called From: B4F2:1121:000B:D674
 */
void emu_GUI_Option_CreateWindow()
{
l__0855:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__0868;
	/* Unresolved jump */ emu_ip = 0x0D4C; emu_last_cs = 0xB4F2; emu_last_ip = 0x0865; emu_last_length = 0x0013; emu_last_crc = 0xA7FD; emu_call();
l__0868:
	emu_get_memory16(emu_ds, 0x00, 0x2A95) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x2A93) = 0x0;
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x087D); emu_cs = 0x2598; emu_Unknown_Set_Global_6C91();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__087D:
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x0889); emu_cs = 0x07AE; emu_Unknown_07AE_0000();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0889:
	emu_pop(&emu_cx);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6D5D));
	emu_push(emu_cs); emu_push(0x089B); emu_cs = 0x10E4; emu_GUI_Widget_DrawBorder();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__089B:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_push(emu_cs);
	emu_push(0x08AA); emu_GUI_String_Get_ByIndex();
l__08AA:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_dx);
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x0902; emu_last_cs = 0xB4F2; emu_last_ip = 0x08AD; emu_last_length = 0x0023; emu_last_crc = 0x995F; emu_call(); return; }
	emu_ax = 0x122;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xEE;
	emu_push(emu_ax);
	emu_ax = emu_ds;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ax);
	if (emu_get_memory16(emu_ss, emu_bp,  0x8) != emu_ax) goto l__08CD;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x271E);
	if (emu_get_memory16(emu_ss, emu_bp,  0x6) != 0x271E) goto l__08CD;
	emu_ax = 0x2;
	goto l__08CF;
l__08CD:
	emu_xorw(&emu_ax, emu_ax);
l__08CF:
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x992B);
	emu_addw(&emu_dx, emu_ax);
	emu_addw(&emu_dx, 0x6);
	emu_push(emu_dx);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992D);
	emu_cl = 0x3;
	emu_shlw(&emu_ax, emu_cl);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x992F);
	emu_cl = 0x2;
	emu_shlw(&emu_dx, emu_cl);
	emu_addw(&emu_ax, emu_dx);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_push(emu_cs);
	emu_push(0x08F7); emu_GUI_String_Get_ByIndex();
l__08F7:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x08FF); emu_cs = 0x10E4; emu_GUI_DrawText_Wrapper();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__08FF:
	emu_addw(&emu_sp, 0xE);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x7));
	emu_push(emu_cs);
	emu_push(0x090E); emu_GUI_String_Get_ByIndex();
l__090E:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_dx);
	if (emu_ax != 0) goto l__0944;
	emu_ax = 0x22;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xE8;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992B);
	emu_addw(&emu_ax, 0x2A);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992D);
	emu_addw(&emu_ax, 0x2);
	emu_cl = 0x3;
	emu_shlw(&emu_ax, emu_cl);
	emu_push(emu_ax);
	emu_ax = 0x151;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0939); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0939:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0941); emu_cs = 0x10E4; emu_GUI_DrawText_Wrapper();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0941:
	emu_addw(&emu_sp, 0xE);
l__0944:
	emu_xorw(&emu_di, emu_di);
	goto l__0BA6;
l__0949:
	emu_bx = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x2A77);
	emu_dx = emu_get_memory16(emu_ds, emu_bx, 0x2A75);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_ax = emu_di;
	emu_dx = 0xE;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_addw(&emu_bx, emu_ax);
	emu_addw(&emu_bx, 0x7);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_bx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs);
	emu_push(0x0980); emu_GUI_String_Get_ByIndex();
l__0980:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_dx);
	if (emu_ax != 0) goto l__0988;
	goto l__0BA5;
l__0988:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory16(emu_es, emu_bx, 0x2) = 0x0;
	emu_get_memory16(emu_es, emu_bx, 0x0) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x2);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory16(emu_es, emu_bx, 0x1E) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory16(emu_es, emu_bx, 0x20) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory16(emu_es, emu_bx, 0x22) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x8);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory16(emu_es, emu_bx, 0x24) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory16(emu_es, emu_bx, 0x6) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory16(emu_es, emu_bx, 0x8) = 0x0;
	emu_ax = emu_ds;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ax);
	if (emu_get_memory16(emu_ss, emu_bp,  0x8) != emu_ax) { /* Unresolved jump */ emu_ip = 0x09EE; emu_last_cs = 0xB4F2; emu_last_ip = 0x09E5; emu_last_length = 0x0079; emu_last_crc = 0xA2B2; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x27F0);
	if (emu_get_memory16(emu_ss, emu_bp,  0x6) == 0x27F0) goto l__0A23;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0xA), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0xA) == 0x0) goto l__0A01;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	goto l__0A07;
l__0A01:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
l__0A07:
	emu_push(emu_cs);
	emu_push(0x0A0C); emu_GUI_String_Get_ByIndex();
l__0A0C:
	emu_pop(&emu_cx);
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A1B); emu_cs = 0x29DA; emu_GUI_Widget_GetShortcut();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0A1B:
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory16(emu_es, emu_bx, 0x6) = emu_ax;
l__0A23:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xC);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory16(emu_es, emu_bx, 0x8) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x6), 0x1B);
	if (emu_get_memory16(emu_es, emu_bx, 0x6) == 0x1B) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
		emu_get_memory16(emu_es, emu_bx, 0x8) = 0x13;
	}
l__0A44:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_si, 0x0);
	emu_pop(&emu_es);
	emu_get_memory16(emu_es, emu_bx, 0x38) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory8(emu_es, emu_bx, 0xA) = 0x4;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory8(emu_es, emu_bx, 0xB) = 0x4;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory8(emu_es, emu_bx, 0xC) = 0x4;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory16(emu_es, emu_bx, 0x12) = 0x34F2;
	emu_get_memory16(emu_es, emu_bx, 0x10) = 0x61;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory16(emu_es, emu_bx, 0x16) = 0x34F2;
	emu_get_memory16(emu_es, emu_bx, 0x14) = 0x61;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory16(emu_es, emu_bx, 0x1A) = 0x34F2;
	emu_get_memory16(emu_es, emu_bx, 0x18) = 0x61;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_si, 0x0);
	emu_pop(&emu_es);
	emu_get_memory16(emu_es, emu_bx, 0x1C) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory16(emu_es, emu_bx, 0x2E) = 0x0;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x2A95));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x2A93));
	emu_push(emu_cs); emu_push(0x0AC3); emu_cs = 0x348B; overlay(0x348B, 0); emu_GUI_Widget_Link();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0AC3:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ds, 0x00, 0x2A95) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x2A93) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0AD8); emu_cs = 0x348B; overlay(0x348B, 0); emu_GUI_Widget_MakeVisible();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0AD8:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0AE8); emu_cs = 0x348B; overlay(0x348B, 0); emu_GUI_Widget_MakeNormal();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0AE8:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0AF6); emu_cs = 0x34A2; overlay(0x34A2, 0); emu_GUI_Widget_Draw();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0AF6:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0xA), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0xA) != 0x0) goto l__0B05;
	goto l__0BA5;
l__0B05:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37B6), 0x1);
	if (emu_get_memory16(emu_ds, 0x00, 0x37B6) != 0x1) goto l__0B49;
	emu_ax = 0x22;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xE8;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x20);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_bx = emu_get_memory16(emu_es, emu_bx, 0x1C);
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x4064));
	emu_addw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_bx = emu_get_memory16(emu_es, emu_bx, 0x1C);
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x4062);
	emu_cl = 0x3;
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_ax, 0x28);
	goto l__0B8D;
l__0B49:
	emu_ax = 0x222;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xE8;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x20);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_bx = emu_get_memory16(emu_es, emu_bx, 0x1C);
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x4064));
	emu_addw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x1E);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_bx = emu_get_memory16(emu_es, emu_bx, 0x1C);
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_dx = emu_get_memory16(emu_ds, emu_bx, 0x4062);
	emu_cl = 0x3;
	emu_shlw(&emu_dx, emu_cl);
	emu_addw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0xFFF6);
l__0B8D:
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs);
	emu_push(0x0B9A); emu_GUI_String_Get_ByIndex();
l__0B9A:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0BA2); emu_cs = 0x10E4; emu_GUI_DrawText_Wrapper();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0BA2:
	emu_addw(&emu_sp, 0xE);
l__0BA5:
	emu_incw(&emu_di);
l__0BA6:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x6);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_di);
	if ((int16)emu_ax <= (int16)emu_di) goto l__0BB5;
	goto l__0949;
l__0BB5:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x80B2), 0x5);
	if ((int16)emu_get_memory16(emu_ds, 0x00, 0x80B2) >= (int16)0x5) goto l__0BBF;
	goto l__0D06;
l__0BBF:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x4) != 0x0) goto l__0BCC;
	goto l__0D06;
l__0BCC:
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_ax = emu_get_memory16(emu_es, 0x00, 0x52E);
	emu_dx = emu_get_memory16(emu_es, 0x00, 0x52C);
	emu_get_memory16(emu_ds, 0x00, 0x2A0F) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x2A0D) = emu_dx;
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_ax = emu_get_memory16(emu_es, 0x00, 0x532);
	emu_dx = emu_get_memory16(emu_es, 0x00, 0x530);
	emu_get_memory16(emu_ds, 0x00, 0x2A13) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x2A11) = emu_dx;
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_ax = emu_get_memory16(emu_es, 0x00, 0x532);
	emu_dx = emu_get_memory16(emu_es, 0x00, 0x530);
	emu_get_memory16(emu_ds, 0x00, 0x2A17) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x2A15) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x29FF) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x29FD) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x2A19) = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x29FD;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0C2D); emu_cs = 0x348B; overlay(0x348B, 0); emu_GUI_Widget_MakeNormal();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0C2D:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_ds);
	emu_ax = 0x29FD;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0C3A); emu_cs = 0x348B; overlay(0x348B, 0); emu_GUI_Widget_MakeInvisible();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0C3A:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0xE9;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x29FD;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0C4A); f__B4F2_13CE_0013_65D7();
l__0C4A:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_ds);
	emu_ax = 0x29FD;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x2A95));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x2A93));
	emu_push(emu_cs); emu_push(0x0C5F); emu_cs = 0x348B; overlay(0x348B, 0); emu_GUI_Widget_Link();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0C5F:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ds, 0x00, 0x2A95) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x2A93) = emu_ax;
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_ax = emu_get_memory16(emu_es, 0x00, 0x536);
	emu_dx = emu_get_memory16(emu_es, 0x00, 0x534);
	emu_get_memory16(emu_ds, 0x00, 0x2A4B) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x2A49) = emu_dx;
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_ax = emu_get_memory16(emu_es, 0x00, 0x53A);
	emu_dx = emu_get_memory16(emu_es, 0x00, 0x538);
	emu_get_memory16(emu_ds, 0x00, 0x2A4F) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x2A4D) = emu_dx;
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_ax = emu_get_memory16(emu_es, 0x00, 0x53A);
	emu_dx = emu_get_memory16(emu_es, 0x00, 0x538);
	emu_get_memory16(emu_ds, 0x00, 0x2A53) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x2A51) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x2A3B) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x2A39) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x2A55) = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x2A39;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0CCA); emu_cs = 0x348B; overlay(0x348B, 0); emu_GUI_Widget_MakeNormal();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0CCA:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_ds);
	emu_ax = 0x2A39;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0CD7); emu_cs = 0x348B; overlay(0x348B, 0); emu_GUI_Widget_MakeInvisible();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0CD7:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0xE9;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x2A39;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0CE7); f__B4F2_13CE_0013_65D7();
l__0CE7:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_ds);
	emu_ax = 0x2A39;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x2A95));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x2A93));
	emu_push(emu_cs); emu_push(0x0CFC); emu_cs = 0x348B; overlay(0x348B, 0); emu_GUI_Widget_Link();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0CFC:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ds, 0x00, 0x2A95) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x2A93) = emu_ax;
l__0D06:
	emu_push(emu_cs); emu_push(0x0D0B); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0D0B:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x0D16); emu_cs = 0x07AE; emu_Unknown_07AE_0000();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0D16:
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x9931));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992F));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_push(emu_cs); emu_push(0x0D3B); emu_cs = 0x24D0; emu_GUI_Unknown_24D0_000D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0D3B:
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0D43); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0D43:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D4B); emu_cs = 0x2598; emu_Unknown_Set_Global_6C91();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0D4B:
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
 * Decompiled function f__B4F2_0DE3_001F_AB1C()
 *
 * @name f__B4F2_0DE3_001F_AB1C
 * @implements B4F2:0DE3:001F:AB1C ()
 * @implements B4F2:0E02:0010:2CBB
 * @implements B4F2:0E12:0004:BEB2
 *
 * Called From: B4F2:0319:0006:58B0
 */
void f__B4F2_0DE3_001F_AB1C()
{
l__0DE3:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x300;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998A));
	emu_push(emu_cs); emu_push(0x0E02); emu_cs = 0x2B0E; emu_Tools_Memmove();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0E02:
	emu_addw(&emu_sp, 0xC);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x0E12); emu_cs = 0x259E; f__259E_0040_0015_5E4A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0E12:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4F2_0E16_0019_86E9()
 *
 * @name f__B4F2_0E16_0019_86E9
 * @implements B4F2:0E16:0019:86E9 ()
 * @implements B4F2:0E2F:001C:FAAE
 * @implements B4F2:0E4B:0014:537D
 * @implements B4F2:0E5F:0025:489F
 * @implements B4F2:0E73:0011:CF2A
 * @implements B4F2:0E84:0038:CF2A
 * @implements B4F2:0EBC:001D:B10D
 * @implements B4F2:0EC3:0016:F9AF
 * @implements B4F2:0ED9:0007:EF7C
 *
 * Called From: B4F2:0170:0005:3FA8
 */
void f__B4F2_0E16_0019_86E9()
{
l__0E16:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x1A);
	emu_push(emu_si);
	emu_movw(&emu_ax, emu_bp - 0x1A);
	emu_push(emu_ss);
	emu_push(emu_ax);
	emu_ax = 0x2A9B;
	emu_push(emu_ds);
	emu_push(emu_ax);
	emu_cx = 0x12;
	emu_push(emu_cs); emu_push(0x0E2F); emu_cs = 0x01F7; emu_Tools_MemcopyCX();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0E2F:
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x300;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x0E4B); emu_cs = 0x2B0E; emu_Tools_Memmove();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0E4B:
	emu_addw(&emu_sp, 0xC);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3C34);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x3C32);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_xorw(&emu_si, emu_si);
	goto l__0E73;
l__0E5F:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ah = 0x0;
	emu_sarw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory8(emu_es, emu_bx, 0x0) = emu_al;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_incw(&emu_si);
l__0E73:
	emu_cmpw(&emu_si, 0x300);
	if ((int16)emu_si < (int16)0x300) goto l__0E5F;
	emu_movw(&emu_ax, emu_bp - 0x1A);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ss;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	goto l__0EC3;
l__0E84:
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x3;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_dx = 0x3;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x3C32);
	emu_addw(&emu_dx, emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_dx = 0x3;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x998A);
	emu_addw(&emu_dx, emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998C));
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0EBC); emu_cs = 0x2B0E; emu_Tools_Memmove();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0EBC:
	emu_addw(&emu_sp, 0xC);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x2);
l__0EC3:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0xFFFF);
	if (emu_get_memory16(emu_es, emu_bx, 0x0) != 0xFFFF) goto l__0E84;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998A));
	emu_push(emu_cs); emu_push(0x0ED9); emu_cs = 0x259E; f__259E_0040_0015_5E4A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0ED9:
	emu_pop(&emu_cx);
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
 * Decompiled function f__B4F2_0EE0_000E_BC8E()
 *
 * @name f__B4F2_0EE0_000E_BC8E
 * @implements B4F2:0EE0:000E:BC8E ()
 * @implements B4F2:0EEE:0006:0569
 * @implements B4F2:0EF4:0009:C306
 * @implements B4F2:0EFD:001D:FFB4
 * @implements B4F2:0F1A:0008:33E5
 * @implements B4F2:0F22:0002:2597
 *
 * Called From: B4F2:017A:000A:3489
 * Called From: B4F2:0291:0015:800B
 * Called From: B4F2:0393:000F:A3C2
 * Called From: B4F2:0513:000D:4D30
 * Called From: B4F2:0513:0010:8F88
 * Called From: B4F2:0651:000A:3D30
 * Called From: B4F2:06E0:000A:0DAC
 * Called From: B4F2:06E0:0035:32F1
 * Called From: B4F2:1116:0019:B3DC
 */
void f__B4F2_0EE0_000E_BC8E()
{
l__0EE0:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x0EEE); emu_cs = 0x07AE; emu_Unknown_07AE_0000();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0EEE:
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x0EF4); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0EF4:
	emu_ax = 0x5;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0EFD); emu_cs = 0x252E; emu_Memory_GetBlock1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0EFD:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x9931));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992F));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_ax = 0x353F;
	emu_es = emu_ax;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x66C0);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x66C2);
	emu_push(0x0F1A);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6101C: emu_GUI_CopyToBuffer(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4F2; emu_last_ip = 0x0F15; emu_last_length = 0x001D; emu_last_crc = 0xFFB4;
			emu_call();
			return;
	}
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0F1A:
	emu_addw(&emu_sp, 0xC);
	emu_push(emu_cs); emu_push(0x0F22); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0F22:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4F2_0F24_000E_BC8E()
 *
 * @name f__B4F2_0F24_000E_BC8E
 * @implements B4F2:0F24:000E:BC8E ()
 * @implements B4F2:0F32:0006:0569
 * @implements B4F2:0F38:0009:C306
 * @implements B4F2:0F41:001D:FF8F
 * @implements B4F2:0F5E:0008:33E5
 * @implements B4F2:0F66:0002:2597
 *
 * Called From: B4F2:01C9:0013:C71B
 * Called From: B4F2:049E:000A:CE31
 * Called From: B4F2:0603:000A:BD94
 * Called From: B4F2:06A1:000A:3D33
 * Called From: B4F2:0846:000A:8D25
 * Called From: B4F2:1172:000D:BD26
 */
void f__B4F2_0F24_000E_BC8E()
{
l__0F24:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x0F32); emu_cs = 0x07AE; emu_Unknown_07AE_0000();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0F32:
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x0F38); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0F38:
	emu_ax = 0x5;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0F41); emu_cs = 0x252E; emu_Memory_GetBlock1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0F41:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x9931));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992F));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_ax = 0x353F;
	emu_es = emu_ax;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x662C);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x662E);
	emu_push(0x0F5E);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A604F8: emu_GUI_CopyFromBuffer(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4F2; emu_last_ip = 0x0F59; emu_last_length = 0x001D; emu_last_crc = 0xFF8F;
			emu_call();
			return;
	}
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0F5E:
	emu_addw(&emu_sp, 0xC);
	emu_push(emu_cs); emu_push(0x0F66); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__0F66:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_GUI_YesNo()
 *
 * @name emu_GUI_YesNo
 * @implements B4F2:1100:0019:B3DC ()
 * @implements B4F2:1119:000B:D674
 * @implements B4F2:1124:0007:AFF1
 * @implements B4F2:112B:000D:7056
 * @implements B4F2:1138:001E:D0F3
 * @implements B4F2:1156:0005:D6CA
 * @implements B4F2:115B:0004:EFF9
 * @implements B4F2:1161:0007:EB00
 * @implements B4F2:1163:0005:1765
 * @implements B4F2:1168:000D:BD26
 * @implements B4F2:1175:0006:0E3B
 * @implements B4F2:117B:0006:F7CE
 *
 * Called From: 34F2:002F:0005:0000
 * Called From: B4F2:021F:0009:48EA
 * Called From: B4F2:0237:0009:49EC
 * Called From: B4F2:0258:0009:9BF4
 */
void emu_GUI_YesNo()
{
l__1100:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_si, emu_si);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ds, 0x00, 0x2720) = emu_ax;
	emu_push(emu_ds);
	emu_ax = 0x271E;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x1119); f__B4F2_0EE0_000E_BC8E();
l__1119:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ds);
	emu_ax = 0x271E;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x1124); emu_GUI_Option_CreateWindow();
l__1124:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_di = 0x1;
	goto l__1168;
l__112B:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x2A95));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x2A93));
	emu_push(emu_cs); emu_push(0x1138); emu_cs = 0x34A2; overlay(0x34A2, 0); emu_GUI_Widget_HandleEvents();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__1138:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x8000);
	if ((emu_get_memory16(emu_ss, emu_bp, -0x2) & 0x8000) == 0) goto l__1163;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_andw(&emu_ax, 0x7FFF);
	emu_cmpw(&emu_ax, 0x1E);
	if (emu_ax == 0x1E) goto l__1156;
	emu_cmpw(&emu_ax, 0x1F);
	if (emu_ax == 0x1F) goto l__115B;
	/* Unresolved jump */ emu_ip = 0x115F; emu_last_cs = 0xB4F2; emu_last_ip = 0x1154; emu_last_length = 0x001E; emu_last_crc = 0xD0F3; emu_call();
l__1156:
	emu_si = 0x1;
	goto l__1161;
l__115B:
	emu_xorw(&emu_si, emu_si);
	goto l__1161;
l__1161:
	emu_xorw(&emu_di, emu_di);
l__1163:
	emu_push(emu_cs); emu_push(0x1168); emu_cs = 0x0642; emu_GUI_PaletteAnimate();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__1168:
	emu_orw(&emu_di, emu_di);
	if (emu_di != 0) goto l__112B;
	emu_push(emu_ds);
	emu_ax = 0x271E;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x1175); f__B4F2_0F24_000E_BC8E();
l__1175:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = emu_si;
	goto l__117B;
l__117B:
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
 * Decompiled function f__B4F2_11CF_0013_5635()
 *
 * @name f__B4F2_11CF_0013_5635
 * @implements B4F2:11CF:0013:5635 ()
 * @implements B4F2:11E2:0018:1D91
 * @implements B4F2:11FA:000E:5317
 * @implements B4F2:1208:0011:0023
 * @implements B4F2:1214:0005:D7FA
 * @implements B4F2:121D:0004:893F
 *
 * Called From: B4F2:0131:000F:54A6
 */
void f__B4F2_11CF_0013_5635()
{
l__11CF:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x8);
	emu_push(emu_ax);
	emu_al = 0x0;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x11E2); emu_cs = 0x01F7; emu_Drive_Get_Free_Space();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__11E2:
	emu_addw(&emu_sp, 0x6);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xFFFF);
	if (emu_get_memory16(emu_ss, emu_bp, -0x2) == 0xFFFF) { /* Unresolved jump */ emu_ip = 0x1219; emu_last_cs = 0xB4F2; emu_last_ip = 0x11E9; emu_last_length = 0x0018; emu_last_crc = 0x1D91; emu_call(); return; }
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_xorw(&emu_cx, emu_cx);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_cs); emu_push(0x11FA); emu_cs = 0x01F7; emu_Tools_MulCSIP_csip();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__11FA:
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_push(emu_dx);
	emu_xorw(&emu_dx, emu_dx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_push(emu_cs); emu_push(0x1208); emu_cs = 0x01F7; emu_Tools_MulCSIP_csip();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__1208:
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if ((int16)emu_dx < (int16)emu_get_memory16(emu_ss, emu_bp,  0x8)) { /* Unresolved jump */ emu_ip = 0x1219; emu_last_cs = 0xB4F2; emu_last_ip = 0x120B; emu_last_length = 0x0011; emu_last_crc = 0x0023; emu_call(); return; }
	if ((int16)emu_dx <= (int16)emu_get_memory16(emu_ss, emu_bp,  0x8)) {
		emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
		if (emu_ax <= emu_get_memory16(emu_ss, emu_bp,  0x6)) { /* Unresolved jump */ emu_ip = 0x1219; emu_last_cs = 0xB4F2; emu_last_ip = 0x1212; emu_last_length = 0x0011; emu_last_crc = 0x0023; emu_call(); return; }
	}
l__1214:
	emu_ax = 0x1;
	goto l__121D;
l__121D:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_GUI_String_Get_ByIndex()
 *
 * @name emu_GUI_String_Get_ByIndex
 * @implements B4F2:1303:0017:56DB ()
 * @implements B4F2:131A:0007:E192
 * @implements B4F2:1321:002F:0347
 * @implements B4F2:1348:0008:E6C9
 * @implements B4F2:134E:0002:EEBA
 * @implements B4F2:1350:000C:3803
 * @implements B4F2:135C:0007:E7C3
 * @implements B4F2:135F:0004:4EB2
 * @implements B4F2:1363:000C:3983
 * @implements B4F2:136F:0005:107C
 * @implements B4F2:1372:0002:B5BA
 * @implements B4F2:1374:000C:B6A3
 * @implements B4F2:1380:000C:3A83
 * @implements B4F2:138C:0005:02FC
 * @implements B4F2:138F:0002:A73A
 * @implements B4F2:1391:000C:3A03
 * @implements B4F2:139D:0005:3B7C
 * @implements B4F2:13A0:0002:9EBA
 * @implements B4F2:13A2:0002:C03A
 * @implements B4F2:13A4:0006:6B66
 * @implements B4F2:13AA:0003:9B9A
 * @implements B4F2:13AD:0005:8BCF
 *
 * Called From: B4F2:08A7:000F:B3B1
 * Called From: B4F2:08F4:002A:5752
 * Called From: B4F2:08F4:0028:5BF2
 * Called From: B4F2:090B:000F:E61A
 * Called From: B4F2:097D:0037:8E4A
 * Called From: B4F2:0A09:000B:51A5
 * Called From: B4F2:0A09:0005:3DBD
 * Called From: B4F2:0B97:0051:E4E8
 * Called From: B4F2:0B97:000D:1EAE
 * Called From: B4F2:1094:0022:D216
 * Called From: B4F2:1094:000C:2AAD
 * Called From: B4F2:125D:001A:72DC
 */
void emu_GUI_String_Get_ByIndex()
{
l__1303:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_bx = emu_si;
	emu_subw(&emu_bx, 0xFFF2);
	emu_cmpw(&emu_bx, 0xD);
	if (emu_bx <= 0xD) goto l__131A;
	goto l__13A2;
l__131A:
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x13B2);
	switch (emu_ip) {
		case 0x1321: goto l__1321;
		case 0x1350: goto l__1350;
		case 0x1363: goto l__1363;
		case 0x1374: goto l__1374;
		case 0x1380: goto l__1380;
		case 0x1391: goto l__1391;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4F2; emu_last_ip = 0x131C; emu_last_length = 0x0007; emu_last_crc = 0xE192;
			emu_call();
			return;
	}
l__1321:
	emu_ax = emu_si;
	emu_negw(&emu_ax, emu_ax);
	emu_dx = 0x33;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x8081);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ds;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) {
		emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
		emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x0;
	}
l__1348:
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
l__134E:
	goto l__13AD;
l__1350:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x41C2), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x41C2) == 0x0) goto l__135C;
	emu_ax = 0x69;
	goto l__135F;
l__135C:
	emu_ax = 0x6A;
l__135F:
	emu_si = emu_ax;
	goto l__13A4;
l__1363:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x41C4), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x41C4) == 0x0) goto l__136F;
	emu_ax = 0x69;
	goto l__1372;
l__136F:
	emu_ax = 0x6A;
l__1372:
	goto l__135F;
l__1374:
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x3900);
	emu_shlw(&emu_bx, 0x1);
	emu_si = emu_get_memory16(emu_ds, emu_bx, 0x2AAD);
	goto l__13A4;
l__1380:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x41C8), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x41C8) == 0x0) goto l__138C;
	emu_ax = 0x69;
	goto l__138F;
l__138C:
	emu_ax = 0x6A;
l__138F:
	goto l__135F;
l__1391:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x41CA), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x41CA) == 0x0) goto l__139D;
	emu_ax = 0x69;
	goto l__13A0;
l__139D:
	emu_ax = 0x6A;
l__13A0:
	goto l__135F;
l__13A2:
	goto l__13A4;
l__13A4:
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x13AA); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__13AA:
	emu_pop(&emu_cx);
	goto l__134E;
l__13AD:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4F2_13CE_0013_65D7()
 *
 * @name f__B4F2_13CE_0013_65D7
 * @implements B4F2:13CE:0013:65D7 ()
 * @implements B4F2:13E1:0060:F8EA
 * @implements B4F2:1441:0020:1786
 * @implements B4F2:1444:001D:9F24
 * @implements B4F2:1461:000F:9CB8
 * @implements B4F2:1470:0006:F7CE
 *
 * Called From: B4F2:0C47:0010:B81A
 * Called From: B4F2:0CE4:0010:BC84
 * Called From: B4F2:0D96:0010:3CB0
 * Called From: B4F2:0DDB:0010:B907
 */
void f__B4F2_13CE_0013_65D7()
{
l__13CE:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__13E1;
	goto l__1470;
l__13E1:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_si = emu_get_memory16(emu_es, emu_bx, 0x1E);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_di = emu_get_memory16(emu_es, emu_bx, 0x20);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x22);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x24);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_bx = emu_get_memory16(emu_es, emu_bx, 0x1C);
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x4062);
	emu_cl = 0x3;
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_si, emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_bx = emu_get_memory16(emu_es, emu_bx, 0x1C);
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_di, emu_get_memory16(emu_ds, emu_bx, 0x4064));
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6C91), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x6C91) != 0x0) goto l__1444;
	emu_ax = emu_di;
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_ax);
	emu_ax = emu_si;
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1441); emu_cs = 0x2B6C; f__2B6C_0197_00CE_4D32();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__1441:
	emu_addw(&emu_sp, 0x8);
l__1444:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_ax = emu_di;
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_ax = emu_si;
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_ax = 0x353F;
	emu_es = emu_ax;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6668);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x666A);
	emu_push(0x1461);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60D31: emu_GUI_DrawFilledRectangle(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4F2; emu_last_ip = 0x145C; emu_last_length = 0x001D; emu_last_crc = 0x9F24;
			emu_call();
			return;
	}
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
l__1461:
	emu_addw(&emu_sp, 0xA);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6C91), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x6C91) == 0x0) {
		emu_push(emu_cs); emu_push(0x1470); emu_cs = 0x2B6C; f__2B6C_0292_0028_3AD7();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
	}
l__1470:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
