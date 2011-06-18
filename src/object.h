/* $Id$ */

/** @file src/object.h %Object definitions. */

#ifndef OBJECT_H
#define OBJECT_H

#include "script/script.h"

MSVC_PACKED_BEGIN
/**
 * Data common to Structure and Unit.
 */
typedef struct Object {
	/* 0000(2)   */ PACK uint16 index;                      /*!< The index of the Structure/Unit in the array. */
	/* 0002(1)   */ PACK uint8  type;                       /*!< Type of Structure/Unit. */
	/* 0003(1)   */ PACK uint8  linkedID;                   /*!< Structure/Unit we are linked to, or 0xFF if we are not linked to a Structure/Unit. */
	/* 0004(4)   */ PACK union {
	                     struct {
	/*  4 - 0001 */              BITTYPE used:1;            /*!< The Object is in use (no longer free in the pool). */
	/*  4 - 0002 */              BITTYPE allocated:1;       /*!< The Object is allocated (created, and ready to be put on the map). */
	/*  4 - 0004 */              BITTYPE isNotOnMap:1;      /*!< The Object is not on the map (under construction, in refinery, etc). */
	/*  4 - 0008 */              BITTYPE isSmoking:1;       /*!< The Object has a smoke cloud coming out of it. */
	/*  4 - 0010 */              BITTYPE variable_4_0010:1; /*!< Unit ?? */
	/*  4 - 0020 */              BITTYPE variable_4_0020:1; /*!< Unit ?? */
	/*  4 - 0040 */              BITTYPE variable_4_0040:1; /*!< Unit ?? */
	/*  4 - 0080 */              BITTYPE variable_4_0080:1; /*!< Unit ?? */
	/*  4 - 0100 */              BITTYPE inTransport:1;     /*!< The Unit is in transport (spaceport, reinforcement, harvester). */
	/*  4 - 0200 */              BITTYPE byScenario:1;      /*!< The Unit is created by the scenario. */
	/*  4 - 0400 */              BITTYPE degrades:1;        /*!< Structure degrades. Unit ?? */
	/*  4 - 0800 */              BITTYPE isHighlighted:1;   /*!< The Object is currently highlighted. */
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
	                     struct {
	                             uint16 low;
	                             uint16 high;
	                     } half;
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

MSVC_PACKED_BEGIN
/**
 * Data common to StructureInfo and UnitInfo.
 */
typedef struct ObjectInfo {
	/* 0000(2)   */ PACK uint16 stringID_abbrev;            /*!< StringID of abbreviated name of Structure. */
	/* 0002(4)   */ PACK csip32 name;                       /*!< Pointer to name of Structure. */
	/* 0006(2)   */ PACK uint16 stringID_full;              /*!< StringID of full name of Structure. */
	/* 0008(4)   */ PACK csip32 wsa;                        /*!< Pointer to name of .wsa file. */
	/* 000C(2)   */ PACK union {
	                     struct {
	/*      0001 */              BITTYPE variable_0001:1;   /*!< ?? */
	/*      0002 */              BITTYPE factory:1;         /*!< Structure can build other Structures or Units. */
	/*      0004 */              BITTYPE variable_0004:1;   /*!< ?? */
	/*      0008 */              BITTYPE variable_0008:1;   /*!< ?? */
	/*      0010 */              BITTYPE variable_0010:1;   /*!< ?? */
	/*      0020 */              BITTYPE variable_0020:1;   /*!< ?? */
	/*      0040 */              BITTYPE hasTurret:1;       /*!< If true, the Unit has a turret seperate from his base unit. */
	/*      0080 */              BITTYPE conquerable:1;     /*!< Structure can be invaded and subsequently conquered when hitpoints are low. */
	/*      0100 */              BITTYPE variable_0100:1;   /*!< ?? Used in Script Commands. */
	/*      0200 */              BITTYPE noMessageOnDeath:1;/*!< Do not show a message (or sound) when this Unit is destroyed. */
	/*      0400 */              BITTYPE tabSelectable:1;   /*!< Is Unit selectable by pressing tab (which cycles through all Units and Structures). */
	/*      0800 */              BITTYPE scriptNoSlowdown:1;/*!< If Unit is outside viewport, do not slow down scripting. */
	/*      1000 */              BITTYPE targetAir:1;       /*!< Can target (and shoot) air units. */
	/*      2000 */              BITTYPE priority:1;        /*!< If not set, it is never seen as any priority for Units (for auto-attack). */
	/*      -    */              BITTYPE notused:2;         /*!< The remaining bits are never used. */
	                     } GCC_PACKED s;
	                     uint16 all; } flags;               /*!< General flags of the UnitInfo. */
	/* 000E(2)   */ PACK uint16 variable_0E;                /*!< ?? Chance of spawning an infanctry on structure destruction. */
	/* 0010(2)   */ PACK uint16 hitpoints;                  /*!< Default hitpoints for this Structure. */
	/* 0012(2)   */ PACK uint16 fogUncoverRadius;           /*!< Radius of fog to uncover. */
	/* 0014(2)   */ PACK uint16 spriteID;                   /*!< SpriteID of Structure. */
	/* 0016(2)   */ PACK uint16 buildCredits;               /*!< How much credits it cost to build this Structure. Upgrading is 50% of this value. */
	/* 0018(2)   */ PACK uint16 buildTime;                  /*!< Time required to build this Structure. */
	/* 001A(2)   */ PACK uint16 availableCampaign;          /*!< In which campaign (starting at 1) this Structure/Unit is available. */
	/* 001C(4)   */ PACK uint32 structuresRequired;         /*!< Which structures are required before this Structure/Unit is available. */
	/* 0020(1)   */ PACK uint8  sortPriority;               /*!< ?? */
	/* 0021(1)   */ PACK uint8  upgradeLevelRequired;       /*!< Which level of upgrade the Structure has to have before this is avialable. */
	/* 0022(8)   */ PACK uint16 actionsPlayer[4];           /*!< Actions for player units. */
	/* 002A(1)   */ PACK  int8  available;                  /*!< If this Unit/Structure is ordered (Starport) / available (Rest). 1+=yes (volume), 0=no, -1=upgrade-first. */
	/* 002B(2)   */ PACK uint16 hintStringID;               /*!< StringID of the hint shown for this Unit/Structure. */
	/* 002D(2)   */ PACK uint16 priorityBuild;              /*!< The amount of priority a Unit has when a new Unit has to be build. */
	/* 002F(2)   */ PACK uint16 priorityTarget;             /*!< The amount of priority a Unit has when being targetted. */
	/* 0031(1)   */ PACK uint8  availableHouse;             /*!< To which house this Structure/Unit is available. */
} GCC_PACKED ObjectInfo;
MSVC_PACKED_END
assert_compile(sizeof(ObjectInfo) == 0x32);

extern void Object_Script_Variable4_Link(uint16 encodedFrom, uint16 encodedTo);
extern void Object_Script_Variable4_Set(Object *o, uint16 index);
extern void Object_Script_Variable4_Clear(Object *object);
extern Object *Object_GetByPackedTile(uint16 packed);
extern uint16 Object_GetDistanceToEncoded(Object *o, uint16 encoded);

#endif /* OBJECT_H */
