/** @file src/object.h %Object definitions. */

#ifndef OBJECT_H
#define OBJECT_H

#include "script/script.h"

/**
 * Data common to Structure and Unit.
 */
typedef struct Object {
	uint16 index;                                           /*!< The index of the Structure/Unit in the array. */
	uint8  type;                                            /*!< Type of Structure/Unit. */
	uint8  linkedID;                                        /*!< Structure/Unit we are linked to, or 0xFF if we are not linked to a Structure/Unit. */
	union {
		struct {
			BIT_U8 used:1;                                  /*!< The Object is in use (no longer free in the pool). */
			BIT_U8 allocated:1;                             /*!< The Object is allocated (created, and ready to be put on the map). */
			BIT_U8 isNotOnMap:1;                            /*!< The Object is not on the map (under construction, in refinery, etc). */
			BIT_U8 isSmoking:1;                             /*!< The Object has a smoke cloud coming out of it. */
			BIT_U8 fireTwiceFlip:1;                         /*!< Used for Unit fire twice, to keep track if it is the second shot. */
			BIT_U8 animationFlip:1;                         /*!< Used for Unit (bullet / missile) animation, to differ between two sprite groups. */
			BIT_U8 bulletIsBig:1;                           /*!< If true, the Unit (bullet / sonic wave) is twice as big (visual only). */
			BIT_U8 isWobbling:1;                            /*!< If true, the Unit will be wobbling during movement. */
			BIT_U8 inTransport:1;                           /*!< The Unit is in transport (spaceport, reinforcement, harvester). */
			BIT_U8 byScenario:1;                            /*!< The Unit is created by the scenario. */
			BIT_U8 degrades:1;                              /*!< Structure degrades. Unit ?? */
			BIT_U8 isHighlighted:1;                         /*!< The Object is currently highlighted. */
			BIT_U8 isDirty:1;                               /*!< If true, the Unit will be redrawn next update. */
			BIT_U8 repairing:1;                             /*!< Structure is being repaired. */
			BIT_U8 onHold:1;                                /*!< Structure is on hold. */
			BIT_U8 notused_4_8000:1;
			BIT_U8 isUnit:1;                                /*!< If true, this is an Unit, otherwise a Structure. */
			BIT_U8 upgrading:1;                             /*!< Structure is being upgraded. */
			BIT_U8 notused_6_0004:6;
			BIT_U8 notused_6_0100:8;
		} s;
		struct {
			uint16 low;
			uint16 high;
		} half; } flags;                                    /*!< General flags of the Structure/Unit. */
	uint8  houseID;                                         /*!< House of Structure. */
	uint8  seenByHouses;                                    /*!< Bitmask of which houses have seen this object. */
	tile32 position;                                        /*!< Position on the map. */
	uint16 hitpoints;                                       /*!< Current hitpoints left. */
	ScriptEngine script;                                    /*!< The script engine instance of this Structure. */
} Object;

/**
 * Data common to StructureInfo and UnitInfo.
 */
typedef struct ObjectInfo {
	uint16 stringID_abbrev;                                 /*!< StringID of abbreviated name of Structure / Unit. */
	const char *name;                                       /*!< Pointer to name of Structure / Unit. */
	uint16 stringID_full;                                   /*!< StringID of full name of Structure / Unit. */
	const char *wsa;                                        /*!< Pointer to name of .wsa file. */
	struct {
		BIT_U8 hasShadow:1;                                 /*!< If true, the Unit has a shadow below it. */
		BIT_U8 factory:1;                                   /*!< Structure can build other Structures or Units. */
		BIT_U8 notOnConcrete:1;                             /*!< Structure cannot be build on concrete. */
		BIT_U8 busyStateIsIncoming:1;                       /*!< If true, the Structure has lights to indicate a Unit is incoming. This is then the BUSY state, where READY means it is processing the Unit. */
		BIT_U8 blurTile:1;                                  /*!< If true, this blurs the tile the Unit is on. */
		BIT_U8 hasTurret:1;                                 /*!< If true, the Unit has a turret seperate from his base unit. */
		BIT_U8 conquerable:1;                               /*!< Structure can be invaded and subsequently conquered when hitpoints are low. */
		BIT_U8 canBePickedUp:1;                             /*!< If true, it can be picked up (by a CarryAll). */
		BIT_U8 noMessageOnDeath:1;                          /*!< Do not show a message (or sound) when this Structure / Unit is destroyed. */
		BIT_U8 tabSelectable:1;                             /*!< Is Structure / Unit selectable by pressing tab (which cycles through all Units and Structures). */
		BIT_U8 scriptNoSlowdown:1;                          /*!< If Structure / Unit is outside viewport, do not slow down scripting. */
		BIT_U8 targetAir:1;                                 /*!< Can target (and shoot) air units. */
		BIT_U8 priority:1;                                  /*!< If not set, it is never seen as any priority for Units (for auto-attack). */
	} flags;                                                /*!< General flags of the ObjectInfo. */
	uint16 spawnChance;                                     /*!< Chance of spawning a Unit (if Structure: on destroying of Structure). */
	uint16 hitpoints;                                       /*!< Default hitpoints for this Structure / Unit. */
	uint16 fogUncoverRadius;                                /*!< Radius of fog to uncover. */
	uint16 spriteID;                                        /*!< SpriteID of Structure / Unit. */
	uint16 buildCredits;                                    /*!< How much credits it cost to build this Structure / Unit. Upgrading is 50% of this value. */
	uint16 buildTime;                                       /*!< Time required to build this Structure / Unit. */
	uint16 availableCampaign;                               /*!< In which campaign (starting at 1) this Structure / Unit is available. */
	uint32 structuresRequired;                              /*!< Which structures are required before this Structure / Unit is available. */
	uint8  sortPriority;                                    /*!< ?? */
	uint8  upgradeLevelRequired;                            /*!< Which level of upgrade the Structure / Unit has to have before this is avialable. */
	uint16 actionsPlayer[4];                                /*!< Actions for player Structure / Unit. */
	 int8  available;                                       /*!< If this Structure / Unit is ordered (Starport) / available (Rest). 1+=yes (volume), 0=no, -1=upgrade-first. */
	uint16 hintStringID;                                    /*!< StringID of the hint shown for this Structure / Unit. */
	uint16 priorityBuild;                                   /*!< The amount of priority a Structure / Unit has when a new Structure / Unit has to be build. */
	uint16 priorityTarget;                                  /*!< The amount of priority a Structure / Unit has when being targetted. */
	uint8  availableHouse;                                  /*!< To which house this Structure / Unit is available. */
} ObjectInfo;

extern void Object_Script_Variable4_Link(uint16 encodedFrom, uint16 encodedTo);
extern void Object_Script_Variable4_Set(Object *o, uint16 index);
extern void Object_Script_Variable4_Clear(Object *object);
extern Object *Object_GetByPackedTile(uint16 packed);
extern uint16 Object_GetDistanceToEncoded(Object *o, uint16 encoded);

#endif /* OBJECT_H */
