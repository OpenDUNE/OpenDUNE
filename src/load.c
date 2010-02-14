/* $Id$ */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "house.h"
#include "map.h"
#include "os/endian.h"
#include "os/math.h"
#include "os/strings.h"
#include "pool/pool.h"
#include "pool/structure.h"
#include "pool/unit.h"
#include "save.h"
#include "string.h"
#include "structure.h"
#include "team.h"
#include "unit.h"

extern void f__10E4_0273_0029_DCE5();
extern void f__B483_0363_0016_83DF();
extern void f__B4B8_0000_001F_3BC3();
extern void f__B4B8_0D23_0010_BA99();
extern void f__B511_0091_001D_9C25();
extern void f__B511_0A8F_000E_EE64();
extern void overlay(uint16 cs, uint8 force);

/**
 * Load all kinds of important info from a file.
 * @param fp The file to load from.
 * @param length The length of the data chunk.
 * @return True if and only if all bytes were read successful.
 */
static bool Load_Info(FILE *fp, uint32 length)
{
	uint8 variable_3A10;
	uint8 activeStructureType;
	uint16 selectionUnit;
	uint16 activeUnit;
	uint32 tickScenarioStart;
	uint16 variable_38FA;
	uint32 position;

	position = ftell(fp);

	if (fread(&g_global->scenario, sizeof(Scenario), 1, fp) != 1) return false;
	if (fread(&g_global->playerCreditsNoSilo, sizeof(uint16), 1, fp) != 1) return false;
	if (fread(&g_global->minimapPosition, sizeof(uint16), 1, fp) != 1) return false;
	if (fread(&g_global->variable_3A00, sizeof(uint16), 1, fp) != 1) return false;
	if (fread(&variable_3A10, sizeof(uint8), 1, fp) != 1) return false;
	if (fread(&activeStructureType, sizeof(uint8), 1, fp) != 1) return false;
	if (fread(&g_global->activeStructurePosition, sizeof(uint16), 1, fp) != 1) return false;
	if (fread(&g_global->variable_38E8, sizeof(uint16), 1, fp) != 1) return false;
	if (fread(&selectionUnit, sizeof(uint16), 1, fp) != 1) return false;
	if (fread(&activeUnit, sizeof(uint16), 1, fp) != 1) return false;
	if (fread(&g_global->activeAction, sizeof(uint16), 1, fp) != 1) return false;
	if (fread(&g_global->variable_2AF4, sizeof(uint32), 1, fp) != 1) return false;
	if (fread(&g_global->scenarioID, sizeof(uint16), 1, fp) != 1) return false;
	if (fread(&g_global->campaignID, sizeof(uint16), 1, fp) != 1) return false;
	if (fread(&g_global->variable_37F0, sizeof(uint32), 1, fp) != 1) return false;
	if (fread(&g_global->variable_37F4, sizeof(uint32), 1, fp) != 1) return false;
	if (fread(&tickScenarioStart, sizeof(uint32), 1, fp) != 1) return false;
	if (fread(&g_global->playerCreditsNoSilo, sizeof(uint16), 1, fp) != 1) return false;
	if (fread(&g_global->starportAvailable, sizeof(int16), UNIT_MAX, fp) != UNIT_MAX) return false;
	if (fread(&g_global->houseMissleCountdown, sizeof(uint16), 1, fp) != 1) return false;
	if (fread(&variable_38FA, sizeof(uint16), 1, fp) != 1) return false;
	if (fread(&g_global->structureIndex, sizeof(uint16), 1, fp) != 1) return false;

	position = ftell(fp) - position;
	if (position != length) return false;

	g_global->viewportPosition = g_global->minimapPosition;
	g_global->selectionPosition = g_global->variable_3A00;
	g_global->variable_3A10 = (int8)variable_3A10;
	g_global->activeStructureType = (int8)activeStructureType;

	if (selectionUnit != 0xFFFF) {
		Unit *u;
		if (selectionUnit >= UNIT_INDEX_MAX) return false;
		u = Unit_Get_ByIndex(selectionUnit);

		g_global->selectionUnit.csip = g_global->unitStartPos.csip;
		g_global->selectionUnit.s.ip += u->index * sizeof(Unit);
	}

	if (activeUnit != 0xFFFF) {
		Unit *u;
		if (activeUnit >= UNIT_INDEX_MAX) return false;
		u = Unit_Get_ByIndex(activeUnit);

		g_global->activeUnit.csip = g_global->unitStartPos.csip;
		g_global->activeUnit.s.ip += u->index * sizeof(Unit);
	}

	g_global->tickScenarioStart = g_global->tickGlobal - tickScenarioStart;

	if (variable_38FA != 0xFFFF) {
		Unit *u;
		if (variable_38FA >= UNIT_INDEX_MAX) return false;
		u = Unit_Get_ByIndex(variable_38FA);

		g_global->unitHouseMissile.csip = g_global->unitStartPos.csip;
		g_global->unitHouseMissile.s.ip += u->index * sizeof(Unit);
	}

	emu_push(emu_cs); emu_push(0x023E); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_0D23_0010_BA99();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C4) { overlay(0x34C4, 1); }

	emu_push(g_global->scenario.mapSeed >> 16); emu_push(g_global->scenario.mapSeed & 0xFFFF);
	emu_push(emu_cs); emu_push(0x024B); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_0000_001F_3BC3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34C4) { overlay(0x34C4, 1); }
	emu_sp += 4;

	return true;
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
	while (fread(&header, sizeof(uint32), 1, fp) == 1) {
		if (fread(&length, sizeof(uint32), 1, fp) != 1) return false;
		length = BETOH32(length);
		if (BETOH32(header) != 'INFO') {
			fseek(fp, length + (length & 1), SEEK_CUR);
			continue;
		}

		if (fread(&version, sizeof(uint16), 1, fp) != 1) return false;
		break;
	}
	if (version == 0) return false;

	if (version != 0x0290) {
		/* Skip a few bytes, and go to the scenarioID / campaignID */
		fseek(fp, sizeof(Scenario) - sizeof(uint16), SEEK_CUR);
		fseek(fp, 22, SEEK_CUR);

		if (fread(&g_global->scenarioID, sizeof(uint16), 1, fp) != 1) return false;
		if (fread(&g_global->campaignID, sizeof(uint16), 1, fp) != 1) return false;
		g_global->variable_38BE = 1;

		/* Find the 'PLYR' chunk */
		fseek(fp, position, SEEK_SET);
		while (fread(&header, sizeof(uint32), 1, fp) == 1) {
			if (fread(&length, sizeof(uint32), 1, fp) != 1) return false;
			length = BETOH32(length);
			if (BETOH32(header) != 'PLYR') {
				fseek(fp, length + (length & 1), SEEK_CUR);
				continue;
			}

			break;
		}
		if (BETOH32(header) != 'PLYR') return false;

		/* Find the human player */
		while (length > 0) {
			uint16 index;
			uint16 flags;

			/* Read the index of the House */
			if (fread(&index, sizeof(uint16), 1, fp) != 1) return false;
			/* Skip next 2 bytes */
			fseek(fp, 2, SEEK_CUR);
			/* Read the flags value */
			if (fread(&flags, sizeof(uint16), 1, fp) != 1) return false;
			/* We are looking for a human controlled House */
			if ((flags & 0x0002) == 0) {
				/* Go to the next House (which was of size 0x42) */
				fseek(fp, 0x42 - 6, SEEK_CUR);
				length -= 0x42;
				continue;
			}

			g_global->playerHouseID = index;
			break;
		}
		if (length == 0) return false;

		emu_push(0x152); /* "Warning: Original saved games are incompatable with the new version.  The battle will be restarted." */
		emu_push(emu_cs); emu_push(0x0584); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x3511) { overlay(0x3511, 1); }
		emu_sp += 2;

		emu_push(0xFFFF);
		emu_push(emu_dx); emu_push(emu_ax);
		emu_push(emu_cs); emu_push(0x058C); emu_cs = 0x10E4; f__10E4_0273_0029_DCE5();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x3511) { overlay(0x3511, 1); }
		emu_sp += 6;

		return true;
	}
	fseek(fp, -2, SEEK_CUR);
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

	emu_push(0xFFFE);
	emu_push(emu_cs); emu_push(0x0462); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0363_0016_83DF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	emu_sp += 2;

	emu_push(emu_cs); emu_push(0x0468); f__B511_0A8F_000E_EE64();

	snprintf(filenameComplete, sizeof(filenameComplete), "data/%s", filename);
	fp = fopen(filenameComplete, "rb");
	if (fp == NULL) {
		fprintf(stderr, "Failed to open file '%s' for reading.\n", filenameComplete);

		/* TODO -- Load failures should not result in termination */
		exit(0);

		return false;
	}

	emu_push(emu_cs); emu_push(0x0492); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_0D23_0010_BA99();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }

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

	if (g_global->variable_38BE != 1) {
		emu_push(emu_cs); emu_push(0x071A); f__B511_0091_001D_9C25();
	}

	return true;
}
