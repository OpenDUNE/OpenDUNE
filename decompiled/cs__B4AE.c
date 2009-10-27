/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B4AE_0000_0008_049C()
 *
 * @name f__B4AE_0000_0008_049C
 * @implements B4AE:0000:0008:049C ()
 * @implements B4AE:0008:0010:F2A7
 * @implements B4AE:0018:0013:32DB
 * @implements B4AE:002B:001D:6FA8
 * @implements B4AE:0042:0006:B9AB
 * @implements B4AE:0048:0005:9F6E
 * @implements B4AE:004D:0019:DEF2
 * @implements B4AE:0066:0019:C51E
 * @implements B4AE:007F:0002:F5BA
 * @implements B4AE:0081:0013:32DB
 * @implements B4AE:0094:001D:005C
 * @implements B4AE:00AB:0006:798E
 * @implements B4AE:00B1:0005:9F6E
 * @implements B4AE:00B6:0019:BEF5
 * @implements B4AE:00CF:0019:2122
 * @implements B4AE:00E8:0002:C13A
 * @implements B4AE:00EA:0002:C13A
 * @implements B4AE:00EC:0002:C03A
 * @implements B4AE:00EE:0002:2597
 *
 * Called From: 34AE:0020:0005:0000
 */
void f__B4AE_0000_0008_049C()
{
l__0000:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_cs); emu_push(0x0008); emu_cs = 0x29E8; emu_Input_History_Clear();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34AE) { overlay(0x34AE, 1); }
l__0008:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x38B2);
	emu_cmpw(&emu_ax, 0x4);
	if (emu_ax == 0x4) goto l__0018;
	emu_cmpw(&emu_ax, 0x8);
	if (emu_ax == 0x8) goto l__0081;
	goto l__00EA;
l__0018:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A38);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__0066;
	emu_cmpw(&emu_ax, 0x1);
	if (emu_ax == 0x1) goto l__002B;
	emu_cmpw(&emu_ax, 0x2);
	if (emu_ax == 0x2) goto l__004D;
	goto l__007F;
l__002B:
	emu_ax = 0x22;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1C8B;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1C88;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1C42;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1C1A;
l__0042:
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0048); f__B4AE_00F0_0024_E400();
l__0048:
	emu_addw(&emu_sp, 0x12);
	goto l__007F;
l__004D:
	emu_ax = 0x22;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1D5F;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1D5C;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1D16;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1CEE;
	goto l__0042;
l__0066:
	emu_ax = 0x22;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1E33;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1E30;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1DEA;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1DC2;
	goto l__0042;
l__007F:
	goto l__00EC;
l__0081:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A38);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__00CF;
	emu_cmpw(&emu_ax, 0x1);
	if (emu_ax == 0x1) goto l__0094;
	emu_cmpw(&emu_ax, 0x2);
	if (emu_ax == 0x2) goto l__00B6;
	goto l__00E8;
l__0094:
	emu_ax = 0x22;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1CEC;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1CE9;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1CAD;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1C8D;
l__00AB:
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x00B1); f__B4AE_00F0_0024_E400();
l__00B1:
	emu_addw(&emu_sp, 0x12);
	goto l__00E8;
l__00B6:
	emu_ax = 0x22;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1DC0;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1DBD;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1D81;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1D61;
	goto l__00AB;
l__00CF:
	emu_ax = 0x22;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1E9E;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1E9B;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1E55;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x1E35;
	goto l__00AB;
l__00E8:
	goto l__00EC;
l__00EA:
	goto l__00EE;
l__00EC:
	goto l__00EE;
l__00EE:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4AE_00F0_0024_E400()
 *
 * @name f__B4AE_00F0_0024_E400
 * @implements B4AE:00F0:0024:E400 ()
 * @implements B4AE:0114:000B:7807
 * @implements B4AE:011F:0006:9AE8
 * @implements B4AE:0125:0005:FB00
 * @implements B4AE:012A:0005:0EE9
 * @implements B4AE:012F:0002:2597
 *
 * Called From: B4AE:0045:001D:6FA8
 * Called From: B4AE:0045:0006:B9AB
 * Called From: B4AE:00AE:0006:798E
 * Called From: B4AE:00AE:001D:005C
 */
void f__B4AE_00F0_0024_E400()
{
l__00F0:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0114); emu_cs = 0x34ED; overlay(0x34ED, 0); f__B4ED_0000_0079_AC5D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34AE) { overlay(0x34AE, 1); }
l__0114:
	emu_addw(&emu_sp, 0x12);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x16));
	emu_push(emu_cs); emu_push(0x011F); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0283_0014_983A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34AE) { overlay(0x34AE, 1); }
l__011F:
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x0125); emu_cs = 0x34ED; overlay(0x34ED, 0); f__B4ED_0200_000F_1FF4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34AE) { overlay(0x34AE, 1); }
l__0125:
	emu_push(emu_cs); emu_push(0x012A); emu_cs = 0x1DD7; f__1DD7_0B53_0025_36F7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34AE) { overlay(0x34AE, 1); }
l__012A:
	emu_push(emu_cs); emu_push(0x012F); emu_cs = 0x34ED; overlay(0x34ED, 0); f__B4ED_0184_0010_CD7E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34AE) { overlay(0x34AE, 1); }
l__012F:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
