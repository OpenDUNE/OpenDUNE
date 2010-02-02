/* $Id$ */

#include <stdio.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "map.h"
#include "os/endian.h"
#include "os/math.h"
#include "os/strings.h"
#include "pool/pool.h"
#include "pool/structure.h"
#include "pool/unit.h"
#include "save.h"
#include "structure.h"
#include "unit.h"

extern void emu_Save_Info();
extern void emu_Save_Map();
extern void emu_Save_House();
extern void emu_Save_Structure();
extern void emu_Save_Team();
extern void emu_Save_Unit();
extern void emu_Structure_RemoveFog();
extern void emu_Unit_RemoveFog();
extern void emu_Unknown_252E_0001();
extern void overlay(uint16 cs, uint8 force);

static bool Save_Chunk(FILE *fp, char *header, uint8 *data, uint32 dataLength)
{
	uint32 lengthSwapped;

	if (dataLength == 0) return true;

	if (fwrite(header, 4, 1, fp) != 1) return false;

	lengthSwapped = HTOBE32(dataLength);
	if (fwrite(&lengthSwapped, 4, 1, fp) != 1) return false;

	if (fwrite(data, dataLength, 1, fp) != 1) return false;
	/* Ensure we are word aligned */
	if ((dataLength & 1) == 1) {
		uint8 empty = 0;
		if (fwrite(&empty, 1, 1, fp) != 1) return false;
	}

	return false;
}

static bool Save_Main_Internal(FILE *fp, char *description)
{
	uint32 length;
	uint32 lengthSwapped;
	uint8 *chunkData;
	csip32 chunkcsip;

	/* Write the 'FORM' chunk (in which all other chunks are) */
	if (fwrite("FORM", 4, 1, fp) != 1) return false;
	/* Write zero length for now. We come back to this value before closing */
	length = 0;
	if (fwrite(&length, 4, 1, fp) != 1) return false;

	/* Write the 'SCEN' chunk. Never contains content. */
	if (fwrite("SCEN", 4, 1, fp) != 1) return false;

	/* Write the 'NAME' chunk. Save_Chunk appends a \0 (because of
	 *  word-aligning) in case the string exceeds 255 chars */
	Save_Chunk(fp, "NAME", (uint8 *)description, min(255, strlen(description) + 1));


	emu_push(3);
	emu_push(emu_cs); emu_push(0x092B); emu_cs = 0x252E; emu_Unknown_252E_0001();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	emu_sp += 2;
	chunkcsip.s.cs = emu_dx;
	chunkcsip.s.ip = emu_ax;

	emu_push(chunkcsip.s.cs); emu_push(chunkcsip.s.ip);
	emu_push(emu_cs); emu_push(0x093D); emu_cs = 0x350B; overlay(0x350B, 0); emu_Save_Info();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	emu_sp += 4;

	chunkData = &emu_get_memory8(chunkcsip.s.cs, chunkcsip.s.ip, 0);
	Save_Chunk(fp, "INFO", chunkData, emu_ax);


	emu_push(3);
	emu_push(emu_cs); emu_push(0x0965); emu_cs = 0x252E; emu_Unknown_252E_0001();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	emu_sp += 2;
	chunkcsip.s.cs = emu_dx;
	chunkcsip.s.ip = emu_ax;

	emu_push(chunkcsip.s.cs); emu_push(chunkcsip.s.ip);
	emu_push(emu_cs); emu_push(0x0977); emu_cs = 0x350B; overlay(0x350B, 0); emu_Save_House();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	emu_sp += 4;

	chunkData = &emu_get_memory8(chunkcsip.s.cs, chunkcsip.s.ip, 0);
	Save_Chunk(fp, "PLYR", chunkData, emu_ax);


	emu_push(3);
	emu_push(emu_cs); emu_push(0x099F); emu_cs = 0x252E; emu_Unknown_252E_0001();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	emu_sp += 2;
	chunkcsip.s.cs = emu_dx;
	chunkcsip.s.ip = emu_ax;

	emu_push(chunkcsip.s.cs); emu_push(chunkcsip.s.ip);
	emu_push(emu_cs); emu_push(0x09B1); emu_cs = 0x350B; overlay(0x350B, 0); emu_Save_Unit();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	emu_sp += 4;

	chunkData = &emu_get_memory8(chunkcsip.s.cs, chunkcsip.s.ip, 0);
	Save_Chunk(fp, "UNIT", chunkData, emu_ax);


	emu_push(3);
	emu_push(emu_cs); emu_push(0x09D9); emu_cs = 0x252E; emu_Unknown_252E_0001();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	emu_sp += 2;
	chunkcsip.s.cs = emu_dx;
	chunkcsip.s.ip = emu_ax;

	emu_push(chunkcsip.s.cs); emu_push(chunkcsip.s.ip);
	emu_push(emu_cs); emu_push(0x09EB); emu_cs = 0x350B; overlay(0x350B, 0); emu_Save_Structure();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	emu_sp += 4;

	chunkData = &emu_get_memory8(chunkcsip.s.cs, chunkcsip.s.ip, 0);
	Save_Chunk(fp, "BLDG", chunkData, emu_ax);


	emu_push(3);
	emu_push(emu_cs); emu_push(0x0A13); emu_cs = 0x252E; emu_Unknown_252E_0001();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	emu_sp += 2;
	chunkcsip.s.cs = emu_dx;
	chunkcsip.s.ip = emu_ax;

	emu_push(chunkcsip.s.cs); emu_push(chunkcsip.s.ip);
	emu_push(emu_cs); emu_push(0x0A25); emu_cs = 0x350B; overlay(0x350B, 0); emu_Save_Map();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	emu_sp += 4;

	chunkData = &emu_get_memory8(chunkcsip.s.cs, chunkcsip.s.ip, 0);
	Save_Chunk(fp, "MAP ", chunkData, emu_ax);


	emu_push(3);
	emu_push(emu_cs); emu_push(0x0A4D); emu_cs = 0x252E; emu_Unknown_252E_0001();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	emu_sp += 2;
	chunkcsip.s.cs = emu_dx;
	chunkcsip.s.ip = emu_ax;

	emu_push(chunkcsip.s.cs); emu_push(chunkcsip.s.ip);
	emu_push(emu_cs); emu_push(0x0A5F); emu_cs = 0x350B; overlay(0x350B, 0); emu_Save_Team();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
	emu_sp += 4;

	chunkData = &emu_get_memory8(chunkcsip.s.cs, chunkcsip.s.ip, 0);
	Save_Chunk(fp, "TEAM", chunkData, emu_ax);


	/* Write the total length of all data in the FORM chunk */
	length = ftell(fp) - 8;
	fseek(fp, 4, SEEK_SET);
	lengthSwapped = HTOBE32(length);
	if (fwrite(&lengthSwapped, 4, 1, fp) != 1) return false;

	return true;
}

bool Save_Main(char *filename, char *description)
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
			Tile *tile = Map_GetTileByPosition(i);
			tile->flags &= ~0x01;
			tile->fogOfWar = 0;
			tile->fogOfWar |= g_global->variable_39F2 & 0x7F;
		}

		find.houseID = 0xFFFF;
		find.type    = 0xFFFF;
		find.index   = 0xFFFF;

		/* Remove the fog of war for all units */
		while (true) {
			csip32 ucsip;
			Unit *u;

			u = Unit_Find(&find);
			if (u == NULL) break;

			/* XXX -- Temporary, to keep all the emu_calls workable for now */
			ucsip.s.cs = g_global->unitStartPos.s.cs;
			ucsip.s.ip = g_global->unitStartPos.s.ip + u->index * sizeof(Unit);

			emu_push(ucsip.s.cs); emu_push(ucsip.s.ip);
			emu_push(emu_cs); emu_push(0x07A3); emu_cs = 0x1A34; emu_Unit_RemoveFog();
			/* Check if this overlay should be reloaded */
			if (emu_cs == 0x3511) { overlay(0x3511, 1); }
			emu_sp += 4;
		}

		find.houseID = 0xFFFF;
		find.type    = 0xFFFF;
		find.index   = 0xFFFF;

		/* Remove the fog of war for all structures */
		while (true) {
			csip32 scsip;
			Structure *s;

			s = Structure_Find(&find);
			if (s == NULL) break;

			/* XXX -- Temporary, to keep all the emu_calls workable for now */
			scsip.s.cs = g_global->structureStartPos.s.cs;
			scsip.s.ip = g_global->structureStartPos.s.ip + s->index * sizeof(Structure);

			emu_push(scsip.s.cs); emu_push(scsip.s.ip);
			emu_push(emu_cs); emu_push(0x07E3); emu_cs = 0x0C3A; emu_Structure_RemoveFog();
			/* Check if this overlay should be reloaded */
			if (emu_cs == 0x3511) { overlay(0x3511, 1); }
			emu_sp += 4;
		}
	}

	snprintf(filenameComplete, sizeof(filenameComplete), "data/%s", filename);
	fp = fopen(filenameComplete, "wb");
	if (fp == NULL) {
		fprintf(stderr, "Failed to open file '%s' for writing.\n", filenameComplete);
		return false;
	}

	g_global->variable_38BC++;
	res = Save_Main_Internal(fp, description);
	g_global->variable_38BC--;

	fclose(fp);

	if (!res) {
		/* TODO -- Also remove the savegame now */

		fprintf(stderr, "Error while writing savegame.\n");
		return false;
	}

	return true;
}
