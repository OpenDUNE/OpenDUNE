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
#include "pool/pool.h"
#include "pool/house.h"
#include "pool/unit.h"
#include "pool/structure.h"
#include "pool/team.h"
#include "security.h"
#include "string.h"
#include "structure.h"
#include "team.h"
#include "tile.h"
#include "tools.h"
#include "unit.h"
#include "opendune.h"
#include "unknown/unknown.h"
#include "gui/widget.h"
#include "map.h"
#include "file.h"
#include "gui/gui.h"
#include "gui/font.h"
#include "interrupt.h"
#include "input/input.h"
#include "sprites.h"

extern void f__10E4_0675_0026_F126();
extern void f__10E4_0F1A_0088_7622();
extern void f__1DB6_0004_000B_BFBA();
extern void f__1DD7_0B53_0025_36F7();
extern void f__22A6_0796_000B_9035();
extern void emu_Tools_Malloc();
extern void f__23E1_0334_000B_CF65();
extern void emu_Tools_Free();
extern void f__24D0_000D_0039_C17D();
extern void f__24DA_0004_000E_FD1B();
extern void f__24DA_002D_0010_3EB2();
extern void f__257A_000D_001A_3B75();
extern void f__2598_0000_0017_EB80();
extern void f__259E_0006_0016_858A();
extern void f__259E_0040_0015_5E4A();
extern void f__25C4_000E_0019_12FF();
extern void emu_Unknown_2903_090A();
extern void f__2B1E_0189_001B_E6CF();
extern void f__2B4C_0002_0029_64AF();
extern void f__2B6C_0137_0020_C73F();
extern void f__2B6C_0169_001E_6939();
extern void f__2C17_000C_002F_3016();
extern void f__B483_04CB_0015_EBB4();
extern void f__B4AB_0000_000D_6028();
extern void f__B4AE_0000_0008_049C();
extern void f__B4B8_0D23_0010_BA99();
extern void f__B4B8_0ECE_000B_BD2E();
extern void f__B4B8_110D_000D_FD5C();
extern void f__B4B8_116F_0013_15F7();
extern void f__B4B8_2295_0018_A862();
extern void f__B4E6_0108_004A_C989();
extern void f__B4E6_0200_0091_FAEA();
extern void f__B4E9_0050_003F_292A();
extern void f__B500_0000_0008_FE1F();
extern void f__B511_0000_000E_B463();
extern void f__B511_001E_0010_AE09();
extern void f__B511_0C35_002A_C70F();
extern void f__B511_0C64_002A_C757();
extern void f__B518_0558_0010_240A();
extern void f__B536_0129_000A_8178();
extern void emu_File_ReadChunkOrLengthFile();
extern void emu_Gameloop_Intro();
extern void emu_GUI_DrawFilledRectangle();
extern void emu_GUI_SaveLoad_List();
extern void emu_GUI_ShowEndStats();
extern void emu_GUI_ShowMap();
extern void emu_GUI_Widget_DrawBorder();
extern void emu_InGame_Numpad_Move();
extern void emu_Input_History_Clear();
extern void emu_Terminate_Normal();
extern void emu_Window_WidgetClick_Create();
extern void overlay(uint16 cs, uint8 force);

/**
 * Check if a level is finished, based on the values in WinFlags.
 *
 * @return True if and only if the level has come to an end.
 */
static bool GameLoop_IsLevelFinished()
{
	bool finish = false;

	if (g_global->debugForceWin) {
		emu_push(2);
		emu_push(0);
		emu_push(0);
		emu_push(emu_ds); emu_push(0x60AE);
		emu_push(emu_cs); emu_push(0x002E); emu_cs = 0x2B1E; f__2B1E_0189_001B_E6CF();
		emu_sp += 10;
		return true;
	}

	/* You have to play at least 7200 ticks before you can win the game */
	if (g_global->tickGlobal - g_global->tickScenarioStart < 7200) return false;

	/* Check for structure counts hitting zero */
	if ((g_global->scenario.winFlags & 0x3) != 0) {
		PoolFindStruct find;
		uint16 countStructureEnemy = 0;
		uint16 countStructureFriendly = 0;

		find.houseID = 0xFFFF;
		find.type    = 0xFFFF;
		find.index   = 0xFFFF;

		/* Calculate how many structures are left on the map */
		while (true) {
			Structure *s;

			s = Structure_Find(&find);
			if (s == NULL) break;

			if (s->o.type == STRUCTURE_TURRET) continue;
			if (s->o.type == STRUCTURE_ROCKET_TURRET) continue;

			if (s->o.houseID == g_global->playerHouseID) {
				countStructureFriendly++;
			} else {
				countStructureEnemy++;
			}
		}

		if ((g_global->scenario.winFlags & 0x1) != 0 && countStructureEnemy == 0) {
			finish = true;
		}
		if ((g_global->scenario.winFlags & 0x2) != 0 && countStructureFriendly == 0) {
			finish = true;
		}

		if (finish) {
			emu_push(2);
			emu_push(0);
			emu_push(0);
			emu_push(emu_ds); emu_push(0x60BA);
			emu_push(emu_cs); emu_push(0x00FB); emu_cs = 0x2B1E; f__2B1E_0189_001B_E6CF();
			emu_sp += 10;
		}
	}

	/* Check for reaching spice quota */
	if ((g_global->scenario.winFlags & 0x4) != 0 && g_global->playerCredits != 0xFFFF) {
		House *h;

		h = House_Get_ByMemory(g_global->playerHouse);

		if (g_global->playerCredits >= h->creditsQuota) {
			finish = true;

			emu_push(2);
			emu_push(0);
			emu_push(0);
			emu_push(emu_ds); emu_push(0x60C7);
			emu_push(emu_cs); emu_push(0x013C); emu_cs = 0x2B1E; f__2B1E_0189_001B_E6CF();
			emu_sp += 10;
		}
	}

	/* Check for reaching timeout */
	if ((g_global->scenario.winFlags & 0x8) != 0) {
		/* XXX -- This code was with '<' instead of '>=', which makes
		 *  no sense. As it is unused, who knows what the intentions
		 *  were. This at least makes it sensible. */
		if (g_global->tickGlobal >= g_global->tickGameTimeout) {
			finish = true;

			emu_push(2);
			emu_push(0);
			emu_push(0);
			emu_push(emu_ds); emu_push(0x60D2);
			emu_push(emu_cs); emu_push(0x00FB); emu_cs = 0x2B1E; f__2B1E_0189_001B_E6CF();
			emu_sp += 10;
		}
	}

	return finish;
}

/**
 * Check if a level is won, based on the values in LoseFlags.
 *
 * @return True if and only if the level has been won by the human.
 */
static bool GameLoop_IsLevelWon()
{
	bool win = false;

	if (g_global->debugForceWin) return true;

	/* Check for structure counts hitting zero */
	if ((g_global->scenario.loseFlags & 0x3) != 0) {
		PoolFindStruct find;
		uint16 countStructureEnemy = 0;
		uint16 countStructureFriendly = 0;

		find.houseID = 0xFFFF;
		find.type    = 0xFFFF;
		find.index   = 0xFFFF;

		/* Calculate how many structures are left on the map */
		while (true) {
			Structure *s;

			s = Structure_Find(&find);
			if (s == NULL) break;

			if (s->o.type == STRUCTURE_WALL) continue;
			if (s->o.type == STRUCTURE_TURRET) continue;
			if (s->o.type == STRUCTURE_ROCKET_TURRET) continue;

			if (s->o.houseID == g_global->playerHouseID) {
				countStructureFriendly++;
			} else {
				countStructureEnemy++;
			}
		}

		win = true;
		if ((g_global->scenario.loseFlags & 0x1) != 0) {
			win = win && (countStructureEnemy == 0);
		}
		if ((g_global->scenario.loseFlags & 0x2) != 0) {
			win = win && (countStructureFriendly != 0);
		}
	}

	/* Check for reaching spice quota */
	if (!win && (g_global->scenario.loseFlags & 0x4) != 0 && g_global->playerCredits != 0xFFFF) {
		House *h;

		h = House_Get_ByMemory(g_global->playerHouse);
		win = (g_global->playerCredits >= h->creditsQuota);
	}

	/* Check for reaching timeout */
	if (!win && (g_global->scenario.loseFlags & 0x8) != 0) {
		win = (g_global->tickGlobal < g_global->tickGameTimeout);
	}

	return win;
}

/**
 * Checks if the level comes to an end. If so, it shows all end-level stuff,
 *  and prepares for the next level.
 */
static void GameLoop_LevelEnd()
{
	if (g_global->variable_60A2 >= g_global->tickGlobal && g_global->debugForceWin == 0) return;

	if (GameLoop_IsLevelFinished()) {
		Sound_Play(0);

		g_global->cursorSpriteID = 0;

		emu_push(g_sprites[0].s.cs); emu_push(g_sprites[0].s.ip);
		emu_push(0);
		emu_push(0);
		emu_push(emu_cs); emu_push(0x030A); emu_cs = 0x2B4C; f__2B4C_0002_0029_64AF();
		emu_sp += 8;

		emu_push(0xFFFE);
		emu_push(emu_cs); emu_push(0x0316); emu_cs = 0x3483; overlay(0x3483, 0); emu_Unknown_B483_0363();
		emu_sp += 2;

		emu_push(0);
		emu_push(emu_cs); emu_push(0x031F); emu_cs = 0x34E9; overlay(0x34E9, 0); f__B4E9_0050_003F_292A();
		emu_sp += 2;

		if (GameLoop_IsLevelWon()) {
			emu_push(0x28);
			emu_push(emu_cs); emu_push(0x0334); emu_cs = 0x3483; overlay(0x3483, 0); emu_Unknown_B483_0363();
			emu_sp += 2;

			GUI_DisplayModalMessage(String_Get_ByIndex(0x52), 0xFFFF); /* "You have successfully completed your mission." */

			emu_push(emu_cs); emu_push(0x0352); emu_cs = 0x3511; overlay(0x3511, 0); f__B511_0C35_002A_C70F();

			emu_push(emu_cs); emu_push(0x0357); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_0ECE_000B_BD2E();

			g_global->campaignID++;

			GUI_ShowEndStats(g_global->scenario.killedAllied, g_global->scenario.killedEnemy, g_global->scenario.destroyedAllied, g_global->scenario.destroyedEnemy, g_global->scenario.harvestedAllied, g_global->scenario.harvestedEnemy, g_global->scenario.score, g_global->playerHouseID);

			if (g_global->campaignID == 9) {
				emu_push(emu_cs); emu_push(0x038F); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();

				emu_push(15);
				emu_push(g_global->variable_3C36.s.cs); emu_push(g_global->variable_3C36.s.ip);
				emu_push(emu_cs); emu_push(0x03A0); emu_cs = 0x259E; f__259E_0006_0016_858A();
				emu_sp += 6;

				emu_push(0);
				emu_push(emu_cs); emu_push(0x03AB); emu_cs = 0x24DA; f__24DA_0004_000E_FD1B();
				emu_sp += 2;

				emu_push(emu_cs); emu_push(0x03B1); emu_cs = 0x34AB; overlay(0x34AB, 0); f__B4AB_0000_000D_6028();

				emu_push(emu_cs); emu_push(0x03B6); emu_cs = 0x3500; overlay(0x3500, 0); f__B500_0000_0008_FE1F();

				emu_push(0);
				emu_push(emu_cs); emu_push(0x03BE); emu_cs = 0x01F7; emu_Terminate_Normal();
			}

			emu_push(emu_cs); emu_push(0x03C4); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();

			emu_push(emu_cs); emu_push(0x03C9); emu_cs = 0x34AE; overlay(0x34AE, 0); f__B4AE_0000_0008_049C();

			emu_push(emu_cs); emu_push(0x03CE); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();

			File_ReadBlockFile("IBM.PAL", (void *)emu_get_memorycsip(g_global->variable_3C32), 768);

			emu_push(1);
			emu_push(g_global->campaignID);
			emu_push(emu_cs); emu_push(0x03F7); emu_cs = 0x3503; overlay(0x3503, 0); emu_GUI_ShowMap();
			emu_sp += 4;

			g_global->scenarioID = emu_ax;

			emu_push(15);
			emu_push(g_global->variable_3C36.s.cs); emu_push(g_global->variable_3C36.s.ip);
			emu_push(emu_cs); emu_push(0x040D); emu_cs = 0x259E; f__259E_0006_0016_858A();
			emu_sp += 6;

			if (g_global->campaignID == 1 || g_global->campaignID == 7) {
				Sprites_Load(1, 7, g_sprites);

				if (!Security_Check()) {
					emu_push(emu_cs); emu_push(0x0444); emu_cs = 0x3500; overlay(0x3500, 0); f__B500_0000_0008_FE1F();

					emu_push(emu_cs); emu_push(0x044C); emu_cs = 0x01F7; emu_Terminate_Normal();
				}

				Sprites_Load(0, 7, g_sprites);
			}
		} else {
			emu_push(0x29);
			emu_push(emu_cs); emu_push(0x046F); emu_cs = 0x3483; overlay(0x3483, 0); emu_Unknown_B483_0363();
			emu_sp += 2;

			GUI_DisplayModalMessage(String_Get_ByIndex(0x53), 0xFFFF); /* "You have failed your mission " */

			emu_push(emu_cs); emu_push(0x048D); emu_cs = 0x3511; overlay(0x3511, 0); f__B511_0C64_002A_C757();

			emu_push(emu_cs); emu_push(0x0492); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_0ECE_000B_BD2E();

			emu_push(0);
			emu_push(g_global->campaignID);
			emu_push(emu_cs); emu_push(0x049E); emu_cs = 0x3503; overlay(0x3503, 0); emu_GUI_ShowMap();
			emu_sp += 4;

			g_global->scenarioID = emu_ax;
		}

		{
			House *h = House_Get_ByMemory(g_global->playerHouse);
			h->flags.s.variable_0004 = false;
		}

		Sprites_Load(0, 7, g_sprites);

		emu_push(emu_cs); emu_push(0x04C8); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_0D23_0010_BA99();

		g_global->variable_38BE = 1;
		g_global->debugForceWin = 0;
	}

	g_global->variable_60A2 = g_global->tickGlobal + 300;
}

/**
 * Intro menu.
 */
static void Gameloop_IntroMenu()
{
	bool loc02 = false;
	bool loc06;
	csip32 csip;

	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2C);

	memcpy(&emu_get_memory8(0x29E8, 0xA, 0x0), g_global->variable_2179, 36);

	Input_Flags_ClearBits(INPUT_FLAG_KEY_RELEASE | INPUT_FLAG_UNKNOWN_0400 | INPUT_FLAG_UNKNOWN_0100 |
	                      INPUT_FLAG_UNKNOWN_0080 | INPUT_FLAG_UNKNOWN_0040 | INPUT_FLAG_UNKNOWN_0020 |
	                      INPUT_FLAG_UNKNOWN_0008 | INPUT_FLAG_UNKNOWN_0004 | INPUT_FLAG_UNKNOWN_0002);

	Tools_Var76B8_Set(1, true);

	g_global->campaignID = 0x0;
	g_global->scenarioID = 0x1;
	g_global->playerHouseID = HOUSE_INDEX_INVALID;
	g_global->debugScenario = 0x0;
	g_global->variable_3A3E[8][11] = 0xD7;
	g_global->variable_3A3E[8][12] = 0x35;
	g_global->variable_3A3E[9][11] = 0xD8;
	g_global->variable_3A3E[9][12] = 0x35;
	g_global->selectionType = 0x0;
	g_global->variable_3A10 = 0x0;

	emu_push(emu_cs); emu_push(0x1764); emu_cs = 0x3536; overlay(0x3536, 0); f__B536_0129_000A_8178();

	emu_push(0x10);
	emu_push(0); emu_push(0x300);
	emu_push(emu_cs); emu_push(0x1774); emu_cs = 0x23E1; emu_Tools_Malloc();
	emu_sp += 6;
	g_global->variable_3C36.s.cs = emu_dx;
	g_global->variable_3C36.s.ip = emu_ax;

	emu_push(0x10);
	emu_push(0); emu_push(0x300);
	emu_push(emu_cs); emu_push(0x178E); emu_cs = 0x23E1; emu_Tools_Malloc();
	emu_sp += 6;
	g_global->variable_3C32.s.cs = emu_dx;
	g_global->variable_3C32.s.ip = emu_ax;

	emu_push(0);
	emu_push(0); emu_push(0x100);
	emu_push(emu_cs); emu_push(0x17A7); emu_cs = 0x23E1; emu_Tools_Malloc();
	emu_sp += 6;
	g_global->variable_3C42.s.cs = emu_dx;
	g_global->variable_3C42.s.ip = emu_ax;

	g_global->readBufferSize = 0x2EE0;
	emu_push(0x20);
	emu_push(g_global->readBufferSize >> 16); emu_push(g_global->readBufferSize & 0xFFFF);
	emu_push(emu_cs); emu_push(0x17CE); emu_cs = 0x23E1; emu_Tools_Malloc();
	emu_sp += 6;
	g_global->readBuffer.s.cs = emu_dx;
	g_global->readBuffer.s.ip = emu_ax;

	emu_push(0x353F); emu_push(0x22B4); /* "PROFILE.INI" NULL terminated. */
	emu_push(emu_cs); emu_push(0x17E1); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_116F_0013_15F7();
	emu_sp += 4;

	emu_push(g_global->readBuffer.s.cs); emu_push(g_global->readBuffer.s.ip);
	emu_push(emu_cs); emu_push(0x17F0); emu_cs = 0x23E1; emu_Tools_Free();
	emu_sp += 4;

	g_global->readBuffer.csip = 0x0;

	File_ReadBlockFile("IBM.PAL", emu_get_memorycsip(g_global->variable_998A), 0x300);

	Tools_Memmove(g_global->variable_998A, g_global->variable_3C32, 0x300);

	emu_push(0);
	emu_push(emu_cs); emu_push(0x1841); emu_cs = 0x24DA; f__24DA_0004_000E_FD1B();
	emu_sp += 2;

	emu_push(emu_es);
	emu_es = g_global->variable_3C32.s.cs;
	emu_dx = g_global->variable_3C32.s.ip;
	emu_cx = 0x100;
	emu_bx = 0;
	emu_al = 0x12;
	emu_ah = 0x10;
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x1852); Interrupt_Video();
	emu_pop(&emu_es);

	emu_push(g_global->variable_3C32.s.cs); emu_push(g_global->variable_3C32.s.ip);
	emu_push(emu_cs); emu_push(0x1860); emu_cs = 0x259E; f__259E_0040_0015_5E4A();
	emu_sp += 4;

	emu_push(g_global->variable_3C36.s.cs); emu_push(g_global->variable_3C36.s.ip);
	emu_push(emu_cs); emu_push(0x186F); emu_cs = 0x259E; f__259E_0040_0015_5E4A();
	emu_sp += 4;

	emu_push(0);
	emu_push(0); emu_push(0x100);
	emu_push(emu_cs); emu_push(0x1880); emu_cs = 0x23E1; emu_Tools_Malloc();
	emu_sp += 6;
	g_global->variable_3C3A.s.cs = emu_dx;
	g_global->variable_3C3A.s.ip = emu_ax;

	emu_push(0);
	emu_push(0); emu_push(0x100);
	emu_push(emu_cs); emu_push(0x1899); emu_cs = 0x23E1; emu_Tools_Malloc();
	emu_sp += 6;
	g_global->variable_3C3E.s.cs = emu_dx;
	g_global->variable_3C3E.s.ip = emu_ax;

	GUI_Palette_CreateMapping(emu_get_memorycsip(g_global->variable_3C32), emu_get_memorycsip(g_global->variable_3C3A), 0xC, 0x55);
	emu_get_memorycsip(g_global->variable_3C3A)[0xFF] = 0xFF;
	emu_get_memorycsip(g_global->variable_3C3A)[0xDF] = 0xDF;
	emu_get_memorycsip(g_global->variable_3C3A)[0xEF] = 0xEF;

	GUI_Palette_CreateMapping(emu_get_memorycsip(g_global->variable_3C32), emu_get_memorycsip(g_global->variable_3C3E), 0xF, 0x55);
	emu_get_memorycsip(g_global->variable_3C3E)[0xFF] = 0xFF;
	emu_get_memorycsip(g_global->variable_3C3E)[0xDF] = 0xDF;
	emu_get_memorycsip(g_global->variable_3C3E)[0xEF] = 0xEF;

	emu_push(0x30);
	emu_push(0); emu_push(0x5DC);
	emu_push(emu_cs); emu_push(0x1939); emu_cs = 0x23E1; emu_Tools_Malloc();
	emu_sp += 6;
	g_global->variable_3C46.s.cs = emu_dx;
	g_global->variable_3C46.s.ip = emu_ax;

	emu_push(0x5DC);
	emu_push(g_global->variable_3C46.s.cs); emu_push(g_global->variable_3C46.s.ip);
	emu_push(emu_cs); emu_push(0x1954); emu_cs = 0x2903; emu_Unknown_2903_090A();
	emu_sp += 6;

	g_global->variable_38C6 = File_ReadWholeFile(String_GenerateFilename("MESSAGE"), 0);

	g_global->new6pFnt = Font_LoadFile((g_global->language == 2) ? "new6pg.fnt" : "new6p.fnt");

	g_global->new8pFnt2 = g_global->new8pFnt;

	emu_push(0); emu_push(0);
	emu_push(0x353F); emu_push(0x6128); /* g_global->scriptFunctionsTeam */
	emu_push(0x353F); emu_push(0x392E); /* g_global->scriptTeam */
	emu_push(0x353F); emu_push(0x22E5); /* "TEAM" NULL terminated. */
	emu_push(emu_cs); emu_push(0x19BF); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_2295_0018_A862();
	emu_sp += 16;

	emu_push(0); emu_push(0);
	emu_push(0x353F); emu_push(0x33B6); /* g_global->scriptFunctionsStructure */
	emu_push(0x353F); emu_push(0x3918); /* g_global->scriptStructure */
	emu_push(0x353F); emu_push(0x22EA); /* "BUILD" NULL terminated. */
	emu_push(emu_cs); emu_push(0x19DC); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_2295_0018_A862();
	emu_sp += 16;

	if (g_global->playerHouseID != HOUSE_INDEX_INVALID) {
		emu_push(g_global->playerHouseID);
		emu_push(emu_cs); emu_push(0x19EE); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_110D_000D_FD5C();
		emu_sp += 2;
	}

	Sprites_Load(0, 7, g_sprites);

	g_global->cursorSpriteID = 0;

	emu_push(g_sprites[0].s.cs); emu_push(g_sprites[0].s.ip);
	emu_push(0);
	emu_push(0);
	emu_push(emu_cs); emu_push(0x1A25); emu_cs = 0x2B4C; f__2B4C_0002_0029_64AF();
	emu_sp += 8;

	while (g_global->variable_706A > 1) {
		emu_push(emu_cs); emu_push(0x1A2F); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	}

	emu_push(emu_cs); emu_push(0x1A3A); emu_cs = 0x34B8; overlay(0x34B8, 0); emu_Window_WidgetClick_Create();

	GameOptions_Load();

	emu_push(9);
	emu_push(emu_cs); emu_push(0x1A48); emu_cs = 0x252E; emu_Memory_GetBlock1();
	emu_sp += 2;
	csip.s.cs = emu_dx;
	csip.s.ip = emu_ax;

	emu_push(9);
	emu_push(emu_cs); emu_push(0x1A58); emu_cs = 0x24DA; f__24DA_002D_0010_3EB2();
	emu_sp += 2;

	*((uint32*)emu_get_memorycsip(csip)) = 0x12345678;
	csip.s.ip += 4;

	csip = Tools_GetSmallestIP(csip);

	g_global->mapPointer = csip;
	csip.s.ip += 0x4000;

	csip = Tools_GetSmallestIP(csip);

	Unit_Init(csip);
	csip.s.ip += sizeof(Unit) * UNIT_INDEX_MAX;

	csip = Tools_GetSmallestIP(csip);

	Team_Init(csip);
	csip.s.ip += sizeof(Team) * TEAM_INDEX_MAX;

	csip = Tools_GetSmallestIP(csip);

	House_Init(csip);
	csip.s.ip += sizeof(House) * HOUSE_INDEX_MAX;

	csip = Tools_GetSmallestIP(csip);

	Structure_Init(csip);
	csip.s.ip += sizeof(Structure) * STRUCTURE_INDEX_MAX_HARD;

	csip.s.ip += 0x58;

	csip = Tools_GetSmallestIP(csip);

	g_global->variable_3956 = csip;
	csip.s.ip += 0x770;

	csip = Tools_GetSmallestIP(csip);

	g_global->variable_395A = csip;
	csip.s.ip += 0x280;

	loc06 = true;

	emu_push(emu_cs); emu_push(0x1B77); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();

	if (g_global->debugSkipDialogs == 0) {
		uint16 stringId;
		uint16 maxWidth;
		bool hasSave;
		bool hasFame;
		bool loc10;

		loc10 = true;

		hasSave = File_Exists("_save000.dat");
		hasFame = File_Exists("SAVEFAME.DAT");

		if (hasSave || File_Exists("ONETIME.DAT")) g_global->variable_37B4 = 1;

		stringId = 0x1C; /* Replay Introduction */

		while (true) {
			switch (stringId) {
				case 0x001C: /* Replay Introduction */
					Sound_Play(0);

					emu_push(g_global->readBuffer.s.cs); emu_push(g_global->readBuffer.s.ip);
					emu_push(emu_cs); emu_push(0x1C19); emu_cs = 0x23E1; emu_Tools_Free();
					emu_sp += 4;

					g_global->readBufferSize = (g_global->variable_6D8F == 0) ? 0x2EE0 : 0x6D60;

					emu_push(0x20);
					emu_push(g_global->readBufferSize >> 16); emu_push(g_global->readBufferSize & 0xFFFF);
					emu_push(emu_cs); emu_push(0x1C4D); emu_cs = 0x23E1; emu_Tools_Malloc();
					emu_sp += 6;
					g_global->readBuffer.s.cs = emu_dx;
					g_global->readBuffer.s.ip = emu_ax;

					emu_push(emu_cs); emu_push(0x1C5C); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();

					emu_push(emu_cs); emu_push(0x1C61); emu_cs = 0x1DD7; f__1DD7_0B53_0025_36F7();

					emu_push(emu_cs); emu_push(0x1C66); emu_cs = 0x34BE; overlay(0x34BE, 0); emu_Gameloop_Intro();

					emu_push(0xFFFE);
					emu_push(emu_cs); emu_push(0x1C6F); emu_cs = 0x3483; overlay(0x3483, 0); emu_Unknown_B483_0363();
					emu_sp += 2;

					File_ReadBlockFile("IBM.PAL", emu_get_memorycsip(g_global->variable_998A), 0x300);
					Tools_Memmove(g_global->variable_998A, g_global->variable_3C32, 0x300);

					if (g_global->variable_37B4 == 0) {
						uint8 loc14;

						loc14 = File_Open("ONETIME.DAT", 2);
						File_Close(loc14);
						g_global->variable_37B4 = 1;
					}

					Sound_Play(0);

					emu_push(g_global->readBuffer.s.cs); emu_push(g_global->readBuffer.s.ip);
					emu_push(emu_cs); emu_push(0x1CEB); emu_cs = 0x23E1; emu_Tools_Free();
					emu_sp += 4;

					String_Load("DUNE");

					g_global->readBufferSize = (g_global->variable_6D8F == 0) ? 0x2EE0 : 0x4E20;

					emu_push(0x20);
					emu_push(g_global->readBufferSize >> 16); emu_push(g_global->readBufferSize & 0xFFFF);
					emu_push(emu_cs); emu_push(0x1D2B); emu_cs = 0x23E1; emu_Tools_Malloc();
					emu_sp += 6;
					g_global->readBuffer.s.cs = emu_dx;
					g_global->readBuffer.s.ip = emu_ax;

					emu_push(emu_cs); emu_push(0x1D3A); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();

					Sprites_Load(0, 7, g_sprites);

					Sound_Play(28);

					loc06 = true;
					break;

				case 0x001D: /* Exit Game */
					emu_push(emu_cs); emu_push(0x1D62); emu_cs = 0x3500; overlay(0x3500, 0); f__B500_0000_0008_FE1F();

					emu_push(0);
					emu_push(emu_cs); emu_push(0x1D6A); emu_cs = 0x01F7; emu_Terminate_Normal();
					emu_sp += 2;
					break;

				case 0x014E: /* Hall of Fame */
					emu_push(0xFFFF);
					emu_push(emu_cs); emu_push(0x1DFF); emu_cs = 0x3518; overlay(0x3518, 0); f__B518_0558_0010_240A();
					emu_sp += 2;

					emu_push(g_global->variable_3C36.s.cs); emu_push(g_global->variable_3C36.s.ip);
					emu_push(emu_cs); emu_push(0x1E0D); emu_cs = 0x259E; f__259E_0040_0015_5E4A();
					emu_sp += 4;

					hasFame = File_Exists("SAVEFAME.DAT");
					loc06 = true;
					break;

				case 0x0153: /* Load Game */
					emu_push(emu_cs); emu_push(0x1D73); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();

					emu_push(0x1E);
					emu_push(g_global->variable_3C36.s.cs); emu_push(g_global->variable_3C36.s.ip);
					emu_push(emu_cs); emu_push(0x1D84); emu_cs = 0x259E; f__259E_0006_0016_858A();
					emu_sp += 6;

					emu_push(0);
					emu_push(emu_cs); emu_push(0x1D8F); emu_cs = 0x24DA; f__24DA_0004_000E_FD1B();
					emu_sp += 2;

					emu_push(emu_cs); emu_push(0x1D95); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();

					emu_push(g_global->variable_3C32.s.cs); emu_push(g_global->variable_3C32.s.ip);
					emu_push(emu_cs); emu_push(0x1DA2); emu_cs = 0x259E; f__259E_0040_0015_5E4A();
					emu_sp += 4;

					emu_push(0);
					emu_push(emu_cs); emu_push(0x1DAC); emu_cs = 0x34F2; overlay(0x34F2, 0); emu_GUI_SaveLoad_List();
					emu_sp += 2;

					if (emu_ax != 0) {
						loc02 = true;
						loc10 = false;
						if (g_global->variable_38BE == 1) break;
						g_global->variable_38BE = 0;

						Sprites_Load(0, 7, g_sprites);
					} else {
						emu_push(g_global->variable_3C36.s.cs); emu_push(g_global->variable_3C36.s.ip);
						emu_push(emu_cs); emu_push(0x1DED); emu_cs = 0x259E; f__259E_0040_0015_5E4A();
						emu_sp += 4;

						loc06 = true;
					}
					break;

				default: break;
			}

			if (loc06) {
				uint16 index = (hasFame ? 2 : 0) + (hasSave ? 1 : 0);
				uint16 i;
				char *strings[6];

				g_global->variable_41B8 = 0;

				for (i = 0; i < 6; i++) {
					strings[i] = NULL;

					if (g_global->variable_219D[index][i] == 0) {
						if (g_global->variable_41B8 == 0) g_global->variable_41B8 = i;
						continue;
					}

					strings[i] = String_Get_ByIndex(g_global->variable_219D[index][i]);
				}

				/* Temporary */
				for (i = 0; i < 6; i++) {
					csip32 *csip = &emu_get_csip32(emu_ss, emu_bp - 0x2C, 0);

					if (strings[i] == NULL) {
						csip[i].csip = 0x0;
						continue;
					}
					csip[i] = g_global->strings;
					csip[i].s.ip += strings[i] - (char *)emu_get_memorycsip(csip[i]);
				}

				GUI_DrawText_Wrapper(NULL, 0, 0, 0, 0, 0x22);

				maxWidth = 0;

				for (i = 0; i < g_global->variable_41B8; i++) {
					if (Font_GetStringWidth(strings[i]) <= maxWidth) continue;
					maxWidth = Font_GetStringWidth(strings[i]);
				}

				maxWidth += 7;

				g_global->variable_41B6 = maxWidth >> 3;
				g_global->variable_4062[13][2] = g_global->variable_41B6 + 2;
				g_global->variable_4062[13][0] = 19 - (maxWidth >> 4);
				g_global->variable_4062[13][1] = 160 - ((g_global->variable_41B8 * g_global->variable_6C71) >> 1);
				g_global->variable_4062[13][3] = (g_global->variable_41B8 * g_global->variable_6C71) + 11;

				emu_push(0x353F); emu_push(0x231B); /* "TITLE" NULL terminated. */
				emu_push(emu_cs); emu_push(0x1F95); emu_cs = 0x0642; emu_String_GenerateFilename();
				emu_sp += 4;

				emu_push(0);
				emu_push(0); emu_push(0);
				emu_push(3);
				emu_push(3);
				emu_push(emu_dx); emu_push(emu_ax);
				emu_push(emu_cs); emu_push(0x1F9E); emu_cs = 0x34CA; overlay(0x34CA, 0); emu_File_ReadChunkOrLengthFile();
				emu_sp += 14;

				emu_push(emu_cs); emu_push(0x1FA6); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();

				emu_push(0);
				emu_push(emu_cs); emu_push(0x1FAE); emu_cs = 0x24DA; f__24DA_0004_000E_FD1B();
				emu_sp += 2;

				emu_push(0);
				emu_push(2);
				emu_push(200);
				emu_push(40);
				emu_push(0);
				emu_push(0);
				emu_push(0);
				emu_push(0);
				emu_push(emu_cs); emu_push(0x1FCF); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
				emu_sp += 16;

				emu_push(0x1E);
				emu_push(g_global->variable_3C32.s.cs); emu_push(g_global->variable_3C32.s.ip);
				emu_push(emu_cs); emu_push(0x1FE3); emu_cs = 0x259E; f__259E_0006_0016_858A();
				emu_sp += 6;

				GUI_DrawText_Wrapper("V1.07", 319, 192, 133, 0, 0x231, 0x39);
				GUI_DrawText_Wrapper(NULL, 0, 0, 0, 0, 0x22);

				emu_push(13);
				emu_push(emu_cs); emu_push(0x203C); emu_cs = 0x07AE; emu_Unknown_07AE_0000();
				emu_sp += 2;

				emu_push(1);
				emu_push(2);
				emu_push(13);
				emu_push(emu_cs); emu_push(0x204E); emu_cs = 0x10E4; emu_GUI_Widget_DrawBorder();
				emu_sp += 6;

				emu_push(0);
				emu_push(0);
				emu_push(0); emu_push(0xFFFF);
				emu_push(emu_ss); emu_push(emu_bp - 0x2C);
				emu_push(0);
				emu_push(emu_cs); emu_push(0x206B); emu_cs = 0x34E6; overlay(0x34E6, 0); f__B4E6_0108_004A_C989();
				emu_sp += 14;

				emu_push(emu_cs); emu_push(0x2073); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();

				loc06 = false;
			}

			if (!loc10) break;

			emu_push(0);
			emu_push(0); emu_push(0xFF);
			emu_push(0); emu_push(0);
			emu_push(emu_ss); emu_push(emu_bp - 0x2C);
			emu_push(0);
			emu_push(emu_cs); emu_push(0x209D); emu_cs = 0x34E6; overlay(0x34E6, 0); f__B4E6_0200_0091_FAEA();
			emu_sp += 16;
			stringId = emu_ax;

			if (stringId != 0xFFFF) {
				uint16 index = (hasFame ? 2 : 0) + (hasSave ? 1 : 0);
				stringId = g_global->variable_219D[index][stringId];
			}

			GUI_PaletteAnimate();

			if (stringId == 0x1B) break;
		}
	} else {
		Sound_Play(0);

		emu_push(g_global->readBuffer.s.cs); emu_push(g_global->readBuffer.s.ip);
		emu_push(emu_cs); emu_push(0x20E0); emu_cs = 0x23E1; emu_Tools_Free();
		emu_sp += 4;

		String_Load("DUNE");

		g_global->readBufferSize = (g_global->variable_6D8F == 0) ? 0x2EE0 : 0x4E20;

		emu_push(0x20);
		emu_push(g_global->readBufferSize >> 16); emu_push(g_global->readBufferSize & 0xFFFF);
		emu_push(emu_cs); emu_push(0x2120); emu_cs = 0x23E1; emu_Tools_Malloc();
		emu_sp += 6;
		g_global->readBuffer.s.cs = emu_dx;
		g_global->readBuffer.s.ip = emu_ax;
	}

	emu_push(emu_cs); emu_push(0x212F); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();

	g_global->variable_37B4 = 0;

	emu_push(0xC);
	emu_push(g_global->variable_992B + g_global->variable_9931);
	emu_push((g_global->variable_992D + g_global->variable_992F) << 3);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_push(g_global->variable_992D << 3);
	emu_push(emu_cs); emu_push(0x2163); emu_cs = 0x22A6; emu_GUI_DrawFilledRectangle();
	emu_sp += 10;

	if (!loc02) {
		emu_push(5);
		emu_push(emu_cs); emu_push(0x2175); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_04CB_0015_EBB4();

		emu_push(0xF);
		emu_push(g_global->variable_3C36.s.cs); emu_push(g_global->variable_3C36.s.ip);
		emu_push(emu_cs); emu_push(0x218D); emu_cs = 0x259E; f__259E_0006_0016_858A();
		emu_sp += 6;

		emu_push(0);
		emu_push(emu_cs); emu_push(0x2198); emu_cs = 0x24DA; f__24DA_0004_000E_FD1B();
		emu_sp += 2;
	}

	emu_push(emu_cs); emu_push(0x219E); emu_cs = 0x29E8; emu_Input_History_Clear();

	if (g_global->enableLog != 0) {
		emu_push(0x353F); emu_push(0x2327); /* "DUNE.LOG" NULL terminated. */
		emu_push(g_global->enableLog);
		emu_push(emu_cs); emu_push(0x21B3); emu_cs = 0x257A; f__257A_000D_001A_3B75();
		emu_sp += 6;
	}

	if (!loc02) {
		if (g_global->playerHouseID == HOUSE_INDEX_INVALID) {
			emu_push(emu_cs); emu_push(0x21CB); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();

			g_global->playerHouseID = HOUSE_MERCENARY;
			g_global->playerHouseID = GUI_PickHouse();

			emu_push(emu_cs); emu_push(0x21DE); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
		}

		emu_push(emu_cs); emu_push(0x21E2); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_0D23_0010_BA99();

		emu_push(g_global->playerHouseID);
		emu_push(emu_cs); emu_push(0x21EA); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_110D_000D_FD5C();
		emu_sp += 2;

		emu_push(g_global->playerHouseID);
		emu_push(emu_cs); emu_push(0x21F4); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_04CB_0015_EBB4();
		emu_sp += 2;

		emu_push(emu_cs); emu_push(0x21FA); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();

		if (g_global->debugSkipDialogs != 0) {
			if (g_global->campaignID != 0) {
				emu_push(1);
				emu_push(g_global->campaignID);
				emu_push(emu_cs); emu_push(0x2215); emu_cs = 0x3503; overlay(0x3503, 0); emu_GUI_ShowMap();
				emu_sp += 4;
				g_global->scenarioID = emu_ax;
			}

			emu_push(g_global->scenarioID);
			emu_push(g_global->playerHouseID);
			emu_push(emu_cs); emu_push(0x2227); emu_cs = 0x3511; overlay(0x3511, 0); f__B511_001E_0010_AE09();
			emu_sp += 4;
		} else {
			if (g_global->campaignID != 0) {
				emu_push(1);
				emu_push(g_global->campaignID);
				emu_push(emu_cs); emu_push(0x223D); emu_cs = 0x3503; overlay(0x3503, 0); emu_GUI_ShowMap();
				emu_sp += 4;
				g_global->scenarioID = emu_ax;
			}

			emu_push(g_global->scenarioID);
			emu_push(g_global->playerHouseID);
			emu_push(emu_cs); emu_push(0x224F); emu_cs = 0x3511; overlay(0x3511, 0); f__B511_0000_000E_B463();
			emu_sp += 4;
		}

		emu_push(emu_cs); emu_push(0x2256); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();

		emu_cmpw(&g_global->debugScenario, 0x0);
		if (g_global->debugScenario != 0) {
			emu_push(5);
		} else {
			emu_push(4);
		}
		emu_push(emu_cs); emu_push(0x226B); emu_cs = 0x34E9; overlay(0x34E9, 0); f__B4E9_0050_003F_292A();
		emu_sp += 2;
	}

	emu_push(g_global->variable_3C32.s.cs); emu_push(g_global->variable_3C32.s.ip);
	emu_push(emu_cs); emu_push(0x2279); emu_cs = 0x259E; f__259E_0040_0015_5E4A();
	emu_sp += 4;

	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	return;
}

/**
 * Main game loop.
 */
static void GameLoop_Main()
{
	uint16 key;

	assert(g_global->variable_6640.csip == 0x22A60796);

	g_global->language = g_global->config.language;

	String_Load("DUNE");

	Sound_InitMT32(0);

	Gameloop_IntroMenu();

	Tools_Var76B8_Set(2, g_global->variable_37AA != 0);

	emu_push(emu_cs); emu_push(0x0113); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();

	Sound_Play(Tools_RandomRange(0, 5) + 8);

	while (true) {
		if (g_global->variable_38BE == 2) {
			Sound_Play(28);

			g_global->playerHouseID = HOUSE_MERCENARY;
			g_global->playerHouseID = GUI_PickHouse();

			emu_push(emu_cs); emu_push(0x014F); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();

			emu_push(1);
			emu_push(emu_cs); emu_push(0x0158); emu_cs = 0x24DA; f__24DA_002D_0010_3EB2();
			emu_sp += 2;

			emu_push(emu_cs); emu_push(0x015E); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_0D23_0010_BA99();

			emu_push(g_global->playerHouseID);
			emu_push(emu_cs); emu_push(0x0167); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_110D_000D_FD5C();
			emu_sp += 2;

			emu_push(g_global->playerHouseID);
			emu_push(emu_cs); emu_push(0x0171); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_04CB_0015_EBB4();
			emu_sp += 2;

			emu_push(emu_cs); emu_push(0x0177); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();

			g_global->variable_38BE = 1;
			g_global->scenarioID    = 1;
			g_global->campaignID    = 0;
			g_global->variable_2AF4 = 0;
		}

		if (g_global->variable_3A10 != g_global->selectionType) {
			emu_push(g_global->variable_3A10);
			emu_push(emu_cs); emu_push(0x01A7); emu_cs = 0x34E9; overlay(0x34E9, 0); f__B4E9_0050_003F_292A();
			emu_sp += 2;
		}

		GUI_PaletteAnimate();

		if (g_global->variable_38BE == 1) {
			emu_push(0);
			emu_push(emu_cs); emu_push(0x01BC); emu_cs = 0x34E9; overlay(0x34E9, 0); f__B4E9_0050_003F_292A();
			emu_sp += 2;

			emu_push(g_global->scenarioID);
			emu_push(g_global->playerHouseID);
			emu_push(emu_cs); emu_push(0x01CA); emu_cs = 0x3511; overlay(0x3511, 0); f__B511_0000_000E_B463();
			emu_sp += 4;

			g_global->variable_38BE = 0;

			emu_push(4);
			emu_push(emu_cs); emu_push(0x01DB); emu_cs = 0x34E9; overlay(0x34E9, 0); f__B4E9_0050_003F_292A();
			emu_sp += 2;

			Sound_Play(Tools_RandomRange(0, 8) + 8);
			g_global->variable_31BC = g_global->variable_76AC + 300;
		}

		if (g_global->variable_31C0 != g_global->variable_38EC) {
			Map_SetSelectionObjectPosition(0xFFFF);
			Map_SetSelectionObjectPosition(g_global->variable_3A00);
			g_global->variable_31C0 = g_global->variable_38EC;
		}

		if (g_global->variable_6D8D != 4 && g_global->variable_6D8D != 5) {
			if (!Driver_Voice_01EB()) {
				emu_push(emu_cs); emu_push(0x0251); emu_cs = 0x3483; overlay(0x3483, 0); emu_Unknown_B483_0470();
				if (emu_ax == 0) {
					if (g_global->musicEnabled == 0) {
						Sound_Play(2);

						g_global->variable_3E52 = 0;
					} else if (g_global->variable_3E52 > 0) {
						Sound_Play(Tools_RandomRange(0, 5) + 17);
						g_global->variable_31BC = g_global->variable_76AC + 300;
						g_global->variable_3E52 = -1;
					} else {
						g_global->variable_3E52 = 0;
						if (g_global->variable_6D8D != 0 && g_global->variable_76AC > g_global->variable_31BC) {
							if (!Driver_Music_IsPlaying()) {
								Sound_Play(Tools_RandomRange(0, 8) + 8);
								g_global->variable_31BC = g_global->variable_76AC + 300;
							}
						}
					}
				}
			}
		}

		emu_push(0);
		emu_push(emu_cs); emu_push(0x030E); emu_cs = 0x2598; f__2598_0000_0017_EB80();
		emu_sp += 2;

		key = GUI_Widget_HandleEvents((Widget *)emu_get_memorycsip(g_global->variable_3C26) ,g_global->variable_3C26);

		if (g_global->selectionType >= 1 && g_global->selectionType <= 4) {
			if (g_global->selectionUnit.csip != 0x00000000) {
				Unit *u = Unit_Get_ByMemory(g_global->selectionUnit);

				if (g_global->variable_31C2 < g_global->tickGlobal) {
					Unit_DisplayStatusText(u);
					g_global->variable_31C2 = g_global->tickGlobal + 300;
				}

				if (g_global->selectionType != 1) {
					g_global->selectionPosition = Tile_PackTile(Tile_Center(u->o.position));
				}
			}

			emu_push(0);
			emu_push(emu_cs); emu_push(0x03A5); emu_cs = 0x10E4; f__10E4_0F1A_0088_7622();
			emu_sp += 2;

			emu_push(key);
			emu_push(emu_cs); emu_push(0x03AE); emu_cs = 0x0642; emu_InGame_Numpad_Move();
			emu_sp += 2;

			emu_push(0);
			emu_push(g_global->playerHouseID);
			emu_push(emu_cs); emu_push(0x03BB); emu_cs = 0x10E4; f__10E4_0675_0026_F126();
			emu_sp += 4;

			GameLoop_Team();
			GameLoop_Unit();
			GameLoop_Structure();
			GameLoop_House();

			emu_push(0);
			emu_push(emu_cs); emu_push(0x03D9); emu_cs = 0x07D4; emu_Unknown_07D4_0000();
			emu_sp += 2;
		}

		GUI_DisplayText(NULL, 0);

		if (g_global->variable_38F8 != 0 && g_global->debugScenario == 0) {
			GameLoop_LevelEnd();
		}

		if (g_global->variable_38F8 == 0) break;
	}

	emu_push(emu_cs); emu_push(0x0414); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();

	if (g_global->enableLog != 0) {
		emu_push(emu_ds); emu_push(0x31F9); /* "DUNE.LOG" */
		emu_push(0);
		emu_push(emu_cs); emu_push(0x0428); emu_cs = 0x257A; f__257A_000D_001A_3B75();
		emu_sp += 6;
	}

	emu_push(emu_cs); emu_push(0x0430); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();

	emu_push(0);
	emu_push(emu_cs); emu_push(0x0438); emu_cs = 0x07AE; emu_Unknown_07AE_0000();
	emu_sp += 2;

	emu_push(2);
	emu_push(emu_cs); emu_push(0x0442); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	emu_sp += 2;

	emu_push(emu_cs); emu_push(0x044D); emu_cs = 0x22A6; f__22A6_0796_000B_9035();

	emu_push(0);
	emu_push(2);
	emu_push(g_global->variable_9931);
	emu_push(g_global->variable_992F);
	emu_push(g_global->variable_992B);
	emu_push(g_global->variable_992D);
	emu_push(g_global->variable_992B);
	emu_push(g_global->variable_992D);
	emu_push(emu_cs); emu_push(0x0471); emu_cs = 0x2C17; f__2C17_000C_002F_3016();
	emu_sp += 16;
}

void Main()
{
	DuneCfg *config;
	uint32 memoryNeeded;

	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_sp -= 0xCC;

	config = (DuneCfg *)&emu_get_memory8(0x353F, 0x98E1, 0);
	if (!Config_Read("dune.cfg", config)) {
		printf("\r\nThe setup program must be run first.\r\n"
		       "\r\nZuerst muß das Setup-Programm betrieben werden.\r\n"
		       "\r\nLe programme de configuration doit d'abord être lancé.\r\n"
		       "\r\n");
		exit(1);
	}

	memoryNeeded = 0;

	if (config->voiceDrv == 4) {
		memoryNeeded += 16000 + 2000;
	} else if (config->voiceDrv != 0) {
		memoryNeeded += 16000;
	}

	if (config->musicDrv == 1) {
		memoryNeeded += 23000;
	} else if (config->musicDrv != 0) {
		memoryNeeded += 30000;
	}

	memoryNeeded += 6000;
	memoryNeeded += 542000;

	/* The size of the dune2.exe binary in memory */
	g_global->sizeExecutable = emu_get_memory16(g_global->PSP - 1, 0, 3) << 4;

	/* Get the amount of free memory */
	emu_push(emu_cs); emu_push(0x0086); emu_cs = 0x23E1; f__23E1_0334_000B_CF65();
	g_global->memoryFree = g_global->sizeExecutable + (emu_dx << 16) + emu_ax;

	if (memoryNeeded > g_global->memoryFree) {
		printf("Insufficient memory by %d bytes.\n", memoryNeeded - g_global->memoryFree);
		exit(1);
	}

	if (config->useXMS) {
		uint32 loc = memoryNeeded - g_global->sizeExecutable;

		emu_push(1);
		emu_push(0xD); emu_push(0xE2B0);
		emu_push(loc >> 16); emu_push(loc & 0xFFFF);
		emu_push(emu_ds); emu_push(0xB2); /* "DUNE2.EXE" */
		emu_push(emu_cs); emu_push(0x0114); emu_cs = 0x1DB6; f__1DB6_0004_000B_BFBA();
		emu_sp += 14;

		if (emu_ax != 0) exit(1);
	} else {
		uint32 loc = memoryNeeded - g_global->sizeExecutable;

		emu_push(0);
		emu_push(0); emu_push(0);
		emu_push(loc >> 16); emu_push(loc & 0xFFFF);
		emu_push(emu_ds); emu_push(0xB2); /* "DUNE2.EXE" */
		emu_push(emu_cs); emu_push(0x0149); emu_cs = 0x1DB6; f__1DB6_0004_000B_BFBA();
		emu_sp += 14;

		if (emu_ax != 0) exit(1);
	}

	if (config->useXMS) {
		emu_push(0x40);
		emu_push(0); emu_push(1);
		emu_push(emu_cs); emu_push(0x0169); emu_cs = 0x23E1; emu_Tools_Malloc();
		emu_sp += 6;

		if (emu_ax == 0 && emu_dx == 0) {
			config->voiceDrv = 0;
		} else {
			emu_push(emu_dx); emu_push(emu_ax);
			emu_push(emu_cs); emu_push(0x0187); emu_cs = 0x23E1; emu_Tools_Free();
			emu_sp += 4;
		}
	} else {
		config->voiceDrv = 0;
	}

	if (!config->useMouse) Input_Flags_SetBits(INPUT_FLAG_UNKNOWN_2000 | INPUT_FLAG_NO_CLICK);

	g_global->variable_6C76 = 3;

	if (config->graphicDrv >= 7 && config->graphicDrv <= 12 && config->graphicDrv != 9) {
		g_global->variable_6C76 = 3;
	} else {
		printf("Unrecognized graphic mode!\n");
		exit(1);
	}

	if (config->musicDrv >= 8 && config->musicDrv <= 12) {
		config->musicDrv = 1;
	}

	g_global->variable_6CD3[0][0] = 0xFA00;
	g_global->variable_6CD3[0][1] = 0xFA00;
	g_global->variable_6CD3[1][0] = 0xFBF4;
	g_global->variable_6CD3[1][1] = 0xFBF4;
	g_global->variable_6CD3[2][0] = 0xFA00;
	g_global->variable_6CD3[2][1] = 0xFA00;
	g_global->variable_6CD3[3][0] = 0xFD0D;
	g_global->variable_6CD3[3][1] = 0xFD0D;
	g_global->variable_6CD3[4][0] = 0xA044;
	g_global->variable_6CD3[4][1] = 0xA044;

	if (!config->useXMS) {
		config->voiceDrv = 0;
	}

	Drivers_All_Init(config->soundDrv, config->musicDrv, config->voiceDrv);

	emu_push(1);
	emu_push(g_global->variable_0094.s.cs); emu_push(g_global->variable_0094.s.ip); /* Pointer to "new8p.fnt" */
	emu_push(g_global->variable_6C76);
	emu_push(emu_cs); emu_push(0x02A2); emu_cs = 0x25C4; f__25C4_000E_0019_12FF();
	emu_sp += 8;
	if (emu_ax == 0) exit(1);

	g_global->variable_6C80.s.cs = 0x353B; g_global->variable_6C80.s.ip = 0x20; /* emu_File_Error_Wrapper */
	g_global->variable_6C84 = 0x25284000;

	g_global->variable_7097 = 0;

	GameLoop_Main();

	emu_push(emu_cs); emu_push(0x02DC); emu_cs = 0x3500; overlay(0x3500, 0); f__B500_0000_0008_FE1F();

	printf("%s", String_Get_ByIndex(0x141)); /* "Thank you for playing Dune II." */

	/* XXX -- Debug code */
	if (0) {
		uint32 bufferSize = 0;
		uint16 i;
		for (i = 1; i < 5; i++) {
			bufferSize += g_global->variable_6CD3[i][1];
		}

		printf("Program in memory: %d\n"
		       "Buffer allocations: %d\n"
		       "Misc allocations: %d\n"
		       "Spare RAM: %d\n"
		       "DOS prompt memory free must be %d.\n",
			g_global->sizeExecutable,
			bufferSize,
			g_global->variable_66F4 - (bufferSize + g_global->variable_00A4),
			g_global->memoryFree - (g_global->sizeExecutable + g_global->variable_66F4 - g_global->variable_00A4),
			g_global->sizeExecutable + g_global->variable_66F4 - g_global->variable_00A4
		);
	}

	exit(0);
}
