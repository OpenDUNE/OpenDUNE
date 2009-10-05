/* $Id$ */

#ifndef UNIT_H
#define UNIT_H

/**
 * Types of Units available in the game.
 * TODO -- Complete the enum.
 */
typedef enum UnitType {
	UNIT_25 = 25,
} UnitType;

MSVC_PACKED_BEGIN;
/**
 * A Unit as stored in the memory.
 */
typedef struct Unit {
	/* 0000(2)   */ uint16 index;                  //!< The index of the Unit in the array.
	/* 0002(1)   */ uint8  typeID;                 //!< Type of Unit.
	/* 0003(1)   */ uint8  variable_03;            //!< ??
	/* 0004(2)   */ uint16 variable_04;            //!< ?? Bitflags. 0x0001 - Used, 0x0002 - Allocated?, 0x0004 - Being-built?
	/* 0006(2)   */ uint16 variable_06;            //!< ??
	/* 0008(1)   */ uint8  houseID;                //!< House of Unit.
	/* 0009()    */ uint8   unknown_0009[0x0007];
	/* 0010(2)   */ uint16 variable_10;            //!< ??
	/* 0012()    */ uint8   unknown_0012[0x0046];
	/* 0058(1)   */ uint8  variable_58;            //!< ??
	/* 0059(1)   */ uint8  deviated;               //!< ?? If non-zero, the unit is deviated, but what does it hold exactly?
	/* 005A()    */ uint8   unknown_005A[0x0018];
	/* 0072(1)   */ uint8  variable_72;            //!< ??
	/* 0073()    */ uint8   unknown_0073[0x000D];
} GCC_PACKED Unit;
MSVC_PACKED_END;
assert_compile(sizeof(Unit) == 0x80);

uint8 Unit_GetHouseID(Unit *u);

#endif /* UNIT_H */
