/* $Id$ */

#include <stdio.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "../os/endian.h"
#include "../os/strings.h"
#include "../pool/pool.h"
#include "../pool/structure.h"
#include "../pool/unit.h"
#include "script.h"
#include "../structure.h"
#include "../tile.h"
#include "../tools.h"
#include "../unit.h"
#include "../gui/gui.h"
#include "../map.h"

extern void f__167E_0319_0010_B56F();
extern void f__B483_0000_0019_F96A();
extern void overlay(uint16 cs, uint8 force);

/**
 * Suspend the script execution for a set amount of ticks.
 *
 * Stack: 0 - delay value in ticks.
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

	delay = script->stack[script->stackPointer] / 5;

	/* XXX -- Lovely hackish */
	*(((uint16 *)script) - 1) = delay;

	return delay;
}

/**
 * Suspend the script execution for a randomized amount of ticks, with an
 *  upper limit given.
 *
 * Stack: 0 - maximum amount of delay in ticks.
 *
 * @param script The script engine to operate on.
 * @return Amount of ticks the script will be suspended, divided by 5.
 */
uint16 Script_General_DelayRandom(ScriptEngine *script)
{
	uint16 delay;

	delay = Tools_Random_256() * script->stack[script->stackPointer] / 256;
	delay /= 5;

	/* XXX -- Lovely hackish */
	*(((uint16 *)script) - 1) = delay;

	return delay;
}

/**
 * Get the distance from the current unit to the given structure/unit.
 *
 * Stack: 0 - Structure / Unit ID.
 *
 * @param script The script engine to operate on.
 * @return Distance to it, where distance is (longest(x,y) + shortest(x,y) / 2).
 */
uint16 Script_General_GetDistance(ScriptEngine *script)
{
	Unit *u;
	uint16 objectID;

	objectID = script->stack[script->stackPointer];
	u = Unit_Get_ByMemory(g_global->objectCurrent);

	if (!Tools_Index_IsValid(objectID)) return 0xFFFF;

	return Tile_GetDistance(u->o.position, Tools_Index_GetTile(objectID));
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
 * Stack: 0 - The index of the string to draw.
 *        1-3 - The arguments for the string.
 *
 * @param script The script engine to operate on.
 * @return The value 0. Always.
 */
uint16 Script_General_DisplayText(ScriptEngine *script)
{
	csip32 text;
	uint16 offset;

	text = ScriptInfo_Get_ByMemory(script->scriptInfo)->text;

	offset = BETOH16(emu_get_memory16(text.s.cs, text.s.ip, script->stack[script->stackPointer] * 2));

	text.s.ip += offset;

	GUI_DisplayText((char *)emu_get_memorycsip(text), 0, script->stack[script->stackPointer + 1], script->stack[script->stackPointer + 2], script->stack[script->stackPointer + 3]);

	return 0;
}

/**
 * Get a random value between min and max.
 *
 * Stack: 0 - The minimum value.
 *        1 - The maximum value.
 *
 * @param script The script engine to operate on.
 * @return The random value.
 */
uint16 Script_General_RandomRange(ScriptEngine *script)
{
	return Tools_RandomRange(script->stack[script->stackPointer + 0], script->stack[script->stackPointer + 1]);
}

/**
 * Unknown function 0184.
 *
 * Stack: 0 - The index of a string.
 *
 * @param script The script engine to operate on.
 * @return unknown.
 */
uint16 Script_General_Unknown0184(ScriptEngine *script)
{
	csip32 text;
	uint16 offset;

	text = ScriptInfo_Get_ByMemory(script->scriptInfo)->text;

	offset = BETOH16(emu_get_memory16(text.s.cs, text.s.ip, script->stack[script->stackPointer] * 2));

	text.s.ip += offset;

	return GUI_DisplayModalMessage((char *)emu_get_memorycsip(text), 0xFFFF);
}

/**
 * Unknown function 024B.
 *
 * Stack: 0 - An encoded index.
 *
 * @param script The script engine to operate on.
 * @return unknown.
 */
uint16 Script_General_Unknown024B(ScriptEngine *script)
{
	uint16 index;

	index = script->stack[script->stackPointer];

	if (!Tools_Index_IsValid(index)) return 0xFFFF;

	emu_push(index);
	emu_push(g_global->objectCurrent.s.cs); emu_push(g_global->objectCurrent.s.ip);
	emu_push(emu_cs); emu_push(0x027B); emu_cs = 0x167E; f__167E_0319_0010_B56F();
	emu_sp += 6;

	return emu_ax;
}

/**
 * Unknown function 0288.
 *
 * Stack: 0 - An encoded index.
 *
 * @param script The script engine to operate on.
 * @return unknown.
 */
uint16 Script_General_Unknown0288(ScriptEngine *script)
{
	uint16 index;
	Structure *s;

	index = script->stack[script->stackPointer];
	s = Tools_Index_GetStructure(index);

	if (s != NULL && Tools_Index_Encode(s->o.index, IT_STRUCTURE) != index) return 1;

	return (Tools_Index_GetObject(index) == NULL) ? 1 : 0;
}

/**
 * Get orientation of a unit.
 *
 * Stack: 0 - An encoded index.
 *
 * @param script The script engine to operate on.
 * @return The orientation of the unit.
 */
uint16 Script_General_GetOrientation(ScriptEngine *script)
{
	Unit *u;

	u = Tools_Index_GetUnit(script->stack[script->stackPointer]);

	if (u == NULL) return 128;

	return u->orientation[0].current;
}

/**
 * Counts how many unit of the given type are owned by current object's owner.
 *
 * Stack: 0 - An unit type.
 *
 * @param script The script engine to operate on.
 * @return The count.
 */
uint16 Script_General_UnitCount(ScriptEngine *script)
{
	uint16 count = 0;
	PoolFindStruct find;

	find.houseID = emu_get_memory8(g_global->objectCurrent.s.cs, g_global->objectCurrent.s.ip, 8); /* object->o.houseID */
	find.type    = script->stack[script->stackPointer];
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
 * Stack: 0 - An encoded index.
 *
 * @param script The script engine to operate on.
 * @return The decoded index, or 0xFFFF if invalid.
 */
uint16 Script_General_DecodeIndex(ScriptEngine *script)
{
	uint16 index;

	index = script->stack[script->stackPointer];

	if (!Tools_Index_IsValid(index)) return 0xFFFF;

	return Tools_Index_Decode(index);
}

/**
 * Gets the type of the given encoded index.
 *
 * Stack: 0 - An encoded index.
 *
 * @param script The script engine to operate on.
 * @return The type, or 0xFFFF if invalid.
 */
uint16 Script_General_GetIndexType(ScriptEngine *script)
{
	uint16 index;

	index = script->stack[script->stackPointer];

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

	linkedID = emu_get_memory8(g_global->objectCurrent.s.cs, g_global->objectCurrent.s.ip, 3); /* object->linkedID */

	if (linkedID == 0xFF) return 0xFFFF;

	return Unit_Get_ByIndex(linkedID)->o.type;
}

/**
 * Unknown function 0426.
 *
 * Stack: 0 - Unknown.
 *
 * @param script The script engine to operate on.
 * @return The value 0. Always.
 */
uint16 Script_General_Unknown0426(ScriptEngine *script)
{
	tile32 position;

	position = emu_get_tile32(g_global->objectCurrent.s.cs, g_global->objectCurrent.s.ip, 0xA); /* object->position */

	emu_push(position.s.y); emu_push(position.s.x);
	emu_push(script->stack[script->stackPointer]);
	emu_push(emu_cs); emu_push(0x044D); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0000_0019_F96A();
	emu_sp += 6;

	return 0;
}

/**
 * Unknown function 0456.
 *
 * Stack: 0 - Unknown.
 *
 * @param script The script engine to operate on.
 * @return Unknown.
 */
uint16 Script_General_Unknown0456(ScriptEngine *script)
{
	uint8 houseID;
	tile32 position;
	uint16 packed;

	houseID = emu_get_memory8(g_global->objectCurrent.s.cs, g_global->objectCurrent.s.ip, 0x8); /* object->o.houseID */
	position = emu_get_tile32(g_global->objectCurrent.s.cs, g_global->objectCurrent.s.ip, 0xA); /* object->position */

	packed = Map_B4CD_08E7(Tile_PackTile(position), script->stack[script->stackPointer]);

	if (packed == 0) return 0;
	return Tools_Index_Encode(packed, IT_TILE);
}

/**
 * Unknown function 04AE.
 *
 * Stack: 0 - An encoded index.
 *
 * @param script The script engine to operate on.
 * @return Unknown.
 */
uint16 Script_General_Unknown04AE(ScriptEngine *script)
{
	uint16 index;
	Object *o;
	uint16 res;

	index = script->stack[script->stackPointer];

	o = Tools_Index_GetObject(index);

	if (o == NULL || o->flags.s.beingBuilt || !o->flags.s.used) return 0;

	res = Script_General_Unknown050C(script);

	return (res == 0) ? 1 : -res;
}

/**
 * Unknown function 050C.
 *
 * Stack: 0 - An encoded index.
 *
 * @param script The script engine to operate on.
 * @return Unknown.
 */
uint16 Script_General_Unknown050C(ScriptEngine *script)
{
	uint8 houseID;
	uint16 index;

	index = script->stack[script->stackPointer];

	if (!Tools_Index_IsValid(index)) return 0;

	houseID = emu_get_memory8(g_global->objectCurrent.s.cs, g_global->objectCurrent.s.ip, 0x8); /* object->o.houseID */

	switch (Tools_Index_GetType(index)) {
		case IT_UNIT:      return (Unit_GetHouseID(Tools_Index_GetUnit(index)) != houseID) ? 1 : 0;
		case IT_STRUCTURE: return (Tools_Index_GetStructure(index)->o.houseID != houseID) ? 1 : 0;
		default:           return 0;
	}
}

/**
 * Unknown function 0594.
 *
 * Stack: 0 - An encoded index or a Structure type.
 *
 * @param script The script engine to operate on.
 * @return ??.
 */
uint16 Script_General_Unknown0594(ScriptEngine *script)
{
	uint8 houseID;
	uint16 index;
	Structure *s;
	PoolFindStruct find;

	index = script->stack[script->stackPointer];

	houseID = emu_get_memory8(g_global->objectCurrent.s.cs, g_global->objectCurrent.s.ip, 0x8); /* object->o.houseID */

	if ((index & 0xC000) != 0) {
		if (Tools_Index_GetType(index) != IT_STRUCTURE) return 0;
		s = Tools_Index_GetStructure(index);
		if (s->o.houseID != houseID) return 0;
		if (s->animation != 0) return 0;
		return 1;
	}

	find.houseID = houseID;
	find.index   = 0xFFFF;
	find.type    = index;

	while (true) {
		s = Structure_Find(&find);
		if (s == NULL) return 0;
		if (s->animation != 0) continue;
		return Tools_Index_Encode(s->o.index, IT_STRUCTURE);
	}
}
