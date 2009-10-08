/* $Id$ */

#ifndef POOL_AIRUNIT_H
#define POOL_AIRUNIT_H

enum {
	AIRUNIT_INDEX_MAX = 16,                                 /*!< The highest possible index for any AirUnit.  */

	AIRUNIT_INDEX_INVALID = 0xFFFF
};

struct PoolFindStruct;
extern struct AirUnit *AirUnit_Get_ByIndex(uint16 index);
extern struct AirUnit *AirUnit_Get_ByMemory(csip32 address);
extern struct AirUnit *AirUnit_Find(struct PoolFindStruct *find);

extern void AirUnit_Init(csip32 address);
extern void AirUnit_Recount();
extern struct AirUnit *AirUnit_Allocate(uint16 index);
extern void AirUnit_Free(csip32 address);


extern void emu_AirUnit_Init();
extern void emu_AirUnit_Recount();
extern void emu_AirUnit_Allocate();
extern void emu_AirUnit_Free();
extern void emu_AirUnit_Get_ByIndex();
extern void emu_AirUnit_FindFirst();
extern void emu_AirUnit_FindNext();

#endif /* POOL_AIRUNIT_H */
