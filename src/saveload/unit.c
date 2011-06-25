/* $Id$ */

/** @file src/saveload/house.c Load/save routines for House. */

#include <stdio.h>
#include "types.h"
#include "../global.h"

#include "saveload.h"
#include "../house.h"
#include "../pool/unit.h"
#include "../pool/pool.h"
#include "../unit.h"

static const SaveLoadDesc s_saveUnit[] = {
	SLD_ENTRY (Unit, SLDT_UINT16, unknown_0047),
	SLD_ENTRY (Unit, SLDT_UINT32, variable_49),
	SLD_ENTRY (Unit, SLDT_UINT16, originEncoded),
	SLD_ENTRY (Unit, SLDT_UINT8,  actionID),
	SLD_ENTRY (Unit, SLDT_UINT8,  nextActionID),
	SLD_ENTRY (Unit, SLDT_UINT8,  fireDelay),
	SLD_ENTRY (Unit, SLDT_UINT16, variable_52),
	SLD_ENTRY (Unit, SLDT_UINT16, targetAttack),
	SLD_ENTRY (Unit, SLDT_UINT16, targetMove),
	SLD_ENTRY (Unit, SLDT_UINT8,  amount),
	SLD_ENTRY (Unit, SLDT_UINT8,  deviated),
	SLD_ENTRY (Unit, SLDT_UINT32, variable_5A),
	SLD_ENTRY (Unit, SLDT_UINT32, variable_5E),
	SLD_ARRAY (Unit, SLDT_DIR24,  orientation, 2),
	SLD_ENTRY (Unit, SLDT_UINT8,  variable_68),
	SLD_ENTRY (Unit, SLDT_UINT8,  variable_69),
	SLD_ENTRY (Unit, SLDT_UINT8,  variable_6A),
	SLD_ENTRY (Unit, SLDT_UINT8,  variable_6B),
	SLD_ENTRY (Unit, SLDT_UINT8,  variable_6C),
	SLD_ENTRY (Unit,  SLDT_INT8,  variable_6D),
	SLD_ENTRY (Unit, SLDT_UINT8,  blinkCounter),
	SLD_ENTRY (Unit, SLDT_UINT8,  team),
	SLD_ENTRY (Unit, SLDT_UINT16, variable_70),
	SLD_ARRAY (Unit, SLDT_UINT8,  variable_72, 14),
	SLD_END
};


/**
 * Load all Units from a file.
 * @param fp The file to load from.
 * @param length The length of the data chunk.
 * @return True if and only if all bytes were read successful.
 */
bool Unit_Load(FILE *fp, uint32 length)
{
	while (length >= sizeof(Unit)) {
		Unit *u;
		Unit ul;

		length -= sizeof(Unit);

		/* Read the next Structure from disk */
		if (!SaveLoad_Load(g_saveObject, fp, &ul.o)) return false;
		if (!SaveLoad_Load(g_saveScriptEngine, fp, &ul.o.script)) return false;
		if (!SaveLoad_Load(s_saveUnit, fp, &ul)) return false;

		ul.o.script.scriptInfo.s.cs = 0x353F;
		ul.o.script.scriptInfo.s.ip = emu_Global_GetIP(&g_global->scriptUnit, 0x353F);
		if (ul.o.script.script.csip != 0x0) {
			uint16 lineno = ul.o.script.script.csip;

			ul.o.script.script = g_global->scriptUnit.start;
			ul.o.script.script.s.ip += lineno * 2;
		}
		ul.o.script.delay = 0;
		ul.variable_70 = 0;
		ul.o.variable_09 |= 1 << ul.o.houseID;

		/* ENHANCEMENT -- Due to wrong parameter orders of Unit_Create in original Dune2,
		 *  it happened that units exists with houseID 13. This in fact are Trikes with
		 *  the wrong houseID. So remove those units completely from the savegame. */
		if (ul.o.houseID == 13) continue;

		/* Get the Structure from the pool */
		u = Unit_Get_ByIndex(ul.o.index);
		if (u == NULL) return false;

		/* Copy over the data */
		*u = ul;
	}
	if (length != 0) return false;

	Unit_Recount();

	return true;
}

/**
 * Save all Units to a file. It converts pointers to indices where needed.
 * @param fp The file to save to.
 * @return True if and only if all bytes were written successful.
 */
bool Unit_Save(FILE *fp)
{
	PoolFindStruct find;

	find.houseID = HOUSE_INVALID;
	find.type    = 0xFFFF;
	find.index   = 0xFFFF;

	while (true) {
		Unit *u;
		Unit su;

		u = Unit_Find(&find);
		if (u == NULL) break;
		su = *u;

		/* Rewrite the pointer in the scriptEngine to an index */
		if (su.o.script.script.csip != 0x00000000) {
			ScriptInfo *scriptInfo;
			scriptInfo = ScriptInfo_Get_ByMemory(su.o.script.scriptInfo);
			su.o.script.script.csip = (su.o.script.script.csip - scriptInfo->start.csip) / 2;
		}
		su.o.script.scriptInfo.csip = 0x00000000;

		if (!SaveLoad_Save(g_saveObject, fp, &su.o)) return false;
		if (!SaveLoad_Save(g_saveScriptEngine, fp, &su.o.script)) return false;
		if (!SaveLoad_Save(s_saveUnit, fp, &su)) return false;
	}

	return true;
}
