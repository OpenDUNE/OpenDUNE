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
void emu_GUI_Security_Internal_176C()
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
	emu_push(0x17F1); GUI_Mentat_SplitText();
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
void GUI_Mentat_SplitText()
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
void emu_GUI_Mentat_Internal_19E6()
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
