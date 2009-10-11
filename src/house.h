/* $Id$ */

#ifndef HOUSE_H
#define HOUSE_H

/**
 * Types of Houses available in the game.
 */
typedef enum HouseType {
	HOUSE_HARKONNEN = 0,
	HOUSE_ATREIDES  = 1,
	HOUSE_ORDOS     = 2,
	/* TODO -- Are there more houses above 2? */

	HOUSE_INVALID = 0xFFFF
} HouseType;

MSVC_PACKED_BEGIN
/**
 * An House as stored in the memory.
 */
typedef struct House {
	/* 0000(1)   */ PACK uint8  index;                      /*!< The index of the House in the array. */
	/* 0001(1)   */ PACK uint8  empty;                      /*!< Normally part of index, but index can never be bigger than uint8. */
	/* 0002()    */ PACK uint8   unknown_0002[0x0002];
	/* 0004(2)   */ PACK uint16 variable_04;                /*!< ?? Bitflags. 0x0001 - Used. */
	/* 0006(2)   */ PACK uint16 unitCount;                  /*!< Amount of units owned by House. */
	/* 0008(2)   */ PACK uint16 unitCountMax;               /*!< Maximum amount of units this House is allowed to have. */
	/* 000A()    */ PACK uint8   unknown_000A[0x0022];
	/* 002C(2)   */ PACK uint16 variable_2C;                /*!< ?? */
	/* 002E()    */ PACK uint8   unknown_002E[0x0014];
} GCC_PACKED House;
MSVC_PACKED_END
assert_compile(sizeof(House) == 0x42);

#endif /* HOUSE_H */
