/* $Id$ */

#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "pool/structure.h"
#include "pool/unit.h"
#include "script.h"
#include "structure.h"
#include "tile.h"
#include "unit.h"

extern void f__167E_0005_0013_AF0C();
extern void f__167E_01BB_0010_85F6();
extern void f__2BB4_0004_0027_DC1D();

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
	emu_push(emu_cs); emu_push(0x0102); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();

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
	tile32 tile;

	objectID = script->stack[script->stackPointer];
	u = Unit_Get_ByMemory(g_global->objectCurrent);

	emu_push(objectID);
	emu_push(emu_cs); emu_push(0x0217); emu_cs = 0x167E; f__167E_0005_0013_AF0C();
	emu_sp += 2;
	if (emu_ax == 0) return 0xFFFF;

	emu_push(objectID);
	emu_push(emu_cs); emu_push(0x0222); emu_cs = 0x167E; f__167E_01BB_0010_85F6();
	emu_sp += 2;

	tile.s.x = emu_ax;
	tile.s.y = emu_dx;

	return Tile_GetDistance(u->position, tile);
}
