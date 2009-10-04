/* $Id$ */

#ifndef HOUSE_H
#define HOUSE_H

enum {
	HOUSE_INDEX_MAX = 6,                           //!< The highest possible index for any house.
};

/**
 * Types of houses available in the game.
 * TODO -- Complete the enum.
 */
typedef enum HouseType {
	HOUSE_INVALID = -1,
} HouseType;

MSVC_PACKED_BEGIN;
/**
 * A house as stored in the memory.
 */
typedef struct House {
	/* 0000(2)   */ uint16 index;                  //!< The index of the house in the array.
	/* 0002()    */ uint8   unknown_0002[0x0002];
	/* 0004(2)   */ uint16 variable_04;            //!< ?? Bitflags. 0x0001 - Used.
	/* 0006()    */ uint8   unknown_0006[0x0002];
	/* 0008(2)   */ uint16 variable_08;            //!< ??
	/* 000A()    */ uint8   unknown_000A[0x0022];
	/* 002C(2)   */ uint16 variable_2C;            //!< ??
	/* 002E()    */ uint8   unknown_002E[0x0014];
} GCC_PACKED House;
MSVC_PACKED_END;
assert_compile(sizeof(House) == 0x42);

MSVC_PACKED_BEGIN;
/**
 * To find a house, this struct is used. The result is also written back in
 *  this struct.
 */
typedef struct HouseFindStruct {
	/* 0000(4)   */ uint32 unused;
	/* 0004(2)   */ int16  index;                   //!< Last index of search, or -1 to start from begin.
} GCC_PACKED HouseFindStruct;
MSVC_PACKED_END;
assert_compile(sizeof(HouseFindStruct) == 0x06);

extern House *House_Get_ByIndex(uint8 index);
extern House *House_Get_ByMemory(csip address);
extern House* House_Allocate(int16 index);
extern House *House_Find(int16 *lastIndex);

extern void emu_House_Init();
extern void emu_House_Allocate();
extern void emu_House_Get_ByIndex();
extern void emu_House_FindFirst();
extern void emu_House_FindNext();

#endif /* HOUSE_H */
