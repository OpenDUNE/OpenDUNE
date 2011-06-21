/* $Id$ */

/** @file src/save.c Save routines. */

#include <stdio.h>
#include <string.h>
#include "types.h"
#include "global.h"

#include "save.h"

#include "house.h"
#include "map.h"
#include "os/endian.h"
#include "os/math.h"
#include "os/strings.h"
#include "pool/pool.h"
#include "pool/structure.h"
#include "pool/unit.h"
#include "structure.h"
#include "team.h"
#include "unit.h"

/**
 * Save all kinds of important info to the savegame.
 * @param fp The file to save to.
 * @return True if and only if all bytes were written successful.
 */
static bool Save_Info(FILE *fp)
{
	uint8 selectionType = (uint8)g_global->selectionType;
	uint8 activeStructureType = (uint8)g_global->activeStructureType;

	g_global->scenario.savegameVersion = 0x0290;

	if (fwrite(&g_global->scenario, sizeof(Scenario), 1, fp) != 1) return false;
	if (fwrite(&g_global->playerCreditsNoSilo, sizeof(uint16), 1, fp) != 1) return false;
	if (fwrite(&g_global->minimapPosition, sizeof(uint16), 1, fp) != 1) return false;
	if (fwrite(&g_global->variable_3A00, sizeof(uint16), 1, fp) != 1) return false;
	if (fwrite(&selectionType, sizeof(uint8), 1, fp) != 1) return false;
	if (fwrite(&activeStructureType, sizeof(uint8), 1, fp) != 1) return false;
	if (fwrite(&g_global->activeStructurePosition, sizeof(uint16), 1, fp) != 1) return false;

	if (g_global->activeStructureType != 0xFFFF) {
		if (fwrite(&g_structureActive->o.index, sizeof(uint16), 1, fp) != 1) return false;
	} else {
		uint16 invalid = 0xFFFF;
		if (fwrite(&invalid, sizeof(uint16), 1, fp) != 1) return false;
	}

	if (g_unitSelected != NULL) {
		if (fwrite(&g_unitSelected->o.index, sizeof(uint16), 1, fp) != 1) return false;
	} else {
		uint16 invalid = 0xFFFF;
		if (fwrite(&invalid, sizeof(uint16), 1, fp) != 1) return false;
	}

	if (g_unitActive != NULL) {
		if (fwrite(&g_unitActive->o.index, sizeof(uint16), 1, fp) != 1) return false;
	} else {
		uint16 invalid = 0xFFFF;
		if (fwrite(&invalid, sizeof(uint16), 1, fp) != 1) return false;
	}

	if (fwrite(&g_global->activeAction, sizeof(uint16), 1, fp) != 1) return false;
	if (fwrite(&g_global->variable_2AF4, sizeof(uint32), 1, fp) != 1) return false;

	if (fwrite(&g_global->scenarioID, sizeof(uint16), 1, fp) != 1) return false;
	if (fwrite(&g_global->campaignID, sizeof(uint16), 1, fp) != 1) return false;

	if (fwrite(&g_global->hintsShown1, sizeof(uint32), 1, fp) != 1) return false;
	if (fwrite(&g_global->hintsShown2, sizeof(uint32), 1, fp) != 1) return false;

	{
		uint32 tickScenarioStart = g_global->tickGlobal - g_global->tickScenarioStart;
		if (fwrite(&tickScenarioStart, sizeof(uint32), 1, fp) != 1) return false;
	}

	if (fwrite(&g_global->playerCreditsNoSilo, sizeof(uint16), 1, fp) != 1) return false;
	if (fwrite(&g_global->starportAvailable, sizeof(int16), UNIT_MAX, fp) != UNIT_MAX) return false;
	if (fwrite(&g_global->houseMissileCountdown, sizeof(uint16), 1, fp) != 1) return false;

	if (g_unitHouseMissile != NULL) {
		if (fwrite(&g_unitHouseMissile->o.index, sizeof(uint16), 1, fp) != 1) return false;
	} else {
		uint16 invalid = 0xFFFF;
		if (fwrite(&invalid, sizeof(uint16), 1, fp) != 1) return false;
	}

	if (fwrite(&g_global->structureIndex, sizeof(uint16), 1, fp) != 1) return false;

	return true;
}

/**
 * Save a chunk of data.
 * @param fp The file to save to.
 * @param header The chunk identification string (4 chars, always).
 * @param saveProc The proc to call to generate the content of the chunk.
 * @return True if and only if all bytes were written successful.
 */
static bool Save_Chunk(FILE *fp, char *header, bool (*saveProc)(FILE *fp))
{
	uint32 position;
	uint32 length;
	uint32 lengthSwapped;

	if (fwrite(header, 4, 1, fp) != 1) return false;

	/* Reserve the length field */
	length = 0;
	if (fwrite(&length, 4, 1, fp) != 1) return false;

	/* Store the content of the chunk, and remember the length */
	position = ftell(fp);
	if (!saveProc(fp)) return false;
	length = ftell(fp) - position;

	/* Ensure we are word aligned */
	if ((length & 1) == 1) {
		uint8 empty = 0;
		if (fwrite(&empty, 1, 1, fp) != 1) return false;
	}

	/* Write back the chunk size */
	fseek(fp, position - 4, SEEK_SET);
	lengthSwapped = HTOBE32(length);
	if (fwrite(&lengthSwapped, 4, 1, fp) != 1) return false;
	fseek(fp, 0, SEEK_END);

	return true;
}

/**
 * Save the game for real. It creates all the required chunks and stores them
 *  to the file. It updates the field lengths where needed.
 *
 * @param fp The file to save to.
 * @param description The description of the savegame.
 * @return True if and only if all bytes were written successful.
 */
static bool Save_Main(FILE *fp, char *description)
{
	uint32 length;
	uint32 lengthSwapped;

	/* Write the 'FORM' chunk (in which all other chunks are) */
	if (fwrite("FORM", 4, 1, fp) != 1) return false;
	/* Write zero length for now. We come back to this value before closing */
	length = 0;
	if (fwrite(&length, 4, 1, fp) != 1) return false;

	/* Write the 'SCEN' chunk. Never contains content. */
	if (fwrite("SCEN", 4, 1, fp) != 1) return false;

	/* Write the 'NAME' chunk. Keep ourself word-aligned. */
	if (fwrite("NAME", 4, 1, fp) != 1) return false;
	length = min(255, strlen(description) + 1);
	lengthSwapped = HTOBE32(length);
	if (fwrite(&lengthSwapped, 4, 1, fp) != 1) return false;
	if (fwrite(description, length, 1, fp) != 1) return false;
	/* Ensure we are word aligned */
	if ((length & 1) == 1) {
		uint8 empty = 0;
		if (fwrite(&empty, 1, 1, fp) != 1) return false;
	}

	/* Store all additional chunks */
	if (!Save_Chunk(fp, "INFO", &Save_Info)) return false;
	if (!Save_Chunk(fp, "PLYR", &House_Save)) return false;
	if (!Save_Chunk(fp, "UNIT", &Unit_Save)) return false;
	if (!Save_Chunk(fp, "BLDG", &Structure_Save)) return false;
	if (!Save_Chunk(fp, "MAP ", &Map_Save)) return false;
	if (!Save_Chunk(fp, "TEAM", &Team_Save)) return false;

	/* Write the total length of all data in the FORM chunk */
	length = ftell(fp) - 8;
	fseek(fp, 4, SEEK_SET);
	lengthSwapped = HTOBE32(length);
	if (fwrite(&lengthSwapped, 4, 1, fp) != 1) return false;

	return true;
}

/**
 * Save the game to a filename
 *
 * @param fp The filename of the savegame.
 * @param description The description of the savegame.
 * @return True if and only if all bytes were written successful.
 */
bool SaveFile(char *filename, char *description)
{
	FILE *fp;
	char filenameComplete[1024];
	bool res;

	/* In debug-scenario mode, the whole map is uncovered. Cover it now in
	 *  the savegame based on the current position of the units and
	 *  structures. */
	if (g_global->debugScenario) {
		PoolFindStruct find;
		uint16 i;

		/* Add fog of war for all tiles on the map */
		for (i = 0; i < 0x1000; i++) {
			Tile *tile = &g_map[i];
			tile->isUnveiled = false;
			tile->overlaySpriteID = g_global->variable_39F2 & 0x7F;
		}

		find.houseID = 0xFFFF;
		find.type    = 0xFFFF;
		find.index   = 0xFFFF;

		/* Remove the fog of war for all units */
		while (true) {
			Unit *u;

			u = Unit_Find(&find);
			if (u == NULL) break;

			Unit_RemoveFog(u);
		}

		find.houseID = 0xFFFF;
		find.type    = 0xFFFF;
		find.index   = 0xFFFF;

		/* Remove the fog of war for all structures */
		while (true) {
			Structure *s;

			s = Structure_Find(&find);
			if (s == NULL) break;

			Structure_RemoveFog(s);
		}
	}

	snprintf(filenameComplete, sizeof(filenameComplete), "data/%s", filename);
	fp = fopen(filenameComplete, "wb");
	if (fp == NULL) {
		fprintf(stderr, "Failed to open file '%s' for writing.\n", filenameComplete);
		return false;
	}

	g_global->variable_38BC++;
	res = Save_Main(fp, description);
	g_global->variable_38BC--;

	fclose(fp);

	if (!res) {
		/* TODO -- Also remove the savegame now */

		fprintf(stderr, "Error while writing savegame.\n");
		return false;
	}

	return true;
}
