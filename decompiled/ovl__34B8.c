/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Overlay Handler for 0x34B8
 *
 * @param entry The entry point of the overlay table.
 *
 * @name ovl__34B8
 * @implements 34B8:0020 (0)
 * @implements 34B8:0025 (1)
 * @implements 34B8:002A (2)
 * @implements 34B8:002F (3)
 * @implements 34B8:0034 (4)
 * @implements 34B8:0039 (5)
 * @implements 34B8:003E (6)
 *
 * Called From: 0642:00FC:000D:C2EE
 * Called From: 0C3A:1774:0005:1398
 * Called From: 0C3A:17D5:0006:0418
 * Called From: 0C3A:17F8:0016:5D94
 * Called From: 1423:0352:0005:1398
 * Called From: 1423:042E:0015:5D71
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
 * Called From: B495:15E1:0022:5591
 * Called From: B4B5:0202:0008:F6D8
 * Called From: B4B5:020F:000D:77F7
 * Called From: B4E0:0071:000B:FECA
 * Called From: B4E9:0396:0006:05D8
 * Called From: B4E9:03AB:0015:5D71
 * Called From: B4E9:03E6:0015:4BD4
 * Called From: B4E9:03EE:0008:F158
 * Called From: B4F2:00CD:0008:F098
 * Called From: B4F2:0309:0005:1258
 * Called From: B503:0598:0017:9053
 * Called From: B503:08EA:0014:F2F4
 * Called From: B503:0E0C:0012:266D
 * Called From: B511:035F:0019:7527
 * Called From: B511:0374:0015:4BD4
 * Called From: B511:0CB7:0015:5D71
 * Called From: B511:0CEF:000B:FECA
 * Called From: B511:0D2D:000B:FDCA
 * Called From: B511:0E37:0014:40F4
 * Called From: B511:0E4B:000C:561B
 * Called From: B511:0E4B:000C:561B
 * Called From: B511:0FA2:0005:1258
 * Called From: B511:1002:0016:4B31
 * Called From: B511:105D:0043:BB59
 * Called From: B511:124B:000B:FECA
 * Called From: B511:12A3:000B:FDCA
 * Called From: B511:1487:0005:1258
 * Called From: B511:14B6:0007:2A38
 * Called From: B511:14CB:0015:4BD4
 * Called From: B518:0959:0013:226F
 * Called From: B518:09D0:0013:236F
 */
void ovl__34B8(uint8 entry)
{
	if (emu_get_memory8(0x34B8, 0, 0x20) == 0xCD || entry == 0xFF) {
		/* The overlay is not yet loaded. Do so by calling int 3F */
		uint16 ent_ip = (entry == 0xFF) ? 0x02 : (entry * 5) + 0x22;
		emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x261F; emu_push(ent_ip); f__261F_0008_0033_9069();
	}
	if (entry == 0xFF) return;

	/* Call the overlay function with the current cs it is loaded at */
	emu_cs = emu_get_memory16(0x34B8, 0, (entry * 5) + 0x23);
	switch (entry) {
		case 0: f__B4B8_0ED9_001E_8D32(); return;
		case 1: f__B4B8_0ECE_000B_8103(); return;
		case 2: f__B4B8_16D3_0022_A27C(); return;
		case 3: f__B4B8_110D_000D_CCFE(); return;
		case 4: f__B4B8_0A1E_001A_11DB(); return;
		case 5: f__B4B8_0D23_0010_7C11(); return;
		case 6: f__B4B8_0000_001F_044D(); return;
	}
}
