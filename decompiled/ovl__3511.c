/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Overlay Handler for 0x3511
 *
 * @param entry The entry point of the overlay table.
 *
 * @name ovl__3511
 * @implements 3511:0020 (0)
 * @implements 3511:002A (2)
 * @implements 3511:0034 (4)
 * @implements 3511:0039 (5)
 * @implements 3511:0043 (7)
 *
 * Called From: 0642:0142:000C:B04E
 * Called From: 0642:01C5:000E:F44C
 * Called From: 1423:034D:0008:54DF
 * Called From: 261F:01B9:001B:EDBF
 * Called From: 261F:01B9:001B:EDBF
 * Called From: 261F:01B9:001B:EDBF
 * Called From: 261F:01B9:001B:EDBF
 * Called From: 261F:01B9:001B:EDBF
 * Called From: B4B8:21D1:000B:B5DE
 * Called From: B4B8:224A:000D:F528
 * Called From: B4F2:063E:000A:7C45
 * Called From: B4F2:080F:0013:1F6E
 */
void ovl__3511(uint8 entry)
{
	if (emu_get_memory8(0x3511, 0, 0x20) == 0xCD || entry == 0xFF) {
		/* The overlay is not yet loaded. Do so by calling int 3F */
		uint16 ent_ip = (entry == 0xFF) ? 0x02 : (entry * 5) + 0x22;
		emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x261F; emu_push(ent_ip); f__261F_0008_0033_66ED();
	}
	if (entry == 0xFF) return;

	/* Call the overlay function with the current cs it is loaded at */
	emu_cs = emu_get_memory16(0x3511, 0, (entry * 5) + 0x23);
	switch (entry) {
		case 0: f__B511_0000_000E_B463(); return;
		case 2: f__B511_0446_0013_E4E5(); return;
		case 4: f__B511_0729_0016_F168(); return;
		case 5: f__B511_0C35_002A_C70F(); return;
		case 7: f__B511_0FB0_0028_02A0(); return;
	}
}
