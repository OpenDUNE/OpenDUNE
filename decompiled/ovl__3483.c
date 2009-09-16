/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Overlay Handler for 0x3483
 *
 * @param entry The entry point of the overlay table.
 *
 * @name ovl__3483
 * @implements 3483:0020 (0)
 * @implements 3483:0025 (1)
 * @implements 3483:002A (2)
 * @implements 3483:002F (3)
 * @implements 3483:0034 (4)
 * @implements 3483:0039 (5)
 *
 * Called From: 0642:0125:000B:A977
 * Called From: 0642:0136:0010:EFC3
 * Called From: 0642:016C:000A:ACE4
 * Called From: 0642:01EE:000B:A977
 * Called From: 0642:024C:0005:13D4
 * Called From: 0642:028B:000B:B077
 * Called From: 0642:0755:0005:13D4
 * Called From: 06F7:08CE:0016:BC52
 * Called From: 0972:062D:000B:5083
 * Called From: 0972:0E74:0006:0784
 * Called From: 0AEC:0522:000F:6B04
 * Called From: 0AEC:06A8:000F:5004
 * Called From: 0EDB:0448:0027:2B03
 * Called From: 1423:02E4:0008:5474
 * Called From: 1423:0311:000C:C60B
 * Called From: 1423:032F:0009:5F85
 * Called From: 1423:0B17:0006:0784
 * Called From: 1423:0E9D:0026:BBB8
 * Called From: 176C:09EA:0015:540E
 * Called From: 176C:184A:001D:17D9
 * Called From: 1A34:0CA7:0009:7A85
 * Called From: 1A34:1013:0009:65B5
 * Called From: 1A34:1E34:0038:F23F
 * Called From: 1A34:25A5:0012:2ED3
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
 * Called From: 261F:01B9:001B:DA28
 * Called From: 261F:01B9:001B:DA28
 * Called From: 261F:01B9:001B:DA28
 * Called From: 261F:01B9:001B:DA28
 * Called From: B4B8:1C06:0008:5474
 * Called From: B4B8:1C6A:0009:F605
 * Called From: B4B8:1CD8:0008:5474
 * Called From: B4B8:1D54:000C:5B7B
 * Called From: B4B8:2170:0012:30A9
 * Called From: B4B8:21EF:000A:ACE4
 * Called From: B4BE:0032:0009:6C75
 * Called From: B4BE:014F:000C:5B7B
 * Called From: B4BE:01D6:0014:9917
 * Called From: B4E9:036F:000C:C60B
 * Called From: B4E9:0390:0015:2FFB
 * Called From: B4E9:0414:000B:A977
 * Called From: B4ED:07A6:0023:CA4A
 * Called From: B4ED:0AB0:0010:6060
 * Called From: B4F2:026A:0014:27AA
 * Called From: B503:0024:000A:0E74
 * Called From: B511:0029:0010:962F
 * Called From: B511:0410:000A:ACE4
 * Called From: B511:045D:0009:F605
 * Called From: B511:0BA4:000C:C60B
 * Called From: B511:0D59:0012:65CE
 * Called From: B511:0D6D:0008:7374
 * Called From: B511:0FEC:000B:DF66
 * Called From: B511:14AF:0008:5474
 * Called From: B518:01B4:000B:B077
 */
void ovl__3483(uint8 entry)
{
	if (emu_get_memory8(0x3483, 0, 0x20) == 0xCD || entry == 0xFF) {
		/* The overlay is not yet loaded. Do so by calling int 3F */
		uint16 ent_ip = (entry == 0xFF) ? 0x02 : (entry * 5) + 0x22;
		emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x261F; emu_push(ent_ip); f__261F_0008_0033_9069();
	}
	if (entry == 0xFF) return;

	/* Call the overlay function with the current cs it is loaded at */
	emu_cs = emu_get_memory16(0x3483, 0, (entry * 5) + 0x23);
	switch (entry) {
		case 0: f__B483_0000_0019_FB79(); return;
		case 1: f__B483_0283_0014_DEE0(); return;
		case 2: f__B483_0363_0016_23BC(); return;
		case 3: f__B483_0470_000E_7FC4(); return;
		case 4: f__B483_04CB_0015_B680(); return;
		case 5: f__B483_0156_0019_B934(); return;
	}
}
