/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Overlay Handler for 0x3520
 *
 * @param entry The entry point of the overlay table.
 *
 * @name ovl__3520
 * @implements 3520:0020 (0)
 * @implements 3520:0025 (1)
 * @implements 3520:002A (2)
 * @implements 3520:002F (3)
 * @implements 3520:0034 (4)
 * @implements 3520:0043 (7)
 * @implements 3520:0048 (8)
 * @implements 3520:004D (9)
 *
 * Called From: 261F:01B9:001B:DA28
 * Called From: 261F:01B9:001B:DA28
 * Called From: 261F:01B9:001B:DA28
 * Called From: B4A2:06AC:0030:FF82
 * Called From: B4A2:0941:0011:D731
 * Called From: B4E0:00FA:000D:A3F4
 * Called From: B4E0:0109:000F:007E
 * Called From: B4E0:0118:000F:2E7E
 * Called From: B4E0:0A03:000A:A879
 * Called From: B4E0:0A8F:000E:02A6
 * Called From: B4E0:0B9F:001E:6070
 * Called From: B4E0:0BB7:0018:5355
 * Called From: B4E0:0BCF:0018:7EDD
 * Called From: B4E0:0D26:002B:854A
 * Called From: B4E0:0DA3:0037:51BE
 * Called From: B4E0:0E3A:0037:F63E
 */
void ovl__3520(uint8 entry)
{
	if (emu_get_memory8(0x3520, 0, 0x20) == 0xCD || entry == 0xFF) {
		/* The overlay is not yet loaded. Do so by calling int 3F */
		uint16 ent_ip = (entry == 0xFF) ? 0x02 : (entry * 5) + 0x22;
		emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x261F; emu_push(ent_ip); f__261F_0008_0033_9069();
	}
	if (entry == 0xFF) return;

	/* Call the overlay function with the current cs it is loaded at */
	emu_cs = emu_get_memory16(0x3520, 0, (entry * 5) + 0x23);
	switch (entry) {
		case 0: f__B520_0114_0016_81BF(); return;
		case 1: f__B520_0235_0016_81A7(); return;
		case 2: f__B520_06A2_0013_5CED(); return;
		case 3: f__B520_0223_000E_0926(); return;
		case 4: f__B520_039B_001B_B8E7(); return;
		case 7: f__B520_0407_00A9_87CA(); return;
		case 8: f__B520_00E3_0028_9365(); return;
		case 9: f__B520_0000_0019_4B8A(); return;
	}
}
