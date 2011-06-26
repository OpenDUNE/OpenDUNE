/* $Id$ */

/** @file src/load.c Load routines. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "types.h"
#include "global.h"
#include "os/endian.h"
#include "os/math.h"
#include "os/strings.h"

#include "load.h"

#include "file.h"
#include "gui/gui.h"
#include "house.h"
#include "map.h"
#include "opendune.h"
#include "pool/pool.h"
#include "pool/structure.h"
#include "pool/unit.h"
#include "save.h"
#include "saveload/saveload.h"
#include "scenario.h"
#include "sprites.h"
#include "string.h"
#include "structure.h"
#include "team.h"
#include "unit.h"
#include "unknown/unknown.h"

/**
 * Load all kinds of important info from a file.
 * @param fp The file to load from.
 * @param length The length of the data chunk.
 * @return True if and only if all bytes were read successful.
 */
static bool Load_Info(FILE *fp, uint32 length)
{
	uint8 variable_3A10;
	uint8 structureActiveType;
	uint16 selectionUnit;
	uint16 activeUnit;
	uint32 tickScenarioStart;
	uint16 variable_38FA;
	uint32 position;

	position = ftell(fp);

	if (!SaveLoad_Load(g_saveScenario, fp, &g_scenario)) return false;
	if (fread(&g_playerCreditsNoSilo, sizeof(uint16), 1, fp) != 1) return false;
	if (fread(&g_global->minimapPosition, sizeof(uint16), 1, fp) != 1) return false;
	if (fread(&g_global->variable_3A00, sizeof(uint16), 1, fp) != 1) return false;
	if (fread(&variable_3A10, sizeof(uint8), 1, fp) != 1) return false;
	if (fread(&structureActiveType, sizeof(uint8), 1, fp) != 1) return false;
	if (fread(&g_structureActivePosition, sizeof(uint16), 1, fp) != 1) return false;
	if (fread(&g_global->variable_38E8, sizeof(uint16), 1, fp) != 1) return false;
	if (fread(&selectionUnit, sizeof(uint16), 1, fp) != 1) return false;
	if (fread(&activeUnit, sizeof(uint16), 1, fp) != 1) return false;
	if (fread(&g_global->activeAction, sizeof(uint16), 1, fp) != 1) return false;
	if (fread(&g_global->variable_2AF4, sizeof(uint32), 1, fp) != 1) return false;
	if (fread(&g_scenarioID, sizeof(uint16), 1, fp) != 1) return false;
	if (fread(&g_campaignID, sizeof(uint16), 1, fp) != 1) return false;
	if (fread(&g_global->hintsShown1, sizeof(uint32), 1, fp) != 1) return false;
	if (fread(&g_global->hintsShown2, sizeof(uint32), 1, fp) != 1) return false;
	if (fread(&tickScenarioStart, sizeof(uint32), 1, fp) != 1) return false;
	if (fread(&g_playerCreditsNoSilo, sizeof(uint16), 1, fp) != 1) return false;
	if (fread(&g_global->starportAvailable, sizeof(int16), UNIT_MAX, fp) != UNIT_MAX) return false;
	if (fread(&g_houseMissileCountdown, sizeof(uint16), 1, fp) != 1) return false;
	if (fread(&variable_38FA, sizeof(uint16), 1, fp) != 1) return false;
	if (fread(&g_global->structureIndex, sizeof(uint16), 1, fp) != 1) return false;

	position = ftell(fp) - position;
	if (position != length) return false;

	g_global->viewportPosition = g_global->minimapPosition;
	g_global->selectionPosition = g_global->variable_3A00;
	g_global->variable_3A10 = (int8)variable_3A10;
	g_structureActiveType = (int8)structureActiveType;

	if (selectionUnit != 0xFFFF) {
		Unit *u;
		if (selectionUnit >= UNIT_INDEX_MAX) return false;
		u = Unit_Get_ByIndex(selectionUnit);

		g_unitSelected = u;
	}

	if (activeUnit != 0xFFFF) {
		Unit *u;
		if (activeUnit >= UNIT_INDEX_MAX) return false;
		u = Unit_Get_ByIndex(activeUnit);

		g_unitActive = u;
	}

	g_global->tickScenarioStart = g_global->tickGlobal - tickScenarioStart;

	if (variable_38FA != 0xFFFF) {
		Unit *u;
		if (variable_38FA >= UNIT_INDEX_MAX) return false;
		u = Unit_Get_ByIndex(variable_38FA);

		g_unitHouseMissile = u;
	}

	Sprites_LoadTiles();

	Map_CreateLandscape(g_scenario.mapSeed);

	return true;
}

/**
 * Load all kinds of important info from a file.
 * @param fp The file to load from.
 * @param length The length of the data chunk.
 * @return True if and only if all bytes were read successful.
 */
static bool Load_InfoOld(FILE *fp, uint32 length)
{
	VARIABLE_NOT_USED(length);

	/* Skip a few bytes, and go to the scenarioID / campaignID */
	fseek(fp, 250, SEEK_CUR);

	if (fread(&g_scenarioID, sizeof(uint16), 1, fp) != 1) return false;
	if (fread(&g_campaignID, sizeof(uint16), 1, fp) != 1) return false;

	return true;
}

static uint32 Load_FindChunk(FILE *fp, uint32 chunk)
{
	uint32 header;
	uint32 length;

	while (fread(&header, sizeof(uint32), 1, fp) == 1) {
		if (fread(&length, sizeof(uint32), 1, fp) != 1) return 0;
		length = BETOH32(length);
		if (BETOH32(header) != chunk) {
			fseek(fp, length + (length & 1), SEEK_CUR);
			continue;
		}
		return length;
	}
	return 0;
}

static bool Load_Main(FILE *fp)
{
	uint32 position;
	uint32 length;
	uint32 header;
	uint16 version;

	/* All OpenDUNE / Dune2 savegames should start with 'FORM' */
	if (fread(&header, sizeof(uint32), 1, fp) != 1) return false;
	if (BETOH32(header) != 'FORM') {
		fprintf(stderr, "Invalid magic header in savegame. Not an OpenDUNE / Dune2 savegame.");
		return false;
	}

	/* The total length field, which is ignored */
	if (fread(&length, sizeof(uint32), 1, fp) != 1) return false;

	/* The next 'chunk' is fake, and has no length field */
	if (fread(&header, sizeof(uint32), 1, fp) != 1) return false;
	if (BETOH32(header) != 'SCEN') return false;

	position = ftell(fp);

	/* Find the 'INFO' chunk, as it contains the savegame version */
	version = 0;
	length = Load_FindChunk(fp, 'INFO');
	if (length == 0) return false;

	/* Read the savegame version */
	if (fread(&version, sizeof(uint16), 1, fp) != 1) return false;
	length -= 2;
	if (version == 0) return false;

	if (version != 0x0290) {
		/* Get the scenarioID / campaignID */
		if (!Load_InfoOld(fp, length)) return false;

		g_gameMode = GM_RESTART;

		/* Find the 'PLYR' chunk */
		fseek(fp, position, SEEK_SET);
		length = Load_FindChunk(fp, 'PLYR');
		if (length == 0) return false;

		/* Find the human player */
		if (!House_LoadOld(fp, length)) return false;

		GUI_DisplayModalMessage(String_Get_ByIndex(0x152), 0xFFFF); /* "Warning: Original saved games are incompatable with the new version.  The battle will be restarted." */

		return true;
	}

	/* Load the 'INFO' chunk'. It has to be the first chunk loaded */
	if (!Load_Info(fp, length)) return false;

	/* Rewind, and read other chunks */
	fseek(fp, position, SEEK_SET);
	while (fread(&header, sizeof(uint32), 1, fp) == 1) {
		if (fread(&length, sizeof(uint32), 1, fp) != 1) return false;
		length = BETOH32(length);

		switch (BETOH32(header)) {
			case 'NAME': break; /* 'NAME' chunk is of no interest to us */
			case 'INFO': break; /* 'INFO' chunk is already read */
			case 'MAP ': if (!Map_Load      (fp, length)) return false; break;
			case 'PLYR': if (!House_Load    (fp, length)) return false; break;
			case 'UNIT': if (!Unit_Load     (fp, length)) return false; break;
			case 'BLDG': if (!Structure_Load(fp, length)) return false; break;
			case 'TEAM': if (!Team_Load     (fp, length)) return false; break;

			default:
				fprintf(stderr, "Unknown chunk in savegame: %c%c%c%c (length: %d). Skipped.\n", header, header >> 8, header >> 16, header >> 24, length);
				break;
		}

		/* Savegames are word aligned */
		position += length + 8 + (length & 1);
		fseek(fp, position, SEEK_SET);
	}

	return true;
}

bool LoadFile(char *filename)
{
	FILE *fp;
	char filenameComplete[1024];
	bool res;

	Sound_Unknown0363(0xFFFE);

	Game_Init();

	snprintf(filenameComplete, sizeof(filenameComplete), "data/%s", filename);
	fp = fopen(filenameComplete, "rb");
	if (fp == NULL) {
		fprintf(stderr, "Failed to open file '%s' for reading.\n", filenameComplete);

		/* TODO -- Load failures should not result in termination */
		exit(0);

		return false;
	}

	Sprites_LoadTiles();

	g_global->variable_38BC++;
	res = Load_Main(fp);
	g_global->variable_38BC--;

	fclose(fp);

	if (!res) {
		fprintf(stderr, "Error while loading savegame.\n");

		/* TODO -- Load failures should not result in termination */
		exit(0);

		return false;
	}

	if (g_gameMode != GM_RESTART) Game_Prepare();

	return true;
}

/**
 * In case the current house is Mercenary, another palette is loaded.
 */
void Load_Palette_Mercenaries()
{
	if (g_playerHouseID == HOUSE_MERCENARY) {
		File_ReadBlockFile("IBM.PAL", g_palette1, 0x300);
	}
}
