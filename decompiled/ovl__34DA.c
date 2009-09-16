/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Overlay Handler for 0x34DA
 *
 * @param entry The entry point of the overlay table.
 *
 * @name ovl__34DA
 * @implements 34DA:0020 (0)
 * @implements 34DA:0025 (1)
 * @implements 34DA:002A (2)
 * @implements 34DA:002F (3)
 * @implements 34DA:0034 (4)
 * @implements 34DA:0039 (5)
 * @implements 34DA:003E (6)
 *
 * Called From: 1423:0436:0008:AC6D
 * Called From: 261F:01B9:001B:EDBF
 * Called From: 261F:01B9:001B:EDBF
 * Called From: 261F:01B9:001B:EDBF
 * Called From: 261F:01B9:001B:EDBF
 * Called From: 261F:01B9:001B:EDBF
 * Called From: 261F:01B9:001B:EDBF
 * Called From: B4E0:002C:000F:E922
 * Called From: B4E0:00ED:0007:AA57
 * Called From: B4E0:0161:0008:4C65
 * Called From: B4E0:080F:004A:BB40
 * Called From: B4E0:0881:000A:3AF9
 * Called From: B511:0E5A:000F:89E9
 * Called From: B511:0EE4:000B:1AF2
 * Called From: B511:0F50:0024:AB3F
 * Called From: B511:0F86:0008:4C65
 * Called From: B511:0F9D:000B:9995
 * Called From: B511:141D:0029:4034
 * Called From: B511:1482:001B:0682
 * Called From: B527:00F8:000B:FF42
 */
void ovl__34DA(uint8 entry)
{
	if (emu_get_memory8(0x34DA, 0, 0x20) == 0xCD || entry == 0xFF) {
		/* The overlay is not yet loaded. Do so by calling int 3F */
		uint16 ent_ip = (entry == 0xFF) ? 0x02 : (entry * 5) + 0x22;
		emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x261F; emu_push(ent_ip); f__261F_0008_0033_66ED();
	}
	if (entry == 0xFF) return;

	/* Call the overlay function with the current cs it is loaded at */
	emu_cs = emu_get_memory16(0x34DA, 0, (entry * 5) + 0x23);
	switch (entry) {
		case 0: f__B4DA_0000_002C_B3C2(); return;
		case 1: f__B4DA_02E0_0023_E297(); return;
		case 2: f__B4DA_0308_0018_F99F(); return;
		case 3: f__B4DA_0A8E_0025_4AC8(); return;
		case 4: f__B4DA_0AB8_002A_AAB2(); return;
		case 5: f__B4DA_1099_0024_C93B(); return;
		case 6: f__B4DA_16CB_001D_31CC(); return;
	}
}
