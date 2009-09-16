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
 * Called From: 261F:01B9:001B:EDBF
 * Called From: 261F:01B9:001B:EDBF
 * Called From: B4B5:00C1:0022:04BB
 * Called From: B4B5:00E0:001F:0DBE
 * Called From: B4B5:00FF:001F:25BE
 * Called From: B4B5:0122:0023:B49E
 * Called From: B4B5:0141:001F:EA8A
 * Called From: B4B5:0163:0022:A358
 * Called From: B4B5:0185:0022:8C57
 * Called From: B4B5:01AE:0029:D26D
 * Called From: B4B5:01D4:0026:A872
 * Called From: B4B5:01FA:0026:480D
 * Called From: B4B5:0257:0041:D371
 * Called From: B4B5:02C1:0020:939D
 * Called From: B4B5:02E4:0023:D24E
 * Called From: B4B5:0308:0024:0501
 * Called From: B4B5:03E6:0040:8201
 * Called From: B4B5:0426:002B:2569
 * Called From: B4B5:068A:0040:7E01
 * Called From: B4B5:077F:002B:D969
 * Called From: B4B5:08D7:0040:4310
 * Called From: B4B5:0A6B:0024:5A64
 * Called From: B4B5:0B0F:0024:1264
 * Called From: B4B5:0BB2:0024:C265
 * Called From: B4B5:0C97:003E:84AE
 * Called From: B4B5:0CD2:002A:1E0E
 * Called From: B4B5:0E93:003D:8F07
 * Called From: B4B5:0EBF:0026:D6B3
 * Called From: B4B5:0FEA:003D:8907
 * Called From: B4B5:1029:002F:9FB4
 * Called From: B503:0618:0029:3F74
 * Called From: B503:0997:0029:A120
 * Called From: B503:0D2B:002D:828A
 * Called From: B503:0D99:0029:3F1C
 * Called From: B503:0E46:0029:A120
 * Called From: B503:1255:002D:E562
 */
void ovl__34FC(uint8 entry)
{
	if (emu_get_memory8(0x34FC, 0, 0x20) == 0xCD || entry == 0xFF) {
		/* The overlay is not yet loaded. Do so by calling int 3F */
		uint16 ent_ip = (entry == 0xFF) ? 0x02 : (entry * 5) + 0x22;
		emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x261F; emu_push(ent_ip); f__261F_0008_0033_66ED();
	}
	if (entry == 0xFF) return;

	/* Call the overlay function with the current cs it is loaded at */
	emu_cs = emu_get_memory16(0x34FC, 0, (entry * 5) + 0x23);
	switch (entry) {
		case 0: f__B4FC_0000_0018_E5DC(); return;
		case 1: f__B4FC_03C8_002C_9251(); return;
	}
}
