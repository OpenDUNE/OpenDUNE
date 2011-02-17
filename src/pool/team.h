/* $Id$ */

#ifndef POOL_TEAM_H
#define POOL_TEAM_H

enum {
	TEAM_INDEX_MAX = 16,                                 /*!< The highest possible index for any Team.  */

	TEAM_INDEX_INVALID = 0xFFFF
};

struct PoolFindStruct;
extern struct Team *Team_Get_ByIndex(uint16 index);
extern struct Team *Team_Get_ByMemory(csip32 address);
extern struct Team *Team_Find(struct PoolFindStruct *find);

extern void Team_Init(csip32 address);
extern void Team_Recount();
extern struct Team *Team_Allocate(uint16 index);
extern void Team_Free(struct Team *au);


extern void emu_Team_Init();
extern void emu_Team_Recount();
extern void emu_Team_Get_ByIndex();

#endif /* POOL_TEAM_H */
