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
 * @implements 34B1:002F (3)
 * @implements 34B1:0034 (4)
 *
 * Called From: 1587:0036:0012:2614
 * Called From: 1587:0054:001E:38A6
 * Called From: 1587:00A1:0030:5494
 * Called From: 1587:012A:002D:733A
 * Called From: 1587:0229:002F:C18F
 * Called From: 1587:0313:001A:43ED
 * Called From: 1587:0332:001F:1135
 * Called From: 1587:035C:0009:C36D
 * Called From: 15C2:0126:000B:E66A
 * Called From: 15C2:0138:0012:349D
 * Called From: 15C2:01CC:000E:97BB
 * Called From: 15C2:0266:003E:4876
 * Called From: 15C2:02B0:002E:E091
 * Called From: 15C2:0339:002D:9019
 * Called From: 15C2:0383:0006:072C
 * Called From: 261F:01B9:001B:DA28
 * Called From: B4E0:048D:000D:6FF1
 * Called From: B4E0:04AF:0022:5B17
 * Called From: B4E0:04BE:000F:B515
 * Called From: B4E0:060D:0012:7EB1
 * Called From: B4E0:062B:001E:8ADD
 * Called From: B4E0:0634:0009:C22D
 */
void ovl__34B1(uint8 entry)
{
	if (emu_get_memory8(0x34B1, 0, 0x20) == 0xCD || entry == 0xFF) {
		/* The overlay is not yet loaded. Do so by calling int 3F */
		uint16 ent_ip = (entry == 0xFF) ? 0x02 : (entry * 5) + 0x22;
		emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x261F; emu_push(ent_ip); f__261F_0008_0033_9069();
	}
	if (entry == 0xFF) return;

	/* Call the overlay function with the current cs it is loaded at */
	emu_cs = emu_get_memory16(0x34B1, 0, (entry * 5) + 0x23);
	switch (entry) {
		case 0: f__B4B1_0000_0016_A6CB(); return;
		case 1: f__B4B1_01CD_002A_4C8A(); return;
		case 3: f__B4B1_0098_002A_4C8A(); return;
		case 4: f__B4B1_0082_0012_013D(); return;
	}
}
