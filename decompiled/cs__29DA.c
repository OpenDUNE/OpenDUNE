/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__29DA_00D0_0013_27E9()
 *
 * @name f__29DA_00D0_0013_27E9
 * @implements 29DA:00D0:0013:27E9 ()
 *
 * Called From: 0AEC:0BDF:000F:7E60
 * Called From: 0AEC:0C06:000F:7E60
 * Called From: 0AEC:0F61:000F:7E60
 * Called From: 10E4:15D1:000F:7E60
 * Called From: B495:16AF:000F:7E60
 * Called From: B4E0:0066:000F:7E60
 * Called From: B4F2:0A16:000F:7E60
 * Called From: B511:0CE4:000F:7E60
 * Called From: B511:0D22:000F:7E60
 * Called From: B511:1240:000F:7E60
 * Called From: B511:1298:000F:7E60
 */
void f__29DA_00D0_0013_27E9()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_bx.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.h, emu_bx.h);
	emu_xorb(&emu_bx.h, emu_bx.h);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x,  0x2));
	emu_pop(&emu_bx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
