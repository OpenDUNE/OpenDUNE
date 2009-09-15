/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B536_0129_000A_DB22()
 *
 * @name f__B536_0129_000A_DB22
 * @implements B536:0129:000A:DB22 ()
 *
 * Called From: 3536:002F:0005:1ED4
 */
void f__B536_0129_000A_DB22()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movb(&emu_get_memory8(emu_ds, 0x00,  0x6C8C), 0x0);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
