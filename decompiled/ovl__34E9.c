/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Overlay Handler for 0x34E9
 *
 * @param entry The entry point of the overlay table.
 *
 * @name ovl__34E9
 * @implements 34E9:0020 (0)
 * @implements 34E9:0025 (1)
 * @implements 34E9:002A (2)
 * @implements 34E9:002F (3)
 *
 * Called From: 0642:0108:000C:BC6B
 * Called From: 0642:01A2:0012:6F93
 * Called From: 0642:01B7:000F:C47F
 * Called From: 0642:01D6:0011:EBF0
 * Called From: 0AEC:04CF:001B:FE60
 * Called From: 0AEC:05CB:0009:BAB5
 * Called From: 0AEC:1035:001B:5BA9
 * Called From: 0AEC:1083:000C:379D
 * Called From: 0AEC:1119:001C:5E7F
 * Called From: 0C3A:1798:000B:DD7F
 * Called From: 0C3A:17A1:0009:AC45
 * Called From: 0C3A:17CF:000F:DABC
 * Called From: 0C3A:1804:000C:309D
 * Called From: 1423:031A:0009:0C45
 * Called From: 1A34:10AF:0018:C7EE
 * Called From: 1A34:10E4:0015:80BA
 * Called From: 1A34:1DBE:0046:90CE
 * Called From: 261F:01B9:001B:EDBF
 * Called From: 261F:01B9:001B:EDBF
 * Called From: 261F:01B9:001B:EDBF
 * Called From: 261F:01B9:001B:EDBF
 * Called From: B4A2:06AC:0030:38D3
 * Called From: B4B8:171D:000A:59F5
 * Called From: B4B8:2266:0009:BAB5
 * Called From: B4BE:0007:000C:E7F4
 * Called From: B4BE:0076:0008:8C69
 * Called From: B4F2:0104:000A:BA05
 * Called From: B4F2:0331:000C:961D
 * Called From: B518:005E:0008:8C69
 */
void ovl__34E9(uint8 entry)
{
	if (emu_get_memory8(0x34E9, 0, 0x20) == 0xCD || entry == 0xFF) {
		/* The overlay is not yet loaded. Do so by calling int 3F */
		uint16 ent_ip = (entry == 0xFF) ? 0x02 : (entry * 5) + 0x22;
		emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x261F; emu_push(ent_ip); f__261F_0008_0033_66ED();
	}
	if (entry == 0xFF) return;

	/* Call the overlay function with the current cs it is loaded at */
	emu_cs = emu_get_memory16(0x34E9, 0, (entry * 5) + 0x23);
	switch (entry) {
		case 0: f__B4E9_0000_0013_DC68(); return;
		case 1: f__B4E9_0028_0013_DF68(); return;
		case 2: f__B4E9_0050_003F_292A(); return;
		case 3: f__B4E9_0345_0023_FA52(); return;
	}
}
