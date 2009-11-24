/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "house.h"

/**
 * Emulator wrapper around GameLoop_House().
 *
 * @name emu_GameLoop_House
 * @implements 1391:000A:0035:2CB6 ()
 * @implements 1391:003F:00C8:12AA
 * @implements 1391:0054:00B3:890D
 * @implements 1391:006E:0099:5702
 * @implements 1391:0083:0084:0CD3
 * @implements 1391:0098:006F:AC38
 * @implements 1391:00B2:0055:86F4
 * @implements 1391:00C7:0040:3A20
 * @implements 1391:00E1:0026:4CCC
 * @implements 1391:00F6:0011:EC7E
 * @implements 1391:0107:00C0:28C2
 * @implements 1391:010A:00BD:9872
 * @implements 1391:011F:00A8:AA2F
 * @implements 1391:0134:0093:0398
 * @implements 1391:014D:007A:153C
 * @implements 1391:0162:0065:FF33
 * @implements 1391:017B:004C:FA99
 * @implements 1391:0190:0037:8316
 * @implements 1391:01AA:001D:4FD0
 * @implements 1391:01C7:0015:2C30
 * @implements 1391:01DC:0008:8787
 * @implements 1391:01E4:0013:F257
 * @implements 1391:01E5:0012:F977
 * @implements 1391:01F7:0031:36C0
 * @implements 1391:0228:0011:014A
 * @implements 1391:0230:0009:D032
 * @implements 1391:0239:0019:F809
 * @implements 1391:0252:0013:2798
 * @implements 1391:0265:0013:1F9F
 * @implements 1391:0278:0020:AEEA
 * @implements 1391:0298:0012:8793
 * @implements 1391:02AA:0025:2E69
 * @implements 1391:02CF:001A:9F54
 * @implements 1391:02E9:0009:1DF9
 * @implements 1391:02F2:0008:0AE5
 * @implements 1391:02FA:0018:A575
 * @implements 1391:0312:0027:6AEA
 * @implements 1391:0339:0008:A673
 * @implements 1391:0341:000E:E4D8
 * @implements 1391:034F:0047:9E8A
 * @implements 1391:0352:0044:8FBF
 * @implements 1391:0396:0026:1667
 * @implements 1391:03A5:0017:8023
 * @implements 1391:03BC:0008:0AE5
 * @implements 1391:03C4:000E:8A9D
 * @implements 1391:03D2:0046:1B29
 * @implements 1391:03D8:0040:703A
 * @implements 1391:0418:004D:E505
 * @implements 1391:045C:0009:52AE
 * @implements 1391:045D:0008:D28D
 * @implements 1391:0465:0031:20D9
 * @implements 1391:0494:0002:E3BA
 * @implements 1391:0496:0018:8B16
 * @implements 1391:04AE:0024:200D
 * @implements 1391:04B1:0021:2689
 * @implements 1391:04D2:0008:A466
 * @implements 1391:04DA:000D:FA8A
 * @implements 1391:04DD:000A:2ECE
 * @implements 1391:04E7:0003:9CB2
 * @implements 1391:04EA:0009:911F
 * @implements 1391:04F3:0018:C01F
 * @implements 1391:050B:001E:F492
 * @implements 1391:051F:000A:0BF8
 * @implements 1391:0529:002C:37BF
 * @implements 1391:052C:0029:B3B9
 * @implements 1391:0555:0013:CAB6
 * @implements 1391:0568:0008:A466
 * @implements 1391:0570:0021:4319
 * @implements 1391:0573:001E:0E5D
 * @implements 1391:0591:0008:A466
 * @implements 1391:0599:0015:7A08
 * @implements 1391:059C:0012:3EDC
 * @implements 1391:05AE:000F:810E
 * @implements 1391:05AF:000E:330E
 * @implements 1391:05BD:0009:5194
 * @implements 1391:05C6:001D:6EDC
 * @implements 1391:05E3:0018:5AA7
 * @implements 1391:05E5:0016:6827
 * @implements 1391:05FB:0013:1B5E
 * @implements 1391:060E:0039:B7A1
 * @implements 1391:0647:0013:BF12
 * @implements 1391:065A:003C:0BDF
 * @implements 1391:0696:0004:8D0C
 * @implements 1391:0697:0003:1D09
 * @implements 1391:069A:0016:7A8F
 * @implements 1391:06B0:0005:B92E
 * @implements 1391:06B5:0019:6FCA
 * @implements 1391:06CE:0013:BF12
 * @implements 1391:06E1:003C:0BDF
 * @implements 1391:071D:0003:C41A
 * @implements 1391:071E:0002:CF3A
 * @implements 1391:0720:000B:166D
 * @implements 1391:072B:0013:8CF6
 * @implements 1391:072D:0011:C7C0
 * @implements 1391:073E:0024:604E
 * @implements 1391:0762:0013:3915
 * @implements 1391:076C:0009:D115
 * @implements 1391:0775:000C:2418
 * @implements 1391:0781:000D:5BF0
 * @implements 1391:078E:0058:0894
 * @implements 1391:07A2:0044:44DB
 * @implements 1391:07B5:0031:AC71
 * @implements 1391:07C8:001E:E4B4
 * @implements 1391:07E6:0032:87D6
 * @implements 1391:07F5:0023:F0F1
 * @implements 1391:0818:001C:4160
 * @implements 1391:0820:0014:2438
 * @implements 1391:082A:000A:FEA0
 * @implements 1391:0834:0015:9C95
 * @implements 1391:0849:0006:F7CE
 */
void emu_GameLoop_House()
{
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	GameLoop_House();
}

/**
 * Emulator wrapper around House_AreAllied().
 *
 * @name emu_House_AreAllied
 * @implements 1423:0F34:0017:464D ()
 * @implements 1423:0F47:0004:F0B9
 * @implements 1423:0F49:0002:D8BA
 * @implements 1423:0F4B:0006:69E5
 * @implements 1423:0F51:0016:7BD9
 * @implements 1423:0F5B:000C:3825
 * @implements 1423:0F65:0002:C83A
 * @implements 1423:0F67:0002:AF3A
 * @implements 1423:0F69:000E:CCF9
 * @implements 1423:0F75:0002:A83A
 * @implements 1423:0F77:0005:B37A
 * @implements 1423:0F7C:0002:2597
 */
void emu_House_AreAllied()
{
	uint8 houseID1, houseID2;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	houseID1 = (uint8)emu_get_memory16(emu_ss, emu_sp, 0x0);
	houseID2 = (uint8)emu_get_memory16(emu_ss, emu_sp, 0x2);

	emu_ax = House_AreAllied(houseID1, houseID2) ? 1 : 0;
}
