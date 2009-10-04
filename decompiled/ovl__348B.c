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
 * Called From: 0C3A:2800:002B:0599
 * Called From: 0C3A:28A1:0023:35DC
 * Called From: 0C3A:2915:001A:5465
 * Called From: 10E4:1193:0015:DBD8
 * Called From: 10E4:11A7:0014:C670
 * Called From: 10E4:11BA:0013:8AD3
 * Called From: 10E4:11CE:0014:8F36
 * Called From: 10E4:11E1:0013:8AD1
 * Called From: 10E4:11F5:0014:B7F4
 * Called From: 10E4:1208:0013:8AD2
 * Called From: 10E4:121C:0014:BFB2
 * Called From: 10E4:122F:0013:8AD4
 * Called From: 10E4:1243:0014:EE3E
 * Called From: 10E4:125C:0013:0E38
 * Called From: 10E4:1288:002C:EF78
 * Called From: 10E4:135F:001C:44A3
 * Called From: 10E4:1452:000B:44E8
 * Called From: 10E4:14C2:000B:44E8
 * Called From: 10E4:14E7:000B:44E8
 * Called From: 10E4:150D:000B:44E8
 * Called From: 10E4:1533:000B:54E6
 * Called From: 10E4:1687:0017:0BB8
 * Called From: 10E4:16B1:002A:C1E9
 * Called From: 10E4:16CD:001A:B719
 * Called From: 10E4:16E7:000B:54E6
 * Called From: 10E4:1708:0021:1F7C
 * Called From: 10E4:1718:0010:937C
 * Called From: 10E4:174D:002F:8C7B
 * Called From: 10E4:175D:0010:937C
 * Called From: 10E4:1773:0014:5232
 * Called From: 10E4:1783:0010:437C
 * Called From: 10E4:17A6:001E:31A7
 * Called From: 10E4:17B6:0010:437C
 * Called From: 10E4:17ED:000B:34EA
 * Called From: 10E4:2155:0012:81F6
 * Called From: 10E4:2172:0013:8AD5
 * Called From: 1A34:1D78:000E:514C
 * Called From: 1A34:1E71:0028:9B00
 * Called From: 1A34:1E88:0017:4275
 * Called From: 261F:01B9:001B:EDBF
 * Called From: 261F:01B9:001B:EDBF
 * Called From: 261F:01B9:001B:EDBF
 * Called From: 261F:01B9:001B:EDBF
 * Called From: 261F:01B9:001B:EDBF
 * Called From: 261F:01B9:001B:EDBF
 * Called From: B495:01BA:000E:814C
 * Called From: B495:0277:000E:814C
 * Called From: B495:02FA:0031:594F
 * Called From: B495:0387:0016:687B
 * Called From: B495:13D6:0013:93C6
 * Called From: B495:13E0:000A:E8F7
 * Called From: B495:1799:0017:D53F
 * Called From: B495:17D0:000D:C17F
 * Called From: B4B8:0CF5:0050:EFB0
 * Called From: B4E0:0324:000E:C2E3
 * Called From: B4E0:033B:0017:3649
 * Called From: B4E0:034C:0011:2470
 * Called From: B4E0:03E4:0018:0BD3
 * Called From: B4E0:0822:0013:6B81
 * Called From: B4E0:08E2:0014:3673
 * Called From: B4E0:09A0:000E:6934
 * Called From: B4E0:09F9:001D:AE52
 * Called From: B4E0:0A17:0014:3661
 * Called From: B4E0:0A34:0013:D5DC
 * Called From: B4E0:0CB4:00AA:9694
 * Called From: B4E0:0CEE:0011:DAA4
 * Called From: B4E0:0CFB:000D:B16D
 * Called From: B4E0:0D45:001F:A27B
 * Called From: B4E0:0D6C:0027:BAC7
 * Called From: B4E0:0DE1:003E:B602
 * Called From: B4E0:0E03:0022:7628
 * Called From: B4E0:0E78:003E:B69E
 * Called From: B4E0:0E97:001F:4543
 * Called From: B4E9:0245:0027:798D
 * Called From: B4F2:01B4:000E:6100
 * Called From: B4F2:0325:000E:514C
 * Called From: B4F2:03D2:0013:1C32
 * Called From: B4F2:042D:001A:FFEB
 * Called From: B4F2:0476:000E:814C
 * Called From: B4F2:056A:0012:AC5F
 * Called From: B4F2:0684:000E:7936
 * Called From: B4F2:07C4:0017:B773
 * Called From: B4F2:07CE:000A:F8F6
 * Called From: B4F2:0ABE:007F:1761
 * Called From: B4F2:0AD3:0015:5E76
 * Called From: B4F2:0AE3:0010:CB6F
 * Called From: B4F2:0D84:000A:F079
 * Called From: B4F2:0DC9:000A:347F
 * Called From: B511:0D47:001A:F3E0
 * Called From: B511:0F68:0018:A36B
 * Called From: B511:1092:0035:7C26
 * Called From: B511:1265:001A:4715
 * Called From: B511:12BD:001A:4715
 * Called From: B511:13ED:000E:0FF5
 * Called From: B518:0A23:0053:7EDA
 * Called From: B518:0AFE:000E:814C
 */
void ovl__348B(uint8 entry)
{
	if (emu_get_memory8(0x348B, 0, 0x20) == 0xCD || entry == 0xFF) {
		/* The overlay is not yet loaded. Do so by calling int 3F */
		uint16 ent_ip = (entry == 0xFF) ? 0x02 : (entry * 5) + 0x22;
		emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x261F; emu_push(ent_ip); f__261F_0008_0033_66ED();
	}
	if (entry == 0xFF) return;

	/* Call the overlay function with the current cs it is loaded at */
	emu_cs = emu_get_memory16(0x348B, 0, (entry * 5) + 0x23);
	switch (entry) {
		case 0: f__B48B_0000_001E_7E97(); return;
		case 1: f__B48B_0088_0029_3A68(); return;
		case 2: f__B48B_00BD_0029_3530(); return;
		case 3: f__B48B_00F2_0005_601A(); return;
		case 4: f__B48B_0127_000E_E325(); return;
		case 5: f__B48B_01CE_002B_7574(); return;
		case 6: f__B48B_0242_0017_581D(); return;
		case 7: f__B48B_03A4_0005_619A(); return;
	}
}
