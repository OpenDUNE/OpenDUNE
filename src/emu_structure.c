/* $Id$ */

#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "pool/structure.h"
#include "structure.h"

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

	emu_dx = 0x0;
	emu_ax = 0x0;

	index    =        emu_get_memory16(emu_ss, emu_sp,  0x0);
	typeID   = (uint8)emu_get_memory16(emu_ss, emu_sp,  0x2);
	houseID  = (uint8)emu_get_memory16(emu_ss, emu_sp,  0x4);
	position =        emu_get_memory16(emu_ss, emu_sp,  0x6);

	s = Structure_Create(index, typeID, houseID, position);

	if (s == NULL) return;
	emu_dx = g_global->structureStartPos.s.cs;
	emu_ax = g_global->structureStartPos.s.ip + s->index * sizeof(Structure);
}

/**
 * Emulator wrapper around Structure_Place().
 *
 * @name emu_Structure_Place
 * @implements 0C3A:01BA:0018:69C9 ()
 * @implements 0C3A:01CD:0005:9E11
 * @implements 0C3A:01CF:0003:9F85
 * @implements 0C3A:01D2:0032:D9DB
 * @implements 0C3A:01FF:0005:D4FA
 * @implements 0C3A:0204:000C:ED4B
 * @implements 0C3A:0206:000A:EE63
 * @implements 0C3A:0210:000D:8593
 * @implements 0C3A:021D:000A:CE2B
 * @implements 0C3A:0227:0009:779A
 * @implements 0C3A:0230:006B:40B4
 * @implements 0C3A:029B:0008:F74D
 * @implements 0C3A:02A3:0009:96AB
 * @implements 0C3A:02A6:0006:D2E6
 * @implements 0C3A:02AC:0020:834B
 * @implements 0C3A:02C2:000A:8909
 * @implements 0C3A:02CC:000D:0B77
 * @implements 0C3A:02D9:0005:8DCC
 * @implements 0C3A:02DE:0003:621B
 * @implements 0C3A:02E1:0017:9836
 * @implements 0C3A:02F8:0032:8358
 * @implements 0C3A:032A:0017:3BFA
 * @implements 0C3A:0341:0009:B798
 * @implements 0C3A:034A:006A:8924
 * @implements 0C3A:03B4:0008:F74D
 * @implements 0C3A:03BC:0009:92AB
 * @implements 0C3A:03BF:0006:D6E6
 * @implements 0C3A:03C5:0022:C3F8
 * @implements 0C3A:03DB:000C:4178
 * @implements 0C3A:03E7:0016:22E6
 * @implements 0C3A:03EF:000E:A634
 * @implements 0C3A:03F2:000B:9B2A
 * @implements 0C3A:03FD:000D:F99B
 * @implements 0C3A:040A:001D:A9FE
 * @implements 0C3A:0427:0017:7B7B
 * @implements 0C3A:043E:0009:7797
 * @implements 0C3A:0447:006A:E922
 * @implements 0C3A:04B1:0008:F74D
 * @implements 0C3A:04B9:0020:E670
 * @implements 0C3A:04D9:0016:62E3
 * @implements 0C3A:04E1:000E:E631
 * @implements 0C3A:04E4:000B:DB2F
 * @implements 0C3A:04EF:0011:FFC9
 * @implements 0C3A:0500:0008:149F
 * @implements 0C3A:0502:0006:4D2D
 * @implements 0C3A:0508:000F:9479
 * @implements 0C3A:0517:001B:8208
 * @implements 0C3A:0532:0018:2318
 * @implements 0C3A:054A:0008:F74D
 * @implements 0C3A:0552:0039:9E74
 * @implements 0C3A:0555:0036:DA39
 * @implements 0C3A:057D:000E:D924
 * @implements 0C3A:058B:0050:EE73
 * @implements 0C3A:05DB:0017:30AE
 * @implements 0C3A:05F2:001A:CD9A
 * @implements 0C3A:060C:0039:762F
 * @implements 0C3A:061A:002B:9E18
 * @implements 0C3A:0645:003D:0EC1
 * @implements 0C3A:0682:001B:2708
 * @implements 0C3A:069D:002C:57D1
 * @implements 0C3A:06C9:0017:F9DE
 * @implements 0C3A:06E0:0008:D276
 * @implements 0C3A:06E8:0020:6FF2
 * @implements 0C3A:06EB:001D:DCB3
 * @implements 0C3A:0708:001E:737A
 * @implements 0C3A:0711:0015:4096
 * @implements 0C3A:0726:000C:E6D9
 * @implements 0C3A:0727:000B:E349
 * @implements 0C3A:0732:0010:5523
 * @implements 0C3A:0742:0011:6CE1
 * @implements 0C3A:0753:0015:B17D
 * @implements 0C3A:0762:0006:4033
 * @implements 0C3A:0768:0006:F7CE
 */
void emu_Structure_Place()
{
	uint16 position;
	csip32 scsip;
	Structure *s;
	bool result;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	scsip      = emu_get_csip32  (emu_ss, emu_sp, 0x0);
	position   = emu_get_memory16(emu_ss, emu_sp, 0x4);

	if (scsip.csip == 0x0) {
		emu_ax = 0;
		return;
	}

	s = Structure_Get_ByMemory(scsip);

	result = Structure_Place(s, position);

	emu_ax = result ? 1 : 0;
}
