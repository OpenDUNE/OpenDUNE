/* $Id$ */

#include <stdlib.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "decompiled.h"

uint16 d__B511_0E44_000C_24F5(csip32 spriteBuffer, csip32 wsaFilename, Widget *w, bool unknown)
{
	uint16 ret;

	Sprites_UnloadTiles();

	emu_push(g_global->playerHouseID);
	emu_push(wsaFilename.s.cs); emu_push(wsaFilename.s.ip);
	emu_push(emu_cs); emu_push(0x0E5F); emu_cs = 0x34DA; overlay(0x34DA, 0); f__B4DA_0000_002C_B3C2();
	emu_sp += 6;

	emu_push(2);
	emu_push(emu_cs); emu_push(0x0E6B); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	emu_sp += 2;

	emu_push(8);
	emu_push(emu_cs); emu_push(0x0E75); emu_cs = 0x07AE; emu_Unknown_07AE_00E4();
	emu_sp += 2;

	if (wsaFilename.csip != 0x0) {
		csip32 wsa;

		emu_push(0); emu_push(0);
		emu_push(0);
		emu_push(g_global->variable_6CD3[2][0] >> 16); emu_push(g_global->variable_6CD3[2][0] & 0xFFFF);

		emu_push(5);
		emu_push(emu_cs); emu_push(0x0E98); emu_cs = 0x252E; emu_Memory_GetBlock1();
		emu_sp += 2;

		emu_push(emu_dx); emu_push(emu_ax);

		emu_push(wsaFilename.s.cs); emu_push(wsaFilename.s.ip);
		emu_push(emu_cs); emu_push(0x0EA6); emu_cs = 0x352A; overlay(0x352A, 0); emu_WSA_LoadFile();
		emu_sp += 18;
		wsa.s.cs = emu_dx;
		wsa.s.ip = emu_ax;

		emu_push(0);
		emu_push(2);
		emu_push(g_global->variable_992B); emu_push(g_global->variable_992D * 8);
		emu_push(0);
		emu_push(wsa.s.cs); emu_push(wsa.s.ip);
		emu_push(emu_cs); emu_push(0x0ED0); emu_cs = 0x352A; overlay(0x352A, 0); emu_WSA_DisplayFrame();
		emu_sp += 14;

		emu_push(wsa.s.cs); emu_push(wsa.s.ip);
		emu_push(emu_cs); emu_push(0x0EDE); emu_cs = 0x352A; overlay(0x352A, 0); emu_WSA_Unload();
		emu_sp += 4;
	}

	emu_push(2);
	emu_push(emu_cs); emu_push(0x0EE9); emu_cs = 0x34DA; overlay(0x34DA, 0); f__B4DA_0A8E_0025_4AC8();
	emu_sp += 2;

	emu_push(0);
	emu_push(emu_cs); emu_push(0x0EF2); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	emu_sp += 2;

	emu_push(emu_cs); emu_push(0x0EF8); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();

	emu_push(0);
	emu_push(2);
	emu_push(200); emu_push(40);
	emu_push(0);
	emu_push(0);
	emu_push(0);
	emu_push(0);
	emu_push(emu_cs); emu_push(0x0F18); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	emu_sp += 16;

	emu_push(emu_cs); emu_push(0x0F20); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();

	emu_push(15);
	emu_push(g_global->variable_3C32.s.cs); emu_push(g_global->variable_3C32.s.ip);
	emu_push(emu_cs); emu_push(0x0F31); emu_cs = 0x259E; f__259E_0006_0016_858A();
	emu_sp += 6;

	emu_push(0); emu_push(0);
	emu_push(1);
	emu_push(spriteBuffer.s.cs); emu_push(spriteBuffer.s.ip);
	emu_push(0); emu_push(0);
	emu_push(wsaFilename.s.cs); emu_push(wsaFilename.s.ip);
	emu_push(emu_cs); emu_push(0x0F55); emu_cs = 0x34DA; overlay(0x34DA, 0); f__B4DA_0AB8_002A_AAB2();
	emu_sp += 18;
	ret = emu_ax;

	if (w != NULL) {
		do {
			GUI_Widget_DrawAll(w);
			ret = GUI_Widget_HandleEvents(w);

			GUI_PaletteAnimate();

			emu_push(0);
			emu_push(emu_cs); emu_push(0x0F8B); emu_cs = 0x34DA; overlay(0x34DA, 0); f__B4DA_0308_0018_F99F();
			emu_sp += 2;
		} while ((ret & 0x8000) == 0);
	}

	emu_push(emu_cs); emu_push(0x0F97); emu_cs = 0x29E8; emu_Input_History_Clear();

	if (unknown) {
		emu_push(emu_cs); emu_push(0x0FA2); emu_cs = 0x34DA; overlay(0x34DA, 0); f__B4DA_02E0_0023_E297();

		Sprites_LoadTiles();
	}

	return ret;
}

static void d__B511_0C93_0014_2A98(uint8 houseID, uint16 stringID, csip32 wsaFilename, uint16 musicID)
{
	Widget *w1, *w2;
	csip32 w1csip, w2csip;

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
	} while (d__B511_0E44_000C_24F5(g_global->readBuffer, wsaFilename, w1, true) == 0x8002);

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

void d__B511_0A8F_000E_EE64()
{
	csip32 null;
	null.csip = 0x0;

	Unit_Init(null);
	Structure_Init(null);
	Team_Init(null);
	House_Init(null);

	memset(emu_get_memorycsip(g_global->animations), 0, ANIMATION_MAX * sizeof(Animation));
	memset(emu_get_memorycsip(g_global->variable_395A), 0, 32 * sizeof(struct_395A));
	memset(emu_get_memorycsip(g_global->mapPointer), 0, 64 * 64 * sizeof(Tile));

	memset(g_global->variable_95E5, 0, 512 * sizeof(uint8));
	memset(g_global->variable_93E5, 0, 512 * sizeof(uint8));
	memset(g_global->variable_91E5, 0, 512 * sizeof(uint8));
	memset(g_global->variable_8FE5, 0, 512 * sizeof(uint8));
	memset(g_global->variable_8DE5, 0, 512 * sizeof(uint8));

	memset(g_map, 0, 64 * 64 * sizeof(uint16) + 128);
	memset(g_global->starportAvailable, 0, 27 * sizeof(uint16));

	Unknown_B483_0363(0xFFFE);

	g_global->playerCreditsNoSilo     = 0;
	g_global->houseMissileCountdown   = 0;
	g_global->variable_38EC           = 0;
	g_global->activeStructurePosition = 0;

	g_global->unitHouseMissile.csip   = 0x0;
	g_global->activeUnit.csip         = 0x0;
	g_global->activeStructure.csip    = 0x0;

	g_global->activeAction            = 0xFFFF;
	g_global->activeStructureType     = 0xFFFF;
	g_global->variable_38EE           = 0xFFFF;

	GUI_DisplayText(NULL, 0xFFFF);
}

void d__B511_001E_0010_AE09(uint8 houseID, uint16 scenarioID)
{
	Unknown_B483_0363(0xFFFE);

	d__B511_0A8F_000E_EE64();

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
