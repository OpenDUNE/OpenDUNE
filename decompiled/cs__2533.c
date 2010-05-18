/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2533_000D_001C_74EC()
 *
 * @name f__2533_000D_001C_74EC
 * @implements 2533:000D:001C:74EC ()
 * @implements 2533:0024:0005:716B
 * @implements 2533:0029:0007:FBEF
 * @implements 2533:0030:0013:9776
 * @implements 2533:0031:0012:9FB6
 * @implements 2533:0043:0009:47C5
 * @implements 2533:0045:0007:07DC
 *
 * Called From: 25C4:03C8:0005:065C
 */
void f__2533_000D_001C_74EC()
{
l__000D:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_ax, emu_ax);
	emu_di = emu_ax;
	emu_si = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x76B6) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x76B4) = 0xF;
l__0024:
	emu_push(emu_cs); emu_push(0x0029); emu_cs = 0x2BEE; emu_Video_IsInVSync();
l__0029:
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__0030;
	emu_incw(&emu_di);
	goto l__0031;
l__0030:
	emu_incw(&emu_si);
l__0031:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76B4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B6));
	if (emu_ax != 0) goto l__0024;
	emu_cmpw(&emu_di, emu_si);
	if ((int16)emu_di <= (int16)emu_si) goto l__0043;
	emu_ax = 0x1;
	goto l__0045;
l__0043:
	emu_xorw(&emu_ax, emu_ax);
l__0045:
	emu_get_memory16(emu_ds, 0x00, 0x9937) = emu_ax;
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
