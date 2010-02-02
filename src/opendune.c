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
#include "unit.h"
#include "opendune.h"

extern void f__07D4_0000_0027_FA61();
extern void f__10E4_0675_0026_F126();
extern void f__10E4_09AB_0031_5E8E();
extern void f__10E4_0F1A_0088_7622();
extern void f__1A34_27A8_0012_7198();
extern void f__1DD7_01EB_0013_9C3C();
extern void f__1DD7_088A_0026_5144();
extern void f__22A6_0796_000B_9035();
extern void f__24DA_002D_0010_3EB2();
extern void f__2537_000C_001C_86CB();
extern void f__257A_000D_001A_3B75();
extern void f__2598_0000_0017_EB80();
extern void f__2B6C_0137_0020_C73F();
extern void f__2B6C_0169_001E_6939();
extern void f__2C17_000C_002F_3016();
extern void f__B483_0283_0014_983A();
extern void f__B483_0470_000E_519D();
extern void f__B483_04CB_0015_EBB4();
extern void f__B4B8_0D23_0010_BA99();
extern void f__B4B8_110D_000D_FD5C();
extern void f__B4E9_0000_0013_DC68();
extern void f__B4E9_0050_003F_292A();
extern void f__B511_0000_000E_B463();
extern void emu_GUI_PaletteAnimate();
extern void emu_GUI_PickHouse();
extern void emu_GUI_Widget_HandleEvents();
extern void emu_GameLoop_Structure();
extern void emu_GameLoop_Team();
extern void emu_Gameloop_IntroMenu();
extern void emu_Gameloop_LevelEnd();
extern void emu_InGame_Numpad_Move();
extern void emu_Map_SetSelectionObjectPosition();
extern void emu_Sound_PlayDuneInit();
extern void emu_String_Load();
extern void emu_Tile_Center();
extern void emu_Tile_PackTile();
extern void emu_Unknown_07AE_0000();
extern void overlay(uint16 cs, uint8 force);

/**
 * Decompiled function emu_GameLoop_Main()
 *
 * @name emu_GameLoop_Main
 * @implements 0642:000C:001A:AF29 ()
 * @implements 0642:0026:0015:FB5A
 * @implements 0642:003B:002F:E02F
 * @implements 0642:0083:0015:F8DA
 * @implements 0642:0098:002F:D02F
 * @implements 0642:00E0:000A:A0DD
 * @implements 0642:00EA:000A:99DA
 * @implements 0642:00F4:000D:15EE
 * @implements 0642:0101:000C:BC6B
 * @implements 0642:010D:0006:E56C
 * @implements 0642:0113:000C:CF74
 * @implements 0642:011F:000B:70BA
 * @implements 0642:012A:0011:F8BB
 * @implements 0642:012B:0010:D43B
 * @implements 0642:013B:000C:B04E
 * @implements 0642:0147:0008:2A18
 * @implements 0642:014F:0009:07B9
 * @implements 0642:0158:0006:EAFC
 * @implements 0642:015E:0009:B0F3
 * @implements 0642:0167:000A:D6BC
 * @implements 0642:0171:0006:E56C
 * @implements 0642:0177:0030:A2C8
 * @implements 0642:0195:0012:6F93
 * @implements 0642:01A7:0006:9C2A
 * @implements 0642:01A8:0005:F82B
 * @implements 0642:01AD:000F:C47F
 * @implements 0642:01BC:000E:F44C
 * @implements 0642:01CA:0011:EBF0
 * @implements 0642:01DB:000D:A777
 * @implements 0642:01E8:000B:70BA
 * @implements 0642:01F3:0028:7517
 * @implements 0642:0209:0012:4ECE
 * @implements 0642:021B:000A:0B5A
 * @implements 0642:0225:0011:537A
 * @implements 0642:022C:000A:93B9
 * @implements 0642:0236:000A:17BC
 * @implements 0642:0240:0005:7A4B
 * @implements 0642:0245:0007:AEBB
 * @implements 0642:024C:0005:2EF2
 * @implements 0642:0251:0007:AEBE
 * @implements 0642:0258:0010:94D1
 * @implements 0642:0268:000A:7582
 * @implements 0642:0272:0013:DFDC
 * @implements 0642:0285:000B:69BA
 * @implements 0642:0290:001E:E9C7
 * @implements 0642:02AE:0027:9BAA
 * @implements 0642:02D0:0005:6B6D
 * @implements 0642:02D5:0010:86AA
 * @implements 0642:02E5:000B:70BA
 * @implements 0642:02F0:001E:0018
 * @implements 0642:0306:0008:64F7
 * @implements 0642:030E:000E:8DCF
 * @implements 0642:031C:0012:D4EA
 * @implements 0642:032E:0007:2A20
 * @implements 0642:0335:002B:2F1D
 * @implements 0642:0353:000D:A6BA
 * @implements 0642:0360:002F:5F80
 * @implements 0642:0377:0018:8AC7
 * @implements 0642:038F:0009:3ADE
 * @implements 0642:0398:000D:7292
 * @implements 0642:039D:0008:DF89
 * @implements 0642:03A5:0009:BE77
 * @implements 0642:03AE:000D:DD0B
 * @implements 0642:03BB:0007:BB52
 * @implements 0642:03C2:0005:BF6B
 * @implements 0642:03C7:0005:F04C
 * @implements 0642:03CC:0005:ED74
 * @implements 0642:03D1:0008:75E4
 * @implements 0642:03D9:0003:CA1A
 * @implements 0642:03DC:0002:C03A
 * @implements 0642:03DE:000E:F2B7
 * @implements 0642:03EC:0016:21F1
 * @implements 0642:0402:000D:9F2A
 * @implements 0642:0405:000A:88A8
 * @implements 0642:040F:0005:6168
 * @implements 0642:0414:0014:A716
 * @implements 0642:042B:0005:6168
 * @implements 0642:0430:0008:F5FA
 * @implements 0642:0438:000A:426B
 * @implements 0642:0442:000B:7BE4
 * @implements 0642:044D:0024:22E8
 * @implements 0642:0471:0008:4947
 *
 * Called From: B480:02CF:0032:E148
 */
void emu_GameLoop_Main()
{
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	GameLoop_Main();
}

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
	emu_push(emu_cs); emu_push(0x012A); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0283_0014_983A();
	emu_sp += 2;

	while (true) {
		if (g_global->variable_38BE == 2) {
			emu_push(28);
			emu_push(emu_cs); emu_push(0x013B); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0283_0014_983A();
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
			emu_push(emu_cs); emu_push(0x01F3); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0283_0014_983A();
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
						emu_push(emu_cs); emu_push(0x0268); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0283_0014_983A();
						emu_sp += 2;

						g_global->variable_3E52 = 0;
					} else if (g_global->variable_3E52 > 0) {
						emu_push(5);
						emu_push(0);
						emu_push(emu_cs); emu_push(0x0285); emu_cs = 0x2537; f__2537_000C_001C_86CB();
						emu_sp += 4;

						emu_push(emu_ax + 17);
						emu_push(emu_cs); emu_push(0x0290); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0283_0014_983A();
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
								emu_push(emu_cs); emu_push(0x02F0); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0283_0014_983A();
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

			emu_push(emu_cs); emu_push(0x03C2); emu_cs = 0x16C5; emu_GameLoop_Team();
			emu_push(emu_cs); emu_push(0x03C7); emu_cs = 0x176C; emu_GameLoop_Unit();
			emu_push(emu_cs); emu_push(0x03CC); emu_cs = 0x0972; emu_GameLoop_Structure();
			emu_push(emu_cs); emu_push(0x03D1); emu_cs = 0x1391; emu_GameLoop_House();

			emu_push(0);
			emu_push(emu_cs); emu_push(0x03D9); emu_cs = 0x07D4; f__07D4_0000_0027_FA61();
			emu_sp += 2;
		}

		emu_push(0);
		emu_push(0); emu_push(0);
		emu_push(emu_cs); emu_push(0x03EC); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
		emu_sp += 6;

		if (g_global->variable_38F8 != 0 && g_global->debugScenario == 0) {
			emu_push(emu_cs); emu_push(0x0402); emu_cs = 0x1423; emu_Gameloop_LevelEnd();
			g_global->variable_38F8 = emu_ax;
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
