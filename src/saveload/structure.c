/* $Id$ */

/** @file src/saveload/house.c Load/save routines for Structure. */

#include <stdio.h>
#include "types.h"

#include "saveload.h"
#include "../house.h"
#include "../structure.h"
#include "../pool/structure.h"
#include "../pool/pool.h"

static const SaveLoadDesc s_saveStructure[] = {
	SLD_SLD   (Structure,              o, g_saveObject),
	SLD_ENTRY (Structure, SLDT_UINT16, creatorHouseID),
	SLD_ENTRY (Structure, SLDT_UINT16, rotationSpriteDiff),
	SLD_EMPTY (           SLDT_UINT8),
	SLD_ENTRY (Structure, SLDT_UINT16, objectType),
	SLD_ENTRY (Structure, SLDT_UINT8,  upgradeLevel),
	SLD_ENTRY (Structure, SLDT_UINT8,  upgradeTimeLeft),
	SLD_ENTRY (Structure, SLDT_UINT16, countDown),
	SLD_ENTRY (Structure, SLDT_UINT16, buildCostRemainder),
	SLD_ENTRY (Structure,  SLDT_INT16, state),
	SLD_ENTRY (Structure, SLDT_UINT16, hitpointsMax),
	SLD_END
};

/**
 * Load all Structures from a file.
 * @param fp The file to load from.
 * @param length The length of the data chunk.
 * @return True if and only if all bytes were read successful.
 */
bool Structure_Load(FILE *fp, uint32 length)
{
	while (length > 0) {
		Structure *s;
		Structure sl;

		/* Read the next Structure from disk */
		if (!SaveLoad_Load(s_saveStructure, fp, &sl)) return false;

		length -= SaveLoad_GetLength(s_saveStructure);

		sl.o.script.scriptInfo = g_scriptStructure;
		sl.o.script.script = g_scriptStructure->start + (size_t)sl.o.script.script;
		if (sl.upgradeTimeLeft == 0) sl.upgradeTimeLeft = Structure_IsUpgradable(&sl) ? 100 : 0;

		/* Get the Structure from the pool */
		s = Structure_Get_ByIndex(sl.o.index);
		if (s == NULL) return false;

		/* Copy over the data */
		*s = sl;
	}
	if (length != 0) return false;

	Structure_Recount();

	return true;
}

/**
 * Save all Structures to a file. It converts pointers to indices where needed.
 * @param fp The file to save to.
 * @return True if and only if all bytes were written successful.
 */
bool Structure_Save(FILE *fp)
{
	PoolFindStruct find;

	find.houseID = HOUSE_INVALID;
	find.type    = 0xFFFF;
	find.index   = 0xFFFF;

	while (true) {
		Structure *s;
		Structure ss;

		s = Structure_Find(&find);
		if (s == NULL) break;
		ss = *s;

		if (!SaveLoad_Save(s_saveStructure, fp, &ss)) return false;
	}

	return true;
}
