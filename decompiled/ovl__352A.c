/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Overlay Handler for 0x352A
 *
 * @param entry The entry point of the overlay table.
 *
 * @name ovl__352A
 * @implements 352A:0020 (0)
 * @implements 352A:0025 (1)
 * @implements 352A:002A (2)
 * @implements 352A:002F (3)
 *
 * Called From: 261F:01B9:001B:EDBF
 * Called From: 261F:01B9:001B:EDBF
 * Called From: B495:08E7:0031:B115
 * Called From: B495:090D:0026:18DF
 * Called From: B495:091B:000E:36BE
 * Called From: B495:14D0:0036:9C55
 * Called From: B495:14F6:0026:33F4
 * Called From: B495:1504:000E:1EBD
 * Called From: B4BE:010A:000D:A9EB
 * Called From: B4BE:012F:0025:9E19
 * Called From: B4BE:01A2:001B:452C
 * Called From: B4BE:01B4:0012:0029
 * Called From: B4DA:0286:000E:1049
 * Called From: B4DA:02B0:002A:115B
 * Called From: B4DA:02BE:000E:06BC
 * Called From: B4DA:0B28:000E:1049
 * Called From: B4DA:0F4B:0020:A8B8
 * Called From: B4DA:101B:0013:FC06
 * Called From: B4DA:12E6:0023:6E82
 * Called From: B4DA:1310:002A:B94B
 * Called From: B4DA:131E:000E:1EBD
 * Called From: B4ED:0367:0022:2E92
 * Called From: B4ED:03CF:001C:684D
 * Called From: B4ED:0438:001D:D205
 * Called From: B4ED:050C:000B:BC53
 * Called From: B4ED:0528:000B:BC53
 * Called From: B4ED:05C5:001C:684D
 * Called From: B4ED:05F9:0016:6423
 * Called From: B4ED:0669:001C:684D
 * Called From: B4ED:071A:000B:1C53
 * Called From: B511:0EA1:000E:204B
 * Called From: B511:0ECB:002A:894B
 * Called From: B511:0ED9:000E:1EBD
 */
void ovl__352A(uint8 entry)
{
	if (emu_get_memory8(0x352A, 0, 0x20) == 0xCD || entry == 0xFF) {
		/* The overlay is not yet loaded. Do so by calling int 3F */
		uint16 ent_ip = (entry == 0xFF) ? 0x02 : (entry * 5) + 0x22;
		emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x261F; emu_push(ent_ip); f__261F_0008_0033_66ED();
	}
	if (entry == 0xFF) return;

	/* Call the overlay function with the current cs it is loaded at */
	emu_cs = emu_get_memory16(0x352A, 0, (entry * 5) + 0x23);
	switch (entry) {
		case 0: f__B52A_0000_0019_1617(); return;
		case 1: f__B52A_0476_0030_9D41(); return;
		case 2: f__B52A_04AC_0033_548A(); return;
		case 3: f__B52A_06F6_0012_197D(); return;
	}
}
