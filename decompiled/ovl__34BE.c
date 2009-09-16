/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Overlay Handler for 0x34BE
 *
 * @param entry The entry point of the overlay table.
 *
 * @name ovl__34BE
 * @implements 34BE:0020 (0)
 *
 * Called From: 261F:01B9:001B:EDBF
 * Called From: B4B8:1C61:0005:9EFD
 */
void ovl__34BE(uint8 entry)
{
	if (emu_get_memory8(0x34BE, 0, 0x20) == 0xCD || entry == 0xFF) {
		/* The overlay is not yet loaded. Do so by calling int 3F */
		uint16 ent_ip = (entry == 0xFF) ? 0x02 : (entry * 5) + 0x22;
		emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x261F; emu_push(ent_ip); f__261F_0008_0033_66ED();
	}
	if (entry == 0xFF) return;

	/* Call the overlay function with the current cs it is loaded at */
	emu_cs = emu_get_memory16(0x34BE, 0, (entry * 5) + 0x23);
	switch (entry) {
		case 0: f__B4BE_0000_000C_E7F4(); return;
	}
}
