/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B48B_0000_001E_7E97()
 *
 * @name f__B48B_0000_001E_7E97
 * @implements B48B:0000:001E:7E97 ()
 * @implements B48B:0024:0002:EF3A
 * @implements B48B:0026:0016:3673
 * @implements B48B:003C:002E:CE21
 * @implements B48B:004C:001E:A15E
 * @implements B48B:006A:001A:DFCC
 * @implements B48B:0076:000E:0C48
 * @implements B48B:0084:0004:893F
 *
 * Called From: 348B:0020:0005:0000
 * Called From: B48B:02F7:003C:DD44
 * Called From: B48B:02F7:0058:1F2E
 */
void f__B48B_0000_001E_7E97()
{
l__0000:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x001E; emu_last_cs = 0xB48B; emu_last_ip = 0x000C; emu_last_length = 0x001E; emu_last_crc = 0x7E97; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_get_memory16(emu_es, emu_bx, 0x2) = 0x0;
	emu_get_memory16(emu_es, emu_bx, 0x0) = 0x0;
	goto l__0026;
l__0024:
	goto l__0084;
l__0026:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax == 0) goto l__006A;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	goto l__004C;
l__003C:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x2);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp,  0x8) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp,  0x6) = emu_dx;
l__004C:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2));
	if (emu_ax != 0) goto l__003C;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_get_memory16(emu_es, emu_bx, 0x2) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x0) = emu_dx;
	goto l__0076;
l__006A:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
l__0076:
	emu_get_memory16(emu_ds, 0x00, 0x6D75) = 0x1;
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	goto l__0024;
l__0084:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B48B_0242_0017_581D()
 *
 * @name f__B48B_0242_0017_581D
 * @implements B48B:0242:0017:581D ()
 * @implements B48B:0256:0003:DD16
 * @implements B48B:0259:0010:340C
 * @implements B48B:0269:0034:5F53
 * @implements B48B:02A0:0002:CE3A
 * @implements B48B:02A2:0058:1F2E
 * @implements B48B:02BE:003C:DD44
 * @implements B48B:02DA:0020:1036
 * @implements B48B:02FA:000B:4C0E
 * @implements B48B:0305:002F:4AF9
 * @implements B48B:0325:000F:DBE6
 * @implements B48B:0334:0004:893F
 *
 * Called From: 348B:003E:0005:0000
 */
void f__B48B_0242_0017_581D()
{
l__0242:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__0259;
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
l__0256:
	goto l__0334;
l__0259:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_ax != 0) goto l__0269;
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	goto l__0256;
l__0269:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x4));
	if (emu_ax > emu_get_memory16(emu_es, emu_bx, 0x4)) goto l__02A0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_es, emu_bx, 0x2) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x0) = emu_dx;
	/* Unresolved jump */ emu_ip = 0x0250; emu_last_cs = 0xB48B; emu_last_ip = 0x029B; emu_last_length = 0x0034; emu_last_crc = 0x5F53; emu_call();
l__02A0:
	goto l__02BE;
l__02A2:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x2);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp,  0x8) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp,  0x6) = emu_dx;
l__02BE:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x4));
	if (emu_ax > emu_get_memory16(emu_es, emu_bx, 0x4)) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
		emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2));
		if (emu_ax != 0) goto l__02A2;
	}
l__02DA:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x4));
	if (emu_ax <= emu_get_memory16(emu_es, emu_bx, 0x4)) goto l__0305;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x02FA); f__B48B_0000_001E_7E97();
l__02FA:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp,  0x8) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp,  0x6) = emu_ax;
	goto l__0325;
l__0305:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_get_memory16(emu_es, emu_bx, 0x2) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x0) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_es, emu_bx, 0x2) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x0) = emu_dx;
l__0325:
	emu_get_memory16(emu_ds, 0x00, 0x6D75) = 0x1;
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	goto l__0256;
l__0334:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B48B_03A4_0005_619A()
 *
 * @name f__B48B_03A4_0005_619A
 * @implements B48B:03A4:0005:619A ()
 * @implements B48B:03A9:000B:848D
 * @implements B48B:03B4:001C:8029
 * @implements B48B:03C6:000A:5244
 *
 * Called From: 348B:0043:0005:0000
 */
void f__B48B_03A4_0005_619A()
{
l__03A4:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	goto l__03C6;
l__03A9:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x03B4); emu_cs = 0x34A2; overlay(0x34A2, 0); emu_GUI_Widget_Draw();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x348B) { overlay(0x348B, 1); }
l__03B4:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x2);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp,  0x8) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp,  0x6) = emu_dx;
l__03C6:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__03A9;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
