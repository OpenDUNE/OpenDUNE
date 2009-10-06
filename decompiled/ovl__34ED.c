/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Overlay Handler for 0x34ED
 *
 * @param entry The entry point of the overlay table.
 *
 * @name ovl__34ED
 * @implements 34ED:0020 (0)
 * @implements 34ED:0025 (1)
 * @implements 34ED:002A (2)
 *
 * Called From: 261F:01B9:001B:EDBF
 * Called From: B4AE:010F:0024:E400
 * Called From: B4AE:0120:0006:9AE8
 * Called From: B4AE:012A:0005:0EE9
 * Called From: B4BE:005C:002A:2066
 * Called From: B4BE:0064:0008:3461
 * Called From: B4BE:006E:0005:0EE9
 */
void ovl__34ED(uint8 entry)
{
	if (emu_get_memory8(0x34ED, 0, 0x20) == 0xCD || entry == 0xFF) {
		/* The overlay is not yet loaded. Do so by calling int 3F */
		uint16 ent_ip = (entry == 0xFF) ? 0x02 : (entry * 5) + 0x22;
		emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x261F; emu_push(ent_ip); f__261F_0008_0033_66ED();
	}
	if (entry == 0xFF) return;

	/* Call the overlay function with the current cs it is loaded at */
	emu_cs = emu_get_memory16(0x34ED, 0, (entry * 5) + 0x23);
	switch (entry) {
		case 0: f__B4ED_0000_0079_AC5D(); return;
		case 1: f__B4ED_0184_0010_CD7E(); return;
		case 2: f__B4ED_0200_000F_1FF4(); return;
	}
}
