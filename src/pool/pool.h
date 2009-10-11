/* $Id$ */

#ifndef POOL_POOL_H
#define POOL_POOL_H

MSVC_PACKED_BEGIN
/**
 * To find a pool item of a given type/house, this struct is used. The result
 *  is also written back in this struct.
 */
typedef struct PoolFindStruct {
	/* 0000(2)   */ PACK uint16 houseID;                    /*!< House to search for, or -1 for all. */
	/* 0002(2)   */ PACK uint16 type;                       /*!< Type to search for, or -1 for all. */
	/* 0004(2)   */ PACK uint16 index;                      /*!< Last index of search, or -1 to start from begin. */
} GCC_PACKED PoolFindStruct;
MSVC_PACKED_END
assert_compile(sizeof(PoolFindStruct) == 0x06);

#endif /* POOL_POOL_H */
