/* $Id$ */

#ifndef POOL_BUILDING_H
#define POOL_BUILDING_H

enum {
	BUILDING_INDEX_MAX_SOFT = 79,                  //!< The highest possible index for normal Building.
	BUILDING_INDEX_MAX_HARD = 82,                  //!< The highest possible index for any Building.

	BUILDING_INDEX_WALL     = 79,                  //!< All walls are are put under index 79.
	BUILDING_INDEX_SLAB_2x2 = 80,                  //!< All 2x2 slabs are put under index 80.
	BUILDING_INDEX_SLAB_1x1 = 81,                  //!< All 1x1 slabs are put under index 81.

	BUILDING_INDEX_INVALID  = 0xFFFF,
};

struct PoolFindStruct;
extern struct Building *Building_Get_ByIndex(uint16 index);
extern struct Building *Building_Get_ByMemory(csip32 address);
extern struct Building *Building_Find(struct PoolFindStruct *find);

extern void Building_Init(csip32 address);
extern void Building_Recount();
extern struct Building *Building_Allocate(uint16 index, uint8 typeID);
extern void Building_Free(csip32 address);


extern void emu_Building_Init();
extern void emu_Building_Recount();
extern void emu_Building_Allocate();
extern void emu_Building_Free();
extern void emu_Building_Get_ByIndex();
extern void emu_Building_FindFirst();
extern void emu_Building_FindNext();

#endif /* POOL_BUILDING_H */
