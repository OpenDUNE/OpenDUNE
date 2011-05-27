/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

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
void emu_GUI_Mentat_Tick()
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
void emu_GUI_Security_Internal_16F8()
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
void emu_GUI_Security_Internal_1860()
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
