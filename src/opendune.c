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

extern void f__07D4_0000_0027_FA61();
extern void f__10E4_0273_0029_DCE5();
extern void f__10E4_0675_0026_F126();
extern void f__10E4_0F1A_0088_7622();
extern void f__1DB6_0004_000B_BFBA();
extern void f__1DD7_01EB_0013_9C3C();
extern void f__22A6_0796_000B_9035();
extern void f__23E1_0004_0014_2BC0();
extern void f__23E1_0334_000B_CF65();
extern void f__23E1_01C2_0011_24E8();
extern void f__24DA_0004_000E_FD1B();
extern void f__24DA_002D_0010_3EB2();
extern void f__257A_000D_001A_3B75();
extern void f__2598_0000_0017_EB80();
extern void f__259E_0006_0016_858A();
extern void f__25C4_000E_0019_12FF();
extern void f__2B1E_0189_001B_E6CF();
extern void f__2B4C_0002_0029_64AF();
extern void f__2B6C_0137_0020_C73F();
extern void f__2B6C_0169_001E_6939();
extern void f__2C17_000C_002F_3016();
extern void f__B483_04CB_0015_EBB4();
extern void f__B4AB_0000_000D_6028();
extern void f__B4AE_0000_0008_049C();
extern void f__B4B8_0A1E_001A_E094();
extern void f__B4B8_0D23_0010_BA99();
extern void f__B4B8_0ECE_000B_BD2E();
extern void f__B4B8_110D_000D_FD5C();
extern void f__B4E9_0000_0013_DC68();
extern void f__B4E9_0050_003F_292A();
extern void f__B500_0000_0008_FE1F();
extern void f__B511_0000_000E_B463();
extern void f__B511_0C35_002A_C70F();
extern void f__B511_0C64_002A_C757();
extern void emu_GUI_PaletteAnimate();
extern void emu_GUI_PickHouse();
extern void emu_GUI_ShowEndStats();
extern void emu_GUI_ShowMap();
extern void emu_Gameloop_IntroMenu();
extern void emu_InGame_Numpad_Move();
extern void emu_Input_Flags_SetBits();
extern void emu_Terminate_Normal();
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

			if (s->type == STRUCTURE_TURRET) continue;
			if (s->type == STRUCTURE_ROCKET_TURRET) continue;

			if (s->houseID == g_global->playerHouseID) {
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

			if (s->type == STRUCTURE_WALL) continue;
			if (s->type == STRUCTURE_TURRET) continue;
			if (s->type == STRUCTURE_ROCKET_TURRET) continue;

			if (s->houseID == g_global->playerHouseID) {
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

		emu_push(emu_get_memory16(0x2DCE, 0x00, 0x442));
		emu_push(emu_get_memory16(0x2DCE, 0x00, 0x440));
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

			emu_push(0x52); /* "You have successfully completed your mission." */
			emu_push(emu_cs); emu_push(0x0342); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
			emu_sp += 2;

			emu_push(0xFFFF);
			emu_push(emu_dx); emu_push(emu_ax);
			emu_push(emu_cs); emu_push(0x034A); emu_cs = 0x10E4; f__10E4_0273_0029_DCE5();
			emu_sp += 6;

			emu_push(emu_cs); emu_push(0x0352); emu_cs = 0x3511; overlay(0x3511, 0); f__B511_0C35_002A_C70F();

			emu_push(emu_cs); emu_push(0x0357); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_0ECE_000B_BD2E();

			g_global->campaignID++;

			emu_push(g_global->playerHouseID);
			emu_push(g_global->scenario.variable_0002);
			emu_push(g_global->scenario.harvestedEnemy);
			emu_push(g_global->scenario.harvestedAllied);
			emu_push(g_global->scenario.variable_40);
			emu_push(g_global->scenario.variable_3E);
			emu_push(g_global->scenario.variable_3C);
			emu_push(g_global->scenario.variable_3A);
			emu_push(emu_cs); emu_push(0x0380); emu_cs = 0x3518; overlay(0x3518, 0); emu_GUI_ShowEndStats();
			emu_sp += 16;

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
				emu_push(0x2DCE); emu_push(0x440);
				emu_push(7);
				emu_push(1);
				emu_push(emu_cs); emu_push(0x0433); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_0A1E_001A_E094();
				emu_sp += 8;

				if (!Security_Check()) {
					emu_push(emu_cs); emu_push(0x0444); emu_cs = 0x3500; overlay(0x3500, 0); f__B500_0000_0008_FE1F();

					emu_push(emu_cs); emu_push(0x044C); emu_cs = 0x01F7; emu_Terminate_Normal();
				}

				emu_push(0x2DCE); emu_push(0x440);
				emu_push(7);
				emu_push(0);
				emu_push(emu_cs); emu_push(0x0433); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_0A1E_001A_E094();
				emu_sp += 8;
			}
		} else {
			emu_push(0x29);
			emu_push(emu_cs); emu_push(0x046F); emu_cs = 0x3483; overlay(0x3483, 0); emu_Unknown_B483_0363();
			emu_sp += 2;

			emu_push(0x53); /* "You have failed your mission " */
			emu_push(emu_cs); emu_push(0x047D); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
			emu_sp += 2;

			emu_push(0xFFFF);
			emu_push(emu_dx); emu_push(emu_ax);
			emu_push(emu_cs); emu_push(0x0485); emu_cs = 0x10E4; f__10E4_0273_0029_DCE5();
			emu_sp += 6;

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

		emu_push(0x2DCE); emu_push(0x440);
		emu_push(7);
		emu_push(0);
		emu_push(emu_cs); emu_push(0x0433); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_0A1E_001A_E094();
		emu_sp += 8;

		emu_push(emu_cs); emu_push(0x04C8); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_0D23_0010_BA99();

		g_global->variable_38BE = 1;
		g_global->debugForceWin = 0;
	}

	g_global->variable_60A2 = g_global->tickGlobal + 300;
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

	emu_push(emu_cs); emu_push(0x0101); emu_cs = 0x34B8; overlay(0x34B8, 0); emu_Gameloop_IntroMenu();

	emu_push(g_global->variable_37AA);
	emu_push(emu_cs); emu_push(0x010D); emu_cs = 0x34E9; overlay(0x34E9, 0); f__B4E9_0000_0013_DC68();
	emu_sp += 2;

	emu_push(emu_cs); emu_push(0x0113); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();

	Sound_Play(Tools_RandomRange(0, 5) + 8);

	while (true) {
		if (g_global->variable_38BE == 2) {
			Sound_Play(28);

			g_global->playerHouseID = HOUSE_MERCENARY;
			emu_push(emu_cs); emu_push(0x0147); emu_cs = 0x3511; overlay(0x3511, 0); emu_GUI_PickHouse();
			g_global->playerHouseID = emu_ax;

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

		emu_push(emu_cs); emu_push(0x01AD); emu_cs = 0x0642; emu_GUI_PaletteAnimate();

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
			emu_push(emu_cs); emu_push(0x0245); emu_cs = 0x1DD7; f__1DD7_01EB_0013_9C3C();
			if (emu_ax == 0) {
				emu_push(emu_cs); emu_push(0x0251); emu_cs = 0x3483; overlay(0x3483, 0); emu_Unknown_B483_0470();
				if (emu_ax == 0) {
					if (g_global->variable_700C == 0) {
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

		{
			Widget *w = NULL;
			if (g_global->variable_3C26.csip != 0) w = (Widget *)emu_get_memorycsip(g_global->variable_3C26);
			key = GUI_Widget_HandleEvents(w ,g_global->variable_3C26);
		}

		if (g_global->selectionType >= 1 && g_global->selectionType <= 4) {
			if (g_global->selectionUnit.csip != 0x00000000) {
				Unit *u = Unit_Get_ByMemory(g_global->selectionUnit);

				if (g_global->variable_31C2 < g_global->tickGlobal) {
					Unit_DisplayStatusText(u);
					g_global->variable_31C2 = g_global->tickGlobal + 300;
				}

				if (g_global->selectionType != 1) {
					g_global->selectionPosition = Tile_PackTile(Tile_Center(u->position));
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
			emu_push(emu_cs); emu_push(0x03D9); emu_cs = 0x07D4; f__07D4_0000_0027_FA61();
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
		emu_push(emu_cs); emu_push(0x0169); emu_cs = 0x23E1; f__23E1_0004_0014_2BC0();
		emu_sp += 6;

		if (emu_ax == 0 && emu_dx == 0) {
			config->voiceDrv = 0;
		} else {
			emu_push(emu_dx); emu_push(emu_ax);
			emu_push(emu_cs); emu_push(0x0187); emu_cs = 0x23E1; f__23E1_01C2_0011_24E8();
			emu_sp += 4;
		}
	} else {
		config->voiceDrv = 0;
	}

	if (!config->useMouse) {
		emu_push(0x3000);
		emu_push(emu_cs); emu_push(0x01A7); emu_cs = 0x29E8; emu_Input_Flags_SetBits();
		emu_sp += 2;
	}

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
