/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__22A3_000D_0010_9291()
 *
 * @name f__22A3_000D_0010_9291
 * @implements 22A3:000D:0010:9291 ()
 *
 * Called From: 25C4:006D:0018:5796
 */
void f__22A3_000D_0010_9291()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax, 0x24FD);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x49);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x001D); emu_cs = 0x22A6; f__22A6_0004_0003_DA0F();
	f__22A3_001D_0014_EB0D();
}

/**
 * Decompiled function f__22A3_001D_0014_EB0D()
 *
 * @name f__22A3_001D_0014_EB0D
 * @implements 22A3:001D:0014:EB0D ()
 *
 */
void f__22A3_001D_0014_EB0D()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x7096));
	emu_movb(&emu_ah, 0x0);
	emu_negw(&emu_ax, emu_ax);
	emu_sbbw(&emu_ax, emu_ax);
	emu_incw(&emu_ax);
	emu_movb(&emu_get_memory8(emu_ds, 0x00, 0x7097), emu_al);
	emu_movw(&emu_ax, 0x1);
	f__22A3_0031_0002_2597(); return;
}

/**
 * Decompiled function f__22A3_0031_0002_2597()
 *
 * @name f__22A3_0031_0002_2597
 * @implements 22A3:0031:0002:2597 ()
 *
 * Called From: 22A3:002F:0014:EB0D
 */
void f__22A3_0031_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
