/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Overlay Handler for 0x3495
 *
 * @param entry The entry point of the overlay table.
 *
 * @name ovl__3495
 * @implements 3495:0020 (0)
 * @implements 3495:0025 (1)
 * @implements 3495:002A (2)
 * @implements 3495:002F (3)
 * @implements 3495:0034 (4)
 * @implements 3495:003E (6)
 * @implements 3495:0098 (24)
 *
 * Called From: 01F7:3005:001C:0D8F
 * Called From: 01F7:3058:0037:F0ED
 * Called From: 01F7:307E:0010:2E11
 * Called From: 0C3A:17C0:000C:FDB9
 * Called From: 261F:01B9:001B:DA28
 * Called From: B4A2:06AC:0030:FF82
 * Called From: B4A2:06AC:0030:FF82
 * Called From: B4A2:06AC:0030:FF82
 * Called From: B4A2:06AC:0030:FF82
 * Called From: B4A2:06AC:0030:FF82
 * Called From: B4A2:06AC:0030:FF82
 * Called From: B4A2:06AC:0030:FF82
 * Called From: B4A2:06AC:0030:FF82
 * Called From: B4A2:06AC:0030:FF82
 */
void ovl__3495(uint8 entry)
{
	if (emu_get_memory8(0x3495, 0, 0x20) == 0xCD || entry == 0xFF) {
		/* The overlay is not yet loaded. Do so by calling int 3F */
		uint16 ent_ip = (entry == 0xFF) ? 0x02 : (entry * 5) + 0x22;
		emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x261F; emu_push(ent_ip); f__261F_0008_0033_9069();
	}
	if (entry == 0xFF) return;

	/* Call the overlay function with the current cs it is loaded at */
	emu_cs = emu_get_memory16(0x3495, 0, (entry * 5) + 0x23);
	switch (entry) {
		case 0: f__B495_0000_0022_74CE(); return;
		case 1: f__B495_00FE_0017_557B(); return;
		case 2: f__B495_01CB_0016_E518(); return;
		case 3: f__B495_0288_001F_143C(); return;
		case 4: f__B495_030B_001D_8AED(); return;
		case 6: f__B495_03B9_0008_3F8A(); return;
		case 24: f__B495_1A14_0013_03AE(); return;
	}
}
