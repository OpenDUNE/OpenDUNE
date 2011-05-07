/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B518_0558_0010_240A()
 *
 * @name f__B518_0558_0010_240A
 * @implements B518:0558:0010:240A ()
 * @implements B518:0568:000F:25FE
 * @implements B518:0577:000B:D7C9
 * @implements B518:0585:000F:1D08
 * @implements B518:058B:0009:C306
 * @implements B518:0594:0011:90D1
 * @implements B518:05A5:0018:9016
 * @implements B518:05BD:000E:76AD
 * @implements B518:05CB:0010:4D64
 * @implements B518:05DB:0018:058D
 * @implements B518:05F3:000F:00FF
 * @implements B518:0602:0011:0A44
 * @implements B518:0613:0017:2C04
 * @implements B518:062A:000E:76D8
 * @implements B518:0638:000C:688C
 * @implements B518:0644:000E:6EA6
 * @implements B518:0652:000C:93F1
 * @implements B518:065E:0014:179F
 * @implements B518:0664:000E:13D1
 * @implements B518:0672:0026:840E
 * @implements B518:0698:000C:9D96
 * @implements B518:06A4:0029:41CB
 * @implements B518:06CD:004F:2992
 * @implements B518:071C:0006:F720
 * @implements B518:0722:0008:64F7
 * @implements B518:072A:000D:AD32
 * @implements B518:0737:0009:F1B5
 * @implements B518:0740:0025:430D
 * @implements B518:0765:0017:5D3C
 * @implements B518:077C:0013:40D3
 * @implements B518:0799:001F:FC03
 * @implements B518:07AA:000E:D7F2
 * @implements B518:07B8:0013:9031
 * @implements B518:07CB:0012:801B
 * @implements B518:07DD:000E:7745
 * @implements B518:07EB:0010:4D64
 * @implements B518:07FB:0018:058D
 * @implements B518:0813:000F:00FF
 * @implements B518:0822:0006:E56C
 * @implements B518:0823:0005:816D
 * @implements B518:0828:000B:5394
 * @implements B518:0833:000D:2172
 * @implements B518:0840:0008:64F7
 * @implements B518:0848:0012:6168
 * @implements B518:084F:000B:8CFD
 * @implements B518:085A:0014:A312
 * @implements B518:086E:0007:843A
 * @implements B518:0875:001E:C536
 * @implements B518:0893:0009:B39B
 * @implements B518:0896:0006:F7CE
 *
 * Called From: 3518:0025:0005:0000
 * Called From: B518:0524:0008:0E60
 */
void f__B518_0558_0010_240A()
{
l__0558:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2A);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_push(emu_cs); emu_push(0x0568); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__0568:
	emu_cmpw(&emu_si, 0xFFFF);
	if (emu_si != 0xFFFF) goto l__058B;
	emu_push(emu_ds);
	emu_ax = 0x2C41;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0577); emu_cs = 0x1FB5; emu_File_Exists();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__0577:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0585;
	emu_push(emu_cs); emu_push(0x0582); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
	/* Unresolved jump */ emu_ip = 0x0582; emu_last_cs = 0xB518; emu_last_ip = 0x0582; emu_last_length = 0x000B; emu_last_crc = 0xD7C9; emu_call();
l__0585:
	emu_get_memory16(emu_ds, 0x00, 0x81EB) = 0x0;
l__058B:
	emu_ax = 0x5;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0594); emu_cs = 0x252E; emu_Memory_GetBlock1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__0594:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_push(emu_ds);
	emu_ax = 0x2C41;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x05A5); emu_cs = 0x1FB5; emu_File_Exists();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__05A5:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0613;
	emu_ax = 0x80;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x05BD); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__05BD:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs);
	emu_push(0x05CB); f__B518_1570_0016_F4CA();
l__05CB:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x2C41;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x05DB); emu_cs = 0x1FB5; emu_File_Open();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__05DB:
	emu_addw(&emu_sp, 0x6);
	emu_di = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x80;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x05F3); emu_cs = 0x1FB5; emu_File_Write();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__05F3:
	emu_addw(&emu_sp, 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0602); emu_cs = 0x1FB5; emu_File_Close();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__0602:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0xE) != 0x0) { /* Unresolved jump */ emu_ip = 0x0610; emu_last_cs = 0xB518; emu_last_ip = 0x0607; emu_last_length = 0x0011; emu_last_crc = 0x0A44; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x80);
	if (emu_get_memory16(emu_ss, emu_bp, -0x10) == 0x80) goto l__0613;
	goto l__0896;
l__0613:
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x80;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_ds);
	emu_ax = 0x2C41;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x062A); emu_cs = 0x253D; emu_File_ReadBlockFile();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__062A:
	emu_addw(&emu_sp, 0xC);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs);
	emu_push(0x0638); f__B518_15A9_0016_F4CA();
l__0638:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0644); f__B518_0B1D_0014_307D();
l__0644:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_si, 0xFFFF);
	if (emu_si != 0xFFFF) goto l__0652;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = 0x0;
	goto l__0664;
l__0652:
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs);
	emu_push(0x065E); f__B518_10DC_0011_9EE1();
l__065E:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
l__0664:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs);
	emu_push(0x0672); f__B518_11C6_0011_1160();
l__0672:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0xC8;
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
	emu_push(emu_cs); emu_push(0x0698); emu_cs = 0x24D0; emu_GUI_Unknown_24D0_000D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__0698:
	emu_addw(&emu_sp, 0x10);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0xC) != 0x0) goto l__06A4;
	goto l__0823;
l__06A4:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_decw(&emu_ax);
	emu_cl = 0x4;
	emu_shlw(&emu_ax, emu_cl);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_addw(&emu_bx, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_bx;
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x4192;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2A);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x06CD); emu_cs = 0x01F7; emu_Tools_Memcopy();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__06CD:
	emu_addw(&emu_sp, 0xA);
	emu_get_memory16(emu_ds, 0x00, 0x4192) = 0x4;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_decw(&emu_ax);
	emu_dx = 0xB;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x5A);
	emu_get_memory16(emu_ds, 0x00, 0x4194) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_cl = 0x3;
	emu_sarw(&emu_ax, emu_cl);
	emu_get_memory16(emu_ds, 0x00, 0x4196) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x4198) = 0xB;
	emu_get_memory16(emu_ds, 0x00, 0x419A) = 0x6;
	emu_get_memory16(emu_ds, 0x00, 0x419C) = 0x74;
	emu_ax = 0x22;
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
	emu_push(emu_cs); emu_push(0x071C); emu_cs = 0x10E4; emu_GUI_DrawText_Wrapper();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__071C:
	emu_addw(&emu_sp, 0xE);
	goto l__07AA;
l__0722:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x072A); emu_cs = 0x2598; emu_Unknown_Set_Global_6C91();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__072A:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x1A) = emu_ax;
	emu_ax = 0x13;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0737); emu_cs = 0x07AE; emu_Unknown_07AE_00E4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__0737:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_push(emu_cs); emu_push(0x0740); emu_cs = 0x2598; emu_Unknown_Set_Global_6C91();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__0740:
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x3518;
	emu_push(emu_ax);
	emu_ax = 0x66;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_ax = 0x13;
	emu_push(emu_ax);
	emu_ax = 0x5;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x0765); emu_cs = 0x3527; overlay(0x3527, 0); emu_GUI_EditBox();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__0765:
	emu_addw(&emu_sp, 0x12);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x0) goto l__07AA;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x077C); emu_cs = 0x01F7; emu_String_strlen();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__077C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_decw(&emu_ax);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_addw(&emu_bx, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x18) = emu_bx;
	goto l__0799;
l__0799:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x20);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) <= 0x20) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x18);
		emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
		if (emu_ax >= emu_get_memory16(emu_ss, emu_bp, -0xA)) { /* Unresolved jump */ emu_ip = 0x078F; emu_last_cs = 0xB518; emu_last_ip = 0x07A8; emu_last_length = 0x001F; emu_last_crc = 0xFC03; emu_call(); return; }
	}
l__07AA:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__07B8;
	goto l__0722;
l__07B8:
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2A);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x4192;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x07CB); emu_cs = 0x01F7; emu_Tools_Memcopy();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__07CB:
	emu_addw(&emu_sp, 0xA);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs);
	emu_push(0x07DD); f__B518_11C6_0011_1160();
l__07DD:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs);
	emu_push(0x07EB); f__B518_1570_0016_F4CA();
l__07EB:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x2C41;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x07FB); emu_cs = 0x1FB5; emu_File_Open();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__07FB:
	emu_addw(&emu_sp, 0x6);
	emu_di = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x80;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0813); emu_cs = 0x1FB5; emu_File_Write();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__0813:
	emu_addw(&emu_sp, 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0822); emu_cs = 0x1FB5; emu_File_Close();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__0822:
	emu_pop(&emu_cx);
l__0823:
	emu_push(emu_cs); emu_push(0x0828); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__0828:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs);
	emu_push(0x0833); f__B518_089C_001A_542C();
l__0833:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_ax;
	emu_push(emu_cs); emu_push(0x0840); emu_cs = 0x29E8; emu_Input_History_Clear();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__0840:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0848); emu_cs = 0x2598; emu_Unknown_Set_Global_6C91();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__0848:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x81E6) = 0x0;
l__084F:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_cs); emu_push(0x085A); emu_cs = 0x34A2; overlay(0x34A2, 0); emu_GUI_Widget_HandleEvents();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__085A:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x81E6), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x81E6) == 0x0) goto l__084F;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_cs);
	emu_push(0x086E); f__B518_0A3E_0008_F439();
l__086E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x0875); emu_cs = 0x29E8; emu_Input_History_Clear();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__0875:
	emu_cmpw(&emu_si, 0xFFFF);
	if (emu_si == 0xFFFF) goto l__0896;
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x81E8;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3C32);
	emu_addw(&emu_ax, 0x2FD);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0893); emu_cs = 0x01F7; emu_Tools_Memcopy();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__0893:
	emu_addw(&emu_sp, 0xA);
l__0896:
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
 * Decompiled function f__B518_089C_001A_542C()
 *
 * @name f__B518_089C_001A_542C
 * @implements B518:089C:001A:542C ()
 * @implements B518:08B6:0016:0385
 * @implements B518:08CC:000C:BE90
 * @implements B518:08D8:0008:1FFE
 * @implements B518:08E0:000C:04A3
 * @implements B518:08EC:0008:1FFE
 * @implements B518:08F4:0010:9746
 * @implements B518:0904:0008:1FFE
 * @implements B518:090C:0004:529F
 * @implements B518:0910:0009:3538
 * @implements B518:0919:0008:1FFE
 * @implements B518:0921:002A:4D1C
 * @implements B518:0923:0028:DB70
 * @implements B518:094B:0013:5DD3
 * @implements B518:095E:0064:9D4A
 * @implements B518:09C2:0013:5CD3
 * @implements B518:09D5:0053:7EDA
 * @implements B518:0A28:0011:05E6
 * @implements B518:0A39:0005:8BCF
 *
 * Called From: B518:0830:000B:5394
 */
void f__B518_089C_001A_542C()
{
l__089C:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_ax = 0x28;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x3604;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x81F1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x08B6); emu_cs = 0x01F7; emu_Tools_Memcopy();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__08B6:
	emu_addw(&emu_sp, 0xA);
	emu_ax = 0x28;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x2C10;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x3604;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x08CC); emu_cs = 0x01F7; emu_Tools_Memcopy();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__08CC:
	emu_addw(&emu_sp, 0xA);
	emu_ax = 0x147;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x08D8); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__08D8:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x08E0); emu_cs = 0x2521; emu_Font_GetStringWidth();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__08E0:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_ax = 0x146;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x08EC); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__08EC:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x08F4); emu_cs = 0x2521; emu_Font_GetStringWidth();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__08F4:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_pop(&emu_dx);
	emu_cmpw(&emu_dx, emu_ax);
	if (emu_dx <= emu_ax) goto l__0910;
	emu_ax = 0x147;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0904); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__0904:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x090C); emu_cs = 0x2521; emu_Font_GetStringWidth();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__090C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__0923;
l__0910:
	emu_ax = 0x146;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0919); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__0919:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0921); emu_cs = 0x2521; emu_Font_GetStringWidth();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__0921:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__0923:
	emu_addw(&emu_ax, 0x6);
	emu_si = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x147;
	emu_push(emu_ax);
	emu_ax = 0xFFFE;
	emu_push(emu_ax);
	emu_ax = 0xB4;
	emu_push(emu_ax);
	emu_ax = emu_si;
	emu_addw(&emu_ax, 0x12);
	emu_dx = 0xA0;
	emu_subw(&emu_dx, emu_ax);
	emu_push(emu_dx);
	emu_ax = 0x147;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x094B); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__094B:
	emu_pop(&emu_cx);
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_ax = 0x64;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x095E); emu_cs = 0x34B8; overlay(0x34B8, 0); emu_GUI_Widget_Allocate();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__095E:
	emu_addw(&emu_sp, 0xE);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x22) = emu_si;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x24) = 0xA;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x32) = 0x3518;
	emu_get_memory16(emu_es, emu_bx, 0x30) = 0x34;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0xE) = 0x44C5;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_es, emu_bx, 0x36) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x34) = emu_dx;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x146;
	emu_push(emu_ax);
	emu_ax = 0xFFFE;
	emu_push(emu_ax);
	emu_ax = 0xB4;
	emu_push(emu_ax);
	emu_ax = 0xB2;
	emu_push(emu_ax);
	emu_ax = 0x146;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x09C2); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__09C2:
	emu_pop(&emu_cx);
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_ax = 0x65;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x09D5); emu_cs = 0x34B8; overlay(0x34B8, 0); emu_GUI_Widget_Allocate();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__09D5:
	emu_addw(&emu_sp, 0xE);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x22) = emu_si;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x24) = 0xA;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x32) = 0x3518;
	emu_get_memory16(emu_es, emu_bx, 0x30) = 0x39;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0xE) = 0x44C5;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_es, emu_bx, 0x36) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x34) = emu_dx;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0A28); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_0242_0017_581D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__0A28:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	goto l__0A39;
l__0A39:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B518_0A3E_0008_F439()
 *
 * @name f__B518_0A3E_0008_F439
 * @implements B518:0A3E:0008:F439 ()
 * @implements B518:0A46:0027:5A8F
 * @implements B518:0A6D:001D:CF58
 * @implements B518:0A6F:001B:02CA
 * @implements B518:0A8A:0007:986A
 *
 * Called From: B518:086B:0014:A312
 */
void f__B518_0A3E_0008_F439()
{
l__0A3E:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	goto l__0A6F;
l__0A46:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x2);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp,  0x8) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp,  0x6) = emu_dx;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0A6D); emu_cs = 0x23E1; emu_Tools_Free();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__0A6D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__0A6F:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__0A46;
	emu_ax = 0x28;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x81F1;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x3604;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A8A); emu_cs = 0x01F7; emu_Tools_Memcopy();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__0A8A:
	emu_addw(&emu_sp, 0xA);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

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
void f__B518_0B1D_0014_307D()
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
	emu_push(emu_cs); emu_push(0x0B31); emu_cs = 0x2598; emu_Unknown_Set_Global_6C91();
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
	emu_push(emu_cs); emu_push(0x0B9B); emu_cs = 0x24D0; emu_GUI_Unknown_24D0_000D();
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
	emu_push(emu_cs); emu_push(0x0BD1); emu_cs = 0x24D0; emu_GUI_Unknown_24D0_000D();
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
	emu_push(0x0C2A); f__B518_0EB1_000E_D2F5();
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
		case 0x22A6034F: emu_GFX_22A6_034F(); break;
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
		case 0x22A6034F: emu_GFX_22A6_034F(); break;
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
		emu_push(0x0E1E); f__B518_14F2_003E_977C();
	}
l__0E1E:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x0E26); emu_cs = 0x2598; emu_Unknown_Set_Global_6C91();
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
void f__B518_0EB1_000E_D2F5()
{
l__0EB1:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0EBF); f__B518_0F22_0007_C8B1();
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
	emu_push(emu_cs); emu_push(0x0F1B); emu_cs = 0x2C17; f__2C17_000C_002F_3016();
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
void f__B518_0F22_0007_C8B1()
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
 * Decompiled function f__B518_10DC_0011_9EE1()
 *
 * @name f__B518_10DC_0011_9EE1
 * @implements B518:10DC:0011:9EE1 ()
 * @implements B518:10ED:000C:42CB
 * @implements B518:10F9:001C:5029
 * @implements B518:1115:0023:A905
 * @implements B518:1138:0015:484E
 * @implements B518:114D:0019:C8A2
 * @implements B518:1166:002E:308B
 * @implements B518:1194:001B:8B65
 * @implements B518:11A5:000A:49D8
 * @implements B518:11AD:0002:C8BA
 * @implements B518:11AF:000D:6BEF
 * @implements B518:11B4:0008:B3A8
 * @implements B518:11BC:0004:9EB9
 * @implements B518:11C0:0006:F7CE
 *
 * Called From: B518:065B:000C:93F1
 */
void f__B518_10DC_0011_9EE1()
{
l__10DC:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_si = 0x1;
	goto l__11B4;
l__10ED:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x6), emu_di);
	if ((int16)emu_get_memory16(emu_es, emu_bx, 0x6) < (int16)emu_di) goto l__10F9;
	goto l__11AF;
l__10F9:
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x80;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_addw(&emu_ax, 0x80);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x1115); emu_cs = 0x2B0E; emu_Tools_Memmove();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__1115:
	emu_addw(&emu_sp, 0xC);
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x80;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_addw(&emu_ax, 0x10);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_addw(&emu_ax, 0x80);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1138); emu_cs = 0x2B0E; emu_Tools_Memmove();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__1138:
	emu_addw(&emu_sp, 0xC);
	emu_ax = 0x6;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x114D); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__114D:
	emu_addw(&emu_sp, 0x8);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x6) = emu_di;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A38);
	emu_get_memory16(emu_es, emu_bx, 0xC) = emu_ax;
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x1166); f__B518_0F22_0007_C8B1();
l__1166:
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x8) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x38B2);
	emu_get_memory16(emu_es, emu_bx, 0xA) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0xE) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	goto l__11A5;
l__1194:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_get_memory16(emu_es, emu_bx, 0xE), emu_ax);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
l__11A5:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xE);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x2) < (int16)0xE) goto l__1194;
	emu_ax = emu_si;
l__11AD:
	goto l__11C0;
l__11AF:
	emu_addw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x10);
	emu_incw(&emu_si);
l__11B4:
	emu_cmpw(&emu_si, 0x8);
	if ((int16)emu_si > (int16)0x8) goto l__11BC;
	goto l__10ED;
l__11BC:
	emu_xorw(&emu_ax, emu_ax);
	goto l__11AD;
l__11C0:
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
 * Decompiled function f__B518_11C6_0011_1160()
 *
 * @name f__B518_11C6_0011_1160
 * @implements B518:11C6:0011:1160 ()
 * @implements B518:11D7:0022:125A
 * @implements B518:11F9:001E:B9DD
 * @implements B518:1217:000C:BD90
 * @implements B518:1223:0008:1FFE
 * @implements B518:122B:0018:55B9
 * @implements B518:1243:0008:1FFE
 * @implements B518:124B:000E:E653
 * @implements B518:1259:0008:1FFE
 * @implements B518:1261:002E:746D
 * @implements B518:128F:0008:0683
 * @implements B518:1297:001B:ED48
 * @implements B518:12B2:0008:0683
 * @implements B518:12BA:001B:EDC8
 * @implements B518:12D5:0008:0683
 * @implements B518:12DD:000C:307B
 * @implements B518:12E9:000D:FD07
 * @implements B518:12F6:0010:0F35
 * @implements B518:1306:0012:3A86
 * @implements B518:1318:001E:C333
 * @implements B518:1336:000D:D1AE
 * @implements B518:1343:0012:4286
 * @implements B518:1355:001B:EE86
 * @implements B518:1370:0020:B4DF
 * @implements B518:1390:0012:4286
 * @implements B518:13A2:0017:7E44
 * @implements B518:13B9:000D:D1AE
 * @implements B518:13BC:000A:1C86
 * @implements B518:13C6:0028:C863
 * @implements B518:13EE:000A:390E
 * @implements B518:13F8:001A:FDC5
 * @implements B518:1412:001E:9F4E
 * @implements B518:1415:001B:BDA4
 * @implements B518:1430:0023:AF14
 * @implements B518:1453:0023:6C14
 * @implements B518:1476:0013:3F86
 * @implements B518:1481:0008:F33E
 * @implements B518:1489:000B:DA15
 * @implements B518:1494:0024:CF61
 * @implements B518:14B8:0008:43E5
 * @implements B518:14C0:0008:0999
 * @implements B518:14C8:0006:DFA7
 * @implements B518:14CE:0006:F7CE
 *
 * Called From: B518:066F:0014:179F
 * Called From: B518:066F:000E:13D1
 * Called From: B518:07DA:0012:801B
 * Called From: B518:0AE9:0016:F50A
 */
void f__B518_11C6_0011_1160()
{
l__11C6:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x11D7); emu_cs = 0x2598; emu_Unknown_Set_Global_6C91();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__11D7:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = 0x74;
	emu_push(emu_ax);
	emu_ax = 0xB2;
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
	emu_push(0x11F9);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60D31: emu_GUI_DrawFilledRectangle(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB518; emu_last_ip = 0x11F4; emu_last_length = 0x0022; emu_last_crc = 0x125A;
			emu_call();
			return;
	}
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__11F9:
	emu_addw(&emu_sp, 0xA);
	emu_ax = 0x22;
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
	emu_push(emu_cs); emu_push(0x1217); emu_cs = 0x10E4; emu_GUI_DrawText_Wrapper();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__1217:
	emu_addw(&emu_sp, 0xE);
	emu_ax = 0x145;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1223); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__1223:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x122B); emu_cs = 0x2521; emu_Font_GetStringWidth();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__122B:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_shrw(&emu_ax, 0x1);
	emu_addw(&emu_ax, 0xC);
	emu_dx = 0x140;
	emu_subw(&emu_dx, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_ax = 0x144;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1243); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__1243:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x124B); emu_cs = 0x2521; emu_Font_GetStringWidth();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__124B:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_shrw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_ax = 0x145;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1259); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__1259:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1261); emu_cs = 0x2521; emu_Font_GetStringWidth();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__1261:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_shrw(&emu_ax, 0x1);
	emu_pop(&emu_dx);
	emu_addw(&emu_dx, emu_ax);
	emu_addw(&emu_dx, 0x8);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_subw(&emu_ax, emu_dx);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_si = 0x50;
	emu_ax = 0x22;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_ax = 0x20;
	emu_push(emu_ax);
	emu_ax = 0x143;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x128F); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__128F:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1297); emu_cs = 0x10E4; emu_GUI_DrawText_Wrapper();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__1297:
	emu_addw(&emu_sp, 0xE);
	emu_ax = 0x122;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = 0x144;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x12B2); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__12B2:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x12BA); emu_cs = 0x10E4; emu_GUI_DrawText_Wrapper();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__12BA:
	emu_addw(&emu_sp, 0xE);
	emu_ax = 0x122;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_ax = 0x145;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x12D5); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__12D5:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x12DD); emu_cs = 0x10E4; emu_GUI_DrawText_Wrapper();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__12DD:
	emu_addw(&emu_sp, 0xE);
	emu_si = 0x5A;
	emu_di = 0x1;
	goto l__1481;
l__12E9:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x6), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x6) != 0x0) goto l__12F6;
	goto l__1489;
l__12F6:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1306); emu_cs = 0x01F7; emu_String_strcpy();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__1306:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_ds);
	emu_ax = 0x2C57;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1318); emu_cs = 0x01F7; emu_String_strcat();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__1318:
	emu_addw(&emu_sp, 0x8);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37B6), 0x1);
	if (emu_get_memory16(emu_ds, 0x00, 0x37B6) != 0x1) goto l__1370;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_bx = emu_get_memory16(emu_es, emu_bx, 0x8);
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x37C0));
	emu_push(emu_cs); emu_push(0x1336); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__1336:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1343); emu_cs = 0x01F7; emu_String_strcat();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__1343:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_ds);
	emu_ax = 0x2C58;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1355); emu_cs = 0x01F7; emu_String_strcat();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__1355:
	emu_addw(&emu_sp, 0x8);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xC);
	emu_dx = 0x1E;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x37FA));
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x37F8));
	goto l__13BC;
l__1370:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xC);
	emu_dx = 0x1E;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x37FA));
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x37F8));
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1390); emu_cs = 0x01F7; emu_String_strcat();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__1390:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_ds);
	emu_ax = 0x2C58;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x13A2); emu_cs = 0x01F7; emu_String_strcat();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__13A2:
	emu_addw(&emu_sp, 0x8);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_bx = emu_get_memory16(emu_es, emu_bx, 0x8);
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x37C0));
	emu_push(emu_cs); emu_push(0x13B9); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__13B9:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
l__13BC:
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x13C6); emu_cs = 0x01F7; emu_String_strcat();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__13C6:
	emu_addw(&emu_sp, 0x8);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__13F8;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_addw(&emu_ax, 0xFFFC);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_addw(&emu_ax, 0xFFE0);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x13EE); emu_cs = 0x2521; emu_Font_GetStringWidth();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__13EE:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_pop(&emu_dx);
	emu_subw(&emu_dx, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	goto l__1415;
l__13F8:
	emu_ax = 0x22;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xF;
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_ax = 0x20;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1412); emu_cs = 0x10E4; emu_GUI_DrawText_Wrapper();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__1412:
	emu_addw(&emu_sp, 0xE);
l__1415:
	emu_push(emu_di);
	emu_ax = 0x222;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xF;
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_ax = 0x18;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x2C5A;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1430); emu_cs = 0x10E4; emu_GUI_DrawText_Wrapper();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__1430:
	emu_addw(&emu_sp, 0x10);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_ax = 0x122;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xF;
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_ds);
	emu_ax = 0x2C3E;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1453); emu_cs = 0x10E4; emu_GUI_DrawText_Wrapper();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__1453:
	emu_addw(&emu_sp, 0x10);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_ax = 0x122;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xF;
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_ds);
	emu_ax = 0x2C3E;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1476); emu_cs = 0x10E4; emu_GUI_DrawText_Wrapper();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__1476:
	emu_addw(&emu_sp, 0x10);
	emu_addw(&emu_si, 0xB);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x10);
	emu_incw(&emu_di);
l__1481:
	emu_cmpw(&emu_di, 0x8);
	if ((int16)emu_di > (int16)0x8) goto l__1489;
	goto l__12E9;
l__1489:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0xA) == 0x0) goto l__14C0;
	emu_push(emu_cs); emu_push(0x1494); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__1494:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x64;
	emu_push(emu_ax);
	emu_ax = 0x26;
	emu_push(emu_ax);
	emu_ax = 0x50;
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = 0x50;
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x14B8); emu_cs = 0x24D0; emu_GUI_Unknown_24D0_000D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__14B8:
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x14C0); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__14C0:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x14C8); emu_cs = 0x2598; emu_Unknown_Set_Global_6C91();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__14C8:
	emu_pop(&emu_cx);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	goto l__14CE;
l__14CE:
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
void f__B518_14D4_0013_5ED7()
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
	emu_push(0x14E7); f__B518_14F2_003E_977C();
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

/**
 * Decompiled function f__B518_14F2_003E_977C()
 *
 * @name f__B518_14F2_003E_977C
 * @implements B518:14F2:003E:977C ()
 * @implements B518:150A:0026:FC8C
 * @implements B518:1530:0037:4A8F
 * @implements B518:1540:0027:625D
 * @implements B518:1567:0007:F97C
 * @implements B518:156A:0004:E839
 * @implements B518:156E:0002:2597
 *
 * Called From: 3518:0066:0005:0000
 * Called From: B518:0316:0005:B136
 * Called From: B518:0323:0005:F133
 * Called From: B518:03CC:0008:F380
 * Called From: B518:050E:0005:BE38
 * Called From: B518:0E1B:0015:5548
 * Called From: B518:14E4:0013:5ED7
 * Called From: B518:14E4:0005:3982
 */
void f__B518_14F2_003E_977C()
{
l__14F2:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x2C3C);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x2C3A);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ds, 0x00, 0x76AE)) goto l__156A;
	if ((int16)emu_ax >= (int16)emu_get_memory16(emu_ds, 0x00, 0x76AE)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
		if (emu_dx >= emu_get_memory16(emu_ds, 0x00, 0x76AC)) goto l__156A;
	}
l__150A:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76AE);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76AC);
	emu_addw(&emu_dx, 0x2);
	emu_adcw(&emu_ax, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x2C3C) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x2C3A) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x81ED));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x3F);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) < 0x3F) goto l__1530;
	emu_get_memory16(emu_ds, 0x00, 0x2C38) = 0xFFFF;
	goto l__1540;
l__1530:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x81ED));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x23);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) <= 0x23) {
		emu_get_memory16(emu_ds, 0x00, 0x2C38) = 0x1;
	}
l__1540:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x81ED));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_addb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x2C38));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x81ED));
	emu_get_memory8(emu_es, emu_bx, 0x0) = emu_al;
	emu_ax = 0xFF;
	emu_push(emu_ax);
	emu_ax = 0xFF;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x1567); emu_cs = 0x2BA5; f__2BA5_0006_009C_A3D1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3518) { overlay(0x3518, 1); }
l__1567:
	emu_addw(&emu_sp, 0x8);
l__156A:
	emu_xorw(&emu_ax, emu_ax);
	goto l__156E;
l__156E:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B518_1570_0016_F4CA()
 *
 * @name f__B518_1570_0016_F4CA
 * @implements B518:1570:0016:F4CA ()
 * @implements B518:1586:0023:77EC
 * @implements B518:159F:000A:5E0A
 *
 * Called From: B518:05C8:000E:76AD
 * Called From: B518:07E8:000E:7745
 */
void f__B518_1570_0016_F4CA()
{
l__1570:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_xorw(&emu_cx, emu_cx);
	goto l__159F;
l__1586:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_addb(&emu_al, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0x0) = emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_xorb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0xA7);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_incw(&emu_cx);
l__159F:
	emu_cmpw(&emu_cx, 0x80);
	if ((int16)emu_cx < (int16)0x80) goto l__1586;
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B518_15A9_0016_F4CA()
 *
 * @name f__B518_15A9_0016_F4CA
 * @implements B518:15A9:0016:F4CA ()
 * @implements B518:15BF:0023:1D70
 * @implements B518:15D8:000A:5E0A
 *
 * Called From: B518:0635:000E:76D8
 */
void f__B518_15A9_0016_F4CA()
{
l__15A9:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_xorw(&emu_cx, emu_cx);
	goto l__15D8;
l__15BF:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_xorb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0xA7);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_subb(&emu_al, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0x0) = emu_al;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_incw(&emu_cx);
l__15D8:
	emu_cmpw(&emu_cx, 0x80);
	if ((int16)emu_cx < (int16)0x80) goto l__15BF;
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
