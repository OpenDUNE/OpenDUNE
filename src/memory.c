#include <assert.h>
#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "building.h"
#include "memory.h"

extern void f__01F7_28B8_0024_83C9();
extern void f__01F7_2947_0014_02B8();
extern void f__15C2_0395_0044_304E();

/**
 * Allocate memory for a building.
 *
 * @name Memory_Building_Allocate
 * @implements 1082:01E8:0020:FFB9 ()
 * @implements 1082:0208:0013:DB66
 * @implements 1082:021B:001C:EC5F
 * @implements 1082:0241:0009:5317
 * @implements 1082:024A:002E:B11B
 * @implements 1082:0278:0008:B2C0
 * @implements 1082:0279:0007:F4C0
 * @implements 1082:027E:0002:D63A
 * @implements 1082:0280:002E:B19B
 * @implements 1082:02AC:0002:C03A
 * @implements 1082:02AE:001A:47E1
 * @implements 1082:02C8:0058:AF1D
 * @implements 1082:0320:0005:8BCF
 */
void Memory_Building_Allocate()
{
	emu_push(emu_bp);
	emu_bp = emu_sp;

	Building *b = NULL;

	int16 index = emu_get_memory16(emu_ss, emu_bp,  0x6);
	uint8 type = emu_get_memory16(emu_ss, emu_bp,  0x8);

	if (g_global->memoryBuildings == 0x0) {
		emu_dx.x = 0x0;
		emu_ax.x = 0x0;

		/* Return from this function */
		emu_pop(&emu_bp);
		emu_pop(&emu_ip);
		emu_pop(&emu_cs);
		return;
	}

	if (type == 0) { // 1x1 Slab
		index = 81;
		b = Building_Get_ByIndex(index);
	} else if (type == 1) { // 2x2 Slab
		index = 80;
		b = Building_Get_ByIndex(index);
	} else if (type == 14) { // 1x1 Wall
		index = 79;
		b = Building_Get_ByIndex(index);
	} else if (index != -1) { // Forced on an index
		b = Building_Get_ByIndex(index);
		/* If the slot is not free, don't allocate the building */
		if ((b->variable_04 & 0x0001) != 0) b = NULL;
	} else { // Find the first free slot
		for (index = 0; index < 79; index++) {
			b = Building_Get_ByIndex(index);
			if ((b->variable_04 & 0x0001) == 0) break;
		}

		/* If we didn't find a free slot, don't allocate the building */
		if (index == 79) b = NULL;
	}

	if (b == NULL) {
		emu_dx.x = 0x0;
		emu_ax.x = 0x0;

		/* Return from this function */
		emu_pop(&emu_bp);
		emu_pop(&emu_ip);
		emu_pop(&emu_cs);
		return;
	}

	/* Clear the memory of the building */
	emu_push(0x58);
	emu_push(0x0);
	emu_push(g_global->memoryBuildings >> 16);
	emu_push((g_global->memoryBuildings & 0xFFFF) + index * 0x58);
	emu_push(emu_cs); emu_push(0x02C8); emu_cs = 0x01F7; f__01F7_2947_0014_02B8();
	emu_sp += 0x8;

	/* Initialize the building */
	b->index = index;
	b->type = type;
	b->variable_03 = 0xFF;
	b->variable_04 = 0x03;
	b->variable_06 = 0x00;
	b->variable_10 = 0x00;

	g_global->memoryBuildingsPos[g_global->memoryBuildingsCount] = g_global->memoryBuildings + index * 0x58;
	g_global->memoryBuildingsCount++;

	emu_dx.x = g_global->memoryBuildings >> 16;
	emu_ax.x = (g_global->memoryBuildings & 0xFFFF) + index * 0x58;

	/* Return from this function */
	emu_pop(&emu_bp);
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Free memory of a building.
 *
 * @name Memory_Building_Free
 * @implements 1082:0325:0018:025E ()
 * @implements 1082:033D:0010:68D6
 * @implements 1082:034D:0047:CEC1
 * @implements 1082:0394:000D:FB95
 * @implements 1082:0397:000A:AFD0
 * @implements 1082:0398:0009:BE50
 */
void Memory_Building_Free()
{
	emu_push(emu_bp);
	emu_bp = emu_sp;

	/* XXX -- No idea */
	emu_push(emu_ds);
	emu_push(0x3918);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6) + 0x12);
	emu_push(emu_cs); emu_push(0x033D); emu_cs = 0x15C2; f__15C2_0395_0044_304E();
	emu_sp += 8;

	Building *b = Building_Get_ByMemory(emu_get_memory16(emu_ss, emu_bp,  0x8), emu_get_memory16(emu_ss, emu_bp,  0x6));
	b->variable_04 = 0x0;

	/* Walk the array to find the building we are removing */
	uint32 searchPos = (emu_get_memory16(emu_ss, emu_bp,  0x8) << 16) + emu_get_memory16(emu_ss, emu_bp,  0x6);
	int i;
	for (i = 0; i < g_global->memoryBuildingsCount; i++) {
		if (g_global->memoryBuildingsPos[i] != searchPos) continue;
		break;
	}
	assert(i < g_global->memoryBuildingsCount); // We should always find an entry

	g_global->memoryBuildingsCount--;
	if (i == g_global->memoryBuildingsCount) {
		/* Return from this function */
		emu_pop(&emu_bp);
		emu_pop(&emu_ip);
		emu_pop(&emu_cs);
		return;
	}

	/* Close the gap by moving everything one to the left */
	emu_push((g_global->memoryBuildingsCount - i) * 4);
	emu_push(emu_ds);
	emu_push((i * 4) + 0x8626); // XXX -- g_global->memoryBuildingsPos[i + 1]
	emu_push(emu_ds);
	emu_push((i * 4) + 0x8622); // XXX -- g_global->memoryBuildingsPos[i + 0]
	emu_push(emu_cs); emu_push(0x0394); emu_cs = 0x01F7; f__01F7_28B8_0024_83C9();
	emu_sp += 10;

	/* Return from this function */
	emu_pop(&emu_bp);
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
}
