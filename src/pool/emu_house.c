/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "../house.h"
#include "pool.h"
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
 * Emulator wrapper around House_Init().
 *
 * @name emu_House_Init
 * @implements 10BE:000C:0020:F10F ()
 * @implements 10BE:002C:0026:4F78
 * @implements 10BE:0035:001D:55B0
 * @implements 10BE:0052:0007:F03C
 * @implements 10BE:0059:0006:A112
 * @implements 10BE:005F:0025:D55B
 * @implements 10BE:0077:000D:6824
 * @implements 10BE:0078:000C:5826
 * @implements 10BE:0084:0005:8BCF
 */
void emu_House_Init()
{
	csip32 address;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	address = emu_get_csip32(emu_ss, emu_sp, 0x0);

	House_Init(address);

	emu_dx = 0;
	emu_ax = sizeof(House) * HOUSE_INDEX_MAX;
}

/**
 * Emulator wrapper around House_Allocate().
 *
 * @name emu_House_Allocate
 * @implements 10BE:00A0:0064:DF2A ()
 * @implements 10BE:0104:003D:D771
 * @implements 10BE:0141:0005:8BCF
 */
void emu_House_Allocate()
{
	uint8 index;
	House *h;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	emu_dx = 0x0;
	emu_ax = 0x0;

	index = (uint8)emu_get_memory16(emu_ss, emu_sp,  0x0);

	h = House_Allocate(index);

	if (h == NULL) return;
	emu_dx = g_global->houseStartPos.s.cs;
	emu_ax = g_global->houseStartPos.s.ip + h->index * sizeof(House);
}

/**
 * Emulator wrapper around House_Free().
 *
 * @name emu_House_Free
 * @implements 10BE:0147 ()
 * @implements 10BE:014E
 * @implements 10BE:019E
 * @implements 10BE:01A2
 * @implements 10BE:01A1
 */
void emu_House_Free()
{
	csip32 address;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	address = emu_get_csip32(emu_ss, emu_sp, 0x0);

	House_Free(address);
}

/**
 * Get a _valid_ House from the memory by index.
 *  This function differs in other emu_Pool_Get_ByIndex, by the fact it can
 *  only return on used House structs. Else it returns 0000:0000 in dx:ax.
 *
 * @name emu_House_Get_ByIndex
 * @implements 10BE:01AB:002F:0E7B ()
 * @implements 10BE:01D8:0002:C33A
 * @implements 10BE:01DA:0006:5EA9
 * @implements 10BE:01E0:0002:2597
 */
void emu_House_Get_ByIndex()
{
	uint8 index;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	emu_ax = 0x0;
	emu_dx = 0x0;

	index = (uint8)emu_get_memory16(emu_ss, emu_sp,  0x0);

	if (index >= HOUSE_INDEX_MAX) return;
	{
		House *h = House_Get_ByIndex(index);
		if ((h->flags & 0x0001) == 0) return;
	}
	emu_dx = g_global->houseStartPos.s.cs;
	emu_ax = g_global->houseStartPos.s.ip + index * sizeof(House);
}

/**
 * Emulator wrapper around House_Find(). It also initializes the
 *  PoolFindStruct, and uses a default struct in case none is given.
 *
 * @name emu_House_FindFirst
 * @implements 10BE:01E2:0027:6596 ()
 * @implements 10BE:01F5:0014:C21B
 * @implements 10BE:0209:0004:5B1F
 * @implements 10BE:020D:0002:2597
 */
void emu_House_FindFirst()
{
	PoolFindStruct *find;
	House *h;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	emu_dx = 0x0;
	emu_ax = 0x0;

	find = (PoolFindStruct *)&emu_get_memory8(emu_get_memory16(emu_ss, emu_sp,  0x2), emu_get_memory16(emu_ss, emu_sp,  0x0), 0x0);
	if (emu_get_memory16(emu_ss, emu_sp,  0x2) == 0x0 && emu_get_memory16(emu_ss, emu_sp,  0x0) == 0x0) {
		emu_get_memory16(emu_ss, emu_sp,  0x2) = 0x353F;
		emu_get_memory16(emu_ss, emu_sp,  0x0) = emu_Global_GetIP(g_global->houseFindStruct, 0x353F);
		find = (PoolFindStruct *)g_global->houseFindStruct;
	}

	find->houseID = 0xFFFF;
	find->type    = 0xFFFF;
	find->index   = 0xFFFF;

	h = House_Find(find);

	if (h == NULL) return;
	emu_dx = g_global->houseStartPos.s.cs;
	emu_ax = g_global->houseStartPos.s.ip + h->index * sizeof(House);
}

/**
 * Emulator wrapper around House_Find(). It uses a default struct in case
 *  none is given.
 *
 * @name emu_House_FindNext
 * @implements 10BE:020F:004E:633B ()
 * @implements 10BE:0226:0037:B108
 * @implements 10BE:0234:0029:8A5C
 * @implements 10BE:025B:0002:C33A
 * @implements 10BE:025D:0006:5EA9
 * @implements 10BE:0263:0005:8BCF
 */
void emu_House_FindNext()
{
	PoolFindStruct *find;
	House *h;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	emu_dx = 0x0;
	emu_ax = 0x0;

	find = (PoolFindStruct *)&emu_get_memory8(emu_get_memory16(emu_ss, emu_sp,  0x2), emu_get_memory16(emu_ss, emu_sp,  0x0), 0x0);
	if (emu_get_memory16(emu_ss, emu_sp,  0x2) == 0x0 && emu_get_memory16(emu_ss, emu_sp,  0x0) == 0x0) {
		emu_get_memory16(emu_ss, emu_sp,  0x2) = 0x353F;
		emu_get_memory16(emu_ss, emu_sp,  0x0) = emu_Global_GetIP(g_global->houseFindStruct, 0x353F);
		find = (PoolFindStruct *)g_global->houseFindStruct;
	}

	h = House_Find(find);

	if (h == NULL) return;
	emu_dx = g_global->houseStartPos.s.cs;
	emu_ax = g_global->houseStartPos.s.ip + h->index * sizeof(House);
}
