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

extern void f__10E4_0273_0029_DCE5();
extern void f__10E4_09AB_0031_5E8E();
extern void f__167E_0319_0010_B56F();
extern void emu_Tools_RandomRange();
extern void emu_Tools_Index_GetStructureOrUnit();

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

	return Tile_GetDistance(u->position, Tools_Index_GetTile(objectID));
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

	snprintf((char *)g_global->variable_9939, sizeof(g_global->variable_9939), (char *)emu_get_memorycsip(text),
	         script->stack[script->stackPointer + 1], script->stack[script->stackPointer + 2], script->stack[script->stackPointer + 3]);

	emu_push(0);
	emu_push(0x353F); emu_push(0x9939);
	emu_push(emu_cs); emu_push(0x00AC); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
	emu_sp += 6;

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
	emu_push(script->stack[script->stackPointer + 1]);
	emu_push(script->stack[script->stackPointer + 0]);
	emu_push(emu_cs); emu_push(0x0174); emu_cs = 0x2537; emu_Tools_RandomRange();
	emu_sp += 4;

	return emu_ax;
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

	emu_push(0xFFFF);
	emu_push(text.s.cs); emu_push(text.s.ip);
	emu_push(emu_cs); emu_push(0x01CB); emu_cs = 0x10E4; f__10E4_0273_0029_DCE5();
	emu_sp += 6;

	return emu_ax;
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

	if (s != NULL && Tools_Index_Encode(s->index, IT_STRUCTURE) != index) return 1;

	emu_push(index);
	emu_push(emu_cs); emu_push(0x02D7); emu_cs = 0x167E; emu_Tools_Index_GetStructureOrUnit();
	emu_sp += 2;

	if (emu_ax == 0 && emu_dx == 0) return 1;

	return 0;
}

/**
 * Unknown function 02EA.
 *
 * Stack: 0 - An encoded index.
 *
 * @param script The script engine to operate on.
 * @return unknown.
 */
uint16 Script_General_Unknown02EA(ScriptEngine *script)
{
	Unit *u;

	u = Tools_Index_GetUnit(script->stack[script->stackPointer]);

	if (u == NULL) return 128;

	return u->variable_62[0][2];
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

	find.houseID = emu_get_memory8(g_global->objectCurrent.s.cs, g_global->objectCurrent.s.ip, 8); /* object->houseID */
	find.type    = script->stack[script->stackPointer];
	find.index   = 0xFFFF;

	while (true) {
		Unit *u = Unit_Find(&find);
		if (u == NULL) break;
		count++;
	}

	return count;
}
