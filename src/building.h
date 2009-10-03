/* $Id$ */

#ifndef BUILDING_H
#define BUILDING_H

MSVC_PACKED_BEGIN;
/**
 * A building as stored in the memory.
 */
typedef struct Building {
	/* 0000(2)   */ uint16 index;                  //!< The index of the building in the array.
	/* 0002(1)   */ uint8  type;                   //!< Type of building.
	/* 0003(1)   */ uint8  variable_03;            //!< ??
	/* 0004(2)   */ uint16 variable_04;            //!< ?? Bitflags. 0x0001 - Used? 0x0002 - Allocated?
	/* 0006(2)   */ uint16 variable_06;            //!< ??
	/* 0008()    */ uint8   unknown_0008[0x0008];
	/* 0010(2)   */ uint16 variable_10;            //!< ??
	/* 0012()    */ uint8   unknown_0000[0x0046];
} GCC_PACKED Building;
MSVC_PACKED_END;

extern Building *Building_Get_ByIndex(uint8 index);
extern Building *Building_Get_ByMemory(uint16 segment, uint16 offset);
extern void Building_Get_ByIndex2();

#endif /* BUILDING_H */
