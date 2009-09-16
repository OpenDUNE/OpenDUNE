/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Overlay Handler for 0x3533
 *
 * @param entry The entry point of the overlay table.
 *
 * @name ovl__3533
 * @implements 3533:0020 (0)
 *
 * Called From: 261F:01B9:001B:EDBF
 * Called From: B4B5:0469:000A:B659
 * Called From: B4B5:0FFA:000B:3C53
 */
void ovl__3533(uint8 entry)
{
	if (emu_get_memory8(0x3533, 0, 0x20) == 0xCD || entry == 0xFF) {
		/* The overlay is not yet loaded. Do so by calling int 3F */
		uint16 ent_ip = (entry == 0xFF) ? 0x02 : (entry * 5) + 0x22;
		emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x261F; emu_push(ent_ip); f__261F_0008_0033_66ED();
	}
	if (entry == 0xFF) return;

	/* Call the overlay function with the current cs it is loaded at */
	emu_cs = emu_get_memory16(0x3533, 0, (entry * 5) + 0x23);
	switch (entry) {
		case 0: f__B533_0000_0010_8273(); return;
	}
}
