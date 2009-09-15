/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Overlay Handler for 0x34E6
 *
 * @param entry The entry point of the overlay table.
 *
 * @name ovl__34E6
 * @implements 34E6:0025 (1)
 * @implements 34E6:002A (2)
 *
 * Called From: 261F:01B9:001B:DA28
 * Called From: B4B8:2066:001D:2C93
 * Called From: B4B8:2098:001D:61A2
 */
void ovl__34E6(uint8 entry)
{
	if (emu_get_memory8(0x34E6, 0, 0x20) == 0xCD || entry == 0xFF) {
		/* The overlay is not yet loaded. Do so by calling int 3F */
		uint16 ent_ip = (entry == 0xFF) ? 0x02 : (entry * 5) + 0x22;
		emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x261F; emu_push(ent_ip); f__261F_0008_0033_9069();
	}
	if (entry == 0xFF) return;

	/* Call the overlay function with the current cs it is loaded at */
	emu_cs = emu_get_memory16(0x34E6, 0, (entry * 5) + 0x23);
	switch (entry) {
		case 1: f__B4E6_0108_004A_24E9(); return;
		case 2: f__B4E6_0200_0091_88EF(); return;
	}
}
