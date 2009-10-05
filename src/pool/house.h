/* $Id$ */

#ifndef POOL_HOUSE_H
#define POOL_HOUSE_H

enum {
	HOUSE_INDEX_MAX = 6,                           //!< The highest possible index for any House.

	HOUSE_INDEX_INVALID = 0xFFFF,
};

struct PoolFindStruct;
extern struct House *House_Get_ByIndex(uint8 index);
extern struct House *House_Get_ByMemory(csip32 address);
extern struct House *House_Find(struct PoolFindStruct *find);

extern void House_Init(csip32 address);
extern struct House *House_Allocate(uint8 index);
extern void House_Free(csip32 address);


extern void emu_House_Init();
extern void emu_House_Allocate();
extern void emu_House_Free();
extern void emu_House_Get_ByIndex();
extern void emu_House_FindFirst();
extern void emu_House_FindNext();

#endif /* POOL_HOUSE_H */
