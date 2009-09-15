/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2531_0019_0010_8C90()
 *
 * @name f__2531_0019_0010_8C90
 * @implements 2531:0019:0010:8C90 ()
 *
 * Called From: 1DB6:0069:0008:87DE
 */
void f__2531_0019_0010_8C90()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, 0x2531);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0029); emu_cs = 0x01F7; f__01F7_1E5C_000E_01FC();
	f__2531_0029_0004_07BA();
}

/**
 * Decompiled function f__2531_0029_0004_07BA()
 *
 * @name f__2531_0029_0004_07BA
 * @implements 2531:0029:0004:07BA ()
 *
 * Called From: 2531:0029:0010:8C90
 */
void f__2531_0029_0004_07BA()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
