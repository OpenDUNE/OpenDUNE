/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Overlay Handler for 0x34B1
 *
 * @param entry The entry point of the overlay table.
 *
 * @name ovl__34B1
 * @implements 34B1:0020 (0)
 * @implements 34B1:0025 (1)
 * @implements 34B1:002A (2)
 * @implements 34B1:002F (3)
 * @implements 34B1:0034 (4)
 *
 * Called From: 1587:0036:0012:912E
 * Called From: 1587:0054:001E:34C3
 * Called From: 1587:00A1:0030:84AA
 * Called From: 1587:012A:002D:9847
 * Called From: 1587:0229:002F:599A
 * Called From: 1587:0313:001A:F478
 * Called From: 1587:0332:001F:629B
 * Called From: 1587:035C:0009:06A7
 * Called From: 15C2:0126:000B:4489
 * Called From: 15C2:0138:0012:38D0
 * Called From: 15C2:01CC:000E:D267
 * Called From: 15C2:0266:003E:C2E2
 * Called From: 15C2:02B0:002E:175A
 * Called From: 15C2:0339:002D:06F2
 * Called From: 15C2:0383:0006:46FE
 * Called From: 261F:01B9:001B:EDBF
 * Called From: 261F:01B9:001B:EDBF
 * Called From: 261F:01B9:001B:EDBF
 * Called From: B4E0:048D:000D:4C66
 * Called From: B4E0:04AF:0022:B650
 * Called From: B4E0:04BE:000F:0749
 * Called From: B4E0:060D:0012:17E4
 * Called From: B4E0:062B:001E:F6FB
 * Called From: B4E0:0634:0009:02A3
 * Called From: B4F2:12B0:0010:09E9
 * Called From: B4F2:12B0:0010:09E9
 * Called From: B4F2:12D5:0025:4F31
 * Called From: B4F2:12DE:0009:06A3
 * Called From: B511:0498:000B:4489
 * Called From: B511:04C8:0023:7B53
 * Called From: B511:05CF:0023:4CA4
 * Called From: B511:060F:0023:84C2
 * Called From: B511:064F:0023:05E3
 * Called From: B511:068F:0023:6912
 * Called From: B511:06CF:0023:C436
 * Called From: B511:0709:0006:42FE
 * Called From: B511:0954:001C:1421
 * Called From: B511:098E:001C:EBB0
 * Called From: B511:09C8:001C:6A91
 * Called From: B511:0A02:001C:0660
 * Called From: B511:0A3C:001C:23D6
 * Called From: B511:0A76:001C:AB44
 */
void ovl__34B1(uint8 entry)
{
	if (emu_get_memory8(0x34B1, 0, 0x20) == 0xCD || entry == 0xFF) {
		/* The overlay is not yet loaded. Do so by calling int 3F */
		uint16 ent_ip = (entry == 0xFF) ? 0x02 : (entry * 5) + 0x22;
		emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x261F; emu_push(ent_ip); f__261F_0008_0033_66ED();
	}
	if (entry == 0xFF) return;

	/* Call the overlay function with the current cs it is loaded at */
	emu_cs = emu_get_memory16(0x34B1, 0, (entry * 5) + 0x23);
	switch (entry) {
		case 0: f__B4B1_0000_0016_067A(); return;
		case 1: f__B4B1_01CD_002A_CE8A(); return;
		case 2: f__B4B1_0373_001A_90A2(); return;
		case 3: f__B4B1_0098_002A_CE8A(); return;
		case 4: f__B4B1_0082_0012_D287(); return;
	}
}
