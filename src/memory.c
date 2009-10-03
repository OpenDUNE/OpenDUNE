#include <assert.h>
#include <stdio.h>
#include <string.h>
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
 * @param index The index to put the building on, or -1 to find a free spot.
 * @param typeID The type of the new building.
 */
Building *Memory_Building_Allocate(int16 index, uint8 typeID)
{
	Building *b = NULL;

	if (g_global->buildingStartPos == 0x0) return NULL;

	if (typeID == BUILDING_SLAB_1x1) {
		index = BUILDING_INDEX_SLAB_1x1;
		b = Building_Get_ByIndex(index);
	} else if (typeID == BUILDING_SLAB_2x2) {
		index = BUILDING_INDEX_SLAB_2x2;
		b = Building_Get_ByIndex(index);
	} else if (typeID == BUILDING_WALL) {
		index = BUILDING_INDEX_WALL;
		b = Building_Get_ByIndex(index);
	} else if (index != -1) { // Forced on an index
		b = Building_Get_ByIndex(index);
		/* If the slot is not free, don't allocate the building */
		if ((b->variable_04 & 0x0001) != 0) b = NULL;
	} else { // Find the first free slot
		for (index = 0; index < BUILDING_INDEX_MAX_SOFT; index++) {
			b = Building_Get_ByIndex(index);
			if ((b->variable_04 & 0x0001) == 0) break;
		}

		/* If we didn't find a free slot, don't allocate the building */
		if (index == BUILDING_INDEX_MAX_SOFT) b = NULL;
	}

	if (b == NULL) return NULL;

	/* Initialize the building */
	memset(b, 0, sizeof(Building));
	b->index = index;
	b->typeID = typeID;
	b->variable_03 = 0xFF;
	b->variable_04 = 0x03;
	b->variable_06 = 0x00;
	b->variable_10 = 0x00;

	g_global->buildingArray[g_global->buildingCount] = g_global->buildingStartPos + index * sizeof(Building);
	g_global->buildingCount++;

	return b;
}

/**
 * Allocate memory for a building.
 *
 * @name emu_Memory_Building_Allocate
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
void emu_Memory_Building_Allocate()
{
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	int16 index = emu_get_memory16(emu_ss, emu_bp,  0x6);
	uint8 typeID = emu_get_memory16(emu_ss, emu_bp,  0x8);
	Building *b = Memory_Building_Allocate(index, typeID);

	if (b == NULL) {
		emu_dx.x = 0x0;
		emu_ax.x = 0x0;
		return;
	}

	emu_dx.x = g_global->buildingStartPos >> 16;
	emu_ax.x = (g_global->buildingStartPos & 0xFFFF) + b->index * sizeof(Building);
}

/**
 * Free memory of a building.
 *
 * @name emu_Memory_Building_Free
 * @implements 1082:0325:0018:025E ()
 * @implements 1082:033D:0010:68D6
 * @implements 1082:034D:0047:CEC1
 * @implements 1082:0394:000D:FB95
 * @implements 1082:0397:000A:AFD0
 * @implements 1082:0398:0009:BE50
 */
void emu_Memory_Building_Free()
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
	for (i = 0; i < g_global->buildingCount; i++) {
		if (g_global->buildingArray[i] != searchPos) continue;
		break;
	}
	assert(i < g_global->buildingCount); // We should always find an entry

	g_global->buildingCount--;
	if (i == g_global->buildingCount) {
		/* Return from this function */
		emu_pop(&emu_bp);
		emu_pop(&emu_ip);
		emu_pop(&emu_cs);
		return;
	}

	/* Close the gap by moving everything one to the left */
	emu_push((g_global->buildingCount - i) * 4);
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
