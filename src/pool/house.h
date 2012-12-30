/** @file src/pool/house.h %House pool definitions. */

#ifndef POOL_HOUSE_H
#define POOL_HOUSE_H

enum {
	HOUSE_INDEX_MAX = 6,                                    /*!< The highest possible index for any House.  */

	HOUSE_INDEX_INVALID = 0xFFFF
};

struct PoolFindStruct;

extern struct House *House_Get_ByIndex(uint8 index);
extern struct House *House_Find(struct PoolFindStruct *find);

extern void House_Init(void);
extern struct House *House_Allocate(uint8 index);
extern void House_Free(struct House *h);

#endif /* POOL_HOUSE_H */
