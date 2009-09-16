/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Overlay Handler for 0x34DA
 *
 * @param entry The entry point of the overlay table.
 *
 * @name ovl__34DA
 * @implements 34DA:0020 (0)
 * @implements 34DA:0025 (1)
 * @implements 34DA:002A (2)
 * @implements 34DA:002F (3)
 * @implements 34DA:0034 (4)
 * @implements 34DA:0039 (5)
 * @implements 34DA:003E (6)
 *
 * Called From: 1423:0436:0008:F0D0
 * Called From: 261F:01B9:001B:DA28
 * Called From: 261F:01B9:001B:DA28
 * Called From: 261F:01B9:001B:DA28
 * Called From: 261F:01B9:001B:DA28
 * Called From: 261F:01B9:001B:DA28
 * Called From: 261F:01B9:001B:DA28
 * Called From: 261F:01B9:001B:DA28
 * Called From: 261F:01B9:001B:DA28
 * Called From: 261F:01B9:001B:DA28
 * Called From: 261F:01B9:001B:DA28
 * Called From: 261F:01B9:001B:DA28
 * Called From: B4E0:002C:000F:A2B4
 * Called From: B4E0:00ED:0007:28D0
 * Called From: B4E0:0161:0008:55E0
 * Called From: B4E0:0881:000A:10B0
 * Called From: B511:0E5A:000F:4CB0
 * Called From: B511:0EE4:000B:D8B2
 * Called From: B511:0F50:0024:18D3
 * Called From: B511:0F86:0008:55E0
 * Called From: B511:0F9D:000B:EE95
 * Called From: B511:141D:0029:3356
 * Called From: B511:1482:001B:60AA
 * Called From: B527:00F8:000B:4061
 */
void ovl__34DA(uint8 entry)
{
	if (emu_get_memory8(0x34DA, 0, 0x20) == 0xCD || entry == 0xFF) {
		/* The overlay is not yet loaded. Do so by calling int 3F */
		uint16 ent_ip = (entry == 0xFF) ? 0x02 : (entry * 5) + 0x22;
		emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x261F; emu_push(ent_ip); f__261F_0008_0033_9069();
	}
	if (entry == 0xFF) return;

	/* Call the overlay function with the current cs it is loaded at */
	emu_cs = emu_get_memory16(0x34DA, 0, (entry * 5) + 0x23);
	switch (entry) {
		case 0: f__B4DA_0000_002C_ACE1(); return;
		case 1: f__B4DA_02E0_0023_77C4(); return;
		case 2: f__B4DA_0308_0018_D7B1(); return;
		case 3: f__B4DA_0A8E_0025_F0AA(); return;
		case 4: f__B4DA_0AB8_002A_328A(); return;
		case 5: f__B4DA_1099_0024_A337(); return;
		case 6: f__B4DA_16CB_001D_298B(); return;
	}
}
