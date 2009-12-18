/* $Id$ */

#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "pool/unit.h"
#include "pool/team.h"
#include "house.h"
#include "unit.h"
#include "pool/pool.h"
#include "team.h"

/**
 * Emulator wrapper around GameLoop_Unit().
 *
 * @name emu_GameLoop_Unit
 * @implements 176C:010B:002F:7FAE ()
 * @implements 176C:013A:0055:6C8A
 * @implements 176C:014F:0040:7270
 * @implements 176C:0166:0029:F66B
 * @implements 176C:017B:0014:5245
 * @implements 176C:018F:0113:0405
 * @implements 176C:01AA:00F8:FA80
 * @implements 176C:01BF:00E3:C733
 * @implements 176C:01D8:00CA:9CA5
 * @implements 176C:01ED:00B5:53EB
 * @implements 176C:0206:009C:C4F1
 * @implements 176C:021B:0087:F6C5
 * @implements 176C:0234:006E:13E8
 * @implements 176C:0249:0059:3F67
 * @implements 176C:0262:0040:5621
 * @implements 176C:0277:002B:0503
 * @implements 176C:0290:0012:9B52
 * @implements 176C:02A2:0006:558B
 * @implements 176C:02A8:000F:9BB6
 * @implements 176C:02B7:000A:2CB1
 * @implements 176C:02C1:0037:7973
 * @implements 176C:02F8:0039:0847
 * @implements 176C:0331:0014:B1B8
 * @implements 176C:0345:0011:5754
 * @implements 176C:0356:000A:1C0C
 * @implements 176C:0359:0007:36AE
 * @implements 176C:0360:000D:D0BA
 * @implements 176C:036D:0010:DF03
 * @implements 176C:037D:000E:7DC2
 * @implements 176C:038B:000F:CB1C
 * @implements 176C:039A:000D:9950
 * @implements 176C:03A7:0013:F833
 * @implements 176C:03BA:0031:621B
 * @implements 176C:03EB:0005:E1F7
 * @implements 176C:03F0:0023:D191
 * @implements 176C:0402:0011:2BE9
 * @implements 176C:0413:0011:5754
 * @implements 176C:0424:001F:6A65
 * @implements 176C:0427:001C:3F74
 * @implements 176C:042F:0014:F073
 * @implements 176C:0443:0020:60D4
 * @implements 176C:0463:0033:A1D5
 * @implements 176C:0466:0030:B284
 * @implements 176C:0496:001B:C865
 * @implements 176C:04A0:0011:B562
 * @implements 176C:04B1:001A:EC5B
 * @implements 176C:04B4:0017:CAF9
 * @implements 176C:04CB:001F:EDCB
 * @implements 176C:04CE:001C:D8DA
 * @implements 176C:04EA:0008:475C
 * @implements 176C:04F2:0016:FC92
 * @implements 176C:0508:000C:5826
 * @implements 176C:050B:0009:D18E
 * @implements 176C:0514:000E:EDA0
 * @implements 176C:0522:004F:CC5C
 * @implements 176C:0538:0039:2AA4
 * @implements 176C:0544:002D:282D
 * @implements 176C:0571:0090:E5FF
 * @implements 176C:05BD:0044:F2CF
 * @implements 176C:0601:005E:FA7A
 * @implements 176C:061B:0044:69AA
 * @implements 176C:063D:0022:E86D
 * @implements 176C:065F:000F:4F56
 * @implements 176C:066E:001C:F5FE
 * @implements 176C:068A:000E:C98D
 * @implements 176C:0696:0002:C43A
 * @implements 176C:0698:0011:6178
 * @implements 176C:06A0:0009:1116
 * @implements 176C:06A9:000E:2DCF
 * @implements 176C:06B7:0010:03D5
 * @implements 176C:06C7:0009:779A
 * @implements 176C:06D0:0029:3063
 * @implements 176C:06F9:0014:AFD4
 * @implements 176C:0700:000D:6A2B
 * @implements 176C:070D:0013:3361
 * @implements 176C:0713:000D:8DB9
 * @implements 176C:0720:0040:2E37
 * @implements 176C:0750:0010:F3D2
 * @implements 176C:0760:0008:E8CF
 * @implements 176C:0768:0018:7CF1
 * @implements 176C:077E:0002:C43A
 * @implements 176C:0780:0037:8F26
 * @implements 176C:0788:002F:3687
 * @implements 176C:07B7:0016:E5D0
 * @implements 176C:07C3:000A:B112
 * @implements 176C:07CD:0015:AED4
 * @implements 176C:07CF:0013:3C19
 * @implements 176C:07E2:0006:F7CE
 *
 * @define 1A34:1F55:0019:98DF
 * @define 1A34:2134:001E:3E9A
 */
void emu_GameLoop_Unit()
{
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	GameLoop_Unit();
}

/**
 * Emulator wrapper around Unit_GetHouseID().
 *
 * @name emu_Unit_GetHouseID
 * @implements 1A34:3623:0010:B11C ()
 * @implements 1A34:3631:0002:CCBA
 * @implements 1A34:3633:000F:A277
 * @implements 1A34:3642:000A:3CE3
 * @implements 1A34:364C:0002:2597
 */
void emu_Unit_GetHouseID()
{
	csip32 ucsip;
	Unit *u;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	ucsip = emu_get_csip32(emu_ss, emu_sp, 0x0);

	emu_ax = HOUSE_INVALID;

	if (ucsip.csip == 0x0) return;
	u = Unit_Get_ByMemory(ucsip);

	emu_ax = Unit_GetHouseID(u);
}

/**
 * Emulator wrapper around Unit_Create().
 *
 * @name emu_Unit_Create
 * @implements 1A34:08FB:002C:D192 ()
 * @implements 1A34:0927:0014:005B
 * @implements 1A34:093B:001D:C7A9
 * @implements 1A34:0958:0017:BFB1
 * @implements 1A34:096F:0011:5032
 * @implements 1A34:0980:0059:0B58
 * @implements 1A34:09CE:000B:5F01
 * @implements 1A34:09D9:00A3:1334
 * @implements 1A34:0A04:0078:30A2
 * @implements 1A34:0A7C:001A:00FF
 * @implements 1A34:0A96:0041:8A92
 * @implements 1A34:0AB1:0026:E780
 * @implements 1A34:0ACC:000B:CA1A
 * @implements 1A34:0AD7:000C:B100
 * @implements 1A34:0AE1:0002:C93A
 * @implements 1A34:0AE3:000F:F7E4
 * @implements 1A34:0AF2:001F:10B5
 * @implements 1A34:0AF5:001C:25A4
 * @implements 1A34:0B09:0008:E549
 * @implements 1A34:0B11:0015:C072
 * @implements 1A34:0B26:0015:EADC
 * @implements 1A34:0B3B:0012:C7F2
 * @implements 1A34:0B42:000B:1D44
 * @implements 1A34:0B4D:0005:8F6E
 * @implements 1A34:0B52:000B:71C0
 * @implements 1A34:0B5D:000E:ABCB
 * @implements 1A34:0B69:0002:8F3A
 * @implements 1A34:0B6B:0006:F7CE
 */
void emu_Unit_Create()
{
	uint16 index, unknown;
	uint8 typeID, houseID;
	tile32 position;
	Unit *u;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	index    =        emu_get_memory16(emu_ss, emu_sp, 0x0);
	typeID   = (uint8)emu_get_memory16(emu_ss, emu_sp, 0x2);
	houseID  = (uint8)emu_get_memory16(emu_ss, emu_sp, 0x4);
	position =        emu_get_tile32  (emu_ss, emu_sp, 0x6);
	unknown  =        emu_get_memory16(emu_ss, emu_sp, 0xA);

	u = Unit_Create(index, typeID, houseID, position, unknown);

	emu_ax = 0x0;
	emu_dx = 0x0;

	if (u == NULL) return;
	emu_dx = g_global->unitStartPos.s.cs;
	emu_ax = g_global->unitStartPos.s.ip + u->index * sizeof(Unit);
}

/**
 * Decompiled function emu_Unit_IsTypeOnMap()
 *
 * @name emu_Unit_IsTypeOnMap
 * @implements 0FE4:0333:000F:2B73 ()
 * @implements 0FE4:0342:0024:B7F8
 * @implements 0FE4:0366:0030:E8DE
 * @implements 0FE4:0394:0002:C5BA
 * @implements 0FE4:0396:000B:4629
 * @implements 0FE4:0397:000A:8621
 * @implements 0FE4:03A1:0006:F7CE
 */
void emu_Unit_IsTypeOnMap()
{
	uint8 houseID, typeID;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	houseID = (uint8)emu_get_memory16(emu_ss, emu_sp, 0x0);
	typeID  = (uint8)emu_get_memory16(emu_ss, emu_sp, 0x2);

	emu_ax = Unit_IsTypeOnMap(houseID, typeID) ? 1 : 0;
}

/**
 * Emulator wrapper around Unit_SetAction().
 *
 * @name emu_Unit_SetAction
 * @implements 176C:000E:000E:633D ()
 * @implements 176C:001C:001D:EB93
 * @implements 176C:0036:0003:1D14
 * @implements 176C:0039:0025:526C
 * @implements 176C:005E:0003:9D09
 * @implements 176C:0061:001A:F455
 * @implements 176C:007B:003E:BA74
 * @implements 176C:00B9:0025:6898
 * @implements 176C:00DE:0002:D13A
 * @implements 176C:00E0:0022:7D65
 * @implements 176C:0102:0005:85EE
 * @implements 176C:0107:0002:C03A
 * @implements 176C:0109:0002:2597
 *
 * @define 15C2:044C:0012:C66D
 */
void emu_Unit_SetAction()
{
	csip32 ucsip;
	Unit *u;
	ActionType action;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	ucsip  = emu_get_csip32  (emu_ss, emu_sp, 0x0);
	action = emu_get_memory16(emu_ss, emu_sp, 0x4);

	if (ucsip.csip == 0x0) return;
	u = Unit_Get_ByMemory(ucsip);

	Unit_SetAction(u, action);
}

/**
 * Emulator wrapper around Unit_AddToTeam().
 *
 * @name emu_Unit_AddToTeam
 * @implements 16BC:0001:0018:AE47 ()
 * @implements 16BC:0017:0002:D43A
 * @implements 16BC:0019:0028:89C5
 * @implements 16BC:0041:0003:2E57
 *
 */
void emu_Unit_AddToTeam()
{
	csip32 csip_team, csip_unit;
	Team *t;
	Unit *u;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	/* Set the default return value */
	emu_ax = 0;

	/* emu implementation passes team as first arg */
	csip_team = emu_get_csip32(emu_ss, emu_sp, 0x0);
	csip_unit = emu_get_csip32(emu_ss, emu_sp, 0x4);

	if (csip_team.csip == 0x0 || csip_unit.csip == 0x0) return;

	t = Team_Get_ByMemory(csip_team);
	u = Unit_Get_ByMemory(csip_unit);

	emu_ax = Unit_AddToTeam(u, t);
}

/**
 * Emulator wrapper around Unit_RemoveFromTeam().
 *
 * @name emu_Unit_RemoveFromTeam
 * @implements 16BC:0044:0027:CB92 ()
 * @implements 16BC:006B:0026:801B
 * @implements 16BC:008F:0002:C23A
 * @implements 16BC:0091:0004:9539
 * @implements 16BC:0095:0004:893F
 *
 */
void emu_Unit_RemoveFromTeam()
{
	csip32 csip_unit;
	Unit *u;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	/* Set the default return value */
	emu_ax = 0;

	csip_unit = emu_get_csip32(emu_ss, emu_sp, 0x0);

	if (csip_unit.csip == 0x0) return;

	u = Unit_Get_ByMemory(csip_unit);

	emu_ax = Unit_RemoveFromTeam(u);
}

/**
 * Emulator wrapper around Unit_GetTeam().
 *
 * @name emu_Unit_GetTeam
 * @implements 0FE4:0632:0031:75AA ()
 * @implements 0FE4:0663:000F:F660
 * @implements 0FE4:066A:0008:C849
 * @implements 0FE4:0672:0004:893F
 */
void emu_Unit_GetTeam()
{
	csip32 ucsip;
	Unit *u;
	Team *t;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	ucsip = emu_get_csip32(emu_ss, emu_sp, 0x0);

	emu_dx = 0x0;
	emu_ax = 0x0;

	if (ucsip.csip == 0x0) return;
	u = Unit_Get_ByMemory(ucsip);

	t = Unit_GetTeam(u);

	if (t == NULL) return;
	emu_dx = g_global->teamStartPos.s.cs;
	emu_ax = g_global->teamStartPos.s.ip + t->index * sizeof(Team);
}

/**
 * Emulator wrapper around Unit_Sort().
 *
 * @name emu_Unit_Sort
 * @implements 0FE4:0002:0021:D0A9 ()
 * @implements 0FE4:0023:005B:3AE9
 * @implements 0FE4:007E:0010:D40F
 * @implements 0FE4:008E:0018:0071
 * @implements 0FE4:0096:0010:976E
 * @implements 0FE4:00A6:0014:B079
 * @implements 0FE4:00BA:007F:22ED
 * @implements 0FE4:00DF:005A:6D90
 * @implements 0FE4:0100:0039:3CD7
 * @implements 0FE4:012D:000C:1EF1
 * @implements 0FE4:012E:000B:1A91
 * @implements 0FE4:0139:0006:F7CE
 */
void emu_Unit_Sort()
{
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	Unit_Sort();
}

/**
 * Emulator wrapper around Unit_Get_ByPackedTile()
 *
 * @name emu_Unit_Get_ByPackedTile
 * @implements B4CD:10EE:0039:EC73 ()
 * @implements B4CD:1127:0003:C81A
 * @implements B4CD:1128:0002:C33A
 * @implements B4CD:112A:0006:5EA9
 * @implements B4CD:1130:0003:2E57
 */
void emu_Unit_Get_ByPackedTile()
{
	uint16 packed;
	Unit *u;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	packed = emu_get_memory16(emu_ss, emu_sp, 0x0);

	u = Unit_Get_ByPackedTile(packed);

	emu_ax = 0x0;
	emu_dx = 0x0;

	if (u == NULL) return;
	emu_dx = g_global->unitStartPos.s.cs;
	emu_ax = g_global->unitStartPos.s.ip + u->index * sizeof(Unit);
}

/**
 * Emulator wrapper around Unit_SetDestination().
 *
 * @name emu_Unit_SetDestination
 * @implements 1A34:1B68:0019:AAA0 ()
 * @implements 1A34:1B81:0008:F715
 * @implements 1A34:1B89:000C:023A
 * @implements 1A34:1B95:0006:57C6
 * @implements 1A34:1B9B:000C:77C4
 * @implements 1A34:1BA7:0009:2834
 * @implements 1A34:1BB0:002E:EAD1
 * @implements 1A34:1BDE:0006:1CFB
 * @implements 1A34:1BE2:0002:D43A
 * @implements 1A34:1BE4:0006:62E9
 * @implements 1A34:1BEA:001E:6C91
 * @implements 1A34:1C08:000A:2B08
 * @implements 1A34:1C0C:0006:3784
 * @implements 1A34:1C12:0023:2D66
 * @implements 1A34:1C35:0018:2310
 * @implements 1A34:1C4D:0033:213E
 * @implements 1A34:1C71:000F:A6D7
 * @implements 1A34:1C80:0012:CA6A
 * @implements 1A34:1C92:0008:9B67
 * @implements 1A34:1C9A:0017:EC4D
 * @implements 1A34:1C9C:0015:88FE
 * @implements 1A34:1CAB:0006:F7CE
 */
void emu_Unit_SetDestination()
{
	csip32 ucsip;
	Unit *u;
	uint16 destination;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	ucsip       = emu_get_csip32  (emu_ss, emu_sp, 0x0);
	destination = emu_get_memory16(emu_ss, emu_sp, 0x4);

	if (ucsip.csip == 0x0) return;
	u = Unit_Get_ByMemory(ucsip);

	Unit_SetDestination(u, destination);
}
