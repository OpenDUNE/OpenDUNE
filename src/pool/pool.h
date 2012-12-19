/** @file src/pool/pool.h %Generic pool definitions. */

#ifndef POOL_POOL_H
#define POOL_POOL_H

/**
 * To find a pool item of a given type/house, this struct is used. The result
 *  is also written back in this struct.
 */
typedef struct PoolFindStruct {
	uint8  houseID; /*!< House to search for, or HOUSE_INVALID for all. */
	uint16 type;    /*!< Type to search for, or -1 for all. */
	uint16 index;   /*!< Last index of search, or -1 to start from begin. */
} PoolFindStruct;

#endif /* POOL_POOL_H */
