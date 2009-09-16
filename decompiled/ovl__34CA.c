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
 * Called From: 10E4:20D4:0025:D60D
 * Called From: 261F:01B9:001B:EDBF
 * Called From: B495:1287:0020:F6F3
 * Called From: B4B8:1F99:0009:0769
 * Called From: B4BE:027D:0009:0769
 * Called From: B4BE:031E:001F:D48D
 * Called From: B4DA:0048:0021:F997
 * Called From: B503:00B2:0020:07EE
 * Called From: B503:02B6:001E:8AB7
 * Called From: B503:0354:001E:BDB7
 * Called From: B503:0410:001E:A1B7
 * Called From: B511:10C9:0009:0769
 * Called From: B511:138B:0009:0769
 * Called From: B518:0B4E:0022:2268
 */
void ovl__34CA(uint8 entry)
{
	if (emu_get_memory8(0x34CA, 0, 0x20) == 0xCD || entry == 0xFF) {
		/* The overlay is not yet loaded. Do so by calling int 3F */
		uint16 ent_ip = (entry == 0xFF) ? 0x02 : (entry * 5) + 0x22;
		emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x261F; emu_push(ent_ip); f__261F_0008_0033_66ED();
	}
	if (entry == 0xFF) return;

	/* Call the overlay function with the current cs it is loaded at */
	emu_cs = emu_get_memory16(0x34CA, 0, (entry * 5) + 0x23);
	switch (entry) {
		case 0: f__B4CA_020F_0017_A939(); return;
	}
}
