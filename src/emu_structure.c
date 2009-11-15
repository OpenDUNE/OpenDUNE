/* $Id$ */

#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
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
