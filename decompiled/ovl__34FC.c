/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Overlay Handler for 0x34FC
 *
 * @param entry The entry point of the overlay table.
 *
 * @name ovl__34FC
 * @implements 34FC:0020 (0)
 * @implements 34FC:0025 (1)
 *
 * Called From: 261F:01B9:001B:DA28
 * Called From: 261F:01B9:001B:DA28
 * Called From: 261F:01B9:001B:DA28
 * Called From: B4B5:00C1:0022:6570
 * Called From: B4B5:00E0:001F:22F2
 * Called From: B4B5:00FF:001F:E9FF
 * Called From: B4B5:0122:0023:04DB
 * Called From: B4B5:0141:001F:13BF
 * Called From: B4B5:0163:0022:09D0
 * Called From: B4B5:0185:0022:5553
 * Called From: B4B5:01AE:0029:2C78
 * Called From: B4B5:01D4:0026:DA88
 * Called From: B4B5:01FA:0026:423E
 * Called From: B4B5:0257:0041:3B4B
 * Called From: B4B5:02C1:0020:4C65
 * Called From: B4B5:02E4:0023:6BB6
 * Called From: B4B5:0308:0024:A182
 * Called From: B4B5:03E6:0040:5B3C
 * Called From: B4B5:0426:002B:89DB
 * Called From: B4B5:068A:0040:A73C
 * Called From: B4B5:077F:002B:75DB
 * Called From: B4B5:08D7:0040:F8BF
 * Called From: B4B5:0A6B:0024:DC59
 * Called From: B4B5:0B0F:0024:FC58
 * Called From: B4B5:0BB2:0024:BC5F
 * Called From: B4B5:0C97:003E:D32E
 * Called From: B4B5:0CD2:002A:FBD8
 * Called From: B4B5:0E93:003D:0550
 * Called From: B4B5:0EBF:0026:EADA
 * Called From: B4B5:0FEA:003D:0350
 * Called From: B4B5:1029:002F:04F8
 * Called From: B503:0618:0029:9982
 * Called From: B503:0997:0029:1502
 * Called From: B503:0D2B:002D:031A
 * Called From: B503:0D99:0029:8382
 * Called From: B503:0E46:0029:1502
 * Called From: B503:1255:002D:C81A
 */
void ovl__34FC(uint8 entry)
{
	if (emu_get_memory8(0x34FC, 0, 0x20) == 0xCD || entry == 0xFF) {
		/* The overlay is not yet loaded. Do so by calling int 3F */
		uint16 ent_ip = (entry == 0xFF) ? 0x02 : (entry * 5) + 0x22;
		emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x261F; emu_push(ent_ip); f__261F_0008_0033_9069();
	}
	if (entry == 0xFF) return;

	/* Call the overlay function with the current cs it is loaded at */
	emu_cs = emu_get_memory16(0x34FC, 0, (entry * 5) + 0x23);
	switch (entry) {
		case 0: f__B4FC_0000_0018_2772(); return;
		case 1: f__B4FC_03C8_002C_033A(); return;
	}
}
