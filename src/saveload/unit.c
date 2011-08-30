/* $Id$ */

/** @file src/saveload/house.c Load/save routines for Unit. */

#include <stdio.h>
#include "types.h"

#include "saveload.h"
#include "../house.h"
#include "../pool/unit.h"
#include "../pool/pool.h"
#include "../unit.h"

static const SaveLoadDesc s_saveUnitOrientation[] = {
	SLD_ENTRY (dir24,  SLDT_INT8, speed),
	SLD_ENTRY (dir24,  SLDT_INT8, target),
	SLD_ENTRY (dir24,  SLDT_INT8, current),
	SLD_END
};

static const SaveLoadDesc s_saveUnit[] = {
	SLD_SLD   (Unit,              o, g_saveObject),
	SLD_EMPTY (      SLDT_UINT16),
	SLD_ENTRY (Unit, SLDT_UINT32, currentDestination),
	SLD_ENTRY (Unit, SLDT_UINT16, originEncoded),
	SLD_ENTRY (Unit, SLDT_UINT8,  actionID),
	SLD_ENTRY (Unit, SLDT_UINT8,  nextActionID),
	SLD_ENTRY (Unit, SLDT_UINT8,  fireDelay),
	SLD_ENTRY (Unit, SLDT_UINT16, distanceToDestination),
	SLD_ENTRY (Unit, SLDT_UINT16, targetAttack),
	SLD_ENTRY (Unit, SLDT_UINT16, targetMove),
	SLD_ENTRY (Unit, SLDT_UINT8,  amount),
	SLD_ENTRY (Unit, SLDT_UINT8,  deviated),
	SLD_ENTRY (Unit, SLDT_UINT32, targetLast),
	SLD_ENTRY (Unit, SLDT_UINT32, targetPreLast),
	SLD_SLD2  (Unit, orientation, s_saveUnitOrientation, 2),
	SLD_ENTRY (Unit, SLDT_UINT8,  speedPerTick),
	SLD_ENTRY (Unit, SLDT_UINT8,  speedRemainder),
	SLD_ENTRY (Unit, SLDT_UINT8,  speed),
	SLD_ENTRY (Unit, SLDT_UINT8,  movingSpeed),
	SLD_ENTRY (Unit, SLDT_UINT8,  wobbleIndex),
	SLD_ENTRY (Unit,  SLDT_INT8,  spriteOffset),
	SLD_ENTRY (Unit, SLDT_UINT8,  blinkCounter),
	SLD_ENTRY (Unit, SLDT_UINT8,  team),
	SLD_ENTRY (Unit, SLDT_UINT16, timer),
	SLD_ARRAY (Unit, SLDT_UINT8,  route, 14),
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
	while (length > 0) {
		Unit *u;
		Unit ul;

		/* Read the next Structure from disk */
		if (!SaveLoad_Load(s_saveUnit, fp, &ul)) return false;

		length -= SaveLoad_GetLength(s_saveUnit);

		ul.o.script.scriptInfo = g_scriptUnit;
		ul.o.script.script = g_scriptUnit->start + (size_t)ul.o.script.script;
		ul.o.script.delay = 0;
		ul.timer = 0;
		ul.o.seenByHouses |= 1 << ul.o.houseID;

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

		if (!SaveLoad_Save(s_saveUnit, fp, &su)) return false;
	}

	return true;
}
