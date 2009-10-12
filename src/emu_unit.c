/* $Id$ */

#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "pool/unit.h"
#include "house.h"
#include "unit.h"

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
	csip32 address;
	Unit *u;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	emu_ax = HOUSE_INVALID;

	address.s.ip = emu_get_memory16(emu_ss, emu_sp,  0x0);
	address.s.cs = emu_get_memory16(emu_ss, emu_sp,  0x2);

	if (address.csip == 0x0) return;

	u = Unit_Get_ByMemory(address);
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
	uint16 index, var10;
	uint8 typeID, houseID;
	tile32 position;
	Unit *u;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	emu_dx = 0x0;
	emu_ax = 0x0;

	index    = emu_get_memory16(emu_ss, emu_sp,  0x0);
	typeID   = (uint8)emu_get_memory16(emu_ss, emu_sp,  0x2);
	houseID  = (uint8)emu_get_memory16(emu_ss, emu_sp,  0x4);
	position = emu_get_tile32(emu_ss, emu_sp,  0x6);
	var10    = emu_get_memory16(emu_ss, emu_sp,  0xA);

	u = Unit_Create(index, typeID, houseID, position, var10);

	if (u == NULL) return;
	emu_dx = g_global->unitStartPos.s.cs;
	emu_ax = g_global->unitStartPos.s.ip + u->index * sizeof(Unit);
}
