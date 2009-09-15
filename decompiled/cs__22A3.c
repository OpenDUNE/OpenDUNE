/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__22A3_000D_0010_0CEE()
 *
 * @name f__22A3_000D_0010_0CEE
 * @implements 22A3:000D:0010:0CEE ()
 *
 * Called From: 25C4:006D:0018:9A7C
 */
void f__22A3_000D_0010_0CEE()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, 0x24FD);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x49);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x001D); emu_cs = 0x22A6; f__22A6_0004_0003_05A8();
	f__22A3_001D_0014_DDF2();
}

/**
 * Decompiled function f__22A3_001D_0014_DDF2()
 *
 * @name f__22A3_001D_0014_DDF2
 * @implements 22A3:001D:0014:DDF2 ()
 *
 * Called From: 22A3:001D:0010:0CEE
 */
void f__22A3_001D_0014_DDF2()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x7096));
	emu_movb(&emu_ax.h, 0x0);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_sbbw(&emu_ax.x, emu_ax.x);
	emu_incw(&emu_ax.x);
	emu_movb(&emu_get_memory8(emu_ds, 0x00,  0x7097), emu_ax.l);
	emu_movw(&emu_ax.x, 0x1);
	f__22A3_0031_0002_00E2(); return;
}

/**
 * Decompiled function f__22A3_0031_0002_00E2()
 *
 * @name f__22A3_0031_0002_00E2
 * @implements 22A3:0031:0002:00E2 ()
 *
 * Called From: 22A3:002F:0014:DDF2
 */
void f__22A3_0031_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
