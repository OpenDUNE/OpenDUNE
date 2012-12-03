/* $Id$ */

/** @file src/script/general.c Generic script routines. */

#include <stdio.h>
#include "types.h"
#include "../os/endian.h"

#include "script.h"

#include "../audio/sound.h"
#include "../gui/gui.h"
#include "../map.h"
#include "../pool/pool.h"
#include "../pool/structure.h"
#include "../pool/unit.h"
#include "../structure.h"
#include "../tile.h"
#include "../tools.h"
#include "../unit.h"

/**
 * Suspend the script execution for a set amount of ticks.
 *
 * Stack: 1 - delay value in ticks.
 *
 * @param script The script engine to operate on.
 * @return Amount of ticks the script will be suspended, divided by 5.
 *
 * @note Scripts are executed every 5 ticks, so the delay is divided by 5. You
 *  can't delay your script for 4 ticks or less.
 */
uint16 Script_General_Delay(ScriptEngine *script)
{
	uint16 delay;

	delay = STACK_PEEK(1) / 5;

	script->delay = delay;

	return delay;
}

/**
 * Suspend the script execution for a randomized amount of ticks, with an
 *  upper limit given.
 *
 * Stack: 1 - maximum amount of delay in ticks.
 *
 * @param script The script engine to operate on.
 * @return Amount of ticks the script will be suspended, divided by 5.
 */
uint16 Script_General_DelayRandom(ScriptEngine *script)
{
	uint16 delay;

	delay = Tools_Random_256() * STACK_PEEK(1) / 256;
	delay /= 5;

	script->delay = delay;

	return delay;
}

/**
 * Get the distance from the current unit/structure to the tile.
 *
 * Stack: 1 - An encoded tile index.
 *
 * @param script The script engine to operate on.
 * @return Distance to it, where distance is (longest(x,y) + shortest(x,y) / 2).
 */
uint16 Script_General_GetDistanceToTile(ScriptEngine *script)
{
	Object *o;
	uint16 encoded;

	encoded = STACK_PEEK(1);
	o = g_scriptCurrentObject;

	if (!Tools_Index_IsValid(encoded)) return 0xFFFF;

	return Tile_GetDistance(o->position, Tools_Index_GetTile(encoded));
}

/**
 * Do nothing. This function has absolutely no functionality other than
 *  returning the value 0.
 *
 * Stack: *none*
 *
 * @param script The script engine to operate on
 * @return The value 0. Always.
 */
uint16 Script_General_NoOperation(ScriptEngine *script)
{
	VARIABLE_NOT_USED(script);
	return 0;
}

/**
 * Draws a string.
 *
 * Stack: 1 - The index of the string to draw.
 *        2-4 - The arguments for the string.
 *
 * @param script The script engine to operate on.
 * @return The value 0. Always.
 */
uint16 Script_General_DisplayText(ScriptEngine *script)
{
	char *text;
	uint16 offset;

	offset = BETOH16(*(script->scriptInfo->text + STACK_PEEK(1)));
	text = (char *)script->scriptInfo->text + offset;

	GUI_DisplayText(text, 0, STACK_PEEK(2), STACK_PEEK(3), STACK_PEEK(4));

	return 0;
}

/**
 * Get a random value between min and max.
 *
 * Stack: 1 - The minimum value.
 *        2 - The maximum value.
 *
 * @param script The script engine to operate on.
 * @return The random value.
 */
uint16 Script_General_RandomRange(ScriptEngine *script)
{
	return Tools_RandomLCG_Range(STACK_PEEK(1), STACK_PEEK(2));
}

/**
 * Display a modal message.
 *
 * Stack: 1 - The index of a string.
 *
 * @param script The script engine to operate on.
 * @return unknown.
 */
uint16 Script_General_DisplayModalMessage(ScriptEngine *script)
{
	char *text;
	uint16 offset;

	offset = BETOH16(*(script->scriptInfo->text + STACK_PEEK(1)));
	text = (char *)script->scriptInfo->text + offset;

	return GUI_DisplayModalMessage(text, 0xFFFF);
}

/**
 * Get the distance from the current unit/structure to the unit/structure.
 *
 * Stack: 1 - An encoded unit/structure index.
 *
 * @param script The script engine to operate on.
 * @return Distance to it, where distance is (longest(x,y) + shortest(x,y) / 2).
 */
uint16 Script_General_GetDistanceToObject(ScriptEngine *script)
{
	uint16 index;

	index = STACK_PEEK(1);

	if (!Tools_Index_IsValid(index)) return 0xFFFF;

	return Object_GetDistanceToEncoded(g_scriptCurrentObject, index);
}

/**
 * Unknown function 0288.
 *
 * Stack: 1 - An encoded index.
 *
 * @param script The script engine to operate on.
 * @return unknown.
 */
uint16 Script_General_Unknown0288(ScriptEngine *script)
{
	uint16 index;
	Structure *s;

	index = STACK_PEEK(1);
	s = Tools_Index_GetStructure(index);

	if (s != NULL && Tools_Index_Encode(s->o.index, IT_STRUCTURE) != index) return 1;

	return (Tools_Index_GetObject(index) == NULL) ? 1 : 0;
}

/**
 * Get orientation of a unit.
 *
 * Stack: 1 - An encoded index.
 *
 * @param script The script engine to operate on.
 * @return The orientation of the unit.
 */
uint16 Script_General_GetOrientation(ScriptEngine *script)
{
	Unit *u;

	u = Tools_Index_GetUnit(STACK_PEEK(1));

	if (u == NULL) return 128;

	return u->orientation[0].current;
}

/**
 * Counts how many unit of the given type are owned by current object's owner.
 *
 * Stack: 1 - An unit type.
 *
 * @param script The script engine to operate on.
 * @return The count.
 */
uint16 Script_General_UnitCount(ScriptEngine *script)
{
	uint16 count = 0;
	PoolFindStruct find;

	find.houseID = g_scriptCurrentObject->houseID;
	find.type    = STACK_PEEK(1);
	find.index   = 0xFFFF;

	while (true) {
		Unit *u = Unit_Find(&find);
		if (u == NULL) break;
		count++;
	}

	return count;
}

/**
 * Decodes the given encoded index.
 *
 * Stack: 1 - An encoded index.
 *
 * @param script The script engine to operate on.
 * @return The decoded index, or 0xFFFF if invalid.
 */
uint16 Script_General_DecodeIndex(ScriptEngine *script)
{
	uint16 index;

	index = STACK_PEEK(1);

	if (!Tools_Index_IsValid(index)) return 0xFFFF;

	return Tools_Index_Decode(index);
}

/**
 * Gets the type of the given encoded index.
 *
 * Stack: 1 - An encoded index.
 *
 * @param script The script engine to operate on.
 * @return The type, or 0xFFFF if invalid.
 */
uint16 Script_General_GetIndexType(ScriptEngine *script)
{
	uint16 index;

	index = STACK_PEEK(1);

	if (!Tools_Index_IsValid(index)) return 0xFFFF;

	return Tools_Index_GetType(index);
}

/**
 * Gets the type of the current object's linked unit.
 *
 * Stack: *none*.
 *
 * @param script The script engine to operate on.
 * @return The type, or 0xFFFF if no linked unit.
 */
uint16 Script_General_GetLinkedUnitType(ScriptEngine *script)
{
	uint16 linkedID;

	VARIABLE_NOT_USED(script);

	linkedID = g_scriptCurrentObject->linkedID;

	if (linkedID == 0xFF) return 0xFFFF;

	return Unit_Get_ByIndex(linkedID)->o.type;
}

/**
 * Play a voice.
 *
 * Stack: 1 - The VoiceID to play.
 *
 * @param script The script engine to operate on.
 * @return The value 0. Always.
 */
uint16 Script_General_VoicePlay(ScriptEngine *script)
{
	tile32 position;

	position = g_scriptCurrentObject->position;

	Voice_PlayAtTile(STACK_PEEK(1), position);

	return 0;
}

/**
 * Search for spice nearby.
 *
 * Stack: 1 - Radius of the search.
 *
 * @param script The script engine to operate on.
 * @return Encoded position with spice, or \c 0 if no spice nearby.
 */
uint16 Script_General_SearchSpice(ScriptEngine *script)
{
	tile32 position;
	uint16 packedSpicePos;

	position = g_scriptCurrentObject->position;

	packedSpicePos = Map_SearchSpice(Tile_PackTile(position), STACK_PEEK(1));

	if (packedSpicePos == 0) return 0;
	return Tools_Index_Encode(packedSpicePos, IT_TILE);
}

/**
 * Check if a Unit/Structure is a friend.
 *
 * Stack: 1 - An encoded index.
 *
 * @param script The script engine to operate on.
 * @return Either 1 (friendly) or -1 (enemy).
 */
uint16 Script_General_IsFriendly(ScriptEngine *script)
{
	uint16 index;
	Object *o;
	uint16 res;

	index = STACK_PEEK(1);

	o = Tools_Index_GetObject(index);

	if (o == NULL || o->flags.s.isNotOnMap || !o->flags.s.used) return 0;

	res = Script_General_IsEnemy(script);

	return (res == 0) ? 1 : -1;
}

/**
 * Check if a Unit/Structure is an enemy.
 *
 * Stack: 1 - An encoded index.
 *
 * @param script The script engine to operate on.
 * @return Zero if and only if the Unit/Structure is friendly.
 */
uint16 Script_General_IsEnemy(ScriptEngine *script)
{
	uint8 houseID;
	uint16 index;

	index = STACK_PEEK(1);

	if (!Tools_Index_IsValid(index)) return 0;

	houseID = g_scriptCurrentObject->houseID;

	switch (Tools_Index_GetType(index)) {
		case IT_UNIT:      return (Unit_GetHouseID(Tools_Index_GetUnit(index)) != houseID) ? 1 : 0;
		case IT_STRUCTURE: return (Tools_Index_GetStructure(index)->o.houseID != houseID) ? 1 : 0;
		default:           return 0;
	}
}

/**
 * Two sided function. If the parameter is an index, it will return 1 if and
 *  only if the structure indicated is idle. If the parameter is not an index,
 *  it is a structure type, and this function will return the first structure
 *  that is of that type and idle.
 *
 * Stack: 1 - An encoded index or a Structure type.
 *
 * @param script The script engine to operate on.
 * @return Zero or one to indicate idle, or the index of the structure which is idle, depending on the input parameter.
 */
uint16 Script_General_FindIdle(ScriptEngine *script)
{
	uint8 houseID;
	uint16 index;
	Structure *s;
	PoolFindStruct find;

	index = STACK_PEEK(1);

	houseID = g_scriptCurrentObject->houseID;

	if (Tools_Index_GetType(index) == IT_UNIT) return 0;
	if (Tools_Index_GetType(index) == IT_TILE) return 0;

	if (Tools_Index_GetType(index) == IT_STRUCTURE) {
		s = Tools_Index_GetStructure(index);
		if (s->o.houseID != houseID) return 0;
		if (s->state != STRUCTURE_STATE_IDLE) return 0;
		return 1;
	}

	find.houseID = houseID;
	find.index   = 0xFFFF;
	find.type    = index;

	while (true) {
		s = Structure_Find(&find);
		if (s == NULL) return 0;
		if (s->state != STRUCTURE_STATE_IDLE) continue;
		return Tools_Index_Encode(s->o.index, IT_STRUCTURE);
	}
}
