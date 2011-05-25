/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B4E0_0847_0019_A380()
 *
 * @name f__B4E0_0847_0019_A380
 * @implements B4E0:0847:0019:A380 ()
 * @implements B4E0:0860:000F:95BC
 * @implements B4E0:086F:000D:B232
 * @implements B4E0:087C:000A:3AF9
 * @implements B4E0:0886:0027:44E5
 * @implements B4E0:08AD:0008:0683
 * @implements B4E0:08B5:001E:B55D
 * @implements B4E0:08D3:0014:3673
 * @implements B4E0:08E7:001B:AEC2
 * @implements B4E0:0902:005F:B97B
 * @implements B4E0:0961:001F:94F8
 * @implements B4E0:0980:0025:643A
 * @implements B4E0:0985:0020:9A33
 * @implements B4E0:0997:000E:6934
 * @implements B4E0:09A5:000E:4E9F
 * @implements B4E0:09B3:001D:8E21
 * @implements B4E0:09D0:0011:A6F0
 * @implements B4E0:09D9:0008:BFCC
 * @implements B4E0:09E1:001D:AE52
 * @implements B4E0:09FE:000A:A85B
 * @implements B4E0:0A08:0014:3661
 * @implements B4E0:0A1C:000A:F8FD
 * @implements B4E0:0A26:0013:D5DC
 * @implements B4E0:0A39:000A:F8FD
 * @implements B4E0:0A43:0007:05DB
 * @implements B4E0:0A4A:0024:F6D9
 * @implements B4E0:0A6E:0008:43E5
 * @implements B4E0:0A76:0008:3199
 * @implements B4E0:0A7E:0003:CB1A
 * @implements B4E0:0A81:0005:8BCF
 *
 * Called From: B4E0:00CC:000A:AD03
 * Called From: B4E0:03F7:0009:FACE
 * Called From: B4E0:083D:0009:78DC
 * Called From: B4E0:0AA5:0008:1842
 */
void f__B4E0_0847_0019_A380()
{
l__0847:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0x6) != 0x0) goto l__0860;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x803E);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x25D4));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x25D4)) goto l__0860;
	goto l__0A81;
l__0860:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x803E);
	emu_get_memory16(emu_ds, 0x00, 0x25D4) = emu_ax;
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x086F); emu_cs = 0x2598; emu_GUI_Screen_SetActive();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__086F:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x087C); emu_cs = 0x07AE; emu_Unknown_07AE_00E4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__087C:
	emu_pop(&emu_cx);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0886); emu_cs = 0x34DA; overlay(0x34DA, 0); emu_GUI_DrawSprite_8002();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0886:
	emu_pop(&emu_cx);
	emu_ax = 0x12;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xC;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992B);
	emu_addw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992D);
	emu_cl = 0x3;
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_ax, 0x10);
	emu_push(emu_ax);
	emu_ax = 0x30;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x08AD); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__08AD:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x08B5); emu_cs = 0x10E4; emu_GUI_DrawText_Wrapper();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__08B5:
	emu_addw(&emu_sp, 0xE);
	emu_ax = 0x11;
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
	emu_push(emu_cs); emu_push(0x08D3); emu_cs = 0x10E4; emu_GUI_DrawText_Wrapper();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__08D3:
	emu_addw(&emu_sp, 0xE);
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x802C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x802A));
	emu_push(emu_cs); emu_push(0x08E7); emu_cs = 0x348B; overlay(0x348B, 0); emu_GUI_Widget_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__08E7:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x804F);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x804D);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_xorw(&emu_si, emu_si);
	goto l__09D9;
l__0902:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_addw(&emu_dx, 0x7);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x1A) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x18) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x16) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x14) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x12) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x10) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x6), 0x30);
	if (emu_get_memory8(emu_es, emu_bx, 0x6) != 0x30) goto l__0961;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x1E) = 0x10;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = 0xB;
	emu_get_memory8(emu_es, emu_bx, 0x28) = emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0x2A) = emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0x26) = emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x38) = 0x30;
	goto l__0997;
l__0961:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x1E) = 0x18;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x38) = 0x31;
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00, 0x803C));
	if (emu_si != emu_get_memory16(emu_ds, 0x00, 0x803C)) goto l__0980;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = 0x8;
	goto l__0985;
l__0980:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = 0xF;
l__0985:
	emu_get_memory8(emu_es, emu_bx, 0x28) = emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0x2A) = emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0x26) = emu_al;
l__0997:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x09A5); emu_cs = 0x348B; overlay(0x348B, 0); emu_GUI_Widget_MakeNormal();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__09A5:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x09B3); emu_cs = 0x34A2; overlay(0x34A2, 0); emu_GUI_Widget_Draw();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__09B3:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x2);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs);
	emu_push(0x09D0); emu_String_NextString();
l__09D0:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_incw(&emu_si);
l__09D9:
	emu_cmpw(&emu_si, 0xB);
	if (emu_si >= 0xB) goto l__09E1;
	goto l__0902;
l__09E1:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x803E));
	emu_ax = 0xB;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x803A));
	emu_ax = 0xF;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x802C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x802A));
	emu_push(emu_cs); emu_push(0x09FE); emu_cs = 0x348B; overlay(0x348B, 0); emu_GUI_Widget_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__09FE:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A08); emu_cs = 0x3520; overlay(0x3520, 0); f__B520_0000_0019_6B99();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0A08:
	emu_addw(&emu_sp, 0xA);
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x802C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x802A));
	emu_push(emu_cs); emu_push(0x0A1C); emu_cs = 0x348B; overlay(0x348B, 0); emu_GUI_Widget_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0A1C:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A26); emu_cs = 0x34A2; overlay(0x34A2, 0); emu_GUI_Widget_Draw();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0A26:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0x11;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x802C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x802A));
	emu_push(emu_cs); emu_push(0x0A39); emu_cs = 0x348B; overlay(0x348B, 0); emu_GUI_Widget_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0A39:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A43); emu_cs = 0x34A2; overlay(0x34A2, 0); emu_GUI_Widget_Draw();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0A43:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x0A4A); emu_cs = 0x2B6C; emu_GUI_Mouse_Hide_Safe();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0A4A:
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
	emu_push(emu_cs); emu_push(0x0A6E); emu_cs = 0x24D0; emu_GUI_Screen_Copy();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0A6E:
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0A76); emu_cs = 0x2B6C; emu_GUI_Mouse_Show_Safe();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0A76:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x0A7E); emu_cs = 0x2598; emu_GUI_Screen_SetActive();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0A7E:
	emu_pop(&emu_cx);
	goto l__0A81;
l__0A81:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
