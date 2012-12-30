/** @file src/saveload/scriptengine.c Load/save routines for ScriptEngine. */

#include <stdio.h>
#include "types.h"

#include "saveload.h"
#include "../script/script.h"

static uint32 SaveLoad_Script_Script(void *object, uint32 value, bool loading)
{
	ScriptEngine *script = (ScriptEngine *)object;

	if (loading) {
		script->script = (uint16 *)(size_t)value;
		return 0;
	}

	if (script->script == NULL) return 0;
	return (script->script - script->scriptInfo->start);
}

const SaveLoadDesc g_saveScriptEngine[] = {
	SLD_ENTRY (ScriptEngine, SLDT_UINT16, delay),
	SLD_CALLB (ScriptEngine, SLDT_UINT32, script, &SaveLoad_Script_Script),
	SLD_EMPTY (              SLDT_UINT32),
	SLD_ENTRY (ScriptEngine, SLDT_UINT16, returnValue),
	SLD_ENTRY (ScriptEngine, SLDT_UINT8,  framePointer),
	SLD_ENTRY (ScriptEngine, SLDT_UINT8,  stackPointer),
	SLD_ARRAY (ScriptEngine, SLDT_UINT16, variables, 5),
	SLD_ARRAY (ScriptEngine, SLDT_UINT16, stack, 15),
	SLD_ENTRY (ScriptEngine, SLDT_UINT8,  isSubroutine),
	SLD_END
};
