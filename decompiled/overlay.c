/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Overlay Handler
 *
 * @param entry The entry point of the overlay table.
 *
 * @name overlay
 */
void overlay(uint16 cs, uint8 force)
{
	uint16 ent_ip = (force != 0) ? 0x02 : 0x22;

	if (emu_get_memory8(cs, 0, 0x20) != 0xCD && force != 1) {
		emu_cs = emu_get_memory16(cs, 0, 0x23);
		return;
	}

	/* The overlay is not yet loaded. Do so by calling int 3F */
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x261F; emu_push(ent_ip); f__261F_0008_0033_66ED();
	emu_cs = emu_get_memory16(cs, 0, 0x23);
}
