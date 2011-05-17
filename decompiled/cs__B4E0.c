/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function emu_GUI_Mentat_List()
 *
 * @name emu_GUI_Mentat_List
 * @implements B4E0:0300:001B:4F41 ()
 * @implements B4E0:031B:000E:C2E3
 * @implements B4E0:0329:0017:3649
 * @implements B4E0:0340:0011:2470
 * @implements B4E0:0351:002F:ED25
 * @implements B4E0:0380:002E:C642
 * @implements B4E0:0382:002C:0F24
 * @implements B4E0:03AE:0011:F434
 * @implements B4E0:03B0:000F:D8ED
 * @implements B4E0:03BF:002A:1184
 * @implements B4E0:03D1:0018:0BD3
 * @implements B4E0:03E9:0008:E3A2
 * @implements B4E0:03F1:0009:FACE
 * @implements B4E0:03FA:000A:A623
 * @implements B4E0:0404:000A:A523
 * @implements B4E0:040E:0005:E871
 * @implements B4E0:0411:0002:C2BA
 * @implements B4E0:0413:0005:A97A
 * @implements B4E0:0418:0005:8BCF
 *
 * Called From: 34E0:002A:0005:0000
 * Called From: B4E0:01D5:000A:9F0D
 * Called From: B4E0:0211:000A:9FBC
 * Called From: B4E0:028A:000A:5F9B
 */
void emu_GUI_Mentat_List()
{
l__0300:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x803C);
	emu_addw(&emu_ax, 0x3);
	emu_si = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x4), emu_si);
	if (emu_get_memory16(emu_es, emu_bx, 0x4) != emu_si) goto l__031B;
	goto l__03BF;
l__031B:
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x802C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x802A));
	emu_push(emu_cs); emu_push(0x0329); emu_cs = 0x348B; overlay(0x348B, 0); emu_GUI_Widget_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0329:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0340); emu_cs = 0x348B; overlay(0x348B, 0); emu_GUI_Widget_MakeNormal();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0340:
	emu_addw(&emu_sp, 0x6);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0351); emu_cs = 0x348B; overlay(0x348B, 0); emu_GUI_Widget_MakeNormal();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0351:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x38), 0x31);
	if (emu_get_memory16(emu_es, emu_bx, 0x38) != 0x31) goto l__0382;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = 0xF;
	emu_get_memory8(emu_es, emu_bx, 0x2C) = emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0x2A) = emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0x26) = emu_al;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0380); emu_cs = 0x34A2; overlay(0x34A2, 0); emu_GUI_Widget_Draw();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0380:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__0382:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x38), 0x31);
	if (emu_get_memory16(emu_es, emu_bx, 0x38) != 0x31) goto l__03B0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = 0x8;
	emu_get_memory8(emu_es, emu_bx, 0x2C) = emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory8(emu_es, emu_bx, 0x2A) = emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory8(emu_es, emu_bx, 0x26) = emu_al;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x03AE); emu_cs = 0x34A2; overlay(0x34A2, 0); emu_GUI_Widget_Draw();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__03AE:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__03B0:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4);
	emu_subw(&emu_ax, 0x3);
	emu_get_memory16(emu_ds, 0x00, 0x803C) = emu_ax;
	goto l__0413;
l__03BF:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0x1100);
	if ((emu_get_memory16(emu_es, emu_bx, 0x2E) & 0x1100) == 0) {
		emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x25CE), 0x0);
		if (emu_get_memory16(emu_ds, 0x00, 0x25CE) == 0x0) goto l__0413;
	}
l__03D1:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x38), 0x31);
	if (emu_get_memory16(emu_es, emu_bx, 0x38) != 0x31) goto l__0413;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x03E9); emu_cs = 0x348B; overlay(0x348B, 0); emu_GUI_Widget_MakeNormal();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__03E9:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_cs);
	emu_push(0x03F1); f__B4E0_059B_001B_5C8D();
l__03F1:
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x03FA); f__B4E0_0847_0019_A380();
l__03FA:
	emu_pop(&emu_cx);
	emu_ax = 0x841;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0404); emu_cs = 0x29E8; emu_Input_HandleInput();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0404:
	emu_pop(&emu_cx);
	emu_ax = 0x842;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x040E); emu_cs = 0x29E8; emu_Input_HandleInput();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__040E:
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
l__0411:
	goto l__0418;
l__0413:
	emu_ax = 0x1;
	goto l__0411;
l__0418:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4E0_041D_0017_C8A5()
 *
 * @name f__B4E0_041D_0017_C8A5
 * @implements B4E0:041D:0017:C8A5 ()
 * @implements B4E0:0434:0036:4669
 * @implements B4E0:046A:000D:05BD
 * @implements B4E0:0477:000E:69F3
 * @implements B4E0:0485:000D:4C66
 * @implements B4E0:0488:000A:5823
 * @implements B4E0:0492:0022:B650
 * @implements B4E0:04B4:000F:0749
 * @implements B4E0:04C3:0020:26EC
 * @implements B4E0:04E3:002F:1851
 * @implements B4E0:0512:0016:1B8D
 * @implements B4E0:051C:000C:911E
 * @implements B4E0:0528:003C:6C9E
 * @implements B4E0:0542:0022:EF7C
 * @implements B4E0:0568:0010:4671
 * @implements B4E0:0578:000D:76A5
 * @implements B4E0:0585:0016:94CD
 * @implements B4E0:058F:000C:487E
 *
 * Called From: B4E0:00C2:0009:B94B
 * Called From: B4E0:082E:000A:A4FC
 */
void f__B4E0_041D_0017_C8A5()
{
l__041D:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xE);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0x6) == 0x0) goto l__0488;
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0434); emu_cs = 0x252E; emu_Memory_GetBlock1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0434:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x25D2) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x25D0) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x803E) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x803C) = 0x0;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A38);
	emu_dx = 0x1E;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, emu_bx, 0x37F8));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x25D6;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x8040;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x046A); emu_cs = 0x01F7; emu_String_sprintf();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__046A:
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_ds);
	emu_ax = 0x8040;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0477); emu_cs = 0x0642; emu_String_GenerateFilename();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0477:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x8040;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0485); emu_cs = 0x01F7; emu_String_strcpy();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0485:
	emu_addw(&emu_sp, 0x8);
l__0488:
	emu_push(emu_ds);
	emu_ax = 0x8040;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0492); emu_cs = 0x34B1; overlay(0x34B1, 0); emu_ChunkFile_Open();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0492:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6CE1));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6CDF));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x25D2));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x25D0));
	emu_ax = 0x454D;
	emu_dx = 0x414E;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x04B4); emu_cs = 0x34B1; overlay(0x34B1, 0); emu_ChunkFile_Read();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__04B4:
	emu_addw(&emu_sp, 0xE);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x04C3); emu_cs = 0x34B1; overlay(0x34B1, 0); emu_ChunkFile_Close();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__04C3:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x803A) = 0x0;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x25D2);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x25D0);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
	goto l__0542;
l__04E3:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ah = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_cwd();
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_adcw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_es = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_addw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xFFFF);
	emu_ah = 0x0;
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x38B2);
	emu_incw(&emu_dx);
	emu_cmpw(&emu_ax, emu_dx);
	if ((int16)emu_ax <= (int16)emu_dx) goto l__0528;
	goto l__051C;
l__0512:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_get_memory8(emu_es, emu_bx, 0x0) = 0x0;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xC));
l__051C:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0512;
	goto l__0542;
l__0528:
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_es = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_addw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0xE);
	emu_get_memory8(emu_es, emu_bx, 0xFFFF) = emu_al;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x803A));
l__0542:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if ((int16)emu_ax < (int16)emu_get_memory16(emu_ss, emu_bp, -0x2)) goto l__04E3;
	if (emu_ax != emu_get_memory16(emu_ss, emu_bp, -0x2)) { /* Unresolved jump */ emu_ip = 0x0554; emu_last_cs = 0xB4E0; emu_last_ip = 0x054D; emu_last_length = 0x0022; emu_last_crc = 0xEF7C; emu_call(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (emu_dx < emu_get_memory16(emu_ss, emu_bp, -0x4)) goto l__04E3;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x25D2);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x25D0);
	emu_get_memory16(emu_ds, 0x00, 0x804F) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x804D) = emu_dx;
	goto l__0568;
l__0568:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x804D));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x0564; emu_last_cs = 0xB4E0; emu_last_ip = 0x0572; emu_last_length = 0x0010; emu_last_crc = 0x4671; emu_call(); return; }
	emu_xorw(&emu_si, emu_si);
	goto l__058F;
l__0578:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x804F));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x804D));
	emu_push(emu_cs);
	emu_push(0x0585); emu_String_NextString();
l__0585:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x804F) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x804D) = emu_ax;
	emu_incw(&emu_si);
l__058F:
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00, 0x803E));
	if (emu_si < emu_get_memory16(emu_ds, 0x00, 0x803E)) goto l__0578;
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
 * Decompiled function f__B4E0_059B_001B_5C8D()
 *
 * @name f__B4E0_059B_001B_5C8D
 * @implements B4E0:059B:001B:5C8D ()
 * @implements B4E0:05B6:000B:511B
 * @implements B4E0:05C1:001E:A8B8
 * @implements B4E0:05C9:0016:55D4
 * @implements B4E0:05DF:0021:C9E6
 * @implements B4E0:05E1:001F:D0A6
 * @implements B4E0:0600:0012:17E4
 * @implements B4E0:0612:001E:F6FB
 * @implements B4E0:0630:0009:02A3
 * @implements B4E0:0639:000C:36ED
 * @implements B4E0:0645:0013:A738
 * @implements B4E0:0658:0024:52EC
 * @implements B4E0:067C:0015:539F
 * @implements B4E0:0691:0014:6B8A
 * @implements B4E0:06A5:0015:76F1
 * @implements B4E0:06BA:0014:7316
 * @implements B4E0:06CE:0014:F31D
 * @implements B4E0:06E2:0009:2601
 * @implements B4E0:06EB:0003:CA9A
 * @implements B4E0:06EE:0023:F430
 * @implements B4E0:06F1:0020:15C1
 * @implements B4E0:0703:000E:76D9
 * @implements B4E0:0713:0016:4D4D
 * @implements B4E0:0729:004D:2BC6
 * @implements B4E0:0776:0024:4F14
 * @implements B4E0:079A:0009:DAE3
 * @implements B4E0:07A3:0014:EB5E
 * @implements B4E0:07B7:0005:9E2E
 * @implements B4E0:07BC:000E:9359
 * @implements B4E0:07CA:004A:BB40
 * @implements B4E0:07CD:0047:7CA3
 * @implements B4E0:07F2:0022:B89A
 * @implements B4E0:0814:0013:6B81
 * @implements B4E0:0827:000A:A4FC
 * @implements B4E0:0831:0006:5C12
 * @implements B4E0:0837:0009:78DC
 * @implements B4E0:0840:0007:F77C
 *
 * Called From: B4E0:03EE:0008:E3A2
 */
void f__B4E0_059B_001B_5C8D()
{
l__059B:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2C);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_di = emu_get_memory16(emu_ds, 0x00, 0x803C);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x804F);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x804D);
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_dx;
	goto l__05C9;
l__05B6:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_cs);
	emu_push(0x05C1); emu_String_NextString();
l__05C1:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_ax;
l__05C9:
	emu_ax = emu_di;
	emu_decw(&emu_di);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__05B6;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x5), 0x30);
	if (emu_get_memory8(emu_es, emu_bx, 0x5) != 0x30) goto l__05DF;
	emu_ax = 0x1;
	goto l__05E1;
l__05DF:
	emu_xorw(&emu_ax, emu_ax);
l__05E1:
	emu_get_memory16(emu_ss, emu_bp, -0x1C) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x14);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x16);
	emu_incw(&emu_dx);
	emu_get_memory16(emu_ss, emu_bp, -0x1E) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x20) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x0600); emu_cs = 0x2BC0; emu_Tools_Swapd();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0600:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x18) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x1A) = emu_ax;
	emu_push(emu_ds);
	emu_ax = 0x8040;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0612); emu_cs = 0x34B1; overlay(0x34B1, 0); emu_ChunkFile_Open();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0612:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0xC;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2C);
	emu_push(emu_ax);
	emu_ax = 0x4F46;
	emu_dx = 0x4E49;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0630); emu_cs = 0x34B1; overlay(0x34B1, 0); emu_ChunkFile_Read();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0630:
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0639); emu_cs = 0x34B1; overlay(0x34B1, 0); emu_ChunkFile_Close();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0639:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x28));
	emu_push(emu_cs); emu_push(0x0645); emu_cs = 0x2BC0; emu_Tools_Swapd();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0645:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x26) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x28) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_push(emu_cs); emu_push(0x0658); emu_cs = 0x2BC0; emu_Tools_Swapd();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0658:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x22) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x24) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x38DC);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x38DA);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_dx;
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x067C); emu_cs = 0x252E; emu_Memory_GetBlock1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__067C:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x8040;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0691); emu_cs = 0x1FB5; emu_File_Open();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0691:
	emu_addw(&emu_sp, 0x6);
	emu_si = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x06A5); emu_cs = 0x1FB5; emu_File_Seek();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__06A5:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x06BA); emu_cs = 0x1FB5; emu_File_Read();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__06BA:
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x06CE); emu_cs = 0x2502; emu_String_Decompress();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__06CE:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x06E2); emu_cs = 0x2502; emu_String_TranslateSpecial();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__06E2:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x06EB); emu_cs = 0x1FB5; emu_File_Close();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__06EB:
	emu_pop(&emu_cx);
	goto l__06F1;
l__06EE:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
l__06F1:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x2A);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x2A) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x3F);
		if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x3F) goto l__06EE;
	}
l__0703:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x2A);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x2A) { /* Unresolved jump */ emu_ip = 0x0711; emu_last_cs = 0xB4E0; emu_last_ip = 0x070A; emu_last_length = 0x000E; emu_last_crc = 0x76D9; emu_call(); return; }
	emu_ax = 0x1;
	goto l__0713;
l__0713:
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0x0) = 0x0;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x1C) != 0x0) goto l__0729;
	goto l__07BC;
l__0729:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_addw(&emu_ax, 0xFFD0);
	emu_di = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ds;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = 0x8D0D;
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x0;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x38DC);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x38DA);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A38);
	emu_dx = 0x1E;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, emu_bx, 0x37F8));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x25DF;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0776); emu_cs = 0x01F7; emu_String_sprintf();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0776:
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x38B2);
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_ax, 0x4);
	emu_addw(&emu_ax, emu_di);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x079A); emu_cs = 0x0642; emu_String_GenerateFilename();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__079A:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x07A3); emu_cs = 0x0FCB; emu_String_LoadFile();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__07A3:
	emu_addw(&emu_sp, 0xC);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x07B7); emu_cs = 0x2502; emu_String_TranslateSpecial();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__07B7:
	emu_addw(&emu_sp, 0x8);
	goto l__07F2;
l__07BC:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	goto l__07CD;
l__07CA:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
l__07CD:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x0) { /* Unresolved jump */ emu_ip = 0x07DF; emu_last_cs = 0xB4E0; emu_last_ip = 0x07D4; emu_last_length = 0x0047; emu_last_crc = 0x7CA3; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0xC);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0xC) goto l__07CA;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
		emu_get_memory8(emu_es, emu_bx, 0x0) = 0x0;
		emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	}
l__07F2:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8028));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8026));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x0814); emu_cs = 0x34DA; overlay(0x34DA, 0); f__B4DA_0AB8_002A_AAB2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0814:
	emu_addw(&emu_sp, 0x12);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8028));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8026));
	emu_push(emu_cs); emu_push(0x0827); emu_cs = 0x348B; overlay(0x348B, 0); emu_GUI_Widget_MakeNormal();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0827:
	emu_addw(&emu_sp, 0x6);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0831); f__B4E0_041D_0017_C8A5();
l__0831:
	emu_pop(&emu_cx);
	emu_push(emu_cs);
	emu_push(0x0837); emu_GUI_Mentat_Create_HelpScreen_Widgets();
l__0837:
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0840); f__B4E0_0847_0019_A380();
l__0840:
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
	emu_push(emu_cs); emu_push(0x086F); emu_cs = 0x2598; emu_Unknown_Set_Global_6C91();
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
	emu_push(emu_cs); emu_push(0x0A4A); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
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
	emu_push(emu_cs); emu_push(0x0A6E); emu_cs = 0x24D0; emu_GUI_Unknown_24D0_000D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0A6E:
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0A76); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0A76:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x0A7E); emu_cs = 0x2598; emu_Unknown_Set_Global_6C91();
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

/**
 * Decompiled function f__B4E0_0A86_000E_D3BB()
 *
 * @name f__B4E0_0A86_000E_D3BB
 * @implements B4E0:0A86:000E:D3BB ()
 * @implements B4E0:0A94:000C:E9DA
 * @implements B4E0:0AA0:0008:1842
 * @implements B4E0:0AA8:0003:CB1A
 * @implements B4E0:0AAB:0002:2597
 *
 * Called From: 34E0:003E:0005:0000
 */
void f__B4E0_0A86_000E_D3BB()
{
l__0A86:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0A94); emu_cs = 0x3520; overlay(0x3520, 0); emu_GUI_Get_Scrollbar_Position();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E0) { overlay(0x34E0, 1); }
l__0A94:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_subw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x803E));
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0AA0); emu_GUI_Mentat_SelectHelpSubject();
l__0AA0:
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0AA8); f__B4E0_0847_0019_A380();
l__0AA8:
	emu_pop(&emu_cx);
	goto l__0AAB;
l__0AAB:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
