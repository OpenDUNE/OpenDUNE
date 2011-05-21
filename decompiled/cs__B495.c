/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B495_089A_0011_B26C()
 *
 * @name f__B495_089A_0011_B26C
 * @implements B495:089A:0011:B26C ()
 * @implements B495:08AB:0010:5134
 * @implements B495:08BB:0031:B115
 * @implements B495:08EC:0026:18DF
 * @implements B495:0912:000E:36BE
 * @implements B495:0920:000C:42EE
 * @implements B495:092C:002E:7A31
 * @implements B495:095A:0028:09CD
 * @implements B495:0982:0030:C02A
 * @implements B495:09B2:0014:F25C
 * @implements B495:09C6:002B:80B3
 * @implements B495:09F1:001E:2809
 * @implements B495:09F5:001A:CAEA
 * @implements B495:09FA:0015:88CA
 * @implements B495:09FE:0011:7710
 * @implements B495:0A0F:0021:EEAE
 * @implements B495:0A30:0026:5884
 * @implements B495:0A56:0008:0683
 * @implements B495:0A5E:0006:7722
 * @implements B495:0A64:001C:115A
 * @implements B495:0A80:0008:0683
 * @implements B495:0A88:002A:B2A6
 * @implements B495:0AB2:0008:0683
 * @implements B495:0ABA:0005:95AE
 * @implements B495:0ABF:001C:E66E
 * @implements B495:0ADB:0008:0683
 * @implements B495:0AE3:0006:3722
 * @implements B495:0AE6:0003:DD00
 * @implements B495:0AE9:002C:6F3D
 * @implements B495:0B15:0028:B5D4
 * @implements B495:0B3D:001F:97BC
 * @implements B495:0B5C:0008:0683
 * @implements B495:0B64:0008:C3BC
 * @implements B495:0B6C:0005:6168
 * @implements B495:0B71:0024:BED1
 * @implements B495:0B95:0008:43E5
 * @implements B495:0B9D:0008:1199
 * @implements B495:0BA5:000C:B6AC
 * @implements B495:0BB1:0008:AE7C
 *
 * Called From: B495:0184:0007:C661
 * Called From: B495:01AE:0013:FADA
 * Called From: B495:0241:0007:86F0
 * Called From: B495:026B:0013:BAEB
 * Called From: B495:03D0:0012:9714
 * Called From: B495:084B:000C:6A71
 * Called From: B495:157C:0005:464E
 */
void f__B495_089A_0011_B26C()
{
l__089A:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x18);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FBC));
	emu_push(emu_cs);
	emu_push(0x08AB); f__B495_1230_001B_A160();
l__08AB:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x08BB); emu_cs = 0x2598; emu_Unknown_Set_Global_6C91();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__08BB:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FA8));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FA6));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FB0));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FAE));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x7));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x8));
	emu_push(emu_cs); emu_push(0x08EC); emu_cs = 0x352A; overlay(0x352A, 0); emu_WSA_LoadFile();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__08EC:
	emu_addw(&emu_sp, 0x12);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x30;
	emu_push(emu_ax);
	emu_ax = 0x80;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x0912); emu_cs = 0x352A; overlay(0x352A, 0); emu_WSA_DisplayFrame();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__0912:
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x0920); emu_cs = 0x352A; overlay(0x352A, 0); emu_WSA_Unload();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__0920:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x8BE8), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x8BE8) != 0x0) goto l__092C;
	goto l__09FE;
l__092C:
	emu_get_memory16(emu_ss, emu_bp, -0xC) = 0x120;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = 0x88;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_push(emu_get_memory16(emu_es, 0x00, 0x542));
	emu_push(emu_get_memory16(emu_es, 0x00, 0x540));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6C91));
	emu_push(emu_cs); emu_push(0x095A); emu_cs = 0x2903; emu_GUI_DrawSprite();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__095A:
	emu_addw(&emu_sp, 0xE);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_ax = emu_get_memory16(emu_es, 0x00, 0x4A2);
	emu_dx = emu_get_memory16(emu_es, 0x00, 0x4A0);
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x18) = emu_dx;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_cs); emu_push(0x0982); emu_cs = 0x260F; emu_Sprite_GetWidth();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__0982:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_incw(&emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0x12) = 0x2C94;
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_bx = emu_get_memory16(emu_es, emu_bx, 0x3A);
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x2E42);
	emu_decw(&emu_ax);
	emu_di = emu_ax;
	goto l__09FA;
l__09B2:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_bx = emu_get_memory16(emu_es, emu_bx, 0x3A);
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x2E40);
	emu_decw(&emu_ax);
	emu_si = emu_ax;
	goto l__09F5;
l__09C6:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = emu_di;
	emu_imuluw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_addw(&emu_dx, emu_ax);
	emu_push(emu_dx);
	emu_ax = emu_si;
	emu_imuluw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_addw(&emu_dx, emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6C91));
	emu_push(emu_cs); emu_push(0x09F1); emu_cs = 0x2903; emu_GUI_DrawSprite();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__09F1:
	emu_addw(&emu_sp, 0xE);
	emu_decw(&emu_si);
l__09F5:
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) goto l__09C6;
	emu_decw(&emu_di);
l__09FA:
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) goto l__09B2;
l__09FE:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x7));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2A), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x2A) == 0xFF) goto l__0A0F;
	goto l__0AE9;
l__0A0F:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FAC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FAA));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x70;
	emu_push(emu_ax);
	emu_ax = 0xB8;
	emu_push(emu_ax);
	emu_ax = 0x30;
	emu_push(emu_ax);
	emu_ax = 0x80;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A30); emu_cs = 0x2BB6; f__2BB6_004F_0014_AB2C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__0A30:
	emu_addw(&emu_sp, 0xE);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FC2), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x7FC2) == 0x0) goto l__0A64;
	emu_ax = 0x132;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x6;
	emu_push(emu_ax);
	emu_ax = 0x63;
	emu_push(emu_ax);
	emu_ax = 0xDC;
	emu_push(emu_ax);
	emu_ax = 0xB9;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A56); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__0A56:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A5E); emu_cs = 0x10E4; emu_GUI_DrawText_Wrapper();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__0A5E:
	emu_addw(&emu_sp, 0xE);
	goto l__0AE6;
l__0A64:
	emu_ax = 0x132;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x6;
	emu_push(emu_ax);
	emu_ax = 0x5E;
	emu_push(emu_ax);
	emu_ax = 0xDC;
	emu_push(emu_ax);
	emu_ax = 0xBA;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A80); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__0A80:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A88); emu_cs = 0x10E4; emu_GUI_DrawText_Wrapper();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__0A88:
	emu_addw(&emu_sp, 0xE);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FBE), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x7FBE) == 0x0) goto l__0ABF;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FBE));
	emu_ax = 0x132;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x6;
	emu_push(emu_ax);
	emu_ax = 0x68;
	emu_push(emu_ax);
	emu_ax = 0xDC;
	emu_push(emu_ax);
	emu_ax = 0xBB;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0AB2); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__0AB2:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0ABA); emu_cs = 0x10E4; emu_GUI_DrawText_Wrapper();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__0ABA:
	emu_addw(&emu_sp, 0x10);
	goto l__0AE6;
l__0ABF:
	emu_ax = 0x132;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x6;
	emu_push(emu_ax);
	emu_ax = 0x68;
	emu_push(emu_ax);
	emu_ax = 0xDC;
	emu_push(emu_ax);
	emu_ax = 0x14D;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0ADB); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__0ADB:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0AE3); emu_cs = 0x10E4; emu_GUI_DrawText_Wrapper();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__0AE3:
	emu_addw(&emu_sp, 0xE);
l__0AE6:
	goto l__0B6C;
l__0AE9:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FC2), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x7FC2) == 0x0) goto l__0B6C;
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x9;
	emu_push(emu_ax);
	emu_ax = 0x17;
	emu_push(emu_ax);
	emu_ax = 0xA0;
	emu_push(emu_ax);
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_ax = 0x63;
	emu_push(emu_ax);
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0B15); emu_cs = 0x24D0; emu_GUI_Unknown_24D0_000D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__0B15:
	emu_addw(&emu_sp, 0x10);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x9;
	emu_push(emu_ax);
	emu_ax = 0x17;
	emu_push(emu_ax);
	emu_ax = 0xA9;
	emu_push(emu_ax);
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_ax = 0x63;
	emu_push(emu_ax);
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0B3D); emu_cs = 0x24D0; emu_GUI_Unknown_24D0_000D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__0B3D:
	emu_addw(&emu_sp, 0x10);
	emu_ax = 0x132;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x6;
	emu_push(emu_ax);
	emu_ax = 0xA9;
	emu_push(emu_ax);
	emu_ax = 0xDC;
	emu_push(emu_ax);
	emu_ax = 0xB9;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0B5C); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__0B5C:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0B64); emu_cs = 0x10E4; emu_GUI_DrawText_Wrapper();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__0B64:
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_cs);
	emu_push(0x0B6C); f__B495_0D3E_000F_31B8();
l__0B6C:
	emu_push(emu_cs); emu_push(0x0B71); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__0B71:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x70;
	emu_push(emu_ax);
	emu_ax = 0x17;
	emu_push(emu_ax);
	emu_ax = 0x30;
	emu_push(emu_ax);
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_ax = 0x30;
	emu_push(emu_ax);
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0B95); emu_cs = 0x24D0; emu_GUI_Unknown_24D0_000D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__0B95:
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0B9D); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__0B9D:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x0BA5); emu_cs = 0x2598; emu_Unknown_Set_Global_6C91();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__0BA5:
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs);
	emu_push(0x0BB1); f__B495_0BB9_0011_11A0();
l__0BB1:
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
 * Decompiled function f__B495_0BB9_0011_11A0()
 *
 * @name f__B495_0BB9_0011_11A0
 * @implements B495:0BB9:0011:11A0 ()
 * @implements B495:0BCA:0021:D845
 * @implements B495:0BEB:0032:B14B
 * @implements B495:0C1D:0006:7737
 * @implements B495:0C23:0009:B187
 * @implements B495:0C2C:002A:6ABB
 * @implements B495:0C56:0008:0683
 * @implements B495:0C5E:000C:4A92
 * @implements B495:0C6A:0008:1FFE
 * @implements B495:0C72:0029:5C43
 * @implements B495:0C9B:0008:0683
 * @implements B495:0CA3:0013:CBED
 * @implements B495:0CB6:0008:1FFE
 * @implements B495:0CBE:0030:9AC5
 * @implements B495:0CEE:0008:0683
 * @implements B495:0CF6:0008:A3E0
 * @implements B495:0CF9:0005:6168
 * @implements B495:0CFE:002B:B990
 * @implements B495:0D29:0008:43E5
 * @implements B495:0D31:0006:4A77
 * @implements B495:0D37:0007:F77C
 *
 * Called From: B495:0463:001C:8534
 * Called From: B495:04C9:001E:4B54
 * Called From: B495:0781:0008:A228
 * Called From: B495:0BAE:000C:B6AC
 */
void f__B495_0BB9_0011_11A0()
{
l__0BB9:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0BCA); emu_cs = 0x2598; emu_Unknown_Set_Global_6C91();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__0BCA:
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_ax = 0x74;
	emu_push(emu_ax);
	emu_ax = 0x23;
	emu_push(emu_ax);
	emu_ax = 0x136;
	emu_push(emu_ax);
	emu_ax = 0x15;
	emu_push(emu_ax);
	emu_ax = 0x80;
	emu_push(emu_ax);
	emu_ax = 0x353F;
	emu_es = emu_ax;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6668);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x666A);
	emu_push(0x0BEB);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60D31: emu_GUI_DrawFilledRectangle(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB495; emu_last_ip = 0x0BE6; emu_last_length = 0x0021; emu_last_crc = 0xD845;
			emu_call();
			return;
	}
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__0BEB:
	emu_addw(&emu_sp, 0xA);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax == 0) goto l__0C23;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x0) goto l__0C23;
	emu_ax = 0x12;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xC;
	emu_push(emu_ax);
	emu_ax = 0x17;
	emu_push(emu_ax);
	emu_ax = 0x80;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0C1D); emu_cs = 0x10E4; emu_GUI_DrawText_Wrapper();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__0C1D:
	emu_addw(&emu_sp, 0xE);
	goto l__0CF9;
l__0C23:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FBC));
	emu_push(emu_cs);
	emu_push(0x0C2C); f__B495_1230_001B_A160();
l__0C2C:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = 0x12;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xC;
	emu_push(emu_ax);
	emu_ax = 0x17;
	emu_push(emu_ax);
	emu_ax = 0x80;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x7));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_push(emu_cs); emu_push(0x0C56); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__0C56:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0C5E); emu_cs = 0x10E4; emu_GUI_DrawText_Wrapper();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__0C5E:
	emu_addw(&emu_sp, 0xE);
	emu_ax = 0xB2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0C6A); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__0C6A:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0C72); emu_cs = 0x2521; emu_Font_GetStringWidth();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__0C72:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x3));
	emu_ax = 0x12;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xC;
	emu_push(emu_ax);
	emu_ax = 0x17;
	emu_push(emu_ax);
	emu_ax = 0x136;
	emu_subw(&emu_ax, emu_si);
	emu_push(emu_ax);
	emu_ax = 0xB1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0C9B); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__0C9B:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0CA3); emu_cs = 0x10E4; emu_GUI_DrawText_Wrapper();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__0CA3:
	emu_addw(&emu_sp, 0x10);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x7FC2), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x7FC2) == 0x0) goto l__0CF9;
	emu_ax = 0xB4;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0CB6); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__0CB6:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0CBE); emu_cs = 0x2521; emu_Font_GetStringWidth();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__0CBE:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_addw(&emu_ax, emu_si);
	emu_addw(&emu_ax, 0x2);
	emu_si = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_ax = 0x12;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xC;
	emu_push(emu_ax);
	emu_ax = 0x17;
	emu_push(emu_ax);
	emu_ax = 0x136;
	emu_subw(&emu_ax, emu_si);
	emu_push(emu_ax);
	emu_ax = 0xB3;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0CEE); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__0CEE:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0CF6); emu_cs = 0x10E4; emu_GUI_DrawText_Wrapper();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__0CF6:
	emu_addw(&emu_sp, 0x10);
l__0CF9:
	emu_push(emu_cs); emu_push(0x0CFE); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__0CFE:
	emu_orw(&emu_di, emu_di);
	if (emu_di != 0) { /* Unresolved jump */ emu_ip = 0x0D2C; emu_last_cs = 0xB495; emu_last_ip = 0x0D00; emu_last_length = 0x002B; emu_last_crc = 0xB990; emu_call(); return; }
	emu_push(emu_di);
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_ax = 0xE;
	emu_push(emu_ax);
	emu_ax = 0xB6;
	emu_push(emu_ax);
	emu_ax = 0x15;
	emu_push(emu_ax);
	emu_ax = 0x80;
	emu_push(emu_ax);
	emu_ax = 0x15;
	emu_push(emu_ax);
	emu_ax = 0x80;
	emu_push(emu_ax);
	emu_ax = 0x353F;
	emu_es = emu_ax;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6624);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x6626);
	emu_push(0x0D29);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6034F: emu_GFX_22A6_034F(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB495; emu_last_ip = 0x0D24; emu_last_length = 0x002B; emu_last_crc = 0xB990;
			emu_call();
			return;
	}
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__0D29:
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0D31); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__0D31:
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0D37); emu_cs = 0x2598; emu_Unknown_Set_Global_6C91();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__0D37:
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
 * Decompiled function f__B495_0D3E_000F_31B8()
 *
 * @name f__B495_0D3E_000F_31B8
 * @implements B495:0D3E:000F:31B8 ()
 * @implements B495:0D4D:001A:7F2D
 * @implements B495:0D67:0031:1ED7
 * @implements B495:0D98:0025:8B74
 * @implements B495:0DB3:000A:82B9
 * @implements B495:0DBD:0008:43E5
 * @implements B495:0DC5:0004:893F
 *
 * Called From: B495:0447:0046:53E4
 * Called From: B495:04AB:001D:8889
 * Called From: B495:0B69:0008:C3BC
 */
void f__B495_0D3E_000F_31B8()
{
l__0D3E:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FBC));
	emu_push(emu_cs);
	emu_push(0x0D4D); f__B495_1230_001B_A160();
l__0D4D:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x7));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2A), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x2A) == 0xFF) goto l__0DC5;
	emu_push(emu_cs); emu_push(0x0D67); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__0D67:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x7));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2A);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	if (emu_al != emu_get_memory8(emu_es, emu_bx, 0x2)) goto l__0D98;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6C91));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x9;
	emu_push(emu_ax);
	emu_ax = 0x17;
	emu_push(emu_ax);
	emu_ax = 0x63;
	emu_push(emu_ax);
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_ax = 0xA9;
	goto l__0DB3;
l__0D98:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6C91));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x9;
	emu_push(emu_ax);
	emu_ax = 0x17;
	emu_push(emu_ax);
	emu_ax = 0x63;
	emu_push(emu_ax);
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_ax = 0xA0;
l__0DB3:
	emu_push(emu_ax);
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0DBD); emu_cs = 0x24D0; emu_GUI_Unknown_24D0_000D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__0DBD:
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0DC5); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__0DC5:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B495_0DC9_0010_C643()
 *
 * @name f__B495_0DC9_0010_C643
 * @implements B495:0DC9:0010:C643 ()
 * @implements B495:0DD9:0018:EC07
 * @implements B495:0DF1:0018:09EF
 * @implements B495:0E09:002A:0E56
 * @implements B495:0E33:001B:3AB1
 * @implements B495:0E4E:001B:5840
 * @implements B495:0E69:0008:2BE5
 * @implements B495:0E71:0002:CC3A
 * @implements B495:0E73:0018:CB64
 * @implements B495:0E88:0003:1D08
 * @implements B495:0E8B:005C:9A4A
 * @implements B495:0EB4:0033:353B
 * @implements B495:0EC3:0024:C884
 * @implements B495:0EE7:001A:CA6C
 * @implements B495:0EEA:0017:098F
 * @implements B495:0EF3:000E:BE7B
 * @implements B495:0F01:000E:A5AF
 * @implements B495:0F0F:0002:ACBA
 * @implements B495:0F13:0015:AB67
 * @implements B495:0F28:0008:2947
 * @implements B495:0F2B:0005:8BCF
 *
 * Called From: B495:0054:0009:3E41
 * Called From: B495:0073:000A:DBF9
 * Called From: B495:0141:000D:994C
 * Called From: B495:017A:000A:A88E
 * Called From: B495:019B:0008:4D0B
 * Called From: B495:0203:000D:1A5D
 * Called From: B495:0237:000D:9E8C
 * Called From: B495:0258:0008:0E9A
 * Called From: B495:03D9:0009:FC66
 * Called From: B495:07A0:000A:9E64
 * Called From: B495:1195:0008:798E
 * Called From: B495:1228:0008:BA25
 */
void f__B495_0DC9_0010_C643()
{
l__0DC9:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0x6) != 0x0) goto l__0DD9;
	goto l__0E73;
l__0DD9:
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_ax = 0x3F;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3C32);
	emu_addw(&emu_ax, 0x2FD);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0DF1); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__0DF1:
	emu_addw(&emu_sp, 0x8);
	emu_ax = 0xFF;
	emu_push(emu_ax);
	emu_ax = 0xFF;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x0E09); emu_cs = 0x2BA5; f__2BA5_0006_009C_A3D1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__0E09:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ds, 0x00, 0x7F9E) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x7F9C) = 0x0;
	emu_get_memory8(emu_ds, 0x00, 0x7FA0) = 0x0;
	emu_get_memory8(emu_ds, 0x00, 0x7FA1) = 0x8;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x7FBC);
	emu_cl = 0x5;
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_ax, 0x18);
	emu_si = emu_ax;
	emu_push(emu_cs); emu_push(0x0E33); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__0E33:
	emu_ax = 0xFF;
	emu_push(emu_ax);
	emu_ax = emu_si;
	emu_addw(&emu_ax, 0x18);
	emu_push(emu_ax);
	emu_ax = 0x68;
	emu_push(emu_ax);
	emu_ax = emu_si;
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x47;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E4E); emu_cs = 0x251B; emu_GUI_DrawWiredRectangle();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__0E4E:
	emu_addw(&emu_sp, 0xA);
	emu_ax = 0xFF;
	emu_push(emu_ax);
	emu_ax = emu_si;
	emu_addw(&emu_ax, 0x17);
	emu_push(emu_ax);
	emu_ax = 0x67;
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_ax = 0x48;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E69); emu_cs = 0x251B; emu_GUI_DrawWiredRectangle();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__0E69:
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_cs); emu_push(0x0E71); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__0E71:
	goto l__0E8B;
l__0E73:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x7F9E);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x7F9C);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	if ((int16)emu_ax < (int16)emu_get_memory16(emu_ds, 0x00, 0x76AE)) goto l__0E8B;
	if ((int16)emu_ax <= (int16)emu_get_memory16(emu_ds, 0x00, 0x76AE)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
		if (emu_dx <= emu_get_memory16(emu_ds, 0x00, 0x76AC)) goto l__0E8B;
	}
l__0E88:
	goto l__0F2B;
l__0E8B:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76AE);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76AC);
	emu_addw(&emu_dx, 0x3);
	emu_adcw(&emu_ax, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x7F9E) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x7F9C) = emu_dx;
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x7FA1);
	emu_addb(&emu_get_memory8(emu_ds, 0x00, 0x7FA0), emu_al);
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7FA0), 0x0);
	if ((int8)emu_get_memory8(emu_ds, 0x00, 0x7FA0) >= (int8)0x0) {
		emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7FA0), 0x3F);
		if ((int8)emu_get_memory8(emu_ds, 0x00, 0x7FA0) <= (int8)0x3F) goto l__0EC3;
	}
l__0EB4:
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x7FA1);
	emu_negb(&emu_al, emu_al);
	emu_get_memory8(emu_ds, 0x00, 0x7FA1) = emu_al;
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x7FA1);
	emu_addb(&emu_get_memory8(emu_ds, 0x00, 0x7FA0), emu_al);
l__0EC3:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3C34);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x3C32);
	emu_addw(&emu_dx, 0x2FD);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A38);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__0EE7;
	emu_cmpw(&emu_ax, 0x1);
	if (emu_ax == 0x1) goto l__0F0F;
	emu_cmpw(&emu_ax, 0x2);
	if (emu_ax == 0x2) goto l__0F01;
	/* Unresolved jump */ emu_ip = 0x0F11; emu_last_cs = 0xB495; emu_last_ip = 0x0EE5; emu_last_length = 0x0024; emu_last_crc = 0xC884; emu_call();
l__0EE7:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
l__0EEA:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x7FA0);
	emu_get_memory8(emu_es, emu_bx, 0x0) = emu_al;
l__0EF3:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x7FA0);
	emu_get_memory8(emu_es, emu_bx, 0x0) = emu_al;
	goto l__0F13;
l__0F01:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x7FA0);
	emu_get_memory8(emu_es, emu_bx, 0x0) = emu_al;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	goto l__0EF3;
l__0F0F:
	goto l__0EEA;
l__0F13:
	emu_ax = 0xFF;
	emu_push(emu_ax);
	emu_ax = 0xFF;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x0F28); emu_cs = 0x2BA5; f__2BA5_0006_009C_A3D1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__0F28:
	emu_addw(&emu_sp, 0x8);
l__0F2B:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B495_0F7A_000B_410C()
 *
 * @name f__B495_0F7A_000B_410C
 * @implements B495:0F7A:000B:410C ()
 * @implements B495:0F85:0024:33C2
 * @implements B495:0FA9:0008:43E5
 * @implements B495:0FB1:0009:C63E
 * @implements B495:0FBA:0012:A9EF
 * @implements B495:0FCC:005C:8468
 * @implements B495:1028:0005:96AE
 * @implements B495:102D:001D:3294
 * @implements B495:104A:0005:91EE
 * @implements B495:104D:0002:D43A
 * @implements B495:104F:0025:696E
 * @implements B495:1074:000C:3159
 * @implements B495:1077:0009:BD71
 * @implements B495:1080:0012:A9EF
 * @implements B495:1092:005C:046A
 * @implements B495:10EE:0005:96AE
 * @implements B495:10F3:001D:B296
 * @implements B495:1110:0005:966E
 * @implements B495:1113:0002:D3BA
 * @implements B495:1115:0024:2AF0
 * @implements B495:1139:0007:98BA
 * @implements B495:113C:0004:893F
 *
 * Called From: B495:118D:0004:03BA
 * Called From: B495:156F:0007:9157
 */
void f__B495_0F7A_000B_410C()
{
l__0F7A:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_cs); emu_push(0x0F85); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__0F85:
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x80;
	emu_push(emu_ax);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_ax = 0x28;
	emu_push(emu_ax);
	emu_ax = 0x9;
	emu_push(emu_ax);
	emu_ax = 0x18;
	emu_push(emu_ax);
	emu_ax = 0x9;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0FA9); emu_cs = 0x24D0; emu_GUI_Unknown_24D0_000D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__0FA9:
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0FB1); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__0FB1:
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0FBA); f__B495_1230_001B_A160();
l__0FBA:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax != 0) goto l__0FCC;
	goto l__104F;
l__0FCC:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x7));
	emu_bx = emu_get_memory16(emu_es, emu_bx, 0x14);
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x442);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x440);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x7));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2A), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x2A) != 0xFF) goto l__102D;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FAC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FAA));
	emu_ax = 0x100;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_ax = 0x48;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1028); emu_cs = 0x2903; emu_GUI_DrawSprite();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__1028:
	emu_addw(&emu_sp, 0x14);
	goto l__104D;
l__102D:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_ax = 0x48;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x104A); emu_cs = 0x2903; emu_GUI_DrawSprite();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__104A:
	emu_addw(&emu_sp, 0xE);
l__104D:
	goto l__1077;
l__104F:
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_ax = 0x18;
	emu_push(emu_ax);
	emu_ax = 0x9;
	emu_push(emu_ax);
	emu_ax = 0x20;
	emu_push(emu_ax);
	emu_ax = 0x9;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1074); emu_cs = 0x24D0; emu_GUI_Unknown_24D0_000D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__1074:
	emu_addw(&emu_sp, 0x10);
l__1077:
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x1080); f__B495_1230_001B_A160();
l__1080:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax != 0) goto l__1092;
	goto l__1115;
l__1092:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x7));
	emu_bx = emu_get_memory16(emu_es, emu_bx, 0x14);
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x442);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x440);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x7));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2A), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x2A) != 0xFF) goto l__10F3;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FAC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FAA));
	emu_ax = 0x100;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xA8;
	emu_push(emu_ax);
	emu_ax = 0x48;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x10EE); emu_cs = 0x2903; emu_GUI_DrawSprite();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__10EE:
	emu_addw(&emu_sp, 0x14);
	goto l__1113;
l__10F3:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xA8;
	emu_push(emu_ax);
	emu_ax = 0x48;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1110); emu_cs = 0x2903; emu_GUI_DrawSprite();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__1110:
	emu_addw(&emu_sp, 0xE);
l__1113:
	goto l__113C;
l__1115:
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_ax = 0xA8;
	emu_push(emu_ax);
	emu_ax = 0x9;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x9;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1139); emu_cs = 0x24D0; emu_GUI_Unknown_24D0_000D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__1139:
	emu_addw(&emu_sp, 0x10);
l__113C:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B495_1230_001B_A160()
 *
 * @name f__B495_1230_001B_A160
 * @implements B495:1230:001B:A160 ()
 * @implements B495:1245:0006:25A9
 * @implements B495:1249:0002:C73A
 * @implements B495:124B:000E:7B97
 * @implements B495:1259:0002:2597
 *
 * Called From: B495:02CB:0009:351E
 * Called From: B495:0401:000C:3C25
 * Called From: B495:048E:000C:FD89
 * Called From: B495:08A8:0011:B26C
 * Called From: B495:0C29:0009:B187
 * Called From: B495:0D4A:000F:31B8
 * Called From: B495:0FB7:0009:C63E
 * Called From: B495:107D:000C:3159
 * Called From: B495:107D:0009:BD71
 * Called From: B495:13F7:0005:00BD
 */
void f__B495_1230_001B_A160()
{
l__1230:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x7FB8);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_bx = emu_ax;
	emu_orw(&emu_bx, emu_bx);
	if (!(emu_flags.sf != emu_flags.of)) {
		emu_cmpw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x7FBA));
		if ((int16)emu_bx < (int16)emu_get_memory16(emu_ds, 0x00, 0x7FBA)) goto l__124B;
	}
l__1245:
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
l__1249:
	goto l__1259;
l__124B:
	emu_ax = emu_bx;
	emu_dx = 0xB;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = emu_ds;
	emu_addw(&emu_ax, 0x8BEA);
	goto l__1249;
l__1259:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B495_1A14_0013_AE3F()
 *
 * @name f__B495_1A14_0013_AE3F
 * @implements B495:1A14:0013:AE3F ()
 * @implements B495:1A27:0002:2597
 *
 * Called From: 3495:0098:0005:0000
 */
void f__B495_1A14_0013_AE3F()
{
l__1A14:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x5);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_subw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x5));
	goto l__1A27;
l__1A27:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
