/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B4ED_0BD4_001B_FFBA()
 *
 * @name f__B4ED_0BD4_001B_FFBA
 * @implements B4ED:0BD4:001B:FFBA ()
 * @implements B4ED:0BEF:0005:60C3
 *
 * Called From: B4ED:03EB:000E:4927
 * Called From: B4ED:06A6:0010:3DF7
 * Called From: B4ED:06FB:000E:F48E
 * Called From: B4ED:0BAC:0011:D835
 * Called From: B4ED:0BAC:001C:12CF
 * Called From: B4ED:0BAC:0017:BCFF
 */
void f__B4ED_0BD4_001B_FFBA()
{
l__0BD4:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = 0x12;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x8088;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_addw(&emu_ax, 0x285);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0BEF); emu_cs = 0x01F7; emu_Tools_Memcopy();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__0BEF:
	emu_addw(&emu_sp, 0xA);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4ED_0BF4_001B_A3A9()
 *
 * @name f__B4ED_0BF4_001B_A3A9
 * @implements B4ED:0BF4:001B:A3A9 ()
 * @implements B4ED:0C0F:0017:23CA
 * @implements B4ED:0C26:002D:EEC9
 * @implements B4ED:0C29:002A:12B1
 * @implements B4ED:0C3E:0015:D153
 * @implements B4ED:0C53:0025:0CBC
 * @implements B4ED:0C5D:001B:FAE7
 * @implements B4ED:0C78:002B:3DD8
 * @implements B4ED:0CA3:0012:1689
 * @implements B4ED:0CB0:0005:8BCF
 *
 * Called From: B4ED:097D:0008:E138
 * Called From: B4ED:09A8:0008:A137
 */
void f__B4ED_0BF4_001B_A3A9()
{
l__0BF4:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0C0F); f__B4ED_0CB5_0015_3E7D();
l__0C0F:
	emu_addw(&emu_sp, 0x8);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	goto l__0C29;
l__0C26:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
l__0C29:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
		emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
		emu_cmpb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x264A));
		if (emu_al != emu_get_memory8(emu_ds, 0x00, 0x264A)) goto l__0C26;
	}
l__0C3E:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x0) goto l__0C53;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory8(emu_es, emu_bx, 0x0) = 0x0;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	goto l__0C5D;
l__0C53:
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
l__0C5D:
	emu_ax = 0x100;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xD7;
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_ax = 0xA0;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0C78); emu_cs = 0x10E4; emu_GUI_DrawText_Wrapper();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__0C78:
	emu_addw(&emu_sp, 0xE);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax == 0) goto l__0CB0;
	emu_ax = 0x100;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xD7;
	emu_push(emu_ax);
	emu_ax = emu_si;
	emu_addw(&emu_ax, 0x12);
	emu_push(emu_ax);
	emu_ax = 0xA0;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0CA3); emu_cs = 0x10E4; emu_GUI_DrawText_Wrapper();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__0CA3:
	emu_addw(&emu_sp, 0xE);
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory8(emu_es, emu_bx, 0x0) = 0xD;
l__0CB0:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4ED_0CB5_0015_3E7D()
 *
 * @name f__B4ED_0CB5_0015_3E7D
 * @implements B4ED:0CB5:0015:3E7D ()
 * @implements B4ED:0CCA:0018:4398
 * @implements B4ED:0CE2:0024:596B
 * @implements B4ED:0CF4:0012:9FA9
 *
 * Called From: B4ED:0C0C:001B:A3A9
 */
void f__B4ED_0CB5_0015_3E7D()
{
l__0CB5:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x0D04; emu_last_cs = 0xB4ED; emu_last_ip = 0x0CBE; emu_last_length = 0x0015; emu_last_crc = 0x3E7D; emu_call(); return; }
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x0D04; emu_last_cs = 0xB4ED; emu_last_ip = 0x0CC6; emu_last_length = 0x0015; emu_last_crc = 0x3E7D; emu_call(); return; }
	goto l__0CF4;
l__0CCA:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0xE1);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0xE1) goto l__0CE2;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_get_memory8(emu_es, emu_bx, 0x0) = 0x1;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	goto l__0CF4;
l__0CE2:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_get_memory8(emu_es, emu_bx, 0x0) = emu_al;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0xA));
l__0CF4:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x0) goto l__0CCA;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_get_memory8(emu_es, emu_bx, 0x0) = 0x0;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
