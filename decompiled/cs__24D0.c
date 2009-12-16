/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__24D0_000D_0039_C17D()
 *
 * @name f__24D0_000D_0039_C17D
 * @implements 24D0:000D:0039:C17D ()
 * @implements 24D0:0023:0023:6DA5
 * @implements 24D0:002F:0017:14B6
 * @implements 24D0:003A:000C:9629
 * @implements 24D0:0044:0002:ED3A
 * @implements 24D0:0046:0057:54FF
 * @implements 24D0:0051:004C:FA6A
 * @implements 24D0:0068:0035:D95E
 * @implements 24D0:007F:001E:EB4C
 * @implements 24D0:009D:0007:CFD7
 * @implements 24D0:00A0:0004:DE52
 *
 * Called From: 07D4:016A:0006:86E5
 * Called From: 07D4:016A:0008:B465
 * Called From: 07D4:135C:002A:03E1
 * Called From: 07D4:135C:0028:958D
 * Called From: 07D4:153F:0028:94C8
 * Called From: 07D4:153F:001E:A3D1
 * Called From: 07D4:1612:0025:4D45
 * Called From: 0F78:0194:0024:4F8D
 * Called From: 10E4:0986:0028:2D48
 * Called From: 10E4:0B78:0029:58EB
 * Called From: 10E4:1B69:0025:F554
 * Called From: 10E4:2235:0020:001D
 * Called From: 2C17:0199:0037:421C
 * Called From: 2C17:0199:005E:FAF1
 * Called From: B491:0180:0103:8A92
 * Called From: B491:01A2:0022:B45D
 * Called From: B491:0607:0023:F7BE
 * Called From: B491:0878:0025:F411
 * Called From: B495:075D:0024:E836
 * Called From: B495:0B10:002C:6F3D
 * Called From: B495:0B38:0028:B5D4
 * Called From: B495:0B90:0024:BED1
 * Called From: B495:0DB8:0025:8B74
 * Called From: B495:0DB8:000A:82B9
 * Called From: B495:0FA4:0024:33C2
 * Called From: B495:106F:0025:696E
 * Called From: B495:1134:0024:2AF0
 * Called From: B495:131D:004C:6411
 * Called From: B495:1340:0023:03CB
 * Called From: B495:152B:0020:001D
 * Called From: B4B8:1FCA:0021:2C9D
 * Called From: B4BE:02A0:0023:174C
 * Called From: B4BE:0341:0023:174C
 * Called From: B4DA:0D19:0024:359C
 * Called From: B4DA:0D8B:0024:8C51
 * Called From: B4DA:0DC7:0022:BFB5
 * Called From: B4DA:0E90:0023:F42C
 * Called From: B4DA:0FF2:0025:F417
 * Called From: B4DA:105E:0025:F417
 * Called From: B4DA:11B5:0020:001D
 * Called From: B4DA:1357:0025:F417
 * Called From: B4DA:1406:002C:2B53
 * Called From: B4DA:150C:002C:97CE
 * Called From: B4DA:17B0:0023:3E89
 * Called From: B4DA:17DA:0022:549D
 * Called From: B4DA:1846:0023:F42C
 * Called From: B4DA:1884:0021:A4DB
 * Called From: B4E0:00AF:0020:001D
 * Called From: B4E0:0A69:0024:F6D9
 * Called From: B4F2:0D36:0025:F411
 * Called From: B4F2:10E0:002A:1D60
 * Called From: B503:01A2:0023:CE81
 * Called From: B503:01C6:0024:5AA3
 * Called From: B503:01FC:000A:93B9
 * Called From: B503:01FC:0024:B03C
 * Called From: B503:0265:0020:007D
 * Called From: B503:04B5:0023:DE89
 * Called From: B503:0F3F:0028:4A19
 * Called From: B503:0FD8:0021:44B2
 * Called From: B511:0F13:0020:001D
 * Called From: B511:110C:0020:001D
 * Called From: B511:13B3:0020:F01E
 * Called From: B511:13DF:002C:FE1E
 * Called From: B518:01D5:0021:2C9D
 * Called From: B518:0693:0026:840E
 * Called From: B518:0B96:0032:05DD
 * Called From: B518:0B96:0021:F9AC
 * Called From: B518:0BCC:0022:6D86
 * Called From: B518:0BCC:0025:1972
 * Called From: B518:14B3:0024:CF61
 */
void f__24D0_000D_0039_C17D()
{
l__000D:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xE), 0x28);
	if ((int16)emu_get_memory16(emu_ss, emu_bp,  0xE) > (int16)0x28) {
		emu_get_memory16(emu_ss, emu_bp,  0xE) = 0x28;
	}
l__0023:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x10), 0xC8);
	if ((int16)emu_get_memory16(emu_ss, emu_bp,  0x10) > (int16)0xC8) {
		emu_get_memory16(emu_ss, emu_bp,  0x10) = 0xC8;
	}
l__002F:
	emu_orw(&emu_si, emu_si);
	if ((emu_flags.sf != emu_flags.of)) {
		emu_subw(&emu_di, emu_si);
		emu_addw(&emu_get_memory16(emu_ss, emu_bp,  0xE), emu_si);
		emu_xorw(&emu_si, emu_si);
	}
l__003A:
	emu_cmpw(&emu_si, 0x28);
	if ((int16)emu_si < (int16)0x28) {
		emu_cmpw(&emu_di, 0x28);
		if ((int16)emu_di < (int16)0x28) goto l__0046;
	}
l__0044:
	goto l__00A0;
l__0046:
	emu_orw(&emu_di, emu_di);
	if ((emu_flags.sf != emu_flags.of)) {
		emu_subw(&emu_si, emu_di);
		emu_addw(&emu_get_memory16(emu_ss, emu_bp,  0xE), emu_di);
		emu_xorw(&emu_di, emu_di);
	}
l__0051:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if ((int16)emu_get_memory16(emu_ss, emu_bp,  0x8) < (int16)0x0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
		emu_subw(&emu_get_memory16(emu_ss, emu_bp,  0xC), emu_ax);
		emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
		emu_addw(&emu_get_memory16(emu_ss, emu_bp,  0x10), emu_ax);
		emu_get_memory16(emu_ss, emu_bp,  0x8) = 0x0;
	}
l__0068:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x0);
	if ((int16)emu_get_memory16(emu_ss, emu_bp,  0xC) < (int16)0x0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xC);
		emu_subw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ax);
		emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xC);
		emu_addw(&emu_get_memory16(emu_ss, emu_bp,  0x10), emu_ax);
		emu_get_memory16(emu_ss, emu_bp,  0xC) = 0x0;
	}
l__007F:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_si);
	emu_ax = 0x353F;
	emu_es = emu_ax;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x663C);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x663E);
	emu_push(0x009D);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A606D7: f__22A6_06D7_006B_B7D6(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x24D0; emu_last_ip = 0x0098; emu_last_length = 0x001E; emu_last_crc = 0xEB4C;
			emu_call();
			return;
	}
l__009D:
	emu_addw(&emu_sp, 0x10);
l__00A0:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
