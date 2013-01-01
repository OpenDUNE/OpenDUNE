/** @file src/pool/team.h %Team pool definitions. */

#ifndef POOL_TEAM_H
#define POOL_TEAM_H

enum {
	TEAM_INDEX_MAX = 16,                                 /*!< The highest possible index for any Team.  */

	TEAM_INDEX_INVALID = 0xFFFF
};

struct PoolFindStruct;

extern struct Team *Team_Get_ByIndex(uint16 index);
extern struct Team *Team_Find(struct PoolFindStruct *find);

extern void Team_Init(void);
extern void Team_Recount(void);
extern struct Team *Team_Allocate(uint16 index);
extern void Team_Free(struct Team *au);

#endif /* POOL_TEAM_H */
