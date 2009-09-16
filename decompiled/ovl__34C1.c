/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Overlay Handler for 0x34C1
 *
 * @param entry The entry point of the overlay table.
 *
 * @name ovl__34C1
 * @implements 34C1:0020 (0)
 * @implements 34C1:0025 (1)
 * @implements 34C1:002A (2)
 *
 * Called From: 0972:0321:0011:6F70
 * Called From: 0972:0333:0012:EE06
 * Called From: 0972:0485:0015:744D
 * Called From: 0972:04CB:0013:0ACF
 * Called From: 0972:04DF:0014:CB50
 * Called From: 0972:13EA:001C:9D4C
 * Called From: 0972:13FB:0011:9D83
 * Called From: 0AEC:0B06:001C:5586
 * Called From: 0AEC:0B12:000C:0A2B
 * Called From: 0C3A:05D6:0050:3561
 * Called From: 0C3A:05ED:0017:84FB
 * Called From: 0C3A:1F1E:0024:140D
 * Called From: 0C3A:1F32:0014:9A5F
 * Called From: 0C3A:2008:0053:9E60
 * Called From: 0C3A:203A:0012:8ADA
 * Called From: 0C3A:211A:000B:358B
 * Called From: 0C3A:217A:0033:346B
 * Called From: 0EDB:0116:0019:0270
 * Called From: 0F3F:015C:0008:73FC
 * Called From: 10E4:1906:0013:68F4
 * Called From: 10E4:191D:0017:E35B
 * Called From: 10E4:1AA8:0013:51A3
 * Called From: 10E4:1AC8:000F:F750
 * Called From: 176C:1015:001B:C6CD
 * Called From: 176C:1265:0015:A26C
 * Called From: 176C:1D6E:0015:0D34
 * Called From: 1A34:208A:0043:9483
 * Called From: 1A34:20CD:002B:FA48
 * Called From: 261F:01B9:001B:DA28
 * Called From: 261F:01B9:001B:DA28
 * Called From: 261F:01B9:001B:DA28
 * Called From: 261F:01B9:001B:DA28
 * Called From: 261F:01B9:001B:DA28
 * Called From: B483:0052:000C:4E83
 * Called From: B483:0060:000E:813E
 * Called From: B4B5:04D8:0021:C35A
 */
void ovl__34C1(uint8 entry)
{
	if (emu_get_memory8(0x34C1, 0, 0x20) == 0xCD || entry == 0xFF) {
		/* The overlay is not yet loaded. Do so by calling int 3F */
		uint16 ent_ip = (entry == 0xFF) ? 0x02 : (entry * 5) + 0x22;
		emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x261F; emu_push(ent_ip); f__261F_0008_0033_9069();
	}
	if (entry == 0xFF) return;

	/* Call the overlay function with the current cs it is loaded at */
	emu_cs = emu_get_memory16(0x34C1, 0, (entry * 5) + 0x23);
	switch (entry) {
		case 0: f__B4C1_0129_0028_CDAC(); return;
		case 1: f__B4C1_0000_0022_859F(); return;
		case 2: f__B4C1_0155_002A_DA9F(); return;
	}
}
