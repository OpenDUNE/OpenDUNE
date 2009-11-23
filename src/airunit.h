/* $Id$ */

#ifndef AIRUNIT_H
#define AIRUNIT_H

#include "script.h"

/**
 * Types of AirUnits available in the game.
 * TODO -- Complete the enum.
 */
typedef enum AirUnitType {
	AIRUNIT_INVALID = 0xFFFF
} AirUnitType;

MSVC_PACKED_BEGIN
/**
 * An AirUnit as stored in the memory.
 */
typedef struct AirUnit {
	/* 0000(2)   */ PACK uint16 index;                      /*!< The index of the AirUnit in the array. */
	/* 0002(2)   */ PACK uint16 flags;                      /*!< Bitflags. 0x0001 - Used. */
	/* 0004()    */ PACK uint8   unknown_0004[0x000C];
	/* 0010(2)   */ PACK uint16 houseID;                    /*!< House of AirUnit. */
	/* 0012()    */ PACK uint8   unknown_0012[0x000A];
	/* 001C(2)   */ PACK uint16 scriptDelay;                /*!< How many more ticks the script is suspended (or zero if not suspended). */
	/* 001E(53)  */ PACK ScriptEngine script;               /*!< The script engine instance of this AirUnit. */
} GCC_PACKED AirUnit;
MSVC_PACKED_END
assert_compile(sizeof(AirUnit) == 0x53);

#endif /* AIRUNIT_H */
