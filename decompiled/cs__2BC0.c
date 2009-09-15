/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2BC0_0004_000F_2F6C()
 *
 * @name f__2BC0_0004_000F_2F6C
 * @implements 2BC0:0004:000F:2F6C ()
 *
 * Called From: B4B1:0139:000B:3E51
 * Called From: B4B1:026E:000B:3E51
 * Called From: B4E0:05FB:001F:0182
 * Called From: B4E0:05FB:0021:0124
 * Called From: B4E0:0640:000C:E654
 * Called From: B4E0:0653:0013:7DF3
 */
void f__2BC0_0004_000F_2F6C()
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
 * Decompiled function f__2BC0_0013_000A_F542()
 *
 * @name f__2BC0_0013_000A_F542
 * @implements 2BC0:0013:000A:F542 ()
 *
 * Called From: 15C2:0282:0015:D52C
 * Called From: 15C2:0595:001E:E72D
 * Called From: 15C2:05F9:0025:F378
 */
void f__2BC0_0013_000A_F542()
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
