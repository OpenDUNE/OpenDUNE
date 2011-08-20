/* $Id$ */

/** @file src/saveload/team.c Load/save routines for Team. */

#include <stdio.h>
#include "types.h"

#include "saveload.h"
#include "../house.h"
#include "../pool/pool.h"
#include "../pool/team.h"
#include "../team.h"

static const SaveLoadDesc s_saveTeam[] = {
	SLD_ENTRY (Team, SLDT_UINT16, index),
	SLD_ENTRY2(Team, SLDT_UINT16, flags, SLDT_UINT8),
	SLD_ENTRY (Team, SLDT_UINT16, members),
	SLD_ENTRY (Team, SLDT_UINT16, minMembers),
	SLD_ENTRY (Team, SLDT_UINT16, maxMembers),
	SLD_ENTRY (Team, SLDT_UINT16, movementType),
	SLD_ENTRY (Team, SLDT_UINT16, action),
	SLD_ENTRY (Team, SLDT_UINT16, actionStart),
	SLD_ENTRY (Team, SLDT_UINT8,  houseID),
	SLD_EMPTY2(      SLDT_UINT8, 3),
	SLD_ENTRY (Team, SLDT_UINT32, position),
	SLD_ENTRY (Team, SLDT_UINT16, targetTile),
	SLD_ENTRY (Team, SLDT_UINT16, target),
	SLD_SLD   (Team,              script, g_saveScriptEngine),
	SLD_END
};


/**
 * Load all Teams from a file.
 * @param fp The file to load from.
 * @param length The length of the data chunk.
 * @return True if and only if all bytes were read successful.
 */
bool Team_Load(FILE *fp, uint32 length)
{
	while (length > 0) {
		Team *t;
		Team tl;

		/* Read the next Structure from disk */
		if (!SaveLoad_Load(s_saveTeam, fp, &tl)) return false;

		length -= SaveLoad_GetLength(s_saveTeam);

		tl.script.scriptInfo = g_scriptTeam;
		tl.script.script = g_scriptTeam->start + (size_t)tl.script.script;

		/* Get the Structure from the pool */
		t = Team_Get_ByIndex(tl.index);
		if (t == NULL) return false;

		/* Copy over the data */
		*t = tl;
	}
	if (length != 0) return false;

	Team_Recount();

	return true;
}

/**
 * Save all Teams to a file. It converts pointers to indices where needed.
 * @param fp The file to save to.
 * @return True if and only if all bytes were written successful.
 */
bool Team_Save(FILE *fp)
{
	PoolFindStruct find;

	find.houseID = HOUSE_INVALID;
	find.type    = 0xFFFF;
	find.index   = 0xFFFF;

	while (true) {
		Team *t;
		Team st;

		t = Team_Find(&find);
		if (t == NULL) break;
		st = *t;

		if (!SaveLoad_Save(s_saveTeam, fp, &st)) return false;
	}

	return true;
}
