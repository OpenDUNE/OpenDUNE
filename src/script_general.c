/* $Id: script.c 559 2009-11-21 23:24:32Z truebrain $ */

#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "script.h"


/**
 * Delay the script execution. It reads the current entry on the stack and
 *  ensures the script is not executed for that amount of ticks. After that
 *  script execution proceeds as normal.
 *
 * @param script The script engine to suspend.
 * @return Delay divided by 5.
 *
 * @note Scripts are executed every 5 ticks, so the delay is divided by 5. You
 *  can't delay your script for 4 ticks or lower.
 */
uint16 Script_General_Delay(ScriptEngine *script)
{
	uint16 delay;

	delay = script->stack[script->stackPointer] / 5;

	/* XXX -- Lovely hackish */
	*(((uint16 *)script) - 1) = delay;

	return delay;
}
