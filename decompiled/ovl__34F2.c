/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Overlay Handler for 0x34F2
 *
 * @param entry The entry point of the overlay table.
 *
 * @name ovl__34F2
 * @implements 34F2:0020 (0)
 * @implements 34F2:0025 (1)
 * @implements 34F2:0061 (13)
 *
 * Called From: 261F:01B9:001B:DA28
 * Called From: 261F:01B9:001B:DA28
 * Called From: B4A2:06AC:0030:FF82
 * Called From: B4A2:0941:0011:D731
 * Called From: B4B8:1A3A:0005:12E0
 */
void ovl__34F2(uint8 entry)
{
	if (emu_get_memory8(0x34F2, 0, 0x20) == 0xCD || entry == 0xFF) {
		/* The overlay is not yet loaded. Do so by calling int 3F */
		uint16 ent_ip = (entry == 0xFF) ? 0x02 : (entry * 5) + 0x22;
		emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x261F; emu_push(ent_ip); f__261F_0008_0033_9069();
	}
	if (entry == 0xFF) return;

	/* Call the overlay function with the current cs it is loaded at */
	emu_cs = emu_get_memory16(0x34F2, 0, (entry * 5) + 0x23);
	switch (entry) {
		case 0: f__B4F2_0000_000D_D456(); return;
		case 1: f__B4F2_009C_002E_5854(); return;
		case 13: f__B4F2_0F68_0011_7B02(); return;
	}
}
