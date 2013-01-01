/** @file src/saveload/object.c Load/save routines for Object. */

#include <stdio.h>
#include "types.h"

#include "saveload.h"
#include "../object.h"

const SaveLoadDesc g_saveObject[] = {
	SLD_ENTRY (Object, SLDT_UINT16, index),
	SLD_ENTRY (Object, SLDT_UINT8,  type),
	SLD_ENTRY (Object, SLDT_UINT8,  linkedID),
	SLD_ENTRY (Object, SLDT_UINT32, flags),
	SLD_ENTRY (Object, SLDT_UINT8,  houseID),
	SLD_ENTRY (Object, SLDT_UINT8,  seenByHouses),
	SLD_ENTRY (Object, SLDT_UINT32, position),
	SLD_ENTRY (Object, SLDT_UINT16, hitpoints),
	SLD_SLD   (Object,              script, g_saveScriptEngine),
	SLD_END
};
