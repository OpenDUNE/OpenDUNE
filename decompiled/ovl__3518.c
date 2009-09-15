/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Overlay Handler for 0x3518
 *
 * @param entry The entry point of the overlay table.
 *
 * @name ovl__3518
 * @implements 3518:0020 (0)
 * @implements 3518:0025 (1)
 * @implements 3518:0039 (5)
 * @implements 3518:0066 (14)
 *
 * Called From: 1423:037B:0029:38DE
 * Called From: 261F:01B9:001B:DA28
 * Called From: 261F:01B9:001B:DA28
 * Called From: 261F:01B9:001B:DA28
 * Called From: 261F:01B9:001B:DA28
 * Called From: B4A2:06AC:0030:FF82
 * Called From: B4B8:1DFA:0009:F59B
 * Called From: B527:00F8:000B:4061
 */
void ovl__3518(uint8 entry)
{
	if (emu_get_memory8(0x3518, 0, 0x20) == 0xCD || entry == 0xFF) {
		/* The overlay is not yet loaded. Do so by calling int 3F */
		uint16 ent_ip = (entry == 0xFF) ? 0x02 : (entry * 5) + 0x22;
		emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x261F; emu_push(ent_ip); f__261F_0008_0033_9069();
	}
	if (entry == 0xFF) return;

	/* Call the overlay function with the current cs it is loaded at */
	emu_cs = emu_get_memory16(0x3518, 0, (entry * 5) + 0x23);
	switch (entry) {
		case 0: f__B518_0000_0025_E9E8(); return;
		case 1: f__B518_0558_0010_266B(); return;
		case 5: f__B518_0B0D_000E_9931(); return;
		case 14: f__B518_14F2_003E_63EE(); return;
	}
}
