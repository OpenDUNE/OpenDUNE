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
 * Called From: 0972:0321:0011:1CBD
 * Called From: 0972:0333:0012:74BB
 * Called From: 0972:0485:0015:5CB8
 * Called From: 0972:04CB:0013:3438
 * Called From: 0972:04DF:0014:1BB6
 * Called From: 0972:13EA:001C:1549
 * Called From: 0972:13FB:0011:0306
 * Called From: 0972:165D:0015:7914
 * Called From: 0AEC:0B06:001C:1C21
 * Called From: 0AEC:0B12:000C:4B24
 * Called From: 0C3A:05D6:0050:EE73
 * Called From: 0C3A:05ED:0017:30AE
 * Called From: 0C3A:0F47:001A:0CFD
 * Called From: 0C3A:0F6A:0023:AAA0
 * Called From: 0C3A:1F1E:0024:7F8D
 * Called From: 0C3A:1F32:0014:9D7F
 * Called From: 0C3A:2008:0053:1870
 * Called From: 0C3A:203A:0012:1AF4
 * Called From: 0C3A:211A:000B:0CED
 * Called From: 0C3A:217A:0033:3F6A
 * Called From: 0EDB:0116:0019:65F3
 * Called From: 0F3F:015C:0008:1751
 * Called From: 10E4:1906:0013:DC38
 * Called From: 10E4:191D:0017:9088
 * Called From: 10E4:1AA8:0013:32B8
 * Called From: 10E4:1AC8:000F:23B7
 * Called From: 176C:1015:0018:1AF9
 * Called From: 176C:1265:0015:ADBE
 * Called From: 176C:1D6E:0015:6E8A
 * Called From: 1A34:208A:0043:B1ED
 * Called From: 1A34:20CD:002B:1C86
 * Called From: 261F:01B9:001B:EDBF
 * Called From: 261F:01B9:001B:EDBF
 * Called From: 261F:01B9:001B:EDBF
 * Called From: B483:0052:000C:F391
 * Called From: B483:0060:000E:35F7
 * Called From: B4B5:04D8:0021:883C
 */
void ovl__34C1(uint8 entry)
{
	if (emu_get_memory8(0x34C1, 0, 0x20) == 0xCD || entry == 0xFF) {
		/* The overlay is not yet loaded. Do so by calling int 3F */
		uint16 ent_ip = (entry == 0xFF) ? 0x02 : (entry * 5) + 0x22;
		emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x261F; emu_push(ent_ip); f__261F_0008_0033_66ED();
	}
	if (entry == 0xFF) return;

	/* Call the overlay function with the current cs it is loaded at */
	emu_cs = emu_get_memory16(0x34C1, 0, (entry * 5) + 0x23);
	switch (entry) {
		case 0: f__B4C1_0129_0028_FB8E(); return;
		case 1: f__B4C1_0000_0022_1807(); return;
		case 2: f__B4C1_0155_002A_AC43(); return;
	}
}
