/* $Id$ */

/** @file src/saveload/house.c Load/save routines for ScriptEngine. */

#include <stdio.h>
#include "types.h"

#include "saveload.h"
#include "../script/script.h"

const SaveLoadDesc g_saveScriptEngine[] = {
	SLD_ENTRY (ScriptEngine, SLDT_UINT16, delay),
	SLD_ENTRY (ScriptEngine, SLDT_UINT32, script),
	SLD_EMPTY (              SLDT_UINT32),
	SLD_ENTRY (ScriptEngine, SLDT_UINT16, returnValue),
	SLD_ENTRY (ScriptEngine, SLDT_UINT8,  framePointer),
	SLD_ENTRY (ScriptEngine, SLDT_UINT8,  stackPointer),
	SLD_ARRAY (ScriptEngine, SLDT_UINT16, variables, 5),
	SLD_ARRAY (ScriptEngine, SLDT_UINT16, stack, 15),
	SLD_ENTRY (ScriptEngine, SLDT_UINT8,  isSubroutine),
	SLD_END
};
