/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Overlay Handler for 0x34CD
 *
 * @param entry The entry point of the overlay table.
 *
 * @name ovl__34CD
 * @implements 34CD:0020 (0)
 * @implements 34CD:0025 (1)
 * @implements 34CD:002A (2)
 * @implements 34CD:002F (3)
 * @implements 34CD:0039 (5)
 * @implements 34CD:003E (6)
 * @implements 34CD:0043 (7)
 * @implements 34CD:0048 (8)
 * @implements 34CD:004D (9)
 * @implements 34CD:0057 (11)
 * @implements 34CD:005C (12)
 * @implements 34CD:0061 (13)
 * @implements 34CD:0066 (14)
 * @implements 34CD:006B (15)
 * @implements 34CD:0070 (16)
 * @implements 34CD:007F (19)
 * @implements 34CD:0084 (20)
 * @implements 34CD:008E (22)
 * @implements 34CD:0093 (23)
 * @implements 34CD:0098 (24)
 * @implements 34CD:00A2 (26)
 * @implements 34CD:00A7 (27)
 * @implements 34CD:00AC (28)
 * @implements 34CD:00B1 (29)
 * @implements 34CD:00B6 (30)
 * @implements 34CD:00BB (31)
 * @implements 34CD:00C0 (32)
 * @implements 34CD:00CA (34)
 *
 * Called From: 06F7:0319:0013:BFDD
 * Called From: 06F7:037D:0008:EF0C
 * Called From: 06F7:0748:000A:244D
 * Called From: 06F7:0758:0006:038C
 * Called From: 06F7:0764:000C:3D88
 * Called From: 06F7:0772:0006:038C
 * Called From: 06F7:07B5:0006:038C
 * Called From: 06F7:0852:000A:C65F
 * Called From: 06F7:08A9:002E:2DFE
 * Called From: 06F7:0AA2:0025:0CB1
 * Called From: 06F7:0B33:0024:6B4A
 * Called From: 06F7:0B61:0024:6B4B
 * Called From: 07D4:01DC:001B:3521
 * Called From: 07D4:02A3:0016:3859
 * Called From: 07D4:07F4:0009:DDFD
 * Called From: 07D4:0A52:0045:2721
 * Called From: 07D4:0BF6:0008:EE0C
 * Called From: 07D4:10F5:0006:022C
 * Called From: 07D4:1110:0006:001C
 * Called From: 07D4:1660:0012:AC82
 * Called From: 07D4:1660:0012:AC82
 * Called From: 07D4:16BD:0008:D38C
 * Called From: 07D4:1746:0008:DFBC
 * Called From: 07D4:17BD:0008:DEFC
 * Called From: 07D4:17BD:0008:DEFC
 * Called From: 0972:13A1:002B:7AF6
 * Called From: 0AEC:05D5:000A:C17C
 * Called From: 0AEC:0656:000B:619E
 * Called From: 0AEC:0766:0006:099C
 * Called From: 0AEC:079B:0015:2AF0
 * Called From: 0AEC:07BD:0012:22CA
 * Called From: 0AEC:07BD:0012:22CA
 * Called From: 0AEC:082A:0009:DCFD
 * Called From: 0AEC:0CF6:0009:DCFD
 * Called From: 0AEC:0FEA:0017:03FF
 * Called From: 0AEC:109D:000F:6CE7
 * Called From: 0AEC:11A5:0009:DCFD
 * Called From: 0AEC:1200:000F:5CE7
 * Called From: 0C3A:03B7:0008:7FAC
 * Called From: 0C3A:03C0:0009:C04D
 * Called From: 0C3A:03E2:0022:EFCA
 * Called From: 0C3A:054D:0008:7FAC
 * Called From: 0C3A:06DB:0017:8C2C
 * Called From: 0C3A:0AE1:0020:60C6
 * Called From: 0C3A:0C06:0017:BFD7
 * Called From: 0C3A:0CBC:0018:0B67
 * Called From: 0C3A:0CE6:0008:ECEC
 * Called From: 0C3A:0D41:0008:E59C
 * Called From: 0C3A:0DAD:0011:FFAD
 * Called From: 0C3A:0DD6:0008:EF8C
 * Called From: 0C3A:210E:0027:2229
 * Called From: 0C3A:2470:0042:9CCA
 * Called From: 0C3A:24F4:0039:DD71
 * Called From: 0C3A:253F:0017:C00F
 * Called From: 0C3A:255C:001D:84C4
 * Called From: 0C3A:2567:000B:35CF
 * Called From: 0EDB:048B:0008:7BEC
 * Called From: 0F78:0235:001C:4289
 * Called From: 0F78:0328:0006:0EFC
 * Called From: 0F78:03DE:000D:432F
 * Called From: 10E4:10AD:0009:DCFD
 * Called From: 10E4:1CDD:0009:D18D
 * Called From: 10E4:1CF3:0009:DCFD
 * Called From: 10E4:21E5:000F:0D8F
 * Called From: 10E4:229D:0012:7C2F
 * Called From: 1423:0AFA:0009:C5ED
 * Called From: 151A:039A:0047:CBC4
 * Called From: 151A:03BC:0022:EFCA
 * Called From: 151A:041D:0021:2EC3
 * Called From: 151A:048B:000A:244D
 * Called From: 151A:0514:0081:DDEB
 * Called From: 151A:067F:0073:5CEB
 * Called From: 151A:06A1:0022:EFCA
 * Called From: 151A:06A1:0022:EFCA
 * Called From: 167E:0390:0009:C5ED
 * Called From: 176C:04AC:0011:B706
 * Called From: 176C:04ED:0008:7D9C
 * Called From: 176C:0503:0016:ACFE
 * Called From: 176C:056C:002D:2629
 * Called From: 176C:065A:0022:6242
 * Called From: 176C:0685:001C:14BF
 * Called From: 176C:0A53:0039:81B9
 * Called From: 176C:0FC4:0014:B90E
 * Called From: 176C:11B5:001F:3CE7
 * Called From: 176C:12A4:0014:BE66
 * Called From: 176C:1569:0007:249C
 * Called From: 176C:190D:0025:207C
 * Called From: 176C:2305:0008:778C
 * Called From: 176C:271C:000A:22CD
 * Called From: 176C:275D:002F:1FF9
 * Called From: 176C:2788:000F:564B
 * Called From: 176C:2966:001B:DE4A
 * Called From: 1A34:018D:0006:0FFC
 * Called From: 1A34:0211:0006:03CC
 * Called From: 1A34:0260:0043:5A23
 * Called From: 1A34:0283:000E:F3CB
 * Called From: 1A34:0413:0008:778C
 * Called From: 1A34:07A4:0006:0EBC
 * Called From: 1A34:08AF:002A:FD6B
 * Called From: 1A34:0B21:0015:1D6C
 * Called From: 1A34:0DB3:0059:921A
 * Called From: 1A34:0E70:000A:268D
 * Called From: 1A34:0EBA:0006:0FBC
 * Called From: 1A34:0F2F:0006:0EFC
 * Called From: 1A34:0FC8:001A:68F3
 * Called From: 1A34:10C1:0012:C645
 * Called From: 1A34:113E:0016:CAED
 * Called From: 1A34:129F:0008:74EC
 * Called From: 1A34:12DF:0008:74EC
 * Called From: 1A34:16F3:0014:AADA
 * Called From: 1A34:1745:0008:ED8C
 * Called From: 1A34:1811:003E:A63A
 * Called From: 1A34:1AA9:0009:4AFC
 * Called From: 1A34:1AD3:0006:0EBC
 * Called From: 1A34:1BAB:0009:4AFC
 * Called From: 1A34:1BE5:0006:0EBC
 * Called From: 1A34:2004:0012:144A
 * Called From: 1A34:200E:000A:2ADD
 * Called From: 1A34:201C:000E:3975
 * Called From: 1A34:2026:000A:28ED
 * Called From: 1A34:203B:000F:2692
 * Called From: 1A34:2341:0009:449C
 * Called From: 1A34:26A1:002F:449F
 * Called From: 1A34:2780:002A:2CE5
 * Called From: 1A34:289D:0008:778C
 * Called From: 1A34:2A8D:001A:D747
 * Called From: 1A34:2AC8:0016:CAED
 * Called From: 1A34:2BA9:0045:E251
 * Called From: 1A34:2FB5:0006:0EFC
 * Called From: 1A34:2FC2:0006:038C
 * Called From: 1A34:3177:001E:9B78
 * Called From: 1A34:318F:0006:0FFC
 * Called From: 1A34:3247:0006:0EBC
 * Called From: 1A34:3284:0006:03CC
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
 * Called From: B4B5:0575:0008:74EC
 * Called From: B4B5:0814:000D:D8F6
 * Called From: B4B5:0B4E:000E:D5FD
 * Called From: B4CD:0641:002A:C621
 * Called From: B4CD:0641:002A:C621
 * Called From: B4CD:0641:002A:C621
 * Called From: B4CD:0714:0032:5971
 * Called From: B4CD:0714:0032:5971
 * Called From: B4CD:0714:0032:5971
 * Called From: B4CD:0714:0032:5971
 * Called From: B4CD:0714:0032:5971
 * Called From: B4CD:0714:0032:5971
 * Called From: B4CD:0714:0032:5971
 * Called From: B4CD:0714:0032:5971
 * Called From: B4CD:0714:0032:5971
 * Called From: B4CD:0714:0032:5971
 * Called From: B4CD:0714:0032:5971
 * Called From: B4CD:0714:0032:5971
 * Called From: B4CD:0714:0032:5971
 * Called From: B4CD:0714:0032:5971
 * Called From: B4CD:0714:0032:5971
 * Called From: B4CD:0714:0032:5971
 * Called From: B4CD:0714:0032:5971
 * Called From: B4CD:0714:0032:5971
 * Called From: B4CD:0714:0032:5971
 * Called From: B4E9:011D:0024:D12A
 * Called From: B511:00BE:0006:0FFC
 * Called From: B511:00EF:0017:4387
 * Called From: B511:0137:002E:AF7B
 * Called From: B511:0182:0011:0D64
 * Called From: B511:03D9:0009:DCFD
 */
void ovl__34CD(uint8 entry)
{
	if (emu_get_memory8(0x34CD, 0, 0x20) == 0xCD || entry == 0xFF) {
		/* The overlay is not yet loaded. Do so by calling int 3F */
		uint16 ent_ip = (entry == 0xFF) ? 0x02 : (entry * 5) + 0x22;
		emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x261F; emu_push(ent_ip); f__261F_0008_0033_9069();
	}
	if (entry == 0xFF) return;

	/* Call the overlay function with the current cs it is loaded at */
	emu_cs = emu_get_memory16(0x34CD, 0, (entry * 5) + 0x23);
	switch (entry) {
		case 0: f__B4CD_04C4_0010_1984(); return;
		case 1: f__B4CD_0566_0010_1B1E(); return;
		case 2: f__B4CD_0194_0011_3833(); return;
		case 3: f__B4CD_017F_0010_18FA(); return;
		case 5: f__B4CD_0408_001F_4084(); return;
		case 6: f__B4CD_053B_0010_1BE2(); return;
		case 7: f__B4CD_048E_0012_450B(); return;
		case 8: f__B4CD_01AA_0010_1826(); return;
		case 9: f__B4CD_1BC4_0013_C02D(); return;
		case 11: f__B4CD_0F8B_0015_DD56(); return;
		case 12: f__B4CD_17F7_001D_7923(); return;
		case 13: f__B4CD_0750_0027_EDA0(); return;
		case 14: f__B4CD_04D9_0011_0966(); return;
		case 15: f__B4CD_00A5_0016_CC59(); return;
		case 16: f__B4CD_0D74_0020_95E1(); return;
		case 19: f__B4CD_17DC_0019_F917(); return;
		case 20: f__B4CD_1178_000D_521E(); return;
		case 22: f__B4CD_01BF_0016_9EED(); return;
		case 23: f__B4CD_14CA_0013_A385(); return;
		case 24: f__B4CD_1816_0033_4F45(); return;
		case 26: f__B4CD_10EE_0039_70D6(); return;
		case 27: f__B4CD_08E7_002B_5180(); return;
		case 28: f__B4CD_0AFA_0011_9926(); return;
		case 29: f__B4CD_0000_0011_CE2B(); return;
		case 30: f__B4CD_1133_0039_7483(); return;
		case 31: f__B4CD_07F4_0013_5FE1(); return;
		case 32: f__B4CD_1086_0040_609C(); return;
		case 34: f__B4CD_1269_0019_57F0(); return;
	}
}
