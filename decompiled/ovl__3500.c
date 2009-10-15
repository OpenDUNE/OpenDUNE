/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Overlay Handler for 0x3500
 *
 * @param entry The entry point of the overlay table.
 *
 * @name ovl__3500
 * @implements 3500:0020 (0)
 *
 * Called From: 1423:043F:0009:66BD
 * Called From: 261F:01B9:001B:EDBF
 * Called From: B480:01D8:0007:7AE1
 * Called From: B480:02D7:0008:84DA
 * Called From: B4B8:1D5D:0005:1E52
 * Called From: B511:047D:000B:28F6
 * Called From: B511:06FA:0005:1E52
 * Called From: B53B:030E:000D:8D50
 */
void ovl__3500(uint8 entry)
{
	if (emu_get_memory8(0x3500, 0, 0x20) == 0xCD || entry == 0xFF) {
		/* The overlay is not yet loaded. Do so by calling int 3F */
		uint16 ent_ip = (entry == 0xFF) ? 0x02 : (entry * 5) + 0x22;
		emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x261F; emu_push(ent_ip); f__261F_0008_0033_66ED();
	}
	if (entry == 0xFF) return;

	/* Call the overlay function with the current cs it is loaded at */
	emu_cs = emu_get_memory16(0x3500, 0, (entry * 5) + 0x23);
	switch (entry) {
		case 0: f__B500_0000_0008_FE1F(); return;
	}
}
