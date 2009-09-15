/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Overlay Handler for 0x34CA
 *
 * @param entry The entry point of the overlay table.
 *
 * @name ovl__34CA
 * @implements 34CA:0020 (0)
 *
 * Called From: 10E4:20D4:0025:AD37
 * Called From: 261F:01B9:001B:DA28
 * Called From: B495:1287:0020:44EB
 * Called From: B4B8:1F99:0009:C400
 * Called From: B4BE:027D:0009:C400
 * Called From: B4BE:031E:001F:2691
 * Called From: B4DA:0048:0021:5D63
 * Called From: B503:00B2:0020:6EDD
 * Called From: B503:02B6:001E:22A4
 * Called From: B503:0354:001E:15A4
 * Called From: B503:0410:001E:09A4
 * Called From: B511:10C9:0009:C400
 * Called From: B511:138B:0009:C400
 * Called From: B518:0B4E:0022:716B
 */
void ovl__34CA(uint8 entry)
{
	if (emu_get_memory8(0x34CA, 0, 0x20) == 0xCD || entry == 0xFF) {
		/* The overlay is not yet loaded. Do so by calling int 3F */
		uint16 ent_ip = (entry == 0xFF) ? 0x02 : (entry * 5) + 0x22;
		emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x261F; emu_push(ent_ip); f__261F_0008_0033_9069();
	}
	if (entry == 0xFF) return;

	/* Call the overlay function with the current cs it is loaded at */
	emu_cs = emu_get_memory16(0x34CA, 0, (entry * 5) + 0x23);
	switch (entry) {
		case 0: f__B4CA_020F_0017_B156(); return;
	}
}
