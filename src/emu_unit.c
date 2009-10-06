/* $Id$ */

#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "unit.h"

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
 * @implements 1A34:0B6B:0006:F7CE
 * @implements 1A34:0B69:0002:8F3A
 */
void emu_Unit_Create()
{
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	emu_dx.x = 0x0;
	emu_ax.x = 0x0;

	csip32 var0C;
	uint16 index   = emu_get_memory16(emu_ss, emu_sp,  0x0);
	uint16 typeID  = emu_get_memory16(emu_ss, emu_sp,  0x2);
	uint16 houseID = emu_get_memory16(emu_ss, emu_sp,  0x4);
	var0C.ip       = emu_get_memory16(emu_ss, emu_sp,  0x6);
	var0C.cs       = emu_get_memory16(emu_ss, emu_sp,  0x8);
	uint16 var10   = emu_get_memory16(emu_ss, emu_sp,  0xA);

	Unit *u = Unit_Create(index, typeID, houseID, var0C, var10);

	if (u == NULL) return;
	emu_dx.x = g_global->unitStartPos.cs;
	emu_ax.x = g_global->unitStartPos.ip + u->index * sizeof(Unit);
}
