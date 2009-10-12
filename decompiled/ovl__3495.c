/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Overlay Handler for 0x3495
 *
 * @param entry The entry point of the overlay table.
 *
 * @name ovl__3495
 * @implements 3495:0020 (0)
 * @implements 3495:0025 (1)
 * @implements 3495:002A (2)
 * @implements 3495:002F (3)
 * @implements 3495:0034 (4)
 * @implements 3495:0039 (5)
 * @implements 3495:003E (6)
 * @implements 3495:0043 (7)
 * @implements 3495:004D (9)
 * @implements 3495:0098 (24)
 *
 * Called From: 01F7:3005:001C:E64C
 * Called From: 01F7:3058:0037:57AE
 * Called From: 01F7:307E:0010:F2A4
 * Called From: 01F7:30A3:0010:C0A3
 * Called From: 01F7:311C:0010:F2A4
 * Called From: 01F7:313D:0021:AA4B
 * Called From: 01F7:318C:0018:3FEB
 * Called From: 0C3A:17C0:000C:D272
 * Called From: 261F:01B9:001B:EDBF
 * Called From: B4A2:06AC:0030:38D3
 * Called From: B4A2:06AC:0030:38D3
 * Called From: B4A2:06AC:0030:38D3
 * Called From: B4A2:06AC:0030:38D3
 * Called From: B4A2:06AC:0030:38D3
 * Called From: B4A2:06AC:0030:38D3
 * Called From: B4A2:06AC:0030:38D3
 * Called From: B4A2:06AC:0030:38D3
 */
void ovl__3495(uint8 entry)
{
	if (emu_get_memory8(0x3495, 0, 0x20) == 0xCD || entry == 0xFF) {
		/* The overlay is not yet loaded. Do so by calling int 3F */
		uint16 ent_ip = (entry == 0xFF) ? 0x02 : (entry * 5) + 0x22;
		emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x261F; emu_push(ent_ip); f__261F_0008_0033_66ED();
	}
	if (entry == 0xFF) return;

	/* Call the overlay function with the current cs it is loaded at */
	emu_cs = emu_get_memory16(0x3495, 0, (entry * 5) + 0x23);
	switch (entry) {
		case 0: f__B495_0000_0022_1CF6(); return;
		case 1: f__B495_00FE_0017_4E8B(); return;
		case 2: f__B495_01CB_0016_9CD0(); return;
		case 3: f__B495_0288_001F_5BC7(); return;
		case 4: f__B495_030B_001D_B90C(); return;
		case 5: f__B495_0398_0011_7346(); return;
		case 6: f__B495_03B9_0008_D80E(); return;
		case 7: f__B495_03E4_0014_917E(); return;
		case 9: f__B495_04D7_000E_C317(); return;
		case 24: f__B495_1A14_0013_AE3F(); return;
	}
}
