/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2BEE_000E_0009_8881()
 *
 * @name f__2BEE_000E_0009_8881
 * @implements 2BEE:000E:0009:8881 ()
 *
 * Called From: 2533:0024:001C:74EC
 * Called From: 2533:0024:0005:716B
 */
void f__2BEE_000E_0009_8881()
{
	emu_movw(&emu_dx, 0x3DA);
	emu_inb(&emu_al, emu_dx);
	emu_andb(&emu_al, 0x8);
	emu_xorb(&emu_ah, emu_ah);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
