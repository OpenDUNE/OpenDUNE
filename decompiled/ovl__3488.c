/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Overlay Handler for 0x3488
 *
 * @param entry The entry point of the overlay table.
 *
 * @name ovl__3488
 * @implements 3488:0020 (0)
 *
 * Called From: 261F:01B9:001B:DA28
 * Called From: B4ED:0476:0023:BB05
 * Called From: B503:0309:0024:BFE8
 * Called From: B503:03B5:0020:B93D
 * Called From: B503:0492:0022:B8B0
 * Called From: B503:0EFF:0016:71D2
 */
void ovl__3488(uint8 entry)
{
	if (emu_get_memory8(0x3488, 0, 0x20) == 0xCD || entry == 0xFF) {
		/* The overlay is not yet loaded. Do so by calling int 3F */
		uint16 ent_ip = (entry == 0xFF) ? 0x02 : (entry * 5) + 0x22;
		emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x261F; emu_push(ent_ip); f__261F_0008_0033_9069();
	}
	if (entry == 0xFF) return;

	/* Call the overlay function with the current cs it is loaded at */
	emu_cs = emu_get_memory16(0x3488, 0, (entry * 5) + 0x23);
	switch (entry) {
		case 0: f__B488_0000_0027_30C7(); return;
	}
}
