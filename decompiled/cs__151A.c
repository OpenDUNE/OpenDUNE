/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__151A_02C8_0016_FA9C()
 *
 * @name f__151A_02C8_0016_FA9C
 * @implements 151A:02C8:0016:FA9C ()
 * @implements 151A:02DE:0008:4F72
 * @implements 151A:02E6:0002:2597
 *
 * Called From: 151A:025B:0012:A9B9
 */
void f__151A_02C8_0016_FA9C()
{
l__02C8:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xF));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xD));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x02DE); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0000_0019_F96A();
l__02DE:
	emu_addw(&emu_sp, 0x6);
	emu_ax = 0x1;
	goto l__02E6;
l__02E6:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
