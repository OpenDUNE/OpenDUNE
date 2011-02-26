/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

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
	emu_push(0x02FA); emu_GUI_Widget_Link();
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
