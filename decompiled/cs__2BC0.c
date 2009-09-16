/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2BC0_0004_000F_950B()
 *
 * @name f__2BC0_0004_000F_950B
 * @implements 2BC0:0004:000F:950B ()
 *
 * Called From: B4B1:0139:000B:B36D
 * Called From: B4B1:026E:000B:B36D
 * Called From: B4B1:0451:001C:226F
 * Called From: B4B1:049B:001D:92B3
 * Called From: B4E0:05FB:001F:D0A6
 * Called From: B4E0:05FB:0021:C9E6
 * Called From: B4E0:0640:000C:36ED
 * Called From: B4E0:0653:0013:A738
 * Called From: B511:08BC:001B:5CCA
 */
void f__2BC0_0004_000F_950B()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_xchgb(&emu_dx.l, &emu_ax.h);
	emu_xchgb(&emu_dx.h, &emu_ax.l);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__2BC0_0013_000A_39BD()
 *
 * @name f__2BC0_0013_000A_39BD
 * @implements 2BC0:0013:000A:39BD ()
 *
 * Called From: 15C2:0282:0015:F826
 * Called From: 15C2:0595:001E:C033
 * Called From: 15C2:05F9:0025:FC39
 */
void f__2BC0_0013_000A_39BD()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xchgb(&emu_ax.l, &emu_ax.h);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
