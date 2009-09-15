/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Overlay Handler for 0x34E0
 *
 * @param entry The entry point of the overlay table.
 *
 * @name ovl__34E0
 * @implements 34E0:0020 (0)
 * @implements 34E0:002A (2)
 * @implements 34E0:003E (6)
 *
 * Called From: 261F:01B9:001B:DA28
 * Called From: B4A2:06AC:0030:FF82
 * Called From: B4E9:03BE:0009:E7A8
 * Called From: B520:00D2:001C:4FA0
 * Called From: B520:084B:001A:0127
 */
void ovl__34E0(uint8 entry)
{
	if (emu_get_memory8(0x34E0, 0, 0x20) == 0xCD || entry == 0xFF) {
		/* The overlay is not yet loaded. Do so by calling int 3F */
		uint16 ent_ip = (entry == 0xFF) ? 0x02 : (entry * 5) + 0x22;
		emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x261F; emu_push(ent_ip); f__261F_0008_0033_9069();
	}
	if (entry == 0xFF) return;

	/* Call the overlay function with the current cs it is loaded at */
	emu_cs = emu_get_memory16(0x34E0, 0, (entry * 5) + 0x23);
	switch (entry) {
		case 0: f__B4E0_0000_000F_EF71(); return;
		case 2: f__B4E0_0300_001B_87C2(); return;
		case 6: f__B4E0_0A86_000E_02A6(); return;
	}
}
