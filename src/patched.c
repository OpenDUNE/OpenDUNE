/* $Id$ */

#include <assert.h>
#include <stdlib.h>
#include "types.h"
#include "libemu.h"
#include "../decompiled/decompiled.h"

/**
 * Decompiled function f__01F7_0229_0004_BEF7()
 *  Patched for different return-values in rare cases.
 *
 * @name p__01F7_0229_0004_BEF7
 * @implements 01F7:0229:0004:BEF7 ()
 *
 * @define 01F7:0F45:004B:44A0
 * @define 01F7:20B5:0076:64ED
 * @define 01F7:21FA:0012:B06A
 * @define 01F7:0138:0019:8DC5
 * @define 01F7:022D:0003:9E5A
 */
void p__01F7_0229_0004_BEF7()
{
	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, emu_bx,  0x2);
	emu_push(0x022D);
	switch (emu_ip) {
		case 0x0F45: f__01F7_0F45_004B_44A0(); break;
		case 0x20B5: f__01F7_20B5_0076_64ED(); break;
		case 0x21FA: f__01F7_21FA_0012_B06A(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x01F7; emu_last_ip = 0x0229; emu_last_length = 0x0004; emu_last_crc = 0xBEF7;
			emu_call();
			return;
	}

	/* XXX -- One of the above functions doesn't always return the next
	 *  function but some other function. For now we capture this in this
	 *  way. */
	switch (emu_ip) {
		case 0x0138: f__01F7_0138_0019_8DC5(); return;
		case 0x022D: f__01F7_022D_0003_9E5A(); return;
		default: exit(1);
	}
}

/**
 * Decompiled function f__01F7_201F_0021_24DC()
 *  Patched to remove decompiled functions duplications.
 *
 * @name p__01F7_201F_0021_24DC
 * @implements 01F7:201F:0021:24DC ()
 *
 * @define 01F7:2040:0033:F011
 */
void p__01F7_201F_0021_24DC()
{
l__201F:
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ds, emu_si, 0x0));
	emu_push(emu_get_memory16(emu_ds, emu_si, 0x6));
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_ax = emu_get_memory16(emu_ds, emu_si, 0x0);
	emu_bx = emu_get_memory16(emu_ds, emu_si, 0x2);
	emu_cx = emu_get_memory16(emu_ds, emu_si, 0x4);
	emu_dx = emu_get_memory16(emu_ds, emu_si, 0x6);
	emu_di = emu_get_memory16(emu_ds, emu_si, 0xA);
	emu_si = emu_get_memory16(emu_ds, emu_si, 0x8);
	emu_pop(&emu_ds);
	emu_pop(&emu_es);

	emu_ip = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_push(0x2040);
	switch (emu_get_memory8(emu_ss, emu_bp, 0x6)) {
		case 0x10:
			emu_push(emu_bp);
			emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(emu_ip + 3); Interrupt_Video();
			emu_pop(&emu_bp);
			break;

		default:
			assert(!"Invalid video mode call");
	}
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	f__01F7_2040_0033_F011();
}
