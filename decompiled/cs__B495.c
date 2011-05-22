/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B495_1A14_0013_AE3F()
 *
 * @name f__B495_1A14_0013_AE3F
 * @implements B495:1A14:0013:AE3F ()
 * @implements B495:1A27:0002:2597
 *
 * Called From: 3495:0098:0005:0000
 */
void f__B495_1A14_0013_AE3F()
{
l__1A14:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x5);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_subw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x5));
	goto l__1A27;
l__1A27:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
