/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Overlay Handler for 0x353B
 *
 * @param entry The entry point of the overlay table.
 *
 * @name ovl__353B
 * @implements 353B:0020 (0)
 * @implements 353B:002F (3)
 *
 * Called From: 1FB5:1B80:000F:53C7
 * Called From: 1FB5:1B80:000F:53C7
 * Called From: 261F:006E:0010:F80A
 * Called From: 261F:01B9:001B:EDBF
 * Called From: 261F:01B9:001B:EDBF
 */
void ovl__353B(uint8 entry)
{
	if (emu_get_memory8(0x353B, 0, 0x20) == 0xCD || entry == 0xFF) {
		/* The overlay is not yet loaded. Do so by calling int 3F */
		uint16 ent_ip = (entry == 0xFF) ? 0x02 : (entry * 5) + 0x22;
		emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x261F; emu_push(ent_ip); f__261F_0008_0033_66ED();
	}
	if (entry == 0xFF) return;

	/* Call the overlay function with the current cs it is loaded at */
	emu_cs = emu_get_memory16(0x353B, 0, (entry * 5) + 0x23);
	switch (entry) {
		case 0: f__B53B_0289_001F_95C1(); return;
		case 3: f__B53B_02ED_0019_AA57(); return;
	}
}
