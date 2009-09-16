/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Overlay Handler for 0x34C4
 *
 * @param entry The entry point of the overlay table.
 *
 * @name ovl__34C4
 * @implements 34C4:0020 (0)
 * @implements 34C4:0025 (1)
 * @implements 34C4:002A (2)
 * @implements 34C4:002F (3)
 * @implements 34C4:0034 (4)
 * @implements 34C4:0039 (5)
 *
 * Called From: 261F:01B9:001B:EDBF
 * Called From: B511:0599:000C:E98C
 * Called From: B511:05E0:0011:66E3
 * Called From: B511:0620:0011:96E3
 * Called From: B511:0660:0011:C6E3
 * Called From: B511:06A0:0011:76E2
 * Called From: B511:06E0:0011:A6E2
 */
void ovl__34C4(uint8 entry)
{
	if (emu_get_memory8(0x34C4, 0, 0x20) == 0xCD || entry == 0xFF) {
		/* The overlay is not yet loaded. Do so by calling int 3F */
		uint16 ent_ip = (entry == 0xFF) ? 0x02 : (entry * 5) + 0x22;
		emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x261F; emu_push(ent_ip); f__261F_0008_0033_66ED();
	}
	if (entry == 0xFF) return;

	/* Call the overlay function with the current cs it is loaded at */
	emu_cs = emu_get_memory16(0x34C4, 0, (entry * 5) + 0x23);
	switch (entry) {
		case 0: f__B4C4_0000_001C_B22A(); return;
		case 1: f__B4C4_0255_0009_A812(); return;
		case 2: f__B4C4_0311_0009_BC94(); return;
		case 3: f__B4C4_03AA_0009_B4A2(); return;
		case 4: f__B4C4_043C_0009_1C95(); return;
		case 5: f__B4C4_04DA_0008_C6B9(); return;
	}
}
