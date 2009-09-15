/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2BEE_000E_0009_9317()
 *
 * @name f__2BEE_000E_0009_9317
 * @implements 2BEE:000E:0009:9317 ()
 *
 * Called From: 2533:0024:0005:104E
 * Called From: 2533:0024:001C:DBFD
 */
void f__2BEE_000E_0009_9317()
{
	emu_movw(&emu_dx.x, 0x3DA);
	emu_inb(&emu_ax.l, emu_dx.x);
	emu_andb(&emu_ax.l, 0x8);
	emu_xorb(&emu_ax.h, emu_ax.h);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
