/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Overlay Handler for 0x34A2
 *
 * @param entry The entry point of the overlay table.
 *
 * @name ovl__34A2
 * @implements 34A2:0020 (0)
 * @implements 34A2:002A (2)
 *
 * Called From: 0642:0317:000E:B70A
 * Called From: 10E4:17FA:000D:DB29
 * Called From: 10E4:215F:000A:ACA3
 * Called From: 10E4:217C:000A:ACA3
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
 * Called From: 261F:01B9:001B:DA28
 * Called From: 261F:01B9:001B:DA28
 * Called From: 261F:01B9:001B:DA28
 * Called From: 261F:01B9:001B:DA28
 * Called From: B48B:00AC:0029:5A9B
 * Called From: B48B:00E1:0029:AABE
 * Called From: B48B:019B:001B:F071
 * Called From: B48B:020F:0013:7103
 * Called From: B48B:03AF:000B:E626
 * Called From: B495:007F:000E:89CF
 * Called From: B4DA:0C12:000C:4E03
 * Called From: B4E0:016F:000E:4E08
 * Called From: B4E0:037B:002F:F7C5
 * Called From: B4E0:03A9:002C:3036
 * Called From: B4E0:09AE:000E:149F
 * Called From: B4E0:0A21:000A:ACA3
 * Called From: B4E0:0A3E:000A:ACA3
 * Called From: B4E0:0EAE:0017:5038
 * Called From: B4E9:021E:001A:70F8
 * Called From: B4F2:0199:000D:1819
 * Called From: B4F2:03B2:000D:1819
 * Called From: B4F2:0484:000E:C61E
 * Called From: B4F2:0AF1:000E:1D9F
 * Called From: B4F2:1133:000D:1819
 * Called From: B511:0F75:000D:6488
 * Called From: B511:1138:000B:3187
 * Called From: B518:0855:000B:1007
 * Called From: B527:0112:000B:D486
 */
void ovl__34A2(uint8 entry)
{
	if (emu_get_memory8(0x34A2, 0, 0x20) == 0xCD || entry == 0xFF) {
		/* The overlay is not yet loaded. Do so by calling int 3F */
		uint16 ent_ip = (entry == 0xFF) ? 0x02 : (entry * 5) + 0x22;
		emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x261F; emu_push(ent_ip); f__261F_0008_0033_9069();
	}
	if (entry == 0xFF) return;

	/* Call the overlay function with the current cs it is loaded at */
	emu_cs = emu_get_memory16(0x34A2, 0, (entry * 5) + 0x23);
	switch (entry) {
		case 0: f__B4A2_0729_0013_5DF3(); return;
		case 2: f__B4A2_0039_000B_3C7B(); return;
	}
}
