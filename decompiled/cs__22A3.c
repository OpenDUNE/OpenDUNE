/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__22A3_000D_0010_9291()
 *
 * @name f__22A3_000D_0010_9291
 * @implements 22A3:000D:0010:9291 ()
 * @implements 22A3:001D:0014:EB0D
 * @implements 22A3:0031:0002:2597
 *
 * Called From: 25C4:006D:0018:5796
 */
void f__22A3_000D_0010_9291()
{
l__000D:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = 0x24FD;
	emu_push(emu_ax);
	emu_ax = 0x49;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x001D); emu_cs = 0x22A6; f__22A6_0004_0003_DA0F();
l__001D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x7096);
	emu_ah = 0x0;
	emu_negw(&emu_ax, emu_ax);
	emu_sbbw(&emu_ax, emu_ax);
	emu_incw(&emu_ax);
	emu_get_memory8(emu_ds, 0x00, 0x7097) = emu_al;
	emu_ax = 0x1;
	goto l__0031;
l__0031:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
