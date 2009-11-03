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
	HOUSE_FREMEN    = 3,
	HOUSE_SARDAUKAR = 4,
	HOUSE_MERCENARY = 5,

	HOUSE_MAX       = 6,
	HOUSE_INVALID   = 0xFF
} HouseType;

MSVC_PACKED_BEGIN
/**
 * An House as stored in the memory.
 */
typedef struct House {
	/* 0000(2)   */ PACK uint16 index;                      /*!< The index of the House in the array. */
	/* 0002()    */ PACK uint8   unknown_0002[0x0002];
	/* 0004(2)   */ PACK uint16 flags;                      /*!< ?? Bitflags. 0x0001 - Used, 0x0002 - Human. */
	/* 0006(2)   */ PACK uint16 unitCount;                  /*!< Amount of units owned by House. */
	/* 0008(2)   */ PACK uint16 unitCountMax;               /*!< Maximum amount of units this House is allowed to have. */
	/* 000A()    */ PACK uint8   unknown_000A[0x0008];
	/* 0012(2)   */ PACK uint16 credits;                    /*!< Amount of credits the House currently has. */
	/* 0014()    */ PACK uint8   unknown_0014[0x0008];
	/* 001C(2)   */ PACK uint16 creditsQuota;               /*!< Quota house has to reach to win the mission. */
	/* 001E()    */ PACK uint8   unknown_001E[0x000E];
	/* 002C(2)   */ PACK uint16 variable_2C;                /*!< ?? */
	/* 002E()    */ PACK uint8   unknown_002E[0x0014];
} GCC_PACKED House;
MSVC_PACKED_END
assert_compile(sizeof(House) == 0x42);

MSVC_PACKED_BEGIN
/**
 * Inside the GlobalData is information about houses. This is the layout of
 *  that data.
 */
typedef struct HouseInfo {
	/* 0000(4)   */ PACK csip32 name;                       /*<! Pointer to name of house. */
	/* 0004()    */ PACK uint8   unknown_0004[0x0002];
	/* 0006(2)   */ PACK uint16 variable_0006;              /*<! ?? */
	/* 0008()    */ PACK uint8   unknown_0008[0x0008];
	/* 0010(2)   */ PACK uint16 prefixChar;                 /*<! Char used as prefix for some filenames. */
	/* 0012()    */ PACK uint8   unknown_0012[0x0008];
	/* 001A(4)   */ PACK csip32 voiceFilename;              /*<! Pointer to filename with the voices of the house. */
} GCC_PACKED HouseInfo;
MSVC_PACKED_END
assert_compile(sizeof(HouseInfo) == 0x1E);

extern HouseInfo *g_houseInfo;

extern uint8 House_StringToType(const char *name);

#endif /* HOUSE_H */
