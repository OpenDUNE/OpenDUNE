/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__24FD_000A_000B_2043()
 *
 * @name f__24FD_000A_000B_2043
 * @implements 24FD:000A:000B:2043 ()
 * @implements 24FD:0015:0015:F428
 * @implements 24FD:002A:001F:D95C
 * @implements 24FD:003E:000B:81CA
 *
 * Called From: 0642:0B27:0009:8AB2
 * Called From: 1DD7:1D99:000F:46C5
 * Called From: B4E6:00A5:000C:3F1A
 * Called From: B4E6:00D0:0009:B4B2
 * Called From: B503:001A:0009:BCB2
 */
void f__24FD_000A_000B_2043()
{
l__000A:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	goto l__003E;
l__0015:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76AA);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76A8);
	emu_addw(&emu_dx, 0x1);
	emu_adcw(&emu_ax, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	goto l__002A;
l__002A:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AA));
	if (emu_ax > emu_get_memory16(emu_ds, 0x00, 0x76AA)) goto l__002A;
	if (emu_ax >= emu_get_memory16(emu_ds, 0x00, 0x76AA)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76A8));
		if (emu_dx >= emu_get_memory16(emu_ds, 0x00, 0x76A8)) goto l__002A;
	}
l__003E:
	emu_ax = emu_bx;
	emu_decw(&emu_bx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0015;
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
