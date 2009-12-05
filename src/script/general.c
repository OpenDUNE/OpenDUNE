/* $Id$ */

#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "../pool/structure.h"
#include "../pool/unit.h"
#include "script.h"
#include "../structure.h"
#include "../tile.h"
#include "../tools.h"
#include "../unit.h"

extern void emu_Tools_Random_256();

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

	/* Get a random value between 0 and 255 */
	emu_push(emu_cs); emu_push(0x0102); emu_cs = 0x2BB4; emu_Tools_Random_256();

	delay = emu_ax * script->stack[script->stackPointer] / 256;
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
