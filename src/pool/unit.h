/* $Id$ */

#ifndef POOL_UNIT_H
#define POOL_UNIT_H

enum {
	UNIT_INDEX_MAX = 102,                                   /*!< The highest possible index for any Unit. */

	UNIT_INDEX_INVALID = 0xFFFF
};

struct PoolFindStruct;
extern struct Unit *Unit_Get_ByIndex(uint16 index);
extern struct Unit *Unit_Get_ByMemory(csip32 address);
extern struct Unit *Unit_Find(struct PoolFindStruct *find);

extern void Unit_Init(csip32 address);
extern void Unit_Recount();
extern struct Unit *Unit_Allocate(uint16 index, uint8 type, uint8 houseID);
extern void Unit_Free(struct Unit *u);


extern void emu_Unit_Init();
extern void emu_Unit_Recount();
extern void emu_Unit_Get_ByIndex();
extern void emu_Unit_FindFirst();
extern void emu_Unit_FindNext();

#endif /* POOL_UNIT_H */
