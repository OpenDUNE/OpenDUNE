/* $Id$ */

#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "pool/house.h"
#include "pool/structure.h"
#include "house.h"
#include "structure.h"

/**
 * Emulator wrapper around GameLoop_Structure().
 *
 * @name emu_GameLoop_Structure
 * @implements 0972:0007:0051:7645 ()
 * @implements 0972:0038:0020:C146
 * @implements 0972:003F:0019:8B3A
 * @implements 0972:0058:004D:2870
 * @implements 0972:0070:0035:11A8
 * @implements 0972:0085:0020:DE51
 * @implements 0972:00A5:0086:1AD2
 * @implements 0972:00BD:006E:C639
 * @implements 0972:00D2:0059:A980
 * @implements 0972:00EB:0040:E14D
 * @implements 0972:0100:002B:22A3
 * @implements 0972:0119:0012:F490
 * @implements 0972:012B:0006:5385
 * @implements 0972:0131:0037:A640
 * @implements 0972:0168:0012:8AC5
 * @implements 0972:017A:0040:F4EB
 * @implements 0972:01BA:0029:4B3B
 * @implements 0972:01BB:0028:CB17
 * @implements 0972:01E3:005C:4D9F
 * @implements 0972:01E5:005A:6804
 * @implements 0972:023F:000C:1822
 * @implements 0972:0242:0009:920A
 * @implements 0972:024B:000F:7578
 * @implements 0972:025A:001D:88F1
 * @implements 0972:0277:006D:68DA
 * @implements 0972:02D7:000D:FA04
 * @implements 0972:02E4:000A:817C
 * @implements 0972:02EE:000C:2E19
 * @implements 0972:02F0:000A:2519
 * @implements 0972:02F8:0002:C4BA
 * @implements 0972:02FA:000C:3415
 * @implements 0972:0303:0003:9E2C
 * @implements 0972:0306:000F:7770
 * @implements 0972:0315:0011:1CBD
 * @implements 0972:0326:0012:74BB
 * @implements 0972:0338:0037:B1C0
 * @implements 0972:036F:0037:C20A
 * @implements 0972:0378:002E:1744
 * @implements 0972:03A4:0002:C53A
 * @implements 0972:03A6:000D:B949
 * @implements 0972:03B0:0003:5F81
 * @implements 0972:03B3:000F:76FF
 * @implements 0972:03C2:000E:2934
 * @implements 0972:03D0:000E:D597
 * @implements 0972:03DE:000E:2D3F
 * @implements 0972:03EC:000F:9EC1
 * @implements 0972:03FB:0025:521A
 * @implements 0972:0420:001A:C1B0
 * @implements 0972:0446:002F:A3FF
 * @implements 0972:045E:0017:5C13
 * @implements 0972:0475:0015:5CB8
 * @implements 0972:048A:0026:FEE9
 * @implements 0972:048E:0022:3628
 * @implements 0972:04B0:0020:BD61
 * @implements 0972:04BB:0015:306F
 * @implements 0972:04BD:0013:3438
 * @implements 0972:04D0:0014:1BB6
 * @implements 0972:04E4:0020:4CEA
 * @implements 0972:04E9:001B:C395
 * @implements 0972:0507:002B:15C1
 * @implements 0972:050A:0028:2428
 * @implements 0972:0532:001D:84CA
 * @implements 0972:054F:001F:939F
 * @implements 0972:056E:0018:A8ED
 * @implements 0972:0578:000E:2802
 * @implements 0972:0586:001B:DC71
 * @implements 0972:05A1:0015:71F0
 * @implements 0972:05B6:002B:35CA
 * @implements 0972:05E1:0005:E0CA
 * @implements 0972:05E6:0005:D74A
 * @implements 0972:05EB:0005:F5CA
 * @implements 0972:05F0:0006:6F66
 * @implements 0972:05F6:000F:119B
 * @implements 0972:0605:0012:6987
 * @implements 0972:0617:0010:DEE5
 * @implements 0972:0627:000B:5D60
 * @implements 0972:0632:0004:0D12
 * @implements 0972:0633:0003:9D17
 * @implements 0972:0636:000E:0830
 * @implements 0972:0644:000D:B324
 * @implements 0972:0651:0021:1BFA
 * @implements 0972:0672:0007:CF6C
 * @implements 0972:0679:0035:CC9F
 * @implements 0972:06AE:002D:14AC
 * @implements 0972:06DB:0037:4B08
 * @implements 0972:06DC:0036:4B86
 * @implements 0972:06E1:0031:1FDA
 * @implements 0972:0712:0004:431F
 * @implements 0972:0714:0002:D83A
 * @implements 0972:0716:0025:6D67
 * @implements 0972:073B:0008:A466
 * @implements 0972:0743:0011:51C8
 * @implements 0972:0746:000E:1C8C
 * @implements 0972:0754:000F:7761
 * @implements 0972:0763:000E:A892
 * @implements 0972:0771:000E:543A
 * @implements 0972:077F:0017:5C1B
 * @implements 0972:0796:0015:5CB8
 * @implements 0972:07AB:0011:81A2
 * @implements 0972:07AF:000D:B89A
 * @implements 0972:07BC:0026:31BD
 * @implements 0972:07E2:002A:C938
 * @implements 0972:080C:0030:99D4
 * @implements 0972:0816:0026:7654
 * @implements 0972:083C:001E:CB1A
 * @implements 0972:085A:0003:CB1A
 * @implements 0972:085B:0002:C03A
 * @implements 0972:085D:0002:CABA
 * @implements 0972:085F:0024:6A5C
 * @implements 0972:0874:000F:CCB9
 * @implements 0972:0883:000F:F77A
 * @implements 0972:0892:0012:3529
 * @implements 0972:08A4:000E:8FFB
 * @implements 0972:08B2:0038:5CE7
 * @implements 0972:08EA:0005:A1EE
 * @implements 0972:08EF:002F:F6E4
 * @implements 0972:091E:0017:403F
 * @implements 0972:0935:000C:9815
 * @implements 0972:0938:0009:11BD
 * @implements 0972:0941:000E:E81A
 * @implements 0972:094F:0010:E581
 * @implements 0972:095F:0009:7794
 * @implements 0972:0968:005A:5668
 * @implements 0972:097B:0047:4D03
 * @implements 0972:09B2:0010:1586
 * @implements 0972:09C2:0009:F797
 * @implements 0972:09CB:0010:1586
 * @implements 0972:09DB:0009:37AE
 * @implements 0972:09E4:0010:1586
 * @implements 0972:09F4:0008:D04F
 * @implements 0972:09FC:0002:DE3A
 * @implements 0972:09FE:001C:5B8B
 * @implements 0972:0A1A:001D:C13E
 * @implements 0972:0A37:0005:80EE
 * @implements 0972:0A3A:0002:C43A
 * @implements 0972:0A3C:0012:2599
 * @implements 0972:0A44:000A:DEF0
 * @implements 0972:0A4E:0015:9677
 * @implements 0972:0A50:0013:04BA
 * @implements 0972:0A63:0006:F7CE
 */
void emu_GameLoop_Structure()
{
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	GameLoop_Structure();
}

/**
 * Emulator wrapper around Structure_Create().
 *
 * @name emu_Structure_Create
 * @implements 0C3A:0009:0029:BF94 ()
 * @implements 0C3A:0032:0017:67B7
 * @implements 0C3A:0046:0003:DDBA
 * @implements 0C3A:0049:00D1:D261
 * @implements 0C3A:0095:0085:1C53
 * @implements 0C3A:00B5:0065:E213
 * @implements 0C3A:00D5:0045:1FBC
 * @implements 0C3A:0104:0016:49D5
 * @implements 0C3A:011A:000A:817C
 * @implements 0C3A:0124:0021:1CAC
 * @implements 0C3A:0126:001F:44AC
 * @implements 0C3A:012D:0018:BE44
 * @implements 0C3A:0145:0017:EAF4
 * @implements 0C3A:015C:0012:C547
 * @implements 0C3A:0163:000B:9990
 * @implements 0C3A:016E:001F:657F
 * @implements 0C3A:017C:0011:A05B
 * @implements 0C3A:018D:0012:30C8
 * @implements 0C3A:019F:0015:9262
 * @implements 0C3A:01AB:0009:DB80
 * @implements 0C3A:01B4:0006:F7CE
 */
void emu_Structure_Create()
{
	uint16 index, position;
	uint8 typeID, houseID;
	Structure *s;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	index    =        emu_get_memory16(emu_ss, emu_sp, 0x0);
	typeID   = (uint8)emu_get_memory16(emu_ss, emu_sp, 0x2);
	houseID  = (uint8)emu_get_memory16(emu_ss, emu_sp, 0x4);
	position =        emu_get_memory16(emu_ss, emu_sp, 0x6);

	s = Structure_Create(index, typeID, houseID, position);

	emu_dx = 0x0;
	emu_ax = 0x0;

	if (s == NULL) return;
	emu_dx = g_global->structureStartPos.s.cs;
	emu_ax = g_global->structureStartPos.s.ip + s->index * sizeof(Structure);
}

/**
 * Emulator wrapper around Structure_CalculatePowerAndCredit().
 *
 * @name emu_Structure_CalculatePowerAndCredit
 * @implements 0C3A:1F70:0010:8DB3 ()
 * @implements 0C3A:1F80:0012:95B8
 * @implements 0C3A:1F92:0022:E6F2
 * @implements 0C3A:1FB4:0006:D729
 * @implements 0C3A:1FBA:0053:1870
 * @implements 0C3A:200D:000E:D0A4
 * @implements 0C3A:201B:000F:00C3
 * @implements 0C3A:201E:000C:72C2
 * @implements 0C3A:202D:0012:1AF4
 * @implements 0C3A:203F:0004:5F9F
 * @implements 0C3A:2043:000D:1BB4
 * @implements 0C3A:204C:0004:EA3A
 * @implements 0C3A:2050:0015:64A0
 * @implements 0C3A:205A:000B:166D
 * @implements 0C3A:2065:0013:9114
 * @implements 0C3A:2067:0011:DA22
 * @implements 0C3A:2078:002C:9F6D
 * @implements 0C3A:20A4:0008:A466
 * @implements 0C3A:20AC:002F:7D88
 * @implements 0C3A:20AF:002C:4899
 * @implements 0C3A:20D5:0006:F7CE
 */
void emu_Structure_CalculatePowerAndCredit()
{
	uint8 houseID;
	House *h;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	houseID = (uint8)emu_get_memory16(emu_ss, emu_sp, 0x0);

	if (houseID >= HOUSE_MAX) return;
	h = House_Get_ByIndex(houseID);

	Structure_CalculatePowerAndCredit(h);
}

/**
 * Emulator wrapper around Structure_SetAnimation().
 *
 * @name emu_Structure_SetAnimation
 * @implements 0C3A:1398:000D:8766 ()
 * @implements 0C3A:13A5:0014:7F45
 * @implements 0C3A:13B9:0004:BEB2
 */
void emu_Structure_SetAnimation()
{
	csip32 scsip;
	Structure *s;
	int16 animation;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	scsip     = emu_get_csip32  (emu_ss, emu_sp, 0x0);
	animation = emu_get_memory16(emu_ss, emu_sp, 0x4);

	if (scsip.csip == 0x0) return;
	s = Structure_Get_ByMemory(scsip);

	Structure_SetAnimation(s, animation);
}

/**
 * Emulator wrapper around Structure_Get_ByPackedTile().
 *
 * @name emu_Structure_Get_ByPackedTile
 * @implements B4CD:1133:0039:A02F ()
 * @implements B4CD:116C:0003:C81A
 * @implements B4CD:116D:0002:C33A
 * @implements B4CD:116F:0006:5EA9
 * @implements B4CD:1175:0003:2E57
 */
void emu_Structure_Get_ByPackedTile()
{
	uint16 packed;
	Structure *s;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	packed = emu_get_memory16(emu_ss, emu_sp, 0x0);

	s = Structure_Get_ByPackedTile(packed);

	emu_ax = 0x0;
	emu_dx = 0x0;

	if (s == NULL) return;
	emu_dx = g_global->structureStartPos.s.cs;
	emu_ax = g_global->structureStartPos.s.ip + s->index * sizeof(Structure);
}

/**
 * Emulator wrapper around Structure_GetStructuresBuilt().
 *
 * @name emu_Structure_GetStructuresBuilt
 * @implements 0C3A:13BD:0022:D6F0 ()
 * @implements 0C3A:13DF:0005:92AE
 * @implements 0C3A:13E4:001C:C40E
 * @implements 0C3A:1400:0011:5D2C
 * @implements 0C3A:1406:000B:166D
 * @implements 0C3A:1411:0018:26D2
 * @implements 0C3A:1413:0016:7F60
 * @implements 0C3A:1429:0004:893F
 */
void emu_Structure_GetStructuresBuilt()
{
	uint8 houseID;
	House *h;
	uint32 result;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	houseID = (uint8)emu_get_memory16(emu_ss, emu_sp, 0x0);

	emu_ax = 0x0;
	emu_dx = 0x0;

	if (houseID >= HOUSE_MAX) return;
	h = House_Get_ByIndex(houseID);

	result = Structure_GetStructuresBuilt(h);
	emu_dx = result >> 16;
	emu_ax = result & 0xFFFF;
}
