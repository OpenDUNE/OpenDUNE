/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__176C_1F21_001C_8C6C()
 *
 * @name f__176C_1F21_001C_8C6C
 * @implements 176C:1F21:001C:8C6C ()
 * @implements 176C:1F3D:0011:CE3C
 * @implements 176C:1F4A:0004:68F2
 * @implements 176C:1F4E:0003:2E57
 *
 * Called From: 1319:00B3:000B:6FE3
 * Called From: 1319:0109:000B:6FD3
 * Called From: 1319:01BE:000B:6FD3
 * Called From: 1319:035B:000B:6FF3
 * Called From: 1319:0523:0006:FC3B
 * Called From: 1319:063A:0010:D054
 */
void f__176C_1F21_001C_8C6C()
{
l__1F21:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_cl = 0x5;
	emu_shlw(&emu_ax, emu_cl);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x1F3D); emu_cs = 0x1A34; emu_Unit_Unknown3146();
l__1F3D:
	emu_addw(&emu_sp, 0x8);
	emu_si = emu_ax;
	emu_cmpw(&emu_si, 0xFFFF);
	if (emu_si == 0xFFFF) {
		emu_si = 0x100;
	}
l__1F4A:
	emu_ax = emu_si;
	goto l__1F4E;
l__1F4E:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
