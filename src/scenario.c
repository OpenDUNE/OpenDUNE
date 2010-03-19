/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "os/strings.h"
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "house.h"
#include "map.h"
#include "pool/house.h"
#include "pool/pool.h"
#include "pool/structure.h"
#include "pool/unit.h"
#include "structure.h"
#include "tile.h"
#include "unit.h"
#include "file.h"

extern void f__01F7_3AF8_001D_A439();
extern void f__104B_024D_0012_1DC4();
extern void f__1423_08CD_0012_0004();
extern void f__1A34_1E99_0012_1117();
extern void f__1A34_204C_0043_B1ED();
extern void f__B4B8_0000_001F_3BC3();
extern void f__B4B8_0D23_0010_BA99();
extern void f__B4CD_14CA_0013_F579();
extern void emu_File_ReadBlockFile();
extern void emu_Ini_GetInteger();
extern void emu_Ini_GetString();
extern void emu_String_strupr();
extern void emu_String_strstr();
extern void emu_String_strlen();
extern void emu_String_ToInteger();
extern void emu_Tools_Memcopy();
extern void overlay(uint16 cs, uint8 force);

void Scenario_Load_General()
{
	emu_push(g_global->readBuffer.s.cs); emu_push(g_global->readBuffer.s.ip);
	emu_push(0);
	emu_push(emu_ds); emu_push(0x1EC7); /* WinFlags */
	emu_push(emu_ds); emu_push(0x1EC1); /* BASIC */
	emu_push(emu_cs); emu_push(0x00C6); emu_cs = 0x34FC; overlay(0x34FC, 0); emu_Ini_GetInteger();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	emu_sp += 0xE;
	g_global->scenario.winFlags = emu_ax;

	emu_push(g_global->readBuffer.s.cs); emu_push(g_global->readBuffer.s.ip);
	emu_push(0);
	emu_push(emu_ds); emu_push(0x1ED0); /* LoseFlags */
	emu_push(emu_ds); emu_push(0x1EC1); /* BASIC */
	emu_push(emu_cs); emu_push(0x00E5); emu_cs = 0x34FC; overlay(0x34FC, 0); emu_Ini_GetInteger();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	emu_sp += 0xE;
	g_global->scenario.loseFlags = emu_ax;

	emu_push(g_global->readBuffer.s.cs); emu_push(g_global->readBuffer.s.ip);
	emu_push(0);
	emu_push(emu_ds); emu_push(0x1EDE); /* Seed */
	emu_push(emu_ds); emu_push(0x1EDA); /* MAP */
	emu_push(emu_cs); emu_push(0x0104); emu_cs = 0x34FC; overlay(0x34FC, 0); emu_Ini_GetInteger();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	emu_sp += 0xE;
	g_global->scenario.mapSeed = (int16)emu_ax;

	emu_push(g_global->readBuffer.s.cs); emu_push(g_global->readBuffer.s.ip);
	emu_push(0);
	emu_push(emu_ds); emu_push(0x1EE3); /* TimeOut */
	emu_push(emu_ds); emu_push(0x1EC1); /* BASIC */
	emu_push(emu_cs); emu_push(0x0127); emu_cs = 0x34FC; overlay(0x34FC, 0); emu_Ini_GetInteger();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	emu_sp += 0xE;
	g_global->scenario.timeOut = emu_ax;

	emu_push(g_global->readBuffer.s.cs); emu_push(g_global->readBuffer.s.ip);
	emu_push(g_global->minimapPosition);
	emu_push(emu_ds); emu_push(0x1EEB); /* TacticalPos */
	emu_push(emu_ds); emu_push(0x1EC1); /* BASIC */
	emu_push(emu_cs); emu_push(0x0146); emu_cs = 0x34FC; overlay(0x34FC, 0); emu_Ini_GetInteger();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	emu_sp += 0xE;
	g_global->minimapPosition = emu_ax;
	g_global->viewportPosition = emu_ax;

	emu_push(g_global->readBuffer.s.cs); emu_push(g_global->readBuffer.s.ip);
	emu_push(g_global->variable_3A00);
	emu_push(emu_ds); emu_push(0x1EF7); /* CursorPos */
	emu_push(emu_ds); emu_push(0x1EC1); /* BASIC */
	emu_push(emu_cs); emu_push(0x0168); emu_cs = 0x34FC; overlay(0x34FC, 0); emu_Ini_GetInteger();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	emu_sp += 0xE;
	g_global->variable_3A00 = emu_ax;
	g_global->selectionPosition = emu_ax;

	emu_push(g_global->readBuffer.s.cs); emu_push(g_global->readBuffer.s.ip);
	emu_push(0);
	emu_push(emu_ds); emu_push(0x1F01); /* MapScale */
	emu_push(emu_ds); emu_push(0x1EC1); /* BASIC */
	emu_push(emu_cs); emu_push(0x018A); emu_cs = 0x34FC; overlay(0x34FC, 0); emu_Ini_GetInteger();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	emu_sp += 0xE;
	g_global->scenario.mapScale = emu_ax;

	emu_push(g_global->readBuffer.s.cs); emu_push(g_global->readBuffer.s.ip);
	emu_push(14);
	emu_push(emu_ds); emu_push(0x8D0D); /* g_global->scenario.pictureBriefing */
	emu_push(emu_ds); emu_push(0x1F17); /* HARVEST.WSA */
	emu_push(emu_ds); emu_push(0x1F0A); /* BriefPicture */
	emu_push(emu_ds); emu_push(0x1EC1); /* BASIC */
	emu_push(emu_cs); emu_push(0x01B3); emu_cs = 0x34FC; overlay(0x34FC, 0); emu_Ini_GetString();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	emu_sp += 0x16;

	emu_push(g_global->readBuffer.s.cs); emu_push(g_global->readBuffer.s.ip);
	emu_push(14);
	emu_push(emu_ds); emu_push(0x8D1B); /* g_global->scenario.pictureWin */
	emu_push(emu_ds); emu_push(0x1F2E); /* WIN1.WSA */
	emu_push(emu_ds); emu_push(0x1F23); /* WinPicture */
	emu_push(emu_ds); emu_push(0x1EC1); /* BASIC */
	emu_push(emu_cs); emu_push(0x01D9); emu_cs = 0x34FC; overlay(0x34FC, 0); emu_Ini_GetString();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	emu_sp += 0x16;

	emu_push(g_global->readBuffer.s.cs); emu_push(g_global->readBuffer.s.ip);
	emu_push(14);
	emu_push(emu_ds); emu_push(0x8D29); /* g_global->scenario.pictureLose */
	emu_push(emu_ds); emu_push(0x1F43); /* LOSTBILD.WSA */
	emu_push(emu_ds); emu_push(0x1F37); /* LosePicture */
	emu_push(emu_ds); emu_push(0x1EC1); /* BASIC */
	emu_push(emu_cs); emu_push(0x01FF); emu_cs = 0x34FC; overlay(0x34FC, 0); emu_Ini_GetString();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	emu_sp += 0x16;
}

void Scenario_Load_House(uint8 houseID)
{
	House *h;

	emu_get_memory8(emu_ss, emu_bp, -0xA2) = 0x0;

	emu_push(g_global->readBuffer.s.cs); emu_push(g_global->readBuffer.s.ip);
	emu_push(0x7F);
	emu_push(emu_ss); emu_push(emu_bp - 0xA2);
	emu_push(emu_ds); emu_push(0x1F56); /* NONE */
	emu_push(emu_ds); emu_push(0x1F50); /* Brain */
	emu_push(g_houseInfo[houseID].name.s.cs); emu_push(g_houseInfo[houseID].name.s.ip);
	emu_push(emu_cs); emu_push(0x025C); emu_cs = 0x34FC; overlay(0x34FC, 0); emu_Ini_GetString();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	emu_sp += 0x16;

	emu_push(emu_ss); emu_push(emu_bp - 0xA2);
	emu_push(emu_cs); emu_push(0x026A); emu_cs = 0x01F7; emu_String_strupr();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	emu_sp += 4;

	emu_push(emu_dx); emu_push(emu_ax);
	emu_push(emu_ds); emu_push(0x1F5B); /* HUMAN$CPU */
	emu_push(emu_cs); emu_push(0x0278); emu_cs = 0x01F7; emu_String_strstr();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	emu_sp += 0x8;

	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	if (emu_ax == 0 && emu_dx == 0) return;

	emu_push(emu_ss); emu_push(emu_bp - 0xA2);
	emu_push(emu_cs); emu_push(0x0297); emu_cs = 0x01F7; emu_String_strlen();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	emu_sp += 4;
	if (emu_ax == 0) return;

	/* Create the house */
	h = House_Allocate(houseID);
	assert(h != NULL);

	emu_push(g_global->readBuffer.s.cs); emu_push(g_global->readBuffer.s.ip);
	emu_push(0);
	emu_push(emu_ds); emu_push(0x1F65); /* Credits */
	emu_push(g_houseInfo[houseID].name.s.cs); emu_push(g_houseInfo[houseID].name.s.ip);
	emu_push(emu_cs); emu_push(0x02C6); emu_cs = 0x34FC; overlay(0x34FC, 0); emu_Ini_GetInteger();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	emu_sp += 0xE;
	h->credits = emu_ax;

	emu_push(g_global->readBuffer.s.cs); emu_push(g_global->readBuffer.s.ip);
	emu_push(0);
	emu_push(emu_ds); emu_push(0x1F6D); /* Quota */
	emu_push(g_houseInfo[houseID].name.s.cs); emu_push(g_houseInfo[houseID].name.s.ip);
	emu_push(emu_cs); emu_push(0x02E9); emu_cs = 0x34FC; overlay(0x34FC, 0); emu_Ini_GetInteger();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	emu_sp += 0xE;
	h->creditsQuota = emu_ax;

	emu_push(g_global->readBuffer.s.cs); emu_push(g_global->readBuffer.s.ip);
	emu_push(0x27);
	emu_push(emu_ds); emu_push(0x1F73); /* MaxUnit */
	emu_push(g_houseInfo[houseID].name.s.cs); emu_push(g_houseInfo[houseID].name.s.ip);
	emu_push(emu_cs); emu_push(0x030D); emu_cs = 0x34FC; overlay(0x34FC, 0); emu_Ini_GetInteger();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	emu_sp += 0xE;
	h->unitCountMax = emu_ax;

	/* For 'Brain = Human' we have to set a few additional things */
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	if (emu_get_memory8(emu_es, emu_bx, 0x0) != 'H') return;

	h->flags.s.human = true;

	g_global->playerHouseID       = houseID;
	g_global->playerHouse         = g_global->houseStartPos;
	g_global->playerHouse.s.ip   += h->index * sizeof(House);
	g_global->playerCreditsNoSilo = h->credits;
}

void Scenario_Load_Units(const char *key, char *value)
{
	uint8 index, houseType, unitType, actionType, variable_64;
	uint16 hitpoints;
	tile32 position;
	Unit *u;
	char *split;

	/* Index of the unit is in the key */
	index = atoi(key + 2);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = index;

	/* The value should have 6 values seperated by a ',' */
	split = strchr(value, ',');
	if (split == NULL) return;
	*split = '\0';

	/* First value is the House type */
	houseType = House_StringToType(value);
	if (houseType == HOUSE_INVALID) return;

	/* Find the next value in the ',' seperated list */
	value = split + 1;
	split = strchr(value, ',');
	if (split == NULL) return;
	*split = '\0';

	/* Second value is the Unit type */
	unitType = Unit_StringToType(value);
	if (unitType == UNIT_INVALID) return;

	/* Find the next value in the ',' seperated list */
	value = split + 1;
	split = strchr(value, ',');
	if (split == NULL) return;
	*split = '\0';

	/* Third value is the Hitpoints in percent (in base 256) */
	hitpoints = atoi(value);

	/* Find the next value in the ',' seperated list */
	value = split + 1;
	split = strchr(value, ',');
	if (split == NULL) return;
	*split = '\0';

	/* Fourth value is the position on the map */
	position = Tile_UnpackTile(atoi(value));

	/* Find the next value in the ',' seperated list */
	value = split + 1;
	split = strchr(value, ',');
	if (split == NULL) return;
	*split = '\0';

	/* Fifth value is variable_64 */
	variable_64 = atoi(value);

	/* Sixth value is the current state of the unit */
	value = split + 1;
	actionType = Unit_ActionStringToType(value);
	if (actionType == ACTION_INVALID) return;


	u = Unit_Allocate(UNIT_INDEX_INVALID, unitType, houseType);
	if (u == NULL) return;
	u->flags.s.byScenario = true;

	u->hitpoints   = hitpoints * g_unitInfo[unitType].hitpoints / 256;
	u->position    = position;
	u->variable_64 = variable_64;
	u->actionID    = actionType;
	u->nextActionID = ACTION_INVALID;

	/* In case the above function failed and we are passed campaign 2, don't add the unit */
	if (!Map_IsValidPosition(Tile_PackTile(u->position)) && g_global->campaignID > 2) {
		Unit_Free(u);
		return;
	}

	/* XXX -- There is no way this is ever possible, as the beingBuilt flag is unset by Unit_Allocate() */
	if (u->flags.s.beingBuilt) {
		/* Unresolved jump */ emu_ip = 0x05B8; emu_last_cs = 0xB4B5; emu_last_ip = 0x059F; emu_last_length = 0x001F; emu_last_crc = 0x757D; emu_call();
		return;
	}

	Unit_SetAction(u, u->actionID);

	u->variable_09 = 0x00;

	emu_push(u->houseID);
	emu_push(g_global->unitStartPos.s.cs); emu_push(g_global->unitStartPos.s.ip + u->index * sizeof(Unit));
	emu_push(emu_cs); emu_push(0x05D4); emu_cs = 0x1423; f__1423_08CD_0012_0004();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	emu_sp += 6;

	emu_push(0);
	emu_push(1);
	emu_push(u->variable_64);
	emu_push(g_global->unitStartPos.s.cs); emu_push(g_global->unitStartPos.s.ip + u->index * sizeof(Unit));
	emu_push(emu_cs); emu_push(0x05F3); emu_cs = 0x1A34; f__1A34_1E99_0012_1117();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	emu_sp += 10;

	emu_push(1);
	emu_push(1);
	emu_push(u->variable_64);
	emu_push(g_global->unitStartPos.s.cs); emu_push(g_global->unitStartPos.s.ip + u->index * sizeof(Unit));
	emu_push(emu_cs); emu_push(0x0613); emu_cs = 0x1A34; f__1A34_1E99_0012_1117();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	emu_sp += 10;

	emu_push(0);
	emu_push(g_global->unitStartPos.s.cs); emu_push(g_global->unitStartPos.s.ip + u->index * sizeof(Unit));
	emu_push(emu_cs); emu_push(0x0624); emu_cs = 0x1A34; f__1A34_204C_0043_B1ED();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	emu_sp += 6;
}

void Scenario_Load_Structures(const char *key, char *value)
{
	uint8 index, houseType, structureType;
	uint16 hitpoints, position;
	char *split;

	/* 'GEN' marked keys are Slabs and Walls, where the number following indicates the position on the map */
	if (strncasecmp(key, "GEN", 3) == 0) {
		/* Position on the map is in the key */
		position = atoi(key + 3);

		/* The value should have two values seperated by a ',' */
		split = strchr(value, ',');
		if (split == NULL) return;
		*split = '\0';
		/* First value is the House type */
		houseType = House_StringToType(value);
		if (houseType == HOUSE_INVALID) return;

		/* Second value is the Structure type */
		value = split + 1;
		structureType = Structure_StringToType(value);
		if (structureType == STRUCTURE_INVALID) return;

		Structure_Create(STRUCTURE_INDEX_INVALID, structureType, houseType, position);
		return;
	}

	/* The key should start with 'ID', followed by the index */
	index = atoi(key + 2);

	/* The value should have four values seperated by a ',' */
	split = strchr(value, ',');
	if (split == NULL) return;
	*split = '\0';

	/* First value is the House type */
	houseType = House_StringToType(value);
	if (houseType == HOUSE_INVALID) return;

	/* Find the next value in the ',' seperated list */
	value = split + 1;
	split = strchr(value, ',');
	if (split == NULL) return;
	*split = '\0';

	/* Second value is the Structure type */
	structureType = Structure_StringToType(value);
	if (structureType == STRUCTURE_INVALID) return;

	/* Find the next value in the ',' seperated list */
	value = split + 1;
	split = strchr(value, ',');
	if (split == NULL) return;
	*split = '\0';

	/* Third value is the Hitpoints in percent (in base 256) */
	hitpoints = atoi(value);
	/* ENHANCEMENT -- Dune2 ignores the % hitpoints read from the scenario */
	if (!g_dune2_enhanced) hitpoints = 256;

	/* Fourth value is the position of the structure */
	value = split + 1;
	position = atoi(value);

	/* Ensure nothing is already on the tile */
	/* XXX -- DUNE2 BUG? -- This only checks the top-left corner? Not really a safety, is it? */
	if (Structure_Get_ByPackedTile(position) != NULL) return;

	{
		Structure *s;

		s = Structure_Create(index, structureType, houseType, position);
		if (s == NULL) return;

		s->hitpoints = hitpoints * g_structureInfo[s->type].hitpoints / 256;
		s->flags.s.degrades = false;
		s->animation = 0;
	}
}

void Scenario_Load_Map()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (emu_get_memory8(emu_es, emu_bx, 0x0) != 'C') return;

	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8) + 6);
	emu_push(emu_cs); emu_push(0x08FD); emu_cs = 0x01F7; emu_String_ToInteger();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	emu_sp += 4;
	emu_di = emu_ax;

	emu_push(2);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6)); emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8) + 4);
	emu_push(emu_ss); emu_push(emu_bp - 0xC);
	emu_push(emu_cs); emu_push(0x0919); emu_cs = 0x01F7; emu_Tools_Memcopy();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	emu_sp += 10;
	emu_get_memory8(emu_ss, emu_bp, -0x9) = 0x0;

	emu_push(emu_ss); emu_push(emu_bp - 0xC);
	emu_push(emu_cs); emu_push(0x092B); emu_cs = 0x01F7; emu_String_ToInteger();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	emu_sp += 2;

	emu_di = Tile_PackXY(emu_ax, emu_di) & 0xFFF;

	emu_push(g_global->readBuffer.s.cs); emu_push(g_global->readBuffer.s.ip);
	emu_push(0x7F);
	emu_push(emu_ss); emu_push(emu_bp - 0xA2);
	emu_push(0); emu_push(0);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6)); emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_ds); emu_push(0x1EDA); /* MAP */
	emu_push(emu_cs); emu_push(0x096A); emu_cs = 0x34FC; overlay(0x34FC, 0); emu_Ini_GetString();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	emu_sp += 0x16;

	emu_push(emu_ds); emu_push(0x1F81); /* , */
	emu_push(emu_ss); emu_push(emu_bp - 0xA2);
	emu_push(emu_cs); emu_push(0x097D); emu_cs = 0x01F7; f__01F7_3AF8_001D_A439();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	emu_sp += 0x8;

	emu_push(emu_dx); emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0987); emu_cs = 0x01F7; emu_String_ToInteger();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	emu_sp += 4;

	{
		Tile *t = Map_GetTileByPosition(emu_di);

		t->houseID      = emu_al & 0x07;
		t->isUnveiled   = (emu_al & 0x08) != 0 ? true : false;
		t->hasUnit      = (emu_al & 0x10) != 0 ? true : false;
		t->hasStructure = (emu_al & 0x20) != 0 ? true : false;
		t->flag_08      = (emu_al & 0x40) != 0 ? true : false;
		t->flag_10      = (emu_al & 0x80) != 0 ? true : false;

		emu_push(emu_ds); emu_push(0x1F83); /* ,\r\n */
		emu_push(0); emu_push(0);
		emu_push(emu_cs); emu_push(0x09A9); emu_cs = 0x01F7; f__01F7_3AF8_001D_A439();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
		emu_sp += 8;

		emu_push(emu_dx); emu_push(emu_ax);
		emu_push(emu_cs); emu_push(0x09B3); emu_cs = 0x01F7; emu_String_ToInteger();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
		emu_sp += 4;

		t->spriteID = emu_ax & 0x01FF;

		if (g_map[emu_di] != (emu_ax & 0x01FF)) {
			g_map[emu_di] |= 0x8000;
		}

		if (!t->isUnveiled) {
			t->fogOfWar = g_global->variable_39F2 & 0x7F;
		}
	}
}

void Scenario_Load_Reinforcements(const char *key, char *value)
{
	uint8 index, houseType, unitType, locationID;
	uint16 timeBetween;
	tile32 position;
	bool repeat;
	Unit *u;
	char *split;

	index = atoi(key);

	/* The value should have 4 values seperated by a ',' */
	split = strchr(value, ',');
	if (split == NULL) return;
	*split = '\0';

	/* First value is the House type */
	houseType = House_StringToType(value);
	if (houseType == HOUSE_INVALID) return;

	/* Find the next value in the ',' seperated list */
	value = split + 1;
	split = strchr(value, ',');
	if (split == NULL) return;
	*split = '\0';

	/* Second vlaue is the Unit type */
	unitType = Unit_StringToType(value);
	if (unitType == UNIT_INVALID) return;

	/* Find the next value in the ',' seperated list */
	value = split + 1;
	split = strchr(value, ',');
	if (split == NULL) return;
	*split = '\0';

	/* Third value is the location of the reinforcement */
	     if (strcasecmp(value, "NORTH")     == 0) locationID = 0;
	else if (strcasecmp(value, "EAST")      == 0) locationID = 1;
	else if (strcasecmp(value, "SOUTH")     == 0) locationID = 2;
	else if (strcasecmp(value, "WEST")      == 0) locationID = 3;
	else if (strcasecmp(value, "AIR")       == 0) locationID = 4;
	else if (strcasecmp(value, "VISIBLE")   == 0) locationID = 5;
	else if (strcasecmp(value, "ENEMYBASE") == 0) locationID = 6;
	else if (strcasecmp(value, "HOMEBASE")  == 0) locationID = 7;
	else return;

	/* Fourth value is the time between reinforcement */
	value = split + 1;
	timeBetween = atoi(value) * 6 + 1;
	repeat = (value[strlen(value) - 1] == '+') ? true : false;
	/* ENHANCEMENT -- Dune2 makes a mistake in reading the '+', causing repeat to be always false */
	if (!g_dune2_enhanced) repeat = false;

	position.s.x = 0xFFFF;
	position.s.y = 0xFFFF;
	u = Unit_Create(UNIT_INDEX_INVALID, unitType, houseType, position, 0);
	if (u == NULL) return;

	g_global->scenario.reinforcement[index].unitID      = u->index;
	g_global->scenario.reinforcement[index].locationID  = locationID;
	g_global->scenario.reinforcement[index].timeLeft    = timeBetween;
	g_global->scenario.reinforcement[index].timeBetween = timeBetween;
	g_global->scenario.reinforcement[index].repeat      = repeat ? 1 : 0;
}

void Scenario_Load_Teams(const char *key, char *value)
{
	uint8 houseType, teamActionType, movementType;
	uint16 unknown1, unknown2;
	char *split;

	VARIABLE_NOT_USED(key);

	/* The value should have 5 values seperated by a ',' */
	split = strchr(value, ',');
	if (split == NULL) return;
	*split = '\0';

	/* First value is the House type */
	houseType = House_StringToType(value);
	if (houseType == HOUSE_INVALID) return;

	/* Find the next value in the ',' seperated list */
	value = split + 1;
	split = strchr(value, ',');
	if (split == NULL) return;
	*split = '\0';

	/* Second value is the teamAction type */
	teamActionType = Unit_TeamActionStringToType(value);
	if (teamActionType == TEAM_ACTION_INVALID) return;

	/* Find the next value in the ',' seperated list */
	value = split + 1;
	split = strchr(value, ',');
	if (split == NULL) return;
	*split = '\0';

	/* Third value is the movement type */
	movementType = Unit_MovementStringToType(value);
	if (movementType == MOVEMENT_INVALID) return;

	/* Find the next value in the ',' seperated list */
	value = split + 1;
	split = strchr(value, ',');
	if (split == NULL) return;
	*split = '\0';

	/* XXX -- Fourth value is unknown */
	unknown1 = atoi(value);

	/* Find the next value in the ',' seperated list */
	value = split + 1;
	split = strchr(value, ',');
	if (split == NULL) return;
	*split = '\0';

	/* XXX -- Fifth value is unknown */
	unknown2 = atoi(value);

	emu_push(unknown2);
	emu_push(unknown1);
	emu_push(movementType);
	emu_push(teamActionType);
	emu_push(houseType);
	emu_push(emu_cs); emu_push(0x0F87); emu_cs = 0x104B; f__104B_024D_0012_1DC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	emu_sp += 10;
}

void Scenario_Load_Choam(const char *key, char *value)
{
	uint8 unitType;

	unitType = Unit_StringToType(key);
	if (unitType == UNIT_INVALID) return;

	g_global->starportAvailable[unitType] = atoi(value);
}

/**
 * Loads a scenario and prepares the map for playing.
 *
 * @name emu_Scenario_Load
 * @implements B4B5:0000:0014:F092 ()
 */
void emu_Scenario_Load()
{
	uint8 houseID;
	uint16 scenarioID;

l__0000:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_sp -= 162;

	houseID    = emu_get_memory8(emu_ss, emu_bp,  0x8);
	scenarioID = emu_get_memory16(emu_ss, emu_bp,  0x6);

	emu_push(emu_si);
	emu_push(emu_di);

	if (houseID >= HOUSE_MAX) goto exitError;
	goto l__0014;

exitError:
	emu_ax = 0;
	goto exit;

l__0014:
	g_global->scenarioID = scenarioID;

	/* Generate scenario filename */
	sprintf((char *)&emu_get_memory8(emu_ss, emu_bp, -0x22), g_global->string_scenario_file, emu_get_memorycsip(g_houseInfo[houseID].name)[0], scenarioID);

	/* Check if the file exists (might be in a PAK file) */
	if (!File_Exists((char *)&emu_get_memory8(emu_ss, emu_bp, -0x22))) goto exitError;

	/* Clear the buffer we will read in */
	memset(emu_get_memorycsip(g_global->readBuffer), 0, g_global->readBufferSize);

	/* Read the file into the buffer */
	emu_push(g_global->readBufferSize >> 16); emu_push(g_global->readBufferSize & 0xFFFF);
	emu_push(g_global->readBuffer.s.cs); emu_push(g_global->readBuffer.s.ip);
	emu_push(emu_ss); emu_push(emu_bp - 0x22);
	emu_push(emu_cs); emu_push(0x0090); emu_cs = 0x253D; emu_File_ReadBlockFile();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	emu_sp += 0xC;

	memset(&g_global->scenario, 0, sizeof(Scenario));
	g_global->scenario.savegameVersion = 0x290;

	Scenario_Load_General();

	emu_push(emu_cs); emu_push(0x0207); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_0D23_0010_BA99();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }

	emu_push(g_global->scenario.mapSeed >> 16); emu_push(g_global->scenario.mapSeed & 0xFFFF);
	emu_push(emu_cs); emu_push(0x0214); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_0000_001F_3BC3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	emu_sp += 4;

	for (houseID = 0; houseID < HOUSE_MAX; houseID++) {
		Scenario_Load_House(houseID);
	}

	{
		House *ph = House_Get_ByMemory(g_global->playerHouse);
		/* In case there was no unitCountMax in the scenario, calculate
		 *  it based on values used for the AI controlled houses. */
		if (ph->unitCountMax == 0) {
			PoolFindStruct find;
			uint8 max;
			House *h;

			find.houseID = 0xFFFF;
			find.index   = 0xFFFF;
			find.type    = 0xFFFF;

			max = 80;
			while ((h = House_Find(&find)) != NULL) {
				/* Skip the human controlled house */
				if (h->flags.s.human) continue;
				max -= h->unitCountMax;
			}

			ph->unitCountMax = max;
		}
	}

	emu_push(g_global->readBuffer.s.cs); emu_push(g_global->readBuffer.s.ip);
	emu_push(emu_cs); emu_push(0x03AB); emu_cs = 0x01F7; emu_String_strlen();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	emu_sp += 4;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax + 2;

	emu_get_memory16(emu_ss, emu_bp, -0xA) = g_global->readBuffer.s.cs;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = g_global->readBuffer.s.ip + emu_get_memory16(emu_ss, emu_bp, -0x10);

	emu_push(g_global->readBuffer.s.cs); emu_push(g_global->readBuffer.s.ip);
	emu_push(g_global->readBufferSize - emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA)); emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(0); emu_push(0);
	emu_push(0); emu_push(0);
	emu_push(emu_ds); emu_push(0x1F7B); /* UNITS */
	emu_push(emu_cs); emu_push(0x03EB); emu_cs = 0x34FC; overlay(0x34FC, 0); emu_Ini_GetString();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	emu_sp += 0x16;

	while (true) {
		char *key, *value;

		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
		if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x0) break;

		emu_push(g_global->readBuffer.s.cs); emu_push(g_global->readBuffer.s.ip);
		emu_push(0x7F);
		emu_push(emu_ss); emu_push(emu_bp - 0xA2);
		emu_push(0); emu_push(0);
		emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA)); emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
		emu_push(emu_ds); emu_push(0x1F7B); /* UNITS */
		emu_push(emu_cs); emu_push(0x042B); emu_cs = 0x34FC; overlay(0x34FC, 0); emu_Ini_GetString();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
		emu_sp += 0x16;

		key = (char *)&emu_get_memory8(emu_get_memory16(emu_ss, emu_bp, -0xA), emu_get_memory16(emu_ss, emu_bp, -0xC), 0);
		value = (char *)&emu_get_memory8(emu_ss, emu_bp - 0xA2, 0);
		Scenario_Load_Units(key, value);

		emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA)); emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
		emu_push(emu_cs); emu_push(0x0632); emu_cs = 0x01F7; emu_String_strlen();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
		emu_sp += 4;

		emu_get_memory16(emu_ss, emu_bp, -0xC) += emu_ax + 1;
	}

	emu_push(g_global->readBuffer.s.cs); emu_push(g_global->readBuffer.s.ip);
	emu_push(emu_cs); emu_push(0x064F); emu_cs = 0x01F7; emu_String_strlen();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	emu_sp += 4;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax + 2;

	emu_get_memory16(emu_ss, emu_bp, -0xA) = g_global->readBuffer.s.cs;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = g_global->readBuffer.s.ip + emu_get_memory16(emu_ss, emu_bp, -0x10);

	emu_push(g_global->readBuffer.s.cs); emu_push(g_global->readBuffer.s.ip);
	emu_push(g_global->readBufferSize - emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA)); emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(0); emu_push(0);
	emu_push(0); emu_push(0);
	emu_push(emu_ds); emu_push(0x1F87); /* STRUCTURES */
	emu_push(emu_cs); emu_push(0x068F); emu_cs = 0x34FC; overlay(0x34FC, 0); emu_Ini_GetString();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	emu_sp += 0x16;

	while (true) {
		char *key, *value;

		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
		if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x0) break;

		emu_push(g_global->readBuffer.s.cs); emu_push(g_global->readBuffer.s.ip);
		emu_push(0x7F);
		emu_push(emu_ss); emu_push(emu_bp - 0xA2);
		emu_push(0); emu_push(0);
		emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA)); emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
		emu_push(emu_ds); emu_push(0x1F87); /* STRUCTURES */
		emu_push(emu_cs); emu_push(0x06ED); emu_cs = 0x34FC; overlay(0x34FC, 0); emu_Ini_GetString();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
		emu_sp += 0x16;

		key = (char *)&emu_get_memory8(emu_get_memory16(emu_ss, emu_bp, -0xA), emu_get_memory16(emu_ss, emu_bp, -0xC), 0);
		value = (char *)&emu_get_memory8(emu_ss, emu_bp - 0xA2, 0);
		Scenario_Load_Structures(key, value);

		emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA)); emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
		emu_push(emu_cs); emu_push(0x0632); emu_cs = 0x01F7; emu_String_strlen();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
		emu_sp += 4;

		emu_get_memory16(emu_ss, emu_bp, -0xC) += emu_ax + 1;
	}

	emu_push(g_global->readBuffer.s.cs); emu_push(g_global->readBuffer.s.ip);
	emu_push(emu_cs); emu_push(0x089C); emu_cs = 0x01F7; emu_String_strlen();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	emu_sp += 4;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax + 2;

	emu_get_memory16(emu_ss, emu_bp, -0x6) = g_global->readBuffer.s.cs;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = g_global->readBuffer.s.ip + emu_get_memory16(emu_ss, emu_bp, -0xE);

	emu_push(g_global->readBuffer.s.cs); emu_push(g_global->readBuffer.s.ip);
	emu_push(g_global->readBufferSize - emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6)); emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(0); emu_push(0);
	emu_push(0); emu_push(0);
	emu_push(emu_ds); emu_push(0x1EDA);/* MAP */
	emu_push(emu_cs); emu_push(0x08DC); emu_cs = 0x34FC; overlay(0x34FC, 0); emu_Ini_GetString();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	emu_sp += 0x16;

	while (true) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
		if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x0) break;

		Scenario_Load_Map();

		emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6)); emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
		emu_push(emu_cs); emu_push(0x0A3A); emu_cs = 0x01F7; emu_String_strlen();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
		emu_sp += 4;

		emu_get_memory16(emu_ss, emu_bp, -0x8) += emu_ax + 1;
	}

	emu_push(g_global->readBuffer.s.cs); emu_push(g_global->readBuffer.s.ip);
	emu_push(0x7F);
	emu_push(emu_ss); emu_push(emu_bp - 0xA2);
	emu_push(emu_ds); emu_push(0x1EC0); /* \0 */
	emu_push(emu_ds); emu_push(0x1F96); /* Bloom */
	emu_push(emu_ds); emu_push(0x1EDA); /* MAP */
	emu_push(emu_cs); emu_push(0x0A70); emu_cs = 0x34FC; overlay(0x34FC, 0); emu_Ini_GetString();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	emu_sp += 0x16;

	emu_push(emu_ds); emu_push(0x1F9C); /* ,\n */
	emu_push(emu_ss); emu_push(emu_bp - 0xA2);
	emu_push(emu_cs); emu_push(0x0A83); emu_cs = 0x01F7; f__01F7_3AF8_001D_A439();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	emu_sp += 8;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;

	while (emu_ax != 0 || emu_dx != 0) {
		uint16 position;
		Tile *t;

		emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6)); emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
		emu_push(emu_cs); emu_push(0x0AA1); emu_cs = 0x01F7; emu_String_ToInteger();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
		emu_sp += 4;
		position = emu_ax;

		t = Map_GetTileByPosition(position);

		t->spriteID = g_global->variable_39F4 & 0x01FF;
		g_map[position] |= 0x8000;

		emu_push(emu_ds); emu_push(0x1F9C); /* ,\n */
		emu_push(0); emu_push(0);
		emu_push(emu_cs); emu_push(0x0ADF); emu_cs = 0x01F7; f__01F7_3AF8_001D_A439();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
		emu_sp += 8;
		emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
		emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	}

	emu_push(g_global->readBuffer.s.cs);
	emu_push(g_global->readBuffer.s.ip);
	emu_push(0x7F);
	emu_push(emu_ss); emu_push(emu_bp - 0xA2);
	emu_push(emu_ds); emu_push(0x1EC0); /* \0 */
	emu_push(emu_ds); emu_push(0x1F9F); /* Field */
	emu_push(emu_ds); emu_push(0x1EDA); /* MAP */
	emu_push(emu_cs); emu_push(0x0B14); emu_cs = 0x34FC; overlay(0x34FC, 0); emu_Ini_GetString();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	emu_sp += 0x16;

	emu_push(emu_ds); emu_push(0x1F9C); /* ,\n */
	emu_push(emu_ss); emu_push(emu_bp - 0xA2);
	emu_push(emu_cs); emu_push(0x0B27); emu_cs = 0x01F7; f__01F7_3AF8_001D_A439();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	emu_sp += 0x8;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;

	while (emu_ax != 0 || emu_dx != 0) {
		emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6)); emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
		emu_push(emu_cs); emu_push(0x0B45); emu_cs = 0x01F7; emu_String_ToInteger();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
		emu_sp += 4;

		emu_di = emu_ax;
		emu_push(0xFFFF);
		emu_push(emu_di);
		emu_push(emu_cs); emu_push(0x0B53); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_14CA_0013_F579();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
		emu_sp += 4;

		/* Show where a field started in the preview mode by making it an odd looking sprite */
		if (g_global->debugScenario) {
			Tile *t = Map_GetTileByPosition(emu_di);
			t->spriteID = 0x01FF;
		}

		emu_push(emu_ds); emu_push(0x1F9C); /* ,\n */
		emu_push(0); emu_push(0);
		emu_push(emu_cs); emu_push(0x0B82); emu_cs = 0x01F7; f__01F7_3AF8_001D_A439();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
		emu_sp += 8;
		emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
		emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	}

	emu_push(g_global->readBuffer.s.cs); emu_push(g_global->readBuffer.s.ip);
	emu_push(0x7F);
	emu_push(emu_ss); emu_push(emu_bp - 0xA2);
	emu_push(emu_ds); emu_push(0x1EC0); /* \0 */
	emu_push(emu_ds); emu_push(0x1FA5); /* Special */
	emu_push(emu_ds); emu_push(0x1EDA); /* MAP */
	emu_push(emu_cs); emu_push(0x0BB7); emu_cs = 0x34FC; overlay(0x34FC, 0); emu_Ini_GetString();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	emu_sp += 0x16;

	emu_push(emu_ds); emu_push(0x1F9C); /* ,\n*/
	emu_push(emu_ss); emu_push(emu_bp - 0xA2);
	emu_push(emu_cs); emu_push(0x0BCA); emu_cs = 0x01F7; f__01F7_3AF8_001D_A439();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	emu_sp += 8;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;

	while (emu_ax != 0 || emu_dx != 0) {
		Tile *t;

		emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6)); emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
		emu_push(emu_cs); emu_push(0x0BE8); emu_cs = 0x01F7; emu_String_ToInteger();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
		emu_sp += 4;
		emu_di = emu_ax;

		t = Map_GetTileByPosition(emu_di);
		t->spriteID = (g_global->variable_39F4 + 1) & 0x01FF;
		g_map[emu_di] |= 0x8000;

		emu_push(emu_ds); emu_push(0x1F9C); /* ,\n */
		emu_push(0); emu_push(0);
		emu_push(emu_cs); emu_push(0x0C27); emu_cs = 0x01F7; f__01F7_3AF8_001D_A439();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
		emu_sp += 8;
		emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
		emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	}

	emu_push(g_global->readBuffer.s.cs); emu_push(g_global->readBuffer.s.ip);
	emu_push(emu_cs); emu_push(0x0C43); emu_cs = 0x01F7; emu_String_strlen();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	emu_sp += 4;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax + 2;

	emu_get_memory16(emu_ss, emu_bp, -0xA) = g_global->readBuffer.s.cs;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = g_global->readBuffer.s.ip + emu_get_memory16(emu_ss, emu_bp, -0x10);

	for (emu_si = 0; emu_si < 16; emu_si ++) {
		g_global->scenario.reinforcement[emu_si].unitID = UNIT_INDEX_INVALID;
	}

	emu_push(g_global->readBuffer.s.cs); emu_push(g_global->readBuffer.s.ip);
	emu_push(g_global->readBufferSize - emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA)); emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(0); emu_push(0);
	emu_push(0); emu_push(0);
	emu_push(emu_ds); emu_push(0x1FAD); /* REINFORCEMENTS */
	emu_push(emu_cs); emu_push(0x0C9C); emu_cs = 0x34FC; overlay(0x34FC, 0); emu_Ini_GetString();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	emu_sp += 0x16;

	while (true) {
		char *key, *value;

		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
		if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x0) break;

		emu_push(g_global->readBuffer.s.cs); emu_push(g_global->readBuffer.s.ip);
		emu_push(0x7F);
		emu_push(emu_ss); emu_push(emu_bp - 0xA2);
		emu_push(0); emu_push(0);
		emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA)); emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
		emu_push(emu_ds); emu_push(0x1FAD); /* REINFORCEMENTS */
		emu_push(emu_cs); emu_push(0x0CD7); emu_cs = 0x34FC; overlay(0x34FC, 0); emu_Ini_GetString();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
		emu_sp += 0x16;

		key = (char *)&emu_get_memory8(emu_get_memory16(emu_ss, emu_bp, -0xA), emu_get_memory16(emu_ss, emu_bp, -0xC), 0);
		value = (char *)&emu_get_memory8(emu_ss, emu_bp - 0xA2, 0);
		Scenario_Load_Reinforcements(key, value);

		emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA)); emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
		emu_push(emu_cs); emu_push(0x0E3E); emu_cs = 0x01F7; emu_String_strlen();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
		emu_sp += 4;

		emu_get_memory16(emu_ss, emu_bp, -0xC) += emu_ax + 1;
	}

	emu_push(g_global->readBuffer.s.cs); emu_push(g_global->readBuffer.s.ip);
	emu_push(emu_cs); emu_push(0x0E5B); emu_cs = 0x01F7; emu_String_strlen();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	emu_sp += 4;
	emu_di = emu_ax + 2;

	emu_get_memory16(emu_ss, emu_bp, -0x6) = g_global->readBuffer.s.cs;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = g_global->readBuffer.s.ip + emu_di;

	emu_push(g_global->readBuffer.s.cs); emu_push(g_global->readBuffer.s.ip);
	emu_push(g_global->readBufferSize - emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6)); emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(0); emu_push(0);
	emu_push(0); emu_push(0);
	emu_push(emu_ds); emu_push(0x1FF9); /* TEAMS */
	emu_push(emu_cs); emu_push(0x0E98); emu_cs = 0x34FC; overlay(0x34FC, 0); emu_Ini_GetString();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	emu_sp += 0x16;

	while (true) {
		char *key, *value;

		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
		if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x0) break;

		emu_push(g_global->readBuffer.s.cs); emu_push(g_global->readBuffer.s.ip);
		emu_push(0x7F);
		emu_push(emu_ss); emu_push(emu_bp - 0xA2);
		emu_push(0); emu_push(0);
		emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6)); emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
		emu_push(emu_ds); emu_push(0x1FF9); /* TEAMS */
		emu_push(emu_cs); emu_push(0x0EC4); emu_cs = 0x34FC; overlay(0x34FC, 0); emu_Ini_GetString();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
		emu_sp += 0x16;

		key = (char *)&emu_get_memory8(emu_get_memory16(emu_ss, emu_bp, -0x6), emu_get_memory16(emu_ss, emu_bp, -0x8), 0);
		value = (char *)&emu_get_memory8(emu_ss, emu_bp - 0xA2, 0);
		Scenario_Load_Teams(key, value);

		emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6)); emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
		emu_push(emu_cs); emu_push(0x0F95); emu_cs = 0x01F7; emu_String_strlen();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
		emu_sp += 4;

		emu_get_memory16(emu_ss, emu_bp, -0x8) += emu_ax + 1;
	}

	emu_push(g_global->readBuffer.s.cs); emu_push(g_global->readBuffer.s.ip);
	emu_push(emu_cs); emu_push(0x0FB2); emu_cs = 0x01F7; emu_String_strlen();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	emu_sp += 4;
	emu_di = emu_ax + 2;

	emu_get_memory16(emu_ss, emu_bp, -0x6) = g_global->readBuffer.s.cs;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = g_global->readBuffer.s.ip + emu_di;

	emu_push(g_global->readBuffer.s.cs); emu_push(g_global->readBuffer.s.ip);
	emu_push(g_global->readBufferSize - emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6)); emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(0); emu_push(0);
	emu_push(0); emu_push(0);
	emu_push(emu_ds); emu_push(0x1FFF); /* CHOAM */
	emu_push(emu_cs); emu_push(0x0FEF); emu_cs = 0x34FC; overlay(0x34FC, 0); emu_Ini_GetString();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
	emu_sp += 0x16;

	while (true) {
		char *key, *value;

		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
		if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x0) break;

		emu_push(g_global->readBuffer.s.cs); emu_push(g_global->readBuffer.s.ip);
		emu_push(0x7F);
		emu_push(emu_ss); emu_push(emu_bp - 0xA2);
		emu_push(0); emu_push(0);
		emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6)); emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
		emu_push(emu_ds); emu_push(0x1FFF); /* CHOAM */
		emu_push(emu_cs); emu_push(0x102E); emu_cs = 0x34FC; overlay(0x34FC, 0); emu_Ini_GetString();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
		emu_sp += 0x16;

		key = (char *)&emu_get_memory8(emu_get_memory16(emu_ss, emu_bp, -0x6), emu_get_memory16(emu_ss, emu_bp, -0x8), 0);
		value = (char *)&emu_get_memory8(emu_ss, emu_bp - 0xA2, 0);
		Scenario_Load_Choam(key, value);

		emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6)); emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
		emu_push(emu_cs); emu_push(0x1057); emu_cs = 0x01F7; emu_String_strlen();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x34B5) { overlay(0x34B5, 1); }
		emu_sp += 4;

		emu_get_memory16(emu_ss, emu_bp, -0x8) += emu_ax + 1;
	}

	g_global->tickScenarioStart = g_global->tickGlobal;
	emu_ax = 0x1;

exit:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
}
