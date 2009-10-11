/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2531_0019_0010_2000()
 *
 * @name f__2531_0019_0010_2000
 * @implements 2531:0019:0010:2000 ()
 * @implements 2531:0029:0004:BEB2
 *
 * Called From: 1DB6:0069:0008:B7D2
 */
void f__2531_0019_0010_2000()
{
l__0019:
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax, 0x2531);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x5);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0029); emu_cs = 0x01F7; f__01F7_1E5C_000E_B47A();
	goto l__0029;
l__0029:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
