/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Overlay Handler for 0x3483
 *
 * @param entry The entry point of the overlay table.
 *
 * @name ovl__3483
 * @implements 3483:0020 (0)
 * @implements 3483:0025 (1)
 * @implements 3483:002A (2)
 * @implements 3483:002F (3)
 * @implements 3483:0034 (4)
 * @implements 3483:0039 (5)
 *
 * Called From: 0642:0125:000B:70BA
 * Called From: 0642:0136:0010:D43B
 * Called From: 0642:016C:000A:D6BC
 * Called From: 0642:01EE:000B:70BA
 * Called From: 0642:024C:0005:2EF2
 * Called From: 0642:0263:0010:94D1
 * Called From: 0642:028B:000B:69BA
 * Called From: 0642:02EB:000B:70BA
 * Called From: 0642:0755:001B:0AF9
 * Called From: 06F7:08CE:0016:9292
 * Called From: 0972:062D:000B:5D60
 * Called From: 0972:0E74:0006:3EF3
 * Called From: 0AEC:0522:000F:6E04
 * Called From: 0AEC:06A8:000F:5504
 * Called From: 0C3A:0EBB:0017:48E7
 * Called From: 0C3A:1328:0006:22F3
 * Called From: 0C3A:1334:0009:2BAF
 * Called From: 0EDB:0448:0027:711D
 * Called From: 1423:02E4:0008:FC73
 * Called From: 1423:0311:000C:4B79
 * Called From: 1423:032F:0009:16AF
 * Called From: 1423:0A55:002B:16F9
 * Called From: 1423:0B17:0006:3EF3
 * Called From: 1423:0B2B:0011:A442
 * Called From: 1423:0E9D:0026:4424
 * Called From: 151A:02D9:0016:FA9C
 * Called From: 176C:09EA:0015:CD26
 * Called From: 176C:0B0C:0023:4B7B
 * Called From: 176C:1775:0018:40AE
 * Called From: 176C:184A:001D:2885
 * Called From: 1A34:0CA7:0009:33AF
 * Called From: 1A34:1013:0006:0EF2
 * Called From: 1A34:1E34:0038:A980
 * Called From: 1A34:25A5:0012:84AB
 * Called From: 261F:01B9:001B:EDBF
 * Called From: 261F:01B9:001B:EDBF
 * Called From: 261F:01B9:001B:EDBF
 * Called From: 261F:01B9:001B:EDBF
 * Called From: 261F:01B9:001B:EDBF
 * Called From: B4AE:011A:000B:7807
 * Called From: B4B8:1C06:0008:FC73
 * Called From: B4B8:1C6A:0009:C151
 * Called From: B4B8:1CD8:0008:FC73
 * Called From: B4B8:1D54:000C:5887
 * Called From: B4B8:2170:0012:2CF4
 * Called From: B4B8:21EF:000A:D6BC
 * Called From: B4BE:0032:0009:D5AF
 * Called From: B4BE:014F:000C:6307
 * Called From: B4BE:01D6:0014:8411
 * Called From: B4CD:0E60:0013:7F23
 * Called From: B4CD:0E7B:0009:22AF
 * Called From: B4CD:0EE4:000F:4404
 * Called From: B4CD:0EF0:000C:AA07
 * Called From: B4CD:1537:0015:ABE6
 * Called From: B4E9:036F:000C:4B79
 * Called From: B4E9:0390:0015:1E42
 * Called From: B4E9:0414:000B:70BA
 * Called From: B4ED:07A6:0023:561F
 * Called From: B4ED:0AB0:0010:6B85
 * Called From: B4F2:008E:0010:7381
 * Called From: B4F2:026A:0014:44C6
 * Called From: B503:0024:000A:C5EF
 * Called From: B511:0029:0010:AE09
 * Called From: B511:0410:000A:D6BC
 * Called From: B511:045D:0009:C151
 * Called From: B511:0BA4:000C:4B79
 * Called From: B511:0D59:0012:77BF
 * Called From: B511:0D6D:0008:8F41
 * Called From: B511:0FEC:000B:EDE5
 * Called From: B511:14AF:0008:FC73
 * Called From: B518:01B4:000B:69BA
 */
void ovl__3483(uint8 entry)
{
	if (emu_get_memory8(0x3483, 0, 0x20) == 0xCD || entry == 0xFF) {
		/* The overlay is not yet loaded. Do so by calling int 3F */
		uint16 ent_ip = (entry == 0xFF) ? 0x02 : (entry * 5) + 0x22;
		emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x261F; emu_push(ent_ip); f__261F_0008_0033_66ED();
	}
	if (entry == 0xFF) return;

	/* Call the overlay function with the current cs it is loaded at */
	emu_cs = emu_get_memory16(0x3483, 0, (entry * 5) + 0x23);
	switch (entry) {
		case 0: f__B483_0000_0019_F96A(); return;
		case 1: f__B483_0283_0014_983A(); return;
		case 2: f__B483_0363_0016_83DF(); return;
		case 3: f__B483_0470_000E_519D(); return;
		case 4: f__B483_04CB_0015_EBB4(); return;
		case 5: f__B483_0156_0019_AEFE(); return;
	}
}
