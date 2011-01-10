/* $Id$ */

#ifndef OBJECT_H
#define OBJECT_H

#include "script/script.h"

MSVC_PACKED_BEGIN
/**
 * A Structure as stored in the memory.
 */
typedef struct Object {
	/* 0000(2)   */ PACK uint16 index;                      /*!< The index of the Structure in the array. */
	/* 0002(1)   */ PACK uint8  type;                       /*!< Type of Structure. */
	/* 0003(1)   */ PACK uint8  linkedID;                   /*!< Structure/unit we are linked to, or 0xFF if we are not linked to a structure/unit. */
	/* 0004(4)   */ PACK union {
	                     struct {
	/*  4 - 0001 */              BITTYPE used:1;            /*!< The Object is in use (no longer free in the pool). */
	/*  4 - 0002 */              BITTYPE allocated:1;       /*!< The Object is allocated (created, and ready to be put on the map). */
	/*  4 - 0004 */              BITTYPE beingBuilt:1;      /*!< The Object is still under construction. */
	/*  4 - 0008 */              BITTYPE isSmoking:1;       /*!< The Object has a smoke cloud coming out of it. */
	/*  4 - 0010 */              BITTYPE variable_4_0010:1; /*!< Unit ?? */
	/*  4 - 0020 */              BITTYPE variable_4_0020:1; /*!< Unit ?? */
	/*  4 - 0040 */              BITTYPE variable_4_0040:1; /*!< Unit ?? */
	/*  4 - 0080 */              BITTYPE variable_4_0080:1; /*!< Unit ?? */
	/*  4 - 0100 */              BITTYPE inTransport:1;     /*!< The Unit is in transport (spaceport, reinforcement, harvester). */
	/*  4 - 0200 */              BITTYPE byScenario:1;      /*!< The Unit is created by the scenario. */
	/*  4 - 0400 */              BITTYPE degrades:1;        /*!< Structure degrades. Unit ?? */
	/*  4 - 0800 */              BITTYPE variable_0800:1;   /*!< Unit ?? */
	/*  4 - 1000 */              BITTYPE variable_4_1000:1; /*!< Unit ?? */
	/*  4 - 2000 */              BITTYPE repairing:1;       /*!< Structure is being repaired. */
	/*  4 - 4000 */              BITTYPE onHold:1;          /*!< Structure is on hold. */
	/*  4 - 8000 */              BITTYPE unknown_4_8000:1;
	/*  6 - 0001 */              BITTYPE variable_6_0001:1; /*!< Unit ?? If true, this is an unit, otherwise structure? */
	/*  6 - 0002 */              BITTYPE upgrading:1;       /*!< Structure is being upgraded. */
	/*  6 - 0004 */              BITTYPE unknown_6_0004:1;
	/*  6 - 0008 */              BITTYPE unknown_6_0008:1;
	/*  6 - 0010 */              BITTYPE unknown_6_0010:1;
	/*  6 - 0020 */              BITTYPE unknown_6_0020:1;
	/*  6 - 0040 */              BITTYPE unknown_6_0040:1;
	/*  6 - 0080 */              BITTYPE unknown_6_0080:1;
	/*  6 - 0100 */              BITTYPE unknown_6_0100:1;
	/*  6 - 0200 */              BITTYPE unknown_6_0200:1;
	/*  6 - 0400 */              BITTYPE unknown_6_0400:1;
	/*  6 - 0800 */              BITTYPE unknown_6_0800:1;
	/*  6 - 1000 */              BITTYPE unknown_6_1000:1;
	/*  6 - 2000 */              BITTYPE unknown_6_2000:1;
	/*  6 - 4000 */              BITTYPE unknown_6_4000:1;
	/*  6 - 8000 */              BITTYPE unknown_6_8000:1;
	                     } GCC_PACKED s;
	                     uint32 all; } flags;               /*!< General flags of the Structure. */
	/* 0008(1)   */ PACK uint8  houseID;                    /*!< House of Structure. */
	/* 0009(1)   */ PACK uint8  variable_09;                /*!< ?? */
	/* 000A(4)   */ PACK tile32 position;                   /*!< Position on the map. */
	/* 000E(2)   */ PACK uint16 hitpoints;                  /*!< Current hitpoints left. */
	/* 0010(2)   */ PACK uint16 scriptDelay;                /*!< How many more ticks the script is suspended (or zero if not suspended). */
	/* 0012(53)  */ PACK ScriptEngine script;               /*!< The script engine instance of this Structure. */
} GCC_PACKED Object;
MSVC_PACKED_END
assert_compile(sizeof(Object) == 0x47);

extern void Object_Script_Variable4_Link(uint16 encodedFrom, uint16 encodedTo);
extern void Object_Script_Variable4_Set(Object *o, uint16 index);
extern void Object_Script_Variable4_Clear(Object *object);
extern Object *Object_GetByPackedTile(uint16 packed);

#endif /* OBJECT_H */
