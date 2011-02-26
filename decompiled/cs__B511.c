/* $Id$ */

#include <stdlib.h>
#include "types.h"
#include "libemu.h"
#include "decompiled.h"

static void d__B511_0C93_0014_2A98(uint8 houseID, uint16 stringID, csip32 wsaFilename, uint16 musicID)
{
	Widget *w1, *w2;
	csip32 w1csip, w2csip;
	uint16 loc0A;

	if (g_global->debugSkipDialogs) return;

	Sprites_Load(1, 7, g_sprites);

	w1 = GUI_Widget_Allocate(1, GUI_Widget_GetShortcut(String_Get_ByIndex(175)[0]), 168, 168, 6, 0, 0, &w1csip);
	w2 = GUI_Widget_Allocate(2, GUI_Widget_GetShortcut(String_Get_ByIndex(176)[0]), 240, 168, 8, 0, 0, &w2csip);

	w1 = GUI_Widget_Link(w1, w2);
	w1csip = emu_Global_GetCSIP(w1);

	Unknown_B483_0363(0xFFFE);

	emu_push(0);
	emu_push(0);
	emu_push(emu_cs); emu_push(0x0D6A); emu_cs = 0x1DD7; f__1DD7_022D_0015_1956();
	emu_sp += 4;

	Music_Play(musicID);

	do {
		char filename[10];
		snprintf(filename, sizeof(filename), "TEXT%c", emu_get_memorycsip(g_houseInfo[houseID].name)[0]);
		String_LoadFile(String_GenerateFilename(filename), stringID, (char *)emu_get_memorycsip(g_global->readBuffer), g_global->readBufferSize);
		String_TranslateSpecial((char *)emu_get_memorycsip(g_global->readBuffer), (char *)emu_get_memorycsip(g_global->readBuffer));

		emu_push(1);
		emu_push(w1csip.s.cs); emu_push(w1csip.s.ip);
		emu_push(wsaFilename.s.cs); emu_push(wsaFilename.s.ip);
		emu_push(g_global->readBuffer.s.cs); emu_push(g_global->readBuffer.s.ip);
		emu_push(emu_cs); emu_push(0x0DF2); f__B511_0E44_000C_24F5();
		emu_sp += 14;

		loc0A = emu_ax;
	} while (loc0A == 0x8002);

	emu_push(w2csip.s.cs); emu_push(w2csip.s.ip);
	emu_push(emu_cs); emu_push(0x0E1C); emu_cs = 0x23E1; emu_Tools_Free();
	emu_sp += 4;

	emu_push(w1csip.s.cs); emu_push(w1csip.s.ip);
	emu_push(emu_cs); emu_push(0x0E0F); emu_cs = 0x23E1; emu_Tools_Free();
	emu_sp += 4;

	if (musicID != 0xFFFF) {
		emu_push(emu_cs); emu_push(0x0E28); emu_cs = 0x1DD7; f__1DD7_0B53_0025_36F7();
	}

	Sprites_Load(0, 7, g_sprites);
}

static void d__B511_0C06_002A_8725()
{
	csip32 picture;
	picture.s.cs = 0x353F;
	picture.s.ip = 0x8D0D; /* g_global->scenario.pictureBriefing */
	d__B511_0C93_0014_2A98(g_global->playerHouseID, g_global->campaignID * 4 + 4, picture, g_houseInfo[g_global->playerHouseID].musicBriefing);
}

void d__B511_0091_001D_9C25()
{
	PoolFindStruct find;
	uint16 oldSelectionType;
	Tile *t;
	int i;

	g_global->variable_38BC++;

	oldSelectionType = g_global->selectionType;
	g_global->selectionType = 0;

	Structure_Recount();
	Unit_Recount();
	Team_Recount();

	t = Map_GetTileByPosition(0);
	for (i = 0; i < 64 * 64; i++, t++) {
		Structure *s;
		Unit *u;

		u = Unit_Get_ByPackedTile(i);
		s = Structure_Get_ByPackedTile(i);

		if (u == NULL || !u->o.flags.s.used) t->hasUnit = false;
		if (s == NULL || !s->o.flags.s.used) t->hasStructure = false;
		if (t->isUnveiled) Map_UnveilTile(i, g_global->playerHouseID);
	}

	find.houseID = 0xFFFF;
	find.index   = 0xFFFF;
	find.type    = 0xFFFF;

	while (true) {
		Unit *u;

		u = Unit_Find(&find);
		if (u == NULL) break;

		if (u->o.flags.s.isNotOnMap) continue;

		Unit_RemoveFog(u);
		Unit_B4CD_01BF(1, u);
	}

	find.houseID = 0xFFFF;
	find.index   = 0xFFFF;
	find.type    = 0xFFFF;

	while (true) {
		Structure *s;

		s = Structure_Find(&find);
		if (s == NULL) break;

		if (s->o.flags.s.isNotOnMap) continue;

		Structure_RemoveFog(s);

		if (s->o.type == STRUCTURE_STARPORT && s->o.linkedID != 0xFF) {
			Unit *u = Unit_Get_ByIndex(s->o.linkedID);

			if (!u->o.flags.s.used || !u->o.flags.s.isNotOnMap) {
				s->o.linkedID = 0xFF;
				s->countDown = 0;
			} else {
				Structure_SetAnimation(s, 2);
			}
		}

		Script_Load(&s->o.script, s->o.type);

		if (s->o.type == STRUCTURE_PALACE) {
			House_Get_ByIndex(s->o.houseID)->palacePosition = s->o.position;
		}

		if (House_Get_ByIndex(s->o.houseID)->palacePosition.tile != 0) continue;
		House_Get_ByIndex(s->o.houseID)->palacePosition = s->o.position;
	}

	find.houseID = 0xFFFF;
	find.index   = 0xFFFF;
	find.type    = 0xFFFF;

	while (true) {
		House *h;

		h = House_Find(&find);
		if (h == NULL) break;

		h->structuresBuilt = Structure_GetStructuresBuilt(h);
		House_UpdateCreditsStorage(h->index);
		House_CalculatePowerAndCredit(h);
	}

	emu_push(g_global->playerHouseID);
	emu_push(emu_cs); emu_push(0x0364); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_110D_000D_FD5C();
	emu_sp += 2;

	Sprites_Load(0, 7, g_sprites);

	g_global->scenario.savegameVersion = 0x290;

	Map_SetSelection(g_global->selectionPosition);

	if (g_global->variable_38E8 != 0xFFFF) {
		Structure *s = Structure_Get_ByIndex(g_global->variable_38E8);
		g_global->activeStructure.csip = g_global->structureStartPos.csip;
		g_global->activeStructure.s.ip += s->o.index * sizeof(Structure);
	} else {
		g_global->activeStructure.csip = 0x0;
	}

	if (g_global->activeStructureType != 0xFFFF) {
		Map_SetSelectionSize(g_structureInfo[g_global->activeStructureType].layout);
	} else {
		Structure *s = Structure_Get_ByPackedTile(g_global->selectionPosition);

		if (s != NULL) Map_SetSelectionSize(g_structureInfo[s->o.type].layout);
	}

	emu_push(g_global->playerHouseID);
	emu_push(emu_cs); emu_push(0x0415); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_04CB_0015_EBB4();
	emu_sp += 2;

	g_global->variable_38C0 = g_global->tickGlobal + 70;
	g_global->variable_3A12 = 1;
	g_global->playerCredits = 0xFFFF;

	g_global->selectionType = oldSelectionType;
	g_global->variable_38BC--;
}

void d__B511_001E_0010_AE09(uint8 houseID, uint16 scenarioID)
{
	Unknown_B483_0363(0xFFFE);

	emu_push(emu_cs); emu_push(0x0034); f__B511_0A8F_000E_EE64();

	g_global->variable_38BC++;

	emu_push(houseID);
	emu_push(scenarioID);
	emu_push(emu_cs); emu_push(0x0041); emu_cs = 0x34B5; overlay(0x34B5, 0); emu_Scenario_Load();
	emu_sp += 4;

	if (emu_ax == 0) {
		GUI_DisplayModalMessage(g_global->string_2BCA, 0xFFFF);

		emu_push(emu_cs); emu_push(0x0081); emu_cs = 0x3500; overlay(0x3500, 0); f__B500_0000_0008_FE1F();
		exit(0);
	}

	d__B511_0091_001D_9C25();

	if (scenarioID < 5) {
		g_global->hintsShown1 = 0;
		g_global->hintsShown2 = 0;
	}

	g_global->variable_38BC--;
}

void d__B511_0000_000E_B463(uint8 houseID, uint16 scenarioID)
{
	d__B511_001E_0010_AE09(houseID, scenarioID);

	if (!g_global->debugScenario) d__B511_0C06_002A_8725();
}

void f__B511_0A8F_000E_EE64()
{
l__0A8F:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0A9D); emu_cs = 0x0FE4; emu_Unit_Init();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0A9D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0AAA); emu_cs = 0x1082; emu_Structure_Init();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0AAA:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0AB7); emu_cs = 0x104B; emu_Team_Init();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0AB7:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0AC4); emu_cs = 0x10BE; emu_House_Init();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0AC4:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0x770;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3958));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3956));
	emu_push(emu_cs); emu_push(0x0ADA); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0ADA:
	emu_addw(&emu_sp, 0x8);
	emu_ax = 0x280;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x395C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x395A));
	emu_push(emu_cs); emu_push(0x0AF1); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0AF1:
	emu_addw(&emu_sp, 0x8);
	emu_ax = 0x4000;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x39EC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_push(emu_cs); emu_push(0x0B08); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0B08:
	emu_addw(&emu_sp, 0x8);
	emu_ax = 0x200;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x95E5;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0B1C); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0B1C:
	emu_addw(&emu_sp, 0x8);
	emu_ax = 0x200;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x93E5;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0B30); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0B30:
	emu_addw(&emu_sp, 0x8);
	emu_ax = 0x200;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x91E5;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0B44); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0B44:
	emu_addw(&emu_sp, 0x8);
	emu_ax = 0x200;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x8FE5;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0B58); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0B58:
	emu_addw(&emu_sp, 0x8);
	emu_ax = 0x200;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x8DE5;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0B6C); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0B6C:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ds, 0x00, 0x38B4) = 0x0;
	emu_ax = 0x2080;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x2E9C;
	emu_push(emu_ax);
	emu_ax = 0x323F;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0B89); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0B89:
	emu_addw(&emu_sp, 0x8);
	emu_ax = 0x36;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x97E7;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0B9D); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0B9D:
	emu_addw(&emu_sp, 0x8);
	emu_ax = 0xFFFE;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0BA9); emu_cs = 0x3483; overlay(0x3483, 0); emu_Unknown_B483_0363();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0BA9:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x38FE) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x38FC) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x38FA) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x38F4) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x38F2) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x38F6) = 0xFFFF;
	emu_get_memory16(emu_ds, 0x00, 0x38E2) = 0xFFFF;
	emu_get_memory16(emu_ds, 0x00, 0x38E6) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x38E4) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x38EC) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x38EE) = 0xFFFF;
	emu_get_memory16(emu_ds, 0x00, 0x38F0) = 0x0;
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0C01); emu_cs = 0x10E4; emu_GUI_DisplayText();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0C01:
	emu_addw(&emu_sp, 0x6);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

void d__B511_0C35_002A_C70F()
{
	csip32 picture;
	picture.s.cs = 0x353F;
	picture.s.ip = 0x8D1B; /* g_global->scenario.pictureWin */
	d__B511_0C93_0014_2A98(g_global->playerHouseID, g_global->campaignID * 4 + 5, picture, g_houseInfo[g_global->playerHouseID].musicWin);
}

void d__B511_0C64_002A_C757()
{
	csip32 picture;
	picture.s.cs = 0x353F;
	picture.s.ip = 0x8D29; /* g_global->scenario.pictureLose */
	d__B511_0C93_0014_2A98(g_global->playerHouseID, g_global->campaignID * 4 + 6, picture, g_houseInfo[g_global->playerHouseID].musicLose);
}

void f__B511_0E44_000C_24F5()
{
l__0E44:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0E50); emu_cs = 0x34B8; overlay(0x34B8, 0); emu_Sprites_UnloadTiles();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0E50:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x0E5F); emu_cs = 0x34DA; overlay(0x34DA, 0); f__B4DA_0000_002C_B3C2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0E5F:
	emu_addw(&emu_sp, 0x6);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E6B); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0E6B:
	emu_pop(&emu_cx);
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E75); emu_cs = 0x07AE; emu_Unknown_07AE_00E4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0E75:
	emu_pop(&emu_cx);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x0EE0; emu_last_cs = 0xB511; emu_last_ip = 0x0E7C; emu_last_length = 0x0023; emu_last_crc = 0xE3A4; emu_call(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6CE9));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6CE7));
	emu_ax = 0x5;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E98); emu_cs = 0x252E; emu_Memory_GetBlock1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0E98:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x0EA6); emu_cs = 0x352A; overlay(0x352A, 0); emu_WSA_LoadFile();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0EA6:
	emu_addw(&emu_sp, 0x12);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992D);
	emu_cl = 0x3;
	emu_shlw(&emu_ax, emu_cl);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0ED0); emu_cs = 0x352A; overlay(0x352A, 0); emu_WSA_DisplayFrame();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0ED0:
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0EDE); emu_cs = 0x352A; overlay(0x352A, 0); emu_WSA_Unload();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0EDE:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0EE9); emu_cs = 0x34DA; overlay(0x34DA, 0); f__B4DA_0A8E_0025_4AC8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0EE9:
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0EF2); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0EF2:
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x0EF8); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0EF8:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0xC8;
	emu_push(emu_ax);
	emu_ax = 0x28;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0F18); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0F18:
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0F20); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0F20:
	emu_ax = 0xF;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x0F31); emu_cs = 0x259E; f__259E_0006_0016_858A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0F31:
	emu_addw(&emu_sp, 0x6);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x0F55); emu_cs = 0x34DA; overlay(0x34DA, 0); f__B4DA_0AB8_002A_AAB2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0F55:
	emu_addw(&emu_sp, 0x12);
	emu_si = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x10));
	if (emu_ax == 0) goto l__0F92;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_cs); emu_push(0x0F6D); emu_cs = 0x348B; overlay(0x348B, 0); emu_GUI_Widget_DrawAll();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0F6D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__0F6F:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_cs); emu_push(0x0F7A); emu_cs = 0x34A2; overlay(0x34A2, 0); emu_GUI_Widget_HandleEvents();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0F7A:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_push(emu_cs); emu_push(0x0F83); emu_cs = 0x0642; emu_GUI_PaletteAnimate();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0F83:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0F8B); emu_cs = 0x34DA; overlay(0x34DA, 0); f__B4DA_0308_0018_F99F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0F8B:
	emu_pop(&emu_cx);
	emu_testw(&emu_si, 0x8000);
	if ((emu_si & 0x8000) == 0) goto l__0F6F;
l__0F92:
	emu_push(emu_cs); emu_push(0x0F97); emu_cs = 0x29E8; emu_Input_History_Clear();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0F97:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0x12) == 0x0) goto l__0FA7;
	emu_push(emu_cs); emu_push(0x0FA2); emu_cs = 0x34DA; overlay(0x34DA, 0); f__B4DA_02E0_0023_E297();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0FA2:
	emu_push(emu_cs); emu_push(0x0FA7); emu_cs = 0x34B8; overlay(0x34B8, 0); emu_Sprites_LoadTiles();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { overlay(0x3511, 1); }
l__0FA7:
	emu_ax = emu_si;
	goto l__0FAB;
l__0FAB:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
