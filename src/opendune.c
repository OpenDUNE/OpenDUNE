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
#include "pool/unit.h"
#include "pool/house.h"
#include "string.h"
#include "structure.h"
#include "team.h"
#include "unit.h"
#include "opendune.h"

extern void f__07D4_0000_0027_FA61();
extern void f__10E4_0273_0029_DCE5();
extern void f__10E4_0675_0026_F126();
extern void f__10E4_09AB_0031_5E8E();
extern void f__10E4_0F1A_0088_7622();
extern void f__1423_0009_0025_FE5D();
extern void f__1423_018B_0015_2B74();
extern void f__1A34_27A8_0012_7198();
extern void f__1DD7_01EB_0013_9C3C();
extern void f__1DD7_088A_0026_5144();
extern void f__22A6_0796_000B_9035();
extern void f__24DA_0004_000E_FD1B();
extern void f__24DA_002D_0010_3EB2();
extern void f__2537_000C_001C_86CB();
extern void f__257A_000D_001A_3B75();
extern void f__2598_0000_0017_EB80();
extern void f__259E_0006_0016_858A();
extern void f__2B4C_0002_0029_64AF();
extern void f__2B6C_0137_0020_C73F();
extern void f__2B6C_0169_001E_6939();
extern void f__2C17_000C_002F_3016();
extern void emu_Sound_Play();
extern void f__B483_0363_0016_83DF();
extern void f__B483_0470_000E_519D();
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
extern void emu_File_ReadBlockFile();
extern void emu_GUI_PaletteAnimate();
extern void emu_GUI_PickHouse();
extern void emu_GUI_ShowEndStats();
extern void emu_GUI_ShowMap();
extern void emu_GUI_Widget_HandleEvents();
extern void emu_Gameloop_IntroMenu();
extern void emu_InGame_Numpad_Move();
extern void emu_Map_SetSelectionObjectPosition();
extern void emu_Security_Main();
extern void emu_Sound_PlayDuneInit();
extern void emu_String_Load();
extern void emu_Terminate_Normal();
extern void emu_Tile_Center();
extern void emu_Tile_PackTile();
extern void emu_Unknown_07AE_0000();
extern void overlay(uint16 cs, uint8 force);

/**
 * Checks if the level comes to an end. If so, it shows all end-level stuff,
 *  and prepares for the next level.
 */
static void GameLoop_LevelEnd()
{
	if (g_global->variable_60A2 >= g_global->tickGlobal && g_global->debugInstantWin == 0) return;

	emu_push(emu_cs); emu_push(0x02D3); f__1423_0009_0025_FE5D();

	if (emu_ax != 0 || g_global->debugInstantWin != 0) {
		emu_push(0);
		emu_push(emu_cs); emu_push(0x02E9); emu_cs = 0x3483; overlay(0x3483, 0); emu_Sound_Play();
		emu_sp += 2;

		g_global->cursorSpriteID = 0;

		emu_push(emu_get_memory16(0x2DCE, 0x00, 0x442));
		emu_push(emu_get_memory16(0x2DCE, 0x00, 0x440));
		emu_push(0);
		emu_push(0);
		emu_push(emu_cs); emu_push(0x030A); emu_cs = 0x2B4C; f__2B4C_0002_0029_64AF();
		emu_sp += 8;

		emu_push(0xFFFE);
		emu_push(emu_cs); emu_push(0x0316); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0363_0016_83DF();
		emu_sp += 2;

		emu_push(0);
		emu_push(emu_cs); emu_push(0x031F); emu_cs = 0x34E9; overlay(0x34E9, 0); f__B4E9_0050_003F_292A();
		emu_sp += 2;

		emu_push(emu_cs); emu_push(0x0324); f__1423_018B_0015_2B74();
		if (emu_ax != 0) {
			emu_push(0x28);
			emu_push(emu_cs); emu_push(0x0334); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0363_0016_83DF();
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

			emu_push(0);
			emu_push(768);
			emu_push(g_global->variable_3C32.s.cs); emu_push(g_global->variable_3C32.s.ip);
			emu_push(0x353F); emu_push(0x60DF); /* "IBM.PAL" */
			emu_push(emu_cs); emu_push(0x03E7); emu_cs = 0x253D; emu_File_ReadBlockFile();
			emu_sp += 12;

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

				emu_push(emu_cs); emu_push(0x043B); emu_cs = 0x34DA; overlay(0x34DA, 0); emu_Security_Main();

				if (emu_ax == 0) {
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
			emu_push(emu_cs); emu_push(0x046F); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0363_0016_83DF();
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
		g_global->debugInstantWin = 0;
	}

	g_global->variable_60A2 = g_global->tickGlobal + 300;
}

/**
 * Decompiled function emu_GameLoop_Main()
 *
 * @name emu_GameLoop_Main
 * @implements 0642:000C:001A:AF29 ()
 */
void emu_GameLoop_Main()
{
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	GameLoop_Main();
}

/**
 * Main game loop.
 */
void GameLoop_Main()
{
	uint16 key;

	assert(g_global->variable_6640.csip == 0x22A60796);

	g_global->language = g_global->config.language;

	emu_push(0x353F); emu_push(0x31F4); /* "DUNE" */
	emu_push(emu_cs); emu_push(0x00EA); emu_cs = 0x0FCB; emu_String_Load();
	emu_sp += 4;

	emu_push(0);
	emu_push(emu_cs); emu_push(0x00F4); emu_cs = 0x0642; emu_Sound_PlayDuneInit();
	emu_sp += 2;

	emu_push(emu_cs); emu_push(0x0101); emu_cs = 0x34B8; overlay(0x34B8, 0); emu_Gameloop_IntroMenu();

	emu_push(g_global->variable_37AA);
	emu_push(emu_cs); emu_push(0x010D); emu_cs = 0x34E9; overlay(0x34E9, 0); f__B4E9_0000_0013_DC68();
	emu_sp += 2;

	emu_push(emu_cs); emu_push(0x0113); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();

	emu_push(5);
	emu_push(0);
	emu_push(emu_cs); emu_push(0x011F); emu_cs = 0x2537; f__2537_000C_001C_86CB();
	emu_sp += 4;

	emu_push(emu_ax + 8);
	emu_push(emu_cs); emu_push(0x012A); emu_cs = 0x3483; overlay(0x3483, 0); emu_Sound_Play();
	emu_sp += 2;

	while (true) {
		if (g_global->variable_38BE == 2) {
			emu_push(28);
			emu_push(emu_cs); emu_push(0x013B); emu_cs = 0x3483; overlay(0x3483, 0); emu_Sound_Play();
			emu_sp += 2;

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

			emu_push(8);
			emu_push(0);
			emu_push(emu_cs); emu_push(0x01E8); emu_cs = 0x2537; f__2537_000C_001C_86CB();
			emu_sp += 4;

			emu_push(emu_ax + 8);
			emu_push(emu_cs); emu_push(0x01F3); emu_cs = 0x3483; overlay(0x3483, 0); emu_Sound_Play();
			emu_sp += 2;

			g_global->variable_31BC = g_global->variable_76AC + 300;
		}

		if (g_global->variable_31C0 != g_global->variable_38EC) {
			emu_push(0xFFFF);
			emu_push(emu_cs); emu_push(0x021B); emu_cs = 0x0F78; emu_Map_SetSelectionObjectPosition();
			emu_sp += 2;

			emu_push(g_global->variable_3A00);
			emu_push(emu_cs); emu_push(0x0225); emu_cs = 0x0F78; emu_Map_SetSelectionObjectPosition();
			emu_sp += 2;

			g_global->variable_31C0 = g_global->variable_38EC;
		}

		if (g_global->variable_6D8D != 4 && g_global->variable_6D8D != 5) {
			emu_push(emu_cs); emu_push(0x0245); emu_cs = 0x1DD7; f__1DD7_01EB_0013_9C3C();
			if (emu_ax == 0) {
				emu_push(emu_cs); emu_push(0x0251); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0470_000E_519D();
				if (emu_ax == 0) {
					if (g_global->variable_700C == 0) {
						emu_push(2);
						emu_push(emu_cs); emu_push(0x0268); emu_cs = 0x3483; overlay(0x3483, 0); emu_Sound_Play();
						emu_sp += 2;

						g_global->variable_3E52 = 0;
					} else if (g_global->variable_3E52 > 0) {
						emu_push(5);
						emu_push(0);
						emu_push(emu_cs); emu_push(0x0285); emu_cs = 0x2537; f__2537_000C_001C_86CB();
						emu_sp += 4;

						emu_push(emu_ax + 17);
						emu_push(emu_cs); emu_push(0x0290); emu_cs = 0x3483; overlay(0x3483, 0); emu_Sound_Play();
						emu_sp += 2;

						g_global->variable_31BC = g_global->variable_76AC + 300;
						g_global->variable_3E52 = -1;
					} else {
						g_global->variable_3E52 = 0;
						if (g_global->variable_6D8D != 0 && g_global->variable_76AC > g_global->variable_31BC) {
							emu_push(emu_cs); emu_push(0x02D5); emu_cs = 0x1DD7; f__1DD7_088A_0026_5144();
							if (emu_ax == 0) {
								emu_push(8);
								emu_push(0);
								emu_push(emu_cs); emu_push(0x02E5); emu_cs = 0x2537; f__2537_000C_001C_86CB();
								emu_sp += 4;

								emu_push(emu_ax + 8);
								emu_push(emu_cs); emu_push(0x02F0); emu_cs = 0x3483; overlay(0x3483, 0); emu_Sound_Play();
								emu_sp += 2;

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

		emu_push(g_global->variable_3C26.s.cs); emu_push(g_global->variable_3C26.s.ip);
		emu_push(emu_cs); emu_push(0x031C); emu_cs = 0x34A2; overlay(0x34A2, 0); emu_GUI_Widget_HandleEvents();
		emu_sp += 4;
		key = emu_ax;

		if (g_global->selectionType >= 1 && g_global->selectionType <= 4) {
			if (g_global->selectionUnit.csip != 0x00000000) {
				if (g_global->variable_31C2 < g_global->tickGlobal) {
					emu_push(g_global->selectionUnit.s.cs); emu_push(g_global->selectionUnit.s.ip);
					emu_push(emu_cs); emu_push(0x0360); emu_cs = 0x1A34; f__1A34_27A8_0012_7198();
					emu_sp += 4;

					g_global->variable_31C2 = g_global->tickGlobal + 300;
				}

				if (g_global->selectionType != 1) {
					Unit *u = Unit_Get_ByMemory(g_global->selectionUnit);

					emu_push(u->position.s.y); emu_push(u->position.s.x);
					emu_push(emu_cs); emu_push(0x038F); emu_cs = 0x0F3F; emu_Tile_Center();
					emu_sp += 4;

					emu_push(emu_dx); emu_push(emu_ax);
					emu_push(emu_cs); emu_push(0x0398); emu_cs = 0x0F3F; emu_Tile_PackTile();
					emu_sp += 4;

					g_global->selectionPosition = emu_ax;
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

		emu_push(0);
		emu_push(0); emu_push(0);
		emu_push(emu_cs); emu_push(0x03EC); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
		emu_sp += 6;

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
