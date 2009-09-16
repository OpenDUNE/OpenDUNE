/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Overlay Handler for 0x350B
 *
 * @param entry The entry point of the overlay table.
 *
 * @name ovl__350B
 * @implements 350B:0020 (0)
 * @implements 350B:0025 (1)
 * @implements 350B:002A (2)
 * @implements 350B:002F (3)
 * @implements 350B:0034 (4)
 * @implements 350B:0039 (5)
 *
 * Called From: 261F:01B9:001B:DA28
 * Called From: B511:0938:0012:3F79
 * Called From: B511:0972:0012:3FD9
 * Called From: B511:09AC:0012:3F89
 * Called From: B511:09E6:0012:3E39
 * Called From: B511:0A20:0012:3F29
 * Called From: B511:0A5A:0012:3EE9
 */
void ovl__350B(uint8 entry)
{
	if (emu_get_memory8(0x350B, 0, 0x20) == 0xCD || entry == 0xFF) {
		/* The overlay is not yet loaded. Do so by calling int 3F */
		uint16 ent_ip = (entry == 0xFF) ? 0x02 : (entry * 5) + 0x22;
		emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x261F; emu_push(ent_ip); f__261F_0008_0033_9069();
	}
	if (entry == 0xFF) return;

	/* Call the overlay function with the current cs it is loaded at */
	emu_cs = emu_get_memory16(0x350B, 0, (entry * 5) + 0x23);
	switch (entry) {
		case 0: f__B50B_0000_0029_BAE2(); return;
		case 1: f__B50B_0268_0012_BA68(); return;
		case 2: f__B50B_0326_0016_8231(); return;
		case 3: f__B50B_0394_001F_501F(); return;
		case 4: f__B50B_041C_001E_065C(); return;
		case 5: f__B50B_04A1_001A_FCEF(); return;
	}
}
