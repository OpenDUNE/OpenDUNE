/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__29DA_00D0_0013_E21A()
 *
 * @name f__29DA_00D0_0013_E21A
 * @implements 29DA:00D0:0013:E21A ()
 *
 * Called From: 0AEC:0BDF:000F:E74D
 * Called From: 0AEC:0C06:000F:E74D
 * Called From: 0AEC:0F61:000F:E74D
 * Called From: 10E4:15D1:000F:E74D
 * Called From: B495:16AF:000F:E74D
 * Called From: B4E0:0066:000F:E74D
 * Called From: B4F2:0356:000F:E74D
 * Called From: B4F2:0A16:000F:E74D
 * Called From: B511:0CE4:000F:E74D
 * Called From: B511:0D22:000F:E74D
 * Called From: B511:1240:000F:E74D
 * Called From: B511:1298:000F:E74D
 */
void f__29DA_00D0_0013_E21A()
{
l__00D0:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_bx);
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_ah = emu_bh;
	emu_xorb(&emu_bh, emu_bh);
	emu_al = emu_get_memory8(emu_cs, emu_bx, 0x2);
	emu_pop(&emu_bx);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
