/** @file src/load.c Load routines. */

#include <stdio.h>
#include <stdlib.h>
#include "types.h"
#include "os/endian.h"
#include "os/strings.h"

#include "load.h"

#include "audio/sound.h"
#include "file.h"
#include "gui/gui.h"
#include "gui/widget.h"
#include "house.h"
#include "map.h"
#include "opendune.h"
#include "os/error.h"
#include "saveload/saveload.h"
#include "sprites.h"
#include "string.h"
#include "structure.h"
#include "table/strings.h"
#include "team.h"
#include "unit.h"


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
		Error("Invalid magic header in savegame. Not an OpenDUNE / Dune2 savegame.");
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
		if (!Info_LoadOld(fp, length)) return false;

		g_gameMode = GM_RESTART;

		/* Find the 'PLYR' chunk */
		fseek(fp, position, SEEK_SET);
		length = Load_FindChunk(fp, 'PLYR');
		if (length == 0) return false;

		/* Find the human player */
		if (!House_LoadOld(fp, length)) return false;

		GUI_DisplayModalMessage(String_Get_ByIndex(STR_WARNING_ORIGINAL_SAVED_GAMES_ARE_INCOMPATABLE_WITH_THE_NEW_VERSION_THE_BATTLE_WILL_BE_RESTARTED), 0xFFFF);

		return true;
	}

	/* Load the 'INFO' chunk'. It has to be the first chunk loaded */
	if (!Info_Load(fp, length)) return false;

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
			case 'ODUN': if (!UnitNew_Load  (fp, length)) return false; break;

			default:
				Error("Unknown chunk in savegame: %c%c%c%c (length: %d). Skipped.\n", header, header >> 8, header >> 16, header >> 24, length);
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

	Sound_Output_Feedback(0xFFFE);

	Game_Init();

	snprintf(filenameComplete, sizeof(filenameComplete), "data/%s", filename);
	fp = fopen(filenameComplete, "rb");
	if (fp == NULL) {
		Error("Failed to open file '%s' for reading.\n", filenameComplete);

		/* TODO -- Load failures should not result in termination */
		exit(0);

		return false;
	}

	Sprites_LoadTiles();

	g_validateStrictIfZero++;
	res = Load_Main(fp);
	g_validateStrictIfZero--;

	fclose(fp);

	if (!res) {
		Error("Error while loading savegame.\n");

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
void Load_Palette_Mercenaries(void)
{
	if (g_playerHouseID == HOUSE_MERCENARY) {
		File_ReadBlockFile("IBM.PAL", g_palette1, 256 * 3);
	}
}
