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
 * Called From: 0642:00FC:000D:15EE
 * Called From: 0642:0159:0006:EAFC
 * Called From: 0642:0162:0009:B0F3
 * Called From: 0C3A:1774:0005:4EFC
 * Called From: 0C3A:17D5:0006:EAFC
 * Called From: 0C3A:17F8:0016:5077
 * Called From: 1423:0352:0005:4EFC
 * Called From: 1423:042E:0015:7EAD
 * Called From: 1423:048D:0005:4EFC
 * Called From: 1423:04BB:0022:C10E
 * Called From: 1423:04C3:0008:2C75
 * Called From: 261F:01B9:001B:EDBF
 * Called From: 261F:01B9:001B:EDBF
 * Called From: 261F:01B9:001B:EDBF
 * Called From: 261F:01B9:001B:EDBF
 * Called From: 261F:01B9:001B:EDBF
 * Called From: 261F:01B9:001B:EDBF
 * Called From: B495:15E1:0022:CA3D
 * Called From: B4B5:0202:0008:5475
 * Called From: B4B5:020F:000D:44AD
 * Called From: B4C4:0239:000B:9D3D
 * Called From: B4C4:0246:000D:44AD
 * Called From: B4E0:0071:000B:6BAA
 * Called From: B4E9:0396:0006:2AFD
 * Called From: B4E9:03AB:0015:7EAD
 * Called From: B4E9:03E6:0015:3476
 * Called From: B4E9:03EE:0008:2C75
 * Called From: B4F2:00CD:0008:EC74
 * Called From: B4F2:0309:0005:8EFD
 * Called From: B503:0598:0017:050A
 * Called From: B503:08EA:0014:ECA4
 * Called From: B503:0E0C:0012:112D
 * Called From: B511:035F:0019:B08E
 * Called From: B511:0374:0015:3476
 * Called From: B511:048D:0005:8EFD
 * Called From: B511:0CB7:0015:7EAD
 * Called From: B511:0CEF:000B:6BAA
 * Called From: B511:0D2D:000B:68AA
 * Called From: B511:0E37:0014:36BE
 * Called From: B511:0E4B:000C:24F5
 * Called From: B511:0FA2:0005:8EFD
 * Called From: B511:1002:0016:1AAC
 * Called From: B511:105D:0043:8F6D
 * Called From: B511:124B:000B:6BAA
 * Called From: B511:12A3:000B:68AA
 * Called From: B511:1487:0005:8EFD
 * Called From: B511:14B6:0007:B64F
 * Called From: B511:14CB:0015:3476
 * Called From: B518:0959:0013:5DD3
 * Called From: B518:09D0:0013:5CD3
 */
void ovl__34B8(uint8 entry)
{
	if (emu_get_memory8(0x34B8, 0, 0x20) == 0xCD || entry == 0xFF) {
		/* The overlay is not yet loaded. Do so by calling int 3F */
		uint16 ent_ip = (entry == 0xFF) ? 0x02 : (entry * 5) + 0x22;
		emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x261F; emu_push(ent_ip); f__261F_0008_0033_66ED();
	}
	if (entry == 0xFF) return;

	/* Call the overlay function with the current cs it is loaded at */
	emu_cs = emu_get_memory16(0x34B8, 0, (entry * 5) + 0x23);
	switch (entry) {
		case 0: f__B4B8_0ED9_001E_DC63(); return;
		case 1: f__B4B8_0ECE_000B_BD2E(); return;
		case 2: f__B4B8_16D3_0022_3C6A(); return;
		case 3: f__B4B8_110D_000D_FD5C(); return;
		case 4: f__B4B8_0A1E_001A_E094(); return;
		case 5: f__B4B8_0D23_0010_BA99(); return;
		case 6: f__B4B8_0000_001F_3BC3(); return;
	}
}
