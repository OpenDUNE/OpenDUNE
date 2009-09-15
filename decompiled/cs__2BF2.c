/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2BF2_0000_0007_3E72()
 *
 * @name f__2BF2_0000_0007_3E72
 * @implements 2BF2:0000:0007:3E72 ()
 *
 * Called From: 2649:001A:0008:F3DE
 */
void f__2BF2_0000_0007_3E72()
{
	emu_push(emu_bx.x);
	emu_push(emu_es);
	emu_movw(&emu_ax.x, 0x4300);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x0007); f__0070_0178_0005_1C86();
	f__2BF2_0007_0009_D732();
}

/**
 * Decompiled function f__2BF2_0007_0009_D732()
 *
 * @name f__2BF2_0007_0009_D732
 * @implements 2BF2:0007:0009:D732 ()
 *
 * Called From: 2BF2:0007:0007:3E72
 */
void f__2BF2_0007_0009_D732()
{
	emu_cmpb(&emu_ax.l, 0x80);
	if (!emu_flags.zf) { f__2BF2_0016_000E_B131(); return; }
	emu_movw(&emu_ax.x, 0x4310);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = emu_get_memory16(0, 0, 0x2F * 4 + 2); emu_push(0x0010); emu_ip = emu_get_memory16(0, 0, 0x2F * 4 + 0); emu_last_cs = 0x2BF2; emu_last_ip = 0x000E; emu_last_length = 0x0009; emu_last_crc = 0xD732; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__2BF2_0016_000E_B131()
 *
 * @name f__2BF2_0016_000E_B131
 * @implements 2BF2:0016:000E:B131 ()
 *
 * Called From: 2BF2:0009:0009:D732
 */
void f__2BF2_0016_000E_B131()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6E3E), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6E40), emu_dx.x);
	emu_pop(&emu_es);
	emu_pop(&emu_bx.x);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
