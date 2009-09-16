/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Overlay Handler for 0x348B
 *
 * @param entry The entry point of the overlay table.
 *
 * @name ovl__348B
 * @implements 348B:0020 (0)
 * @implements 348B:0025 (1)
 * @implements 348B:002A (2)
 * @implements 348B:002F (3)
 * @implements 348B:0034 (4)
 * @implements 348B:0039 (5)
 * @implements 348B:003E (6)
 * @implements 348B:0043 (7)
 *
 * Called From: 0C3A:28A1:0023:85AF
 * Called From: 0C3A:2915:001A:D9AC
 * Called From: 10E4:1193:0015:F4E3
 * Called From: 10E4:11A7:0014:0BD1
 * Called From: 10E4:11BA:0013:F524
 * Called From: 10E4:11BA:0013:F524
 * Called From: 10E4:11BA:0013:F524
 * Called From: 10E4:11CE:0014:56D6
 * Called From: 10E4:11E1:0013:F526
 * Called From: 10E4:11E1:0013:F526
 * Called From: 10E4:11F5:0014:9DD4
 * Called From: 10E4:1208:0013:F525
 * Called From: 10E4:121C:0014:C4D2
 * Called From: 10E4:122F:0013:F523
 * Called From: 10E4:1243:0014:72DF
 * Called From: 10E4:125C:0013:F0BE
 * Called From: 10E4:1288:002C:B202
 * Called From: 10E4:1288:002C:B202
 * Called From: 10E4:135F:001C:CB10
 * Called From: 10E4:1452:000B:6423
 * Called From: 10E4:14C2:000B:6423
 * Called From: 10E4:14E7:000B:6423
 * Called From: 10E4:150D:000B:6423
 * Called From: 10E4:1533:000B:5D23
 * Called From: 10E4:1687:0017:B7EA
 * Called From: 10E4:16B1:002A:A1F1
 * Called From: 10E4:16CD:001A:AA0B
 * Called From: 10E4:16E7:000B:5D23
 * Called From: 10E4:174D:002F:BB20
 * Called From: 10E4:175D:0010:3877
 * Called From: 10E4:1773:0014:B459
 * Called From: 10E4:1783:0010:38A7
 * Called From: 10E4:17ED:000B:6B23
 * Called From: 10E4:2155:0012:F7E9
 * Called From: 10E4:2172:0013:F522
 * Called From: 1A34:1D78:000E:2703
 * Called From: 1A34:1E71:0028:FC04
 * Called From: 1A34:1E88:0017:5CC4
 * Called From: 1A34:1E88:0017:5CC4
 * Called From: 261F:01B9:001B:DA28
 * Called From: 261F:01B9:001B:DA28
 * Called From: 261F:01B9:001B:DA28
 * Called From: 261F:01B9:001B:DA28
 * Called From: 261F:01B9:001B:DA28
 * Called From: 261F:01B9:001B:DA28
 * Called From: 261F:01B9:001B:DA28
 * Called From: 261F:01B9:001B:DA28
 * Called From: 261F:01B9:001B:DA28
 * Called From: 261F:01B9:001B:DA28
 * Called From: 261F:01B9:001B:DA28
 * Called From: 261F:01B9:001B:DA28
 * Called From: 261F:01B9:001B:DA28
 * Called From: 261F:01B9:001B:DA28
 * Called From: 261F:01B9:001B:DA28
 * Called From: 261F:01B9:001B:DA28
 * Called From: 261F:01B9:001B:DA28
 * Called From: 261F:01B9:001B:DA28
 * Called From: 261F:01B9:001B:DA28
 * Called From: 261F:01B9:001B:DA28
 * Called From: 261F:01B9:001B:DA28
 * Called From: 261F:01B9:001B:DA28
 * Called From: 261F:01B9:001B:DA28
 * Called From: 261F:01B9:001B:DA28
 * Called From: 261F:01B9:001B:DA28
 * Called From: 261F:01B9:001B:DA28
 * Called From: 261F:01B9:001B:DA28
 * Called From: 261F:01B9:001B:DA28
 * Called From: 261F:01B9:001B:DA28
 * Called From: 261F:01B9:001B:DA28
 * Called From: 261F:01B9:001B:DA28
 * Called From: 261F:01B9:001B:DA28
 * Called From: B495:01BA:000E:27D3
 * Called From: B495:01BA:000E:27D3
 * Called From: B495:0277:000E:27D3
 * Called From: B495:02FA:0031:DB15
 * Called From: B495:0387:0016:8C9F
 * Called From: B495:13D6:0013:CE5D
 * Called From: B495:13E0:000A:AC57
 * Called From: B495:1799:0017:F98A
 * Called From: B495:17D0:000D:CFED
 * Called From: B4B8:0CF5:0050:19F2
 * Called From: B4E0:0324:000E:8EFF
 * Called From: B4E0:033B:0017:5F61
 * Called From: B4E0:034C:0011:F493
 * Called From: B4E0:03E4:0018:C2B0
 * Called From: B4E0:0822:0013:2E31
 * Called From: B4E0:08E2:0014:01A5
 * Called From: B4E0:09A0:000E:F552
 * Called From: B4E0:09F9:001D:0FCF
 * Called From: B4E0:0A17:0014:01A6
 * Called From: B4E0:0A34:0013:0C33
 * Called From: B4E0:0CB4:00AA:1157
 * Called From: B4E0:0CEE:0011:0F53
 * Called From: B4E0:0CFB:000D:845D
 * Called From: B4E0:0D45:001F:C8D2
 * Called From: B4E0:0D6C:0027:4045
 * Called From: B4E0:0DE1:003E:4A92
 * Called From: B4E0:0DE1:003E:4A92
 * Called From: B4E0:0E03:0022:A0B5
 * Called From: B4E0:0E78:003E:4AAE
 * Called From: B4E0:0E97:001F:9659
 * Called From: B4E9:0245:0027:269C
 * Called From: B4F2:01B4:000E:D8F8
 * Called From: B4F2:0325:000E:2703
 * Called From: B4F2:0ABE:007F:FBD2
 * Called From: B4F2:0AD3:0015:2373
 * Called From: B4F2:0AE3:0010:7C27
 * Called From: B511:0D47:001A:78CB
 * Called From: B511:0F68:0018:AC2F
 * Called From: B511:1092:0035:23FE
 * Called From: B511:1265:001A:83B2
 * Called From: B511:12BD:001A:83B2
 * Called From: B511:13ED:000E:690A
 * Called From: B518:0A23:0053:0DB7
 */
void ovl__348B(uint8 entry)
{
	if (emu_get_memory8(0x348B, 0, 0x20) == 0xCD || entry == 0xFF) {
		/* The overlay is not yet loaded. Do so by calling int 3F */
		uint16 ent_ip = (entry == 0xFF) ? 0x02 : (entry * 5) + 0x22;
		emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x261F; emu_push(ent_ip); f__261F_0008_0033_9069();
	}
	if (entry == 0xFF) return;

	/* Call the overlay function with the current cs it is loaded at */
	emu_cs = emu_get_memory16(0x348B, 0, (entry * 5) + 0x23);
	switch (entry) {
		case 0: f__B48B_0000_001E_CF62(); return;
		case 1: f__B48B_0088_0029_5A9B(); return;
		case 2: f__B48B_00BD_0029_AABE(); return;
		case 3: f__B48B_00F2_0005_06E0(); return;
		case 4: f__B48B_0127_000E_8DEB(); return;
		case 5: f__B48B_01CE_002B_2382(); return;
		case 6: f__B48B_0242_0017_7F6F(); return;
		case 7: f__B48B_03A4_0005_06E6(); return;
	}
}
