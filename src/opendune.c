/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "os/math.h"
#include "os/strings.h"
#include "os/sleep.h"
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
#include "wsa.h"

extern void f__01F7_103F_0010_4132();
extern void f__1DB6_0004_000B_BFBA();
extern void f__1DD7_0B53_0025_36F7();
extern void f__22A3_000D_0010_9291();
extern void f__22A6_0796_000B_9035();
extern void emu_Tools_Malloc();
extern void f__23E1_0334_000B_CF65();
extern void emu_Tools_Free();
extern void f__24D0_000D_0039_C17D();
extern void f__24DA_0004_000E_FD1B();
extern void f__24DA_002D_0010_3EB2();
extern void f__2533_000D_001C_74EC();
extern void f__257A_000D_001A_3B75();
extern void f__2598_0000_0017_EB80();
extern void f__259E_0006_0016_858A();
extern void f__259E_0021_001A_E253();
extern void f__259E_0040_0015_5E4A();
extern void f__263B_002F_0016_FDB0();
extern void emu_Unknown_2903_090A();
extern void f__29E8_07FA_0020_177A();
extern void f__2B1E_0189_001B_E6CF();
extern void f__2B4C_0002_0029_64AF();
extern void f__2B6C_0137_0020_C73F();
extern void f__2B6C_0169_001E_6939();
extern void f__2BA5_0006_009C_A3D1();
extern void f__2C17_000C_002F_3016();
extern void f__B483_04CB_0015_EBB4();
extern void f__B488_0000_0027_45A9();
extern void f__B491_0819_000C_0B7D();
extern void f__B4B8_110D_000D_FD5C();
extern void f__B4B8_116F_0013_15F7();
extern void f__B4E6_0108_004A_C989();
extern void f__B4E6_0200_0091_FAEA();
extern void f__B4ED_0BD4_001B_FFBA();
extern void f__B4ED_0BF4_001B_A3A9();
extern void f__B500_0000_0008_FE1F();
extern void d__B511_0000_000E_B463();
extern void d__B511_001E_0010_AE09();
extern void d__B511_0C35_002A_C70F();
extern void d__B511_0C64_002A_C757();
extern void f__B518_0558_0010_240A();
extern void f__B536_0129_000A_8178();
extern void emu_GUI_DrawFilledRectangle();
extern void emu_GUI_SaveLoad_List();
extern void emu_GUI_ShowEndStats();
extern void emu_GUI_ShowMap();
extern void emu_Input_History_Clear();
extern void emu_Input_Keyboard_NextKey();
extern void emu_Mouse_Init();
extern void emu_Tools_Var79E4_Init();
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

static void GameLoop_B4ED_0000(csip32 arg06, csip32 arg0A, uint16 arg0E, csip32 arg10, csip32 arg14)
{
	uint8 i;
	/* XXX -- The next lines should be uint8 values[16] */
	uint8 *values;
	emu_sp -= 16;
	values = &emu_get_memory8(emu_ss, emu_sp, 0x0);

	VARIABLE_NOT_USED(arg14);

	g_global->variable_805E = arg06;
	g_global->variable_805A = arg0A;
	g_global->variable_8056 = arg10;
	g_global->variable_8062 = arg0E;
	g_global->variable_6C6C = 0;
	g_global->variable_8072 = 0;
	g_global->variable_8070 = 0;
	g_global->variable_8068 = 0;
	g_global->variable_80AE = 0;
	g_global->variable_80AC = 0;
	g_global->variable_8074 = 0;
	g_global->variable_806C = 0;
	g_global->variable_806A = 0xFFFF;

	emu_push(emu_cs); emu_push(0x0079); emu_cs = 0x22A6; f__22A6_0796_000B_9035();

	File_ReadBlockFile("INTRO.PAL", (void *)emu_get_memorycsip(g_global->variable_3C32), 768);

	memcpy(emu_get_memorycsip(g_global->variable_998A), emu_get_memorycsip(g_global->variable_3C32), 768);

	g_global->introFnt = Font_LoadFile("INTRO.FNT");

	Font_Select(g_global->introFnt);

	emu_push(0);
	emu_push(emu_cs); emu_push(0x00DB); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	emu_sp += 2;

	memcpy(g_global->variable_809A, &emu_get_memorycsip(g_global->variable_3C32)[(144 + (((uint16 *)emu_get_memorycsip(g_global->variable_805A))[1] * 16)) * 3], 6 * 3);

	memset(&emu_get_memorycsip(g_global->variable_3C32)[215 * 3], 0, 6 * 3);

	memcpy(g_global->variable_8088, g_global->variable_809A, 6 * 3);

	memset(g_global->variable_8076, 0, 6 * 3);


	values[0] = 0;
	for (i = 0; i < 6; i++) values[i + 1] = 215 + i;

	emu_push(emu_ss); emu_push(emu_sp + 2); /* values */
	emu_push(emu_cs); emu_push(0x017E); emu_cs = 0x259E; f__259E_0021_001A_E253();
	emu_sp += 4;

	/* XXX -- Should be removed */
	emu_sp += 16;
}

static void GameLoop_B4ED_0184()
{
	emu_push(g_global->introFnt.s.cs); emu_push(g_global->introFnt.s.ip);
	emu_push(emu_cs); emu_push(0x0194); emu_cs = 0x23E1; emu_Tools_Free();
	emu_sp += 4;

	GUI_DrawText_Wrapper(NULL, 0, 0, 0, 0, 0x1);
	GUI_DrawText_Wrapper(NULL, 0, 0, 0, 0, 0x2);

	emu_push(0x3C);
	emu_push(g_global->variable_3C36.s.cs); emu_push(g_global->variable_3C36.s.ip);
	emu_push(emu_cs); emu_push(0x01E3); emu_cs = 0x259E; f__259E_0006_0016_858A();
	emu_sp += 6;

	emu_push(0);
	emu_push(emu_cs); emu_push(0x01EE); emu_cs = 0x24DA; f__24DA_0004_000E_FD1B();
	emu_sp += 2;

	emu_push(emu_cs); emu_push(0x01F4); emu_cs = 0x29E8; emu_Input_History_Clear();

	emu_push(7);
	emu_push(emu_cs); emu_push(0x01FD); emu_cs = 0x24DA; f__24DA_002D_0010_3EB2();
	emu_sp += 2;
}

static void GameLoop_B4ED_075D(uint8 animation)
{
	struct_1A2C *var8056 = &((struct_1A2C *)emu_get_memorycsip(g_global->variable_8056))[g_global->variable_8070];

	if (var8056->variable_0000 > animation || var8056->variable_0002 > g_global->variable_8068) return;

	Voice_Play(var8056->variable_0001);

	g_global->variable_8070++;
}

static void GameLoop_B4ED_07B6(uint8 animation)
{
	struct_19F0 *var805A;
	uint8 i;
	/* XXX -- The next lines should be uint8 values[16] */
	uint8 *values;
	emu_sp -= 16;
	values = &emu_get_memory8(emu_ss, emu_sp, 0x0);

	g_global->variable_8068++;

	GameLoop_B4ED_075D(animation);

	var805A = &((struct_19F0 *)emu_get_memorycsip(g_global->variable_805A))[g_global->variable_8072];

	if (var805A->stringID == 0xFFFF || var805A->variable_0004 > animation) { emu_sp += 16; return; } /* XXX -- Should be return */

	if (g_global->variable_8074 != 0) {
		if (g_global->variable_806A == 0xFFFF) g_global->variable_806A = var805A->variable_0008;

		if (g_global->variable_806A-- != 0) { emu_sp += 16; return; } /* XXX -- Should be return */

		g_global->variable_8074 = 0;
		g_global->variable_8072++;
		g_global->variable_80AE = 2;

		if (var805A->variable_0009 != 0) {
			uint8 i;

			g_global->variable_80AC = var805A->variable_0009;

			for (i = 0; i < 18; i++) {
				g_global->variable_8076[i] = g_global->variable_809A[i] / g_global->variable_80AC;
				if (g_global->variable_8076[i] == 0) g_global->variable_8076[i] = 1;
			}

			{ emu_sp += 16; return; } /* XXX -- Should be return */
		}

		memcpy(g_global->variable_8076, g_global->variable_809A, 18);
		g_global->variable_80AC = 1;
		{ emu_sp += 16; return; } /* XXX -- Should be return */
	}

	if (g_global->variable_806A == 0xFFFF) g_global->variable_806A = var805A->variable_0006;

	if (g_global->variable_806A-- != 0) { emu_sp += 16; return; } /* XXX -- Should be return */

	memcpy(g_global->variable_809A, &emu_get_memorycsip(g_global->variable_3C32)[(144 + (var805A->variable_0002 * 16)) * 3], 18);

	g_global->variable_8074 = 1;

	emu_push(0);
	emu_push(199);
	emu_push(319);
	emu_push(var805A->variable_0005 == 85 ? 0 : var805A->variable_0005);
	emu_push(0);
	emu_push(emu_cs); emu_push(0x091B); emu_cs = 0x22A6; emu_GUI_DrawFilledRectangle();
	emu_sp += 10;

	if (g_global->variable_6D8F != 0 && g_global->variable_6D8F != 4 && g_global->variable_8062 != 0xFFFF && g_global->variable_8072 != 0 && g_global->language == LANGUAGE_ENGLISH) {
		uint16 loc06 = g_global->variable_8062 + g_global->variable_8072;

		Unknown_B483_0363(loc06);

		if (g_global->variable_0312[loc06][5] != 0) {
			emu_push(var805A->variable_0005);
			emu_push(var805A->stringID);
			emu_push(emu_cs); emu_push(0x0978); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
			emu_sp += 2;
			emu_push(emu_dx); emu_push(emu_ax);
			emu_push(emu_cs); emu_push(0x0980); emu_cs = 0x34ED; overlay(0x34ED, 0); f__B4ED_0BF4_001B_A3A9();
			emu_sp += 6;
		}
	} else {
		if (var805A->stringID != 0) {
			emu_push(var805A->variable_0005);
			emu_push(var805A->stringID);
			emu_push(emu_cs); emu_push(0x09A3); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
			emu_sp += 2;
			emu_push(emu_dx); emu_push(emu_ax);
			emu_push(emu_cs); emu_push(0x09AB); emu_cs = 0x34ED; overlay(0x34ED, 0); f__B4ED_0BF4_001B_A3A9();
			emu_sp += 6;
		}
	}

	g_global->variable_80AE = 1;

	if (var805A->variable_0007 != 0) {
		uint8 i;

		g_global->variable_80AC = var805A->variable_0007;

		for (i = 0; i < 18; i++) {
			g_global->variable_8076[i] = g_global->variable_809A[i] / g_global->variable_80AC;
			if (g_global->variable_8076[i] == 0) g_global->variable_8076[i] = 1;
		}
	} else {
		memcpy(g_global->variable_8076, g_global->variable_809A, 18);
		g_global->variable_80AC = 1;
	}

	if (g_global->playerHouseID != HOUSE_INDEX_INVALID || g_global->variable_8072 != 2) { emu_sp += 16; return; } /* XXX -- Should be return */

	GUI_DrawText_Wrapper(NULL, 0, 0, 0, 0, 0x21);

	GUI_DrawText_Wrapper("Copyright (c) 1992 Westwood Studios, Inc.", 160, 189, 215, 0, 0x112);

	emu_get_memory16(emu_ds, 0x00, 0x6C6C) = 0x0;
	emu_get_memory8(emu_ss, emu_bp, -0x16) = 0x0;

	values[0] = 0;
	for (i = 0; i < 6; i++) values[i + 1] = 215 + i;

	emu_push(emu_ss); emu_push(emu_sp + 2); /* values */
	emu_push(emu_cs); emu_push(0x0A8F); emu_cs = 0x259E; f__259E_0021_001A_E253();
	emu_sp += 4;

	Font_Select(g_global->introFnt);

	/* XXX -- Should be removed */
	emu_sp += 16;
}

static uint16 GameLoop_B4ED_0AA5(bool arg06)
{
	Unknown_B483_0470();

	if (g_global->variable_80AE == 0) return 0;

	if (g_global->variable_806C >= g_global->variable_76AC && !arg06) return g_global->variable_80AE;

	g_global->variable_806C = g_global->variable_76AC + 7;
	if (--g_global->variable_80AC == 0 || arg06) {
		if (g_global->variable_80AE == 1) {
			memcpy(g_global->variable_8088, g_global->variable_809A, 18);
		} else {
			memset(g_global->variable_8088, 0, 18);
		}

		g_global->variable_80AE = 0;
	} else {
		uint8 i;

		for (i = 0; i < 18; i++) {
			if (g_global->variable_80AE == 1) {
				g_global->variable_8088[i] = min(g_global->variable_8088[i] + g_global->variable_8076[i], g_global->variable_809A[i]);
			} else {
				g_global->variable_8088[i] = max(g_global->variable_8088[i] - g_global->variable_8076[i], 0);
			}
		}
	}

	if (arg06) return g_global->variable_80AE;

	emu_push(g_global->variable_998A.s.cs); emu_push(g_global->variable_998A.s.ip);
	emu_push(emu_cs); emu_push(0x0BAF); emu_cs = 0x34ED; overlay(0x34ED, 0); f__B4ED_0BD4_001B_FFBA();
	emu_sp += 4;

	emu_push(221);
	emu_push(125);
	emu_push(g_global->variable_998A.s.cs); emu_push(g_global->variable_998A.s.ip);
	emu_push(emu_cs); emu_push(0x0BC6); emu_cs = 0x2BA5; f__2BA5_0006_009C_A3D1();
	emu_sp += 8;

	return g_global->variable_80AE;
}

static void GameLoop_B4ED_0200()
{
	struct_19A8 *var805E;
	uint8 animation = 0;

	var805E = (struct_19A8 *)emu_get_memorycsip(g_global->variable_805E);

	while (var805E->variable_0004 != 0) {
		uint16 loc04;
		uint16 posX = 0;
		uint16 posY = 0;
		csip32 header_csip;
		uint32 loc10 = g_global->variable_76AC + var805E->variable_0004 * 6;
		uint32 loc14 = loc10 + 30;
		uint32 loc18;
		uint32 loc1C;
		uint16 mode = var805E->flags & 0x3;
		uint16 loc20;
		uint32 loc24;
		uint16 locdi;
		uint16 frame;
		WSAHeader *header;

		if ((var805E->flags & 0x20) == 0) {
			posX = 8;
			posY = 24;
		}

		g_global->variable_8068 = 0;

		if (mode == 0) {
			header_csip.csip = 0;
			frame = 0;
		} else {
			if (mode == 3) {
				frame = var805E->variable_0005;
				loc20 = 0x1;
			} else {
				frame = 0;
				loc20 = var805E->flags & 0x40;
			}

			if ((var805E->flags & 0x480) != 0) {
				emu_push(3);
				emu_push(emu_cs); emu_push(0x02D6); emu_cs = 0x24DA; f__24DA_0004_000E_FD1B();
				emu_sp += 2;

				emu_push(5);
				emu_push(emu_cs); emu_push(0x02E0); emu_cs = 0x252E; emu_Memory_GetBlock1();
				emu_sp += 2;
				header_csip.s.cs = emu_dx;
				header_csip.s.ip = emu_ax;

				loc24 = g_global->variable_6CD3[2][1] + g_global->variable_6CD3[3][0];
				loc20 = 0x0;
			} else {
				emu_push(3);
				emu_push(emu_cs); emu_push(0x030C); emu_cs = 0x252E; emu_Memory_GetBlock1();
				emu_sp += 2;
				header_csip.s.cs = emu_dx;
				header_csip.s.ip = emu_ax;

				loc24 = g_global->variable_6CD3[1][1] + g_global->variable_6CD3[2][1] + g_global->variable_6CD3[3][0];
			}

			sprintf((char *)g_global->variable_9939, "%s.WSA", emu_get_memorycsip(var805E->string));

			emu_push(0); emu_push(0);
			emu_push(loc20);
			emu_push(loc24 >> 16); emu_push(loc24 & 0xFFFF);
			emu_push(header_csip.s.cs); emu_push(header_csip.s.ip);
			emu_push(0x353F); emu_push(0x9939);
			emu_push(emu_cs); emu_push(0x036C); emu_cs = 0x352A; overlay(0x352A, 0); emu_WSA_LoadFile();
			emu_sp += 18;
			header_csip.s.cs = emu_dx;
			header_csip.s.ip = emu_ax;
		}

		header = (WSAHeader *)emu_get_memorycsip(header_csip);

		locdi = 0;
		if ((var805E->flags & 0x8) != 0) {
			loc10 -= 45;
			locdi++;
		} else {
			if ((var805E->flags & 0x10) != 0) {
				loc10 -= 15;
				locdi++;
			}
		}

		if ((var805E->flags & 0x4) != 0) {
			GameLoop_B4ED_07B6(animation);

			emu_push(0);
			emu_push(0);
			emu_push(posY);
			emu_push(posX);
			emu_push(frame++);
			emu_push(header_csip.s.cs); emu_push(header_csip.s.ip);
			emu_push(emu_cs); emu_push(0x03D4); emu_cs = 0x352A; overlay(0x352A, 0); emu_WSA_DisplayFrame();
			emu_sp += 14;

			GameLoop_B4ED_0AA5(true);

			emu_push(g_global->variable_3C32.s.cs); emu_push(g_global->variable_3C32.s.ip);
			emu_push(emu_cs); emu_push(0x03EE); emu_cs = 0x34ED; overlay(0x34ED, 0); f__B4ED_0BD4_001B_FFBA();
			emu_sp += 4;

			emu_push(45);
			emu_push(g_global->variable_3C32.s.cs); emu_push(g_global->variable_3C32.s.ip);
			emu_push(emu_cs); emu_push(0x0401); emu_cs = 0x259E; f__259E_0006_0016_858A();
			emu_sp += 6;

			locdi++;
		} else {
			if ((var805E->flags & 0x480) != 0) {
				GameLoop_B4ED_07B6(animation);

				emu_push(0);
				emu_push(2);
				emu_push(posY);
				emu_push(posX);
				emu_push(frame++);
				emu_push(header_csip.s.cs); emu_push(header_csip.s.ip);
				emu_push(emu_cs); emu_push(0x043D); emu_cs = 0x352A; overlay(0x352A, 0); emu_WSA_DisplayFrame();
				emu_sp += 14;

				locdi++;

				if ((var805E->flags & 0x480) == 0x80) {
					emu_push(0);
					emu_push(1);
					emu_push(0);
					emu_push(2);
					emu_push(120);
					emu_push(304);
					emu_push(24);
					emu_push(8);
					emu_push(emu_cs); emu_push(0x047B); emu_cs = 0x3488; overlay(0x3488, 0); f__B488_0000_0027_45A9();
					emu_sp += 16;
				} else if ((var805E->flags & 0x480) == 0x400) {
					emu_push(0);
					emu_push(2);
					emu_push(120);
					emu_push(38);
					emu_push(24);
					emu_push(1);
					emu_push(24);
					emu_push(1);
					emu_push(emu_cs); emu_push(0x04A4); emu_cs = 0x2C17; f__2C17_000C_002F_3016();
					emu_sp += 16;
				}
			}
		}

		loc1C = loc10 - g_global->variable_76AC;
		loc18 = 0;
		loc04 = 1;

		switch (mode) {
			case 0:
				loc04 = var805E->variable_0005 - locdi;
				loc18 = loc1C / loc04;
				break;

			case 1:
				loc04 = WSA_GetFrameCount(header);
				loc18 = loc1C / var805E->variable_0005;
				break;

			case 2:
				loc04 = WSA_GetFrameCount(header) - locdi;
				loc18 = loc1C / loc04;
				loc10 -= loc18;
				break;

			case 3:
				frame = var805E->variable_0005;
				loc04 = 1;
				loc18 = loc1C / 20;
				break;

			default:
				emu_push(emu_cs); emu_push(0x0579); emu_cs = 0x3500; overlay(0x3500, 0); f__B500_0000_0008_FE1F();
				printf("Bad mode in animation #%i.\r\n", animation);
				exit(0);
		}

		while (loc10 > g_global->variable_76AC) {
			g_global->variable_76B4 = loc18;

			GameLoop_B4ED_07B6(animation);

			emu_push(0);
			emu_push(0);
			emu_push(posY);
			emu_push(posX);
			emu_push(frame++);
			emu_push(header_csip.s.cs); emu_push(header_csip.s.ip);
			emu_push(emu_cs); emu_push(0x05CA); emu_cs = 0x352A; overlay(0x352A, 0); emu_WSA_DisplayFrame();
			emu_sp += 14;

			if (mode == 1 && frame == loc04) {
				frame = 0;
			} else {
				if (mode == 3) frame--;
			}

			emu_push(emu_cs); emu_push(0x05E8); emu_cs = 0x29E8; emu_Input_Keyboard_NextKey();

			if (emu_ax != 0 && g_global->variable_37B4 != 0) {
				emu_push(header_csip.s.cs); emu_push(header_csip.s.ip);
				emu_push(emu_cs); emu_push(0x05FE); emu_cs = 0x352A; overlay(0x352A, 0); emu_WSA_Unload();
				emu_sp += 4;

				return;
			}

			do {
				GameLoop_B4ED_0AA5(false);
			} while (g_global->variable_76B4 != 0 && loc10 > g_global->variable_76AC);
		}

		if (mode == 2) {
			do {
				GameLoop_B4ED_07B6(animation);

				emu_push(0);
				emu_push(0);
				emu_push(posY);
				emu_push(posX);
				emu_push(frame++);
				emu_push(header_csip.s.cs); emu_push(header_csip.s.ip);
				emu_push(emu_cs); emu_push(0x066E); emu_cs = 0x352A; overlay(0x352A, 0); emu_WSA_DisplayFrame();
				emu_sp += 14;
			} while (emu_ax != 0);
		}

		if ((var805E->flags & 0x10) != 0) {
			memset(&emu_get_memorycsip(g_global->variable_998A)[3 * 1], 63, 3 * 255);

			emu_push(g_global->variable_998A.s.cs); emu_push(g_global->variable_998A.s.ip);
			emu_push(emu_cs); emu_push(0x06A9); emu_cs = 0x34ED; overlay(0x34ED, 0); f__B4ED_0BD4_001B_FFBA();
			emu_sp += 4;

			emu_push(15);
			emu_push(g_global->variable_998A.s.cs); emu_push(g_global->variable_998A.s.ip);
			emu_push(emu_cs); emu_push(0x06BC); emu_cs = 0x259E; f__259E_0006_0016_858A();
			emu_sp += 6;

			memcpy(emu_get_memorycsip(g_global->variable_998A), emu_get_memorycsip(g_global->variable_3C32), 3 * 256);
		}

		if ((var805E->flags & 0x8) != 0) {
			GameLoop_B4ED_0AA5(true);

			emu_push(g_global->variable_998A.s.cs); emu_push(g_global->variable_998A.s.ip);
			emu_push(emu_cs); emu_push(0x06FE); emu_cs = 0x34ED; overlay(0x34ED, 0); f__B4ED_0BD4_001B_FFBA();
			emu_sp += 4;

			emu_push(45);
			emu_push(g_global->variable_998A.s.cs); emu_push(g_global->variable_998A.s.ip);
			emu_push(emu_cs); emu_push(0x0711); emu_cs = 0x259E; f__259E_0006_0016_858A();
			emu_sp += 6;
		}

		emu_push(header_csip.s.cs); emu_push(header_csip.s.ip);
		emu_push(emu_cs); emu_push(0x071F); emu_cs = 0x352A; overlay(0x352A, 0); emu_WSA_Unload();
		emu_sp += 4;

		animation++;
		var805E++;

		while (loc14 > g_global->variable_76AC) sleep(0);
	}
}

static void GameLoop_B4AE_0000()
{
	csip32 args[4];

	emu_push(emu_cs); emu_push(0x0008); emu_cs = 0x29E8; emu_Input_History_Clear();

	switch (g_global->campaignID) {
		case 4:
			switch (g_global->playerHouseID) {
				case HOUSE_ATREIDES:
					args[0].csip = 0x353F1C1A;
					args[1].csip = 0x353F1C42;
					args[2].csip = 0x353F1C88;
					args[3].csip = 0x353F1C8B;
					break;

				case HOUSE_ORDOS:
					args[0].csip = 0x353F1CEE;
					args[1].csip = 0x353F1D16;
					args[2].csip = 0x353F1D5C;
					args[3].csip = 0x353F1D5F;
					break;

				case HOUSE_HARKONNEN:
					args[0].csip = 0x353F1DC2;
					args[1].csip = 0x353F1DEA;
					args[2].csip = 0x353F1E30;
					args[3].csip = 0x353F1E33;
					break;

				default: return;
			} break;

		case 8:
			switch (g_global->playerHouseID) {
				case HOUSE_ATREIDES:
					args[0].csip = 0x353F1CEC;
					args[1].csip = 0x353F1CE9;
					args[2].csip = 0x353F1CAD;
					args[3].csip = 0x353F1C8D;
					break;

				case HOUSE_ORDOS:
					args[0].csip = 0x353F1D61;
					args[1].csip = 0x353F1D81;
					args[2].csip = 0x353F1DBD;
					args[3].csip = 0x353F1DC0;
					break;

				case HOUSE_HARKONNEN:
					args[0].csip = 0x353F1E35;
					args[1].csip = 0x353F1E55;
					args[2].csip = 0x353F1E9B;
					args[3].csip = 0x353F1E9E;
					break;

				default: return;
			}
			break;

		default: return;
	}

	GameLoop_B4ED_0000(args[0], args[1], 0xFFFF, args[2], args[3]);

	Music_Play(0x22);

	GameLoop_B4ED_0200();

	emu_push(emu_cs); emu_push(0x012A); emu_cs = 0x1DD7; f__1DD7_0B53_0025_36F7();

	GameLoop_B4ED_0184();
}

static void GameLoop_B4AB_0000()
{
	csip32 args[4];
	uint16 sound;

	String_Load("INTRO");

	emu_push(0xFFFE);
	emu_push(emu_cs); emu_push(0x0018); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_04CB_0015_EBB4();
	emu_sp += 2;

	switch (g_global->playerHouseID) {
		case HOUSE_HARKONNEN:
			args[0].csip = 0x353F1A31;
			args[1].csip = 0x353F1A91;
			args[2].csip = 0x353F1AE1;
			args[3].csip = 0x353F1AF9;
			sound = 0x1E;
			break;

		case HOUSE_ORDOS:
			args[0].csip = 0x353F1AFB;
			args[1].csip = 0x353F1B6B;
			args[2].csip = 0x353F1BB1;
			args[3].csip = 0x353F1BBA;
			sound = 0x20;
			break;

		default:
		case HOUSE_ATREIDES:
			args[0].csip = 0x353F19A8;
			args[1].csip = 0x353F19F0;
			args[2].csip = 0x353F1A2C;
			args[3].csip = 0x353F1A2F;
			sound = 0x1F;
			break;
	}

	GameLoop_B4ED_0000(args[0], args[1], 0xFFFF, args[2], args[3]);

	Music_Play(sound);

	GameLoop_B4ED_0200();

	emu_push(emu_cs); emu_push(0x0060); emu_cs = 0x1DD7; f__1DD7_0B53_0025_36F7();

	GameLoop_B4ED_0184();

	emu_push(emu_cs); emu_push(0x00B6); emu_cs = 0x3491; overlay(0x3491, 0); f__B491_0819_000C_0B7D();
}

/**
 * Checks if the level comes to an end. If so, it shows all end-level stuff,
 *  and prepares for the next level.
 */
static void GameLoop_LevelEnd()
{
	if (g_global->variable_60A2 >= g_global->tickGlobal && g_global->debugForceWin == 0) return;

	if (GameLoop_IsLevelFinished()) {
		Music_Play(0);

		g_global->cursorSpriteID = 0;

		emu_push(g_sprites[0].s.cs); emu_push(g_sprites[0].s.ip);
		emu_push(0);
		emu_push(0);
		emu_push(emu_cs); emu_push(0x030A); emu_cs = 0x2B4C; f__2B4C_0002_0029_64AF();
		emu_sp += 8;

		Unknown_B483_0363(0xFFFE);

		GUI_ChangeSelectionType(0);

		if (GameLoop_IsLevelWon()) {
			Unknown_B483_0363(40);

			GUI_DisplayModalMessage(String_Get_ByIndex(0x52), 0xFFFF); /* "You have successfully completed your mission." */

			d__B511_0C35_002A_C70F();

			Sprites_UnloadTiles();

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

				GameLoop_B4AB_0000();

				emu_push(emu_cs); emu_push(0x03B6); emu_cs = 0x3500; overlay(0x3500, 0); f__B500_0000_0008_FE1F();

				exit(0);
			}

			emu_push(emu_cs); emu_push(0x03C4); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();

			GameLoop_B4AE_0000();

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

					exit(0);
				}

				Sprites_Load(0, 7, g_sprites);
			}
		} else {
			Unknown_B483_0363(41);

			GUI_DisplayModalMessage(String_Get_ByIndex(0x53), 0xFFFF); /* "You have failed your mission " */

			d__B511_0C64_002A_C757();

			Sprites_UnloadTiles();

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

		Sprites_LoadTiles();

		g_global->variable_38BE = 1;
		g_global->debugForceWin = 0;
	}

	g_global->variable_60A2 = g_global->tickGlobal + 300;
}

/**
 * Logos at begin of intro.
 */
static void Gameloop_Logos()
{
	uint16 old2598;
	csip32 wsaBuffer;
	uint16 frame;

	emu_push(0);
	emu_push(emu_cs); emu_push(0x009D); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	emu_sp += 2;
	old2598 = emu_ax;

	emu_push(g_global->variable_3C36.s.cs); emu_push(g_global->variable_3C36.s.ip);
	emu_push(emu_cs); emu_push(0x00AE); emu_cs = 0x259E; f__259E_0040_0015_5E4A();
	emu_sp += 4;

	assert(g_global->variable_6640.csip == 0x22A60796);
	emu_push(emu_cs); emu_push(0x00BA); emu_cs = 0x22A6; f__22A6_0796_000B_9035();

	File_ReadBlockFile("WESTWOOD.PAL", emu_get_memorycsip(g_global->variable_998A), 0x300);

	emu_push(3);
	emu_push(emu_cs); emu_push(0x0102); emu_cs = 0x252E; emu_Memory_GetBlock1();
	emu_sp += 2;

	emu_push(0); emu_push(0);
	emu_push(1);
	{
		uint32 temp = g_global->variable_6CD3[1][1] + g_global->variable_6CD3[2][1] + g_global->variable_6CD3[3][0];
		emu_push(temp >> 16); emu_push(temp & 0xFFFF);
	}
	emu_push(emu_dx); emu_push(emu_ax); /* memory block */
	emu_push(0x353F); emu_push(0x23BD); /* "WESTWOOD.WSA" */
	emu_push(emu_cs); emu_push(0x010F); emu_cs = 0x352A; overlay(0x352A, 0); emu_WSA_LoadFile();
	emu_sp += 18;
	wsaBuffer.s.cs = emu_dx;
	wsaBuffer.s.ip = emu_ax;

	frame = 0;

	emu_push(0);
	emu_push(0);
	emu_push(0);
	emu_push(0);
	emu_push(frame++);
	emu_push(wsaBuffer.s.cs); emu_push(wsaBuffer.s.ip);
	emu_push(emu_cs); emu_push(0x0134); emu_cs = 0x352A; overlay(0x352A, 0); emu_WSA_DisplayFrame();
	emu_sp += 14;

	emu_push(0x3C);
	emu_push(g_global->variable_998A.s.cs); emu_push(g_global->variable_998A.s.ip);
	emu_push(emu_cs); emu_push(0x0148); emu_cs = 0x259E; f__259E_0006_0016_858A();
	emu_sp += 6;

	Music_Play(0x24);

	g_global->variable_76B4 = 0x168;

	while (true) {
		uint32 loc04;

		emu_push(0);
		emu_push(0);
		emu_push(0);
		emu_push(0);
		emu_push(frame++);
		emu_push(wsaBuffer.s.cs); emu_push(wsaBuffer.s.ip);
		emu_push(emu_cs); emu_push(0x01A7); emu_cs = 0x352A; overlay(0x352A, 0); emu_WSA_DisplayFrame();
		emu_sp += 14;
		if (emu_ax == 0) break;

		loc04 = g_global->variable_76AC + 6;
		while (loc04 > g_global->variable_76AC) sleep(0);
	}

	emu_push(wsaBuffer.s.cs); emu_push(wsaBuffer.s.ip);
	emu_push(emu_cs); emu_push(0x01B9); emu_cs = 0x352A; overlay(0x352A, 0); emu_WSA_Unload();
	emu_sp += 4;

	if (g_global->variable_37B4 == 0) {
		emu_push(0xFFFF);
		emu_push(emu_cs); emu_push(0x01DB); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_04CB_0015_EBB4();
		emu_sp += 2;
	} else {
		emu_push(emu_cs); emu_push(0x01C7); emu_cs = 0x29E8; emu_Input_Keyboard_NextKey();
		if (emu_ax == 0 && g_global->variable_37B4 != 0) {
			emu_push(0xFFFF);
			emu_push(emu_cs); emu_push(0x01DB); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_04CB_0015_EBB4();
			emu_sp += 2;
		}
	}

	while (g_global->variable_76B4 != 0) {
		emu_push(emu_cs); emu_push(0x01E3); emu_cs = 0x29E8; emu_Input_Keyboard_NextKey();
		if (emu_ax == 0 || g_global->variable_37B4 == 0) continue;

		emu_push(0x1E);
		emu_push(g_global->variable_3C36.s.cs); emu_push(g_global->variable_3C36.s.ip);
		emu_push(emu_cs); emu_push(0x039A); emu_cs = 0x259E; f__259E_0006_0016_858A();
		emu_sp += 6;

		emu_push(0);
		emu_push(emu_cs); emu_push(0x03A5); emu_cs = 0x24DA; f__24DA_0004_000E_FD1B();
		emu_sp += 2;

		emu_push(old2598);
		emu_push(emu_cs); emu_push(0x03AE); emu_cs = 0x2598; f__2598_0000_0017_EB80();
		emu_sp += 2;

		return;
	}

	emu_push(0x3C);
	emu_push(g_global->variable_3C36.s.cs); emu_push(g_global->variable_3C36.s.ip);
	emu_push(emu_cs); emu_push(0x0210); emu_cs = 0x259E; f__259E_0006_0016_858A();
	emu_sp += 6;

	while (Driver_Music_IsPlaying());

	while (g_global->variable_76B4 != 0) {
		emu_push(emu_cs); emu_push(0x01E3); emu_cs = 0x29E8; emu_Input_Keyboard_NextKey();
		if (emu_ax == 0 || g_global->variable_37B4 == 0) continue;

		emu_push(0x1E);
		emu_push(g_global->variable_3C36.s.cs); emu_push(g_global->variable_3C36.s.ip);
		emu_push(emu_cs); emu_push(0x039A); emu_cs = 0x259E; f__259E_0006_0016_858A();
		emu_sp += 6;

		emu_push(0);
		emu_push(emu_cs); emu_push(0x03A5); emu_cs = 0x24DA; f__24DA_0004_000E_FD1B();
		emu_sp += 2;

		emu_push(old2598);
		emu_push(emu_cs); emu_push(0x03AE); emu_cs = 0x2598; f__2598_0000_0017_EB80();
		emu_sp += 2;

		return;
	}

	emu_push(0x3C);
	emu_push(g_global->variable_3C36.s.cs); emu_push(g_global->variable_3C36.s.ip);
	emu_push(emu_cs); emu_push(0x024E); emu_cs = 0x259E; f__259E_0006_0016_858A();
	emu_sp += 6;

	assert(g_global->variable_6640.csip == 0x22A60796);
	emu_push(emu_cs); emu_push(0x025B); emu_cs = 0x22A6; f__22A6_0796_000B_9035();

	Sprites_LoadImage(String_GenerateFilename("AND"), 2, 2, emu_get_memorycsip(g_global->variable_998A), g_global->variable_6CD3[1][0] & 0xFFFF);

	emu_push(0);
	emu_push(2);
	emu_push(0xC8);
	emu_push(0x28);
	emu_push(0);
	emu_push(0);
	emu_push(0);
	emu_push(0);
	emu_push(emu_cs); emu_push(0x02A5); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	emu_sp += 16;

	emu_push(0x1E);
	emu_push(g_global->variable_998A.s.cs); emu_push(g_global->variable_998A.s.ip);
	emu_push(emu_cs); emu_push(0x02B9); emu_cs = 0x259E; f__259E_0006_0016_858A();
	emu_sp += 6;

	g_global->variable_76B4 = 0x3C;

	while (g_global->variable_76B4 != 0) {
		emu_push(emu_cs); emu_push(0x01E3); emu_cs = 0x29E8; emu_Input_Keyboard_NextKey();
		if (emu_ax == 0 || g_global->variable_37B4 == 0) continue;

		emu_push(0x1E);
		emu_push(g_global->variable_3C36.s.cs); emu_push(g_global->variable_3C36.s.ip);
		emu_push(emu_cs); emu_push(0x039A); emu_cs = 0x259E; f__259E_0006_0016_858A();
		emu_sp += 6;

		emu_push(0);
		emu_push(emu_cs); emu_push(0x03A5); emu_cs = 0x24DA; f__24DA_0004_000E_FD1B();
		emu_sp += 2;

		emu_push(old2598);
		emu_push(emu_cs); emu_push(0x03AE); emu_cs = 0x2598; f__2598_0000_0017_EB80();
		emu_sp += 2;

		return;
	}

	emu_push(0x1E);
	emu_push(g_global->variable_3C36.s.cs); emu_push(g_global->variable_3C36.s.ip);
	emu_push(emu_cs); emu_push(0x02F9); emu_cs = 0x259E; f__259E_0006_0016_858A();
	emu_sp += 6;

	emu_push(0);
	emu_push(emu_cs); emu_push(0x0304); emu_cs = 0x24DA; f__24DA_0004_000E_FD1B();
	emu_sp += 2;

	Sprites_LoadImage("VIRGIN.CPS", 2, 2, emu_get_memorycsip(g_global->variable_998A), g_global->variable_6CD3[1][0] & 0xFFFF);

	emu_push(0);
	emu_push(2);
	emu_push(0xC8);
	emu_push(0x28);
	emu_push(0);
	emu_push(0);
	emu_push(0);
	emu_push(0);
	emu_push(emu_cs); emu_push(0x0346); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	emu_sp += 16;

	emu_push(0x1E);
	emu_push(g_global->variable_998A.s.cs); emu_push(g_global->variable_998A.s.ip);
	emu_push(emu_cs); emu_push(0x035A); emu_cs = 0x259E; f__259E_0006_0016_858A();
	emu_sp += 6;

	g_global->variable_76B4 = 0xB4;

	while (g_global->variable_76B4 != 0) {
		emu_push(emu_cs); emu_push(0x0370); emu_cs = 0x29E8; emu_Input_Keyboard_NextKey();
		if (emu_ax == 0 || g_global->variable_37B4 == 0) continue;
	}

	emu_push(0x1E);
	emu_push(g_global->variable_3C36.s.cs); emu_push(g_global->variable_3C36.s.ip);
	emu_push(emu_cs); emu_push(0x039A); emu_cs = 0x259E; f__259E_0006_0016_858A();
	emu_sp += 6;

	emu_push(0);
	emu_push(emu_cs); emu_push(0x03A5); emu_cs = 0x24DA; f__24DA_0004_000E_FD1B();
	emu_sp += 2;

	emu_push(old2598);
	emu_push(emu_cs); emu_push(0x03AE); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	emu_sp += 2;
}

/**
 * The Intro.
 */
static void Gameloop_Intro()
{
	GUI_ChangeSelectionType(7);

	String_Load("INTRO");

	Gameloop_Logos();

	emu_push(emu_cs); emu_push(0x0023); emu_cs = 0x29E8; emu_Input_Keyboard_NextKey();
	if (emu_ax == 0 || g_global->variable_37B4 == 0) {
		csip32 args[4];

		Music_Play(0x1B);

		args[0].csip = 0x2C410000;
		args[1].csip = 0x2C4D0000;
		args[2].csip = 0x2C5B0000;
		args[3].csip = 0x2C6B0000;

		GameLoop_B4ED_0000(args[0], args[1], 0x4A, args[2], args[3]);

		GameLoop_B4ED_0200();

		emu_push(emu_cs); emu_push(0x006E); emu_cs = 0x1DD7; f__1DD7_0B53_0025_36F7();

		GameLoop_B4ED_0184();
	}

	GUI_ChangeSelectionType(0);
	String_Load(NULL);
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

	g_global->new6pFnt = Font_LoadFile((g_global->language == LANGUAGE_GERMAN) ? "new6pg.fnt" : "new6p.fnt");

	g_global->new8pFnt2 = g_global->new8pFnt;

	{
		csip32 functions;
		csip32 null;
		functions.csip = 0x353F6128; /* g_global->scriptFunctionsTeam */
		null.csip = 0x0;
		Script_LoadFromFile("TEAM.EMC", &g_global->scriptTeam, functions, null);
	}

	{
		csip32 functions;
		csip32 null;
		functions.csip = 0x353F33B6; /* g_global->scriptFunctionsStructure */
		null.csip = 0x0;
		Script_LoadFromFile("BUILD.EMC", &g_global->scriptStructure, functions, null);
	}

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

	g_global->animations = csip;
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
					Music_Play(0);

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

					Gameloop_Intro();

					Unknown_B483_0363(0xFFFE);

					File_ReadBlockFile("IBM.PAL", emu_get_memorycsip(g_global->variable_998A), 0x300);
					Tools_Memmove(g_global->variable_998A, g_global->variable_3C32, 0x300);

					if (g_global->variable_37B4 == 0) {
						uint8 loc14;

						loc14 = File_Open("ONETIME.DAT", 2);
						File_Close(loc14);
						g_global->variable_37B4 = 1;
					}

					Music_Play(0);

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

					Music_Play(28);

					loc06 = true;
					break;

				case 0x001D: /* Exit Game */
					emu_push(emu_cs); emu_push(0x1D62); emu_cs = 0x3500; overlay(0x3500, 0); f__B500_0000_0008_FE1F();

					exit(0);
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

				Sprites_LoadImage(String_GenerateFilename("TITLE"), 3, 3, NULL, 0);

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

				Unknown_07AE_0000(13);

				GUI_Widget_DrawBorder(13, 2, 1);

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
		Music_Play(0);

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

		Sprites_LoadTiles();

		emu_push(g_global->playerHouseID);
		emu_push(emu_cs); emu_push(0x21EA); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_110D_000D_FD5C();
		emu_sp += 2;

		emu_push(g_global->playerHouseID);
		emu_push(emu_cs); emu_push(0x21F4); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_04CB_0015_EBB4();
		emu_sp += 2;

		emu_push(emu_cs); emu_push(0x21FA); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();

		if (g_global->campaignID != 0) {
			emu_push(1);
			emu_push(g_global->campaignID);
			emu_push(emu_cs); emu_push(0x2215); emu_cs = 0x3503; overlay(0x3503, 0); emu_GUI_ShowMap();
			emu_sp += 4;
			g_global->scenarioID = emu_ax;
		}

		if (g_global->debugSkipDialogs != 0) {
			d__B511_001E_0010_AE09(g_global->playerHouseID, g_global->scenarioID);
		} else {
			d__B511_0000_000E_B463(g_global->playerHouseID, g_global->scenarioID);
		}

		emu_push(emu_cs); emu_push(0x2256); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();

		GUI_ChangeSelectionType((g_global->debugScenario != 0) ? 5 : 4);
	}

	emu_push(g_global->variable_3C32.s.cs); emu_push(g_global->variable_3C32.s.ip);
	emu_push(emu_cs); emu_push(0x2279); emu_cs = 0x259E; f__259E_0040_0015_5E4A();
	emu_sp += 4;

	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	return;
}

static void InGame_Numpad_Move(uint16 key)
{
	if (key == 0) return;

	switch (key) {
		case 0x0010: /* TAB */
			Map_SelectNext(true);
			return;

		case 0x0110: /* SHIFT TAB */
			Map_SelectNext(false);
			return;

		case 0x005C: /* NUMPAD 4 / ARROW LEFT */
		case 0x045C:
		case 0x055C:
			Map_MoveDirection(6);
			return;

		case 0x0066: /* NUMPAD 6 / ARROW RIGHT */
		case 0x0466:
		case 0x0566:
			Map_MoveDirection(2);
			return;

		case 0x0060: /* NUMPAD 8 / ARROW UP */
		case 0x0460:
		case 0x0560:
			Map_MoveDirection(0);
			return;

		case 0x0062: /* NUMPAD 2 / ARROW DOWN */
		case 0x0462:
		case 0x0562:
			Map_MoveDirection(4);
			return;

		case 0x005B: /* NUMPAD 7 / HOME */
		case 0x045B:
		case 0x055B:
			Map_MoveDirection(7);
			return;

		case 0x005D: /* NUMPAD 1 / END */
		case 0x045D:
		case 0x055D:
			Map_MoveDirection(5);
			return;

		case 0x0065: /* NUMPAD 9 / PAGE UP */
		case 0x0465:
		case 0x0565:
			Map_MoveDirection(1);
			return;

		case 0x0067: /* NUMPAD 3 / PAGE DOWN */
		case 0x0467:
		case 0x0567:
			Map_MoveDirection(3);
			return;

		default: return;
	}
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

	Music_InitMT32(0);

	Gameloop_IntroMenu();

	Tools_Var76B8_Set(2, g_global->variable_37AA != 0);

	emu_push(emu_cs); emu_push(0x0113); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();

	Music_Play(Tools_RandomRange(0, 5) + 8);

	while (true) {
		if (g_global->variable_38BE == 2) {
			Music_Play(28);

			g_global->playerHouseID = HOUSE_MERCENARY;
			g_global->playerHouseID = GUI_PickHouse();

			emu_push(emu_cs); emu_push(0x014F); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();

			emu_push(1);
			emu_push(emu_cs); emu_push(0x0158); emu_cs = 0x24DA; f__24DA_002D_0010_3EB2();
			emu_sp += 2;

			Sprites_LoadTiles();

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
			GUI_ChangeSelectionType(g_global->variable_3A10);
		}

		GUI_PaletteAnimate();

		if (g_global->variable_38BE == 1) {
			GUI_ChangeSelectionType(0);

			d__B511_0000_000E_B463(g_global->playerHouseID, g_global->scenarioID);

			g_global->variable_38BE = 0;

			GUI_ChangeSelectionType(4);

			Music_Play(Tools_RandomRange(0, 8) + 8);
			g_global->variable_31BC = g_global->variable_76AC + 300;
		}

		if (g_global->variable_31C0 != g_global->variable_38EC) {
			Map_SetSelectionObjectPosition(0xFFFF);
			Map_SetSelectionObjectPosition(g_global->variable_3A00);
			g_global->variable_31C0 = g_global->variable_38EC;
		}

		if (g_global->variable_6D8D != 4 && g_global->variable_6D8D != 5) {
			if (!Driver_Voice_01EB() && !Unknown_B483_0470()) {
				if (g_global->musicEnabled == 0) {
					Music_Play(2);

					g_global->variable_3E52 = 0;
				} else if (g_global->variable_3E52 > 0) {
					Music_Play(Tools_RandomRange(0, 5) + 17);
					g_global->variable_31BC = g_global->variable_76AC + 300;
					g_global->variable_3E52 = -1;
				} else {
					g_global->variable_3E52 = 0;
					if (g_global->variable_6D8D != 0 && g_global->variable_76AC > g_global->variable_31BC) {
						if (!Driver_Music_IsPlaying()) {
							Music_Play(Tools_RandomRange(0, 8) + 8);
							g_global->variable_31BC = g_global->variable_76AC + 300;
						}
					}
				}
			}
		}

		emu_push(0);
		emu_push(emu_cs); emu_push(0x030E); emu_cs = 0x2598; f__2598_0000_0017_EB80();
		emu_sp += 2;

		key = GUI_Widget_HandleEvents((Widget *)emu_get_memorycsip(g_global->variable_3C26));

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

			GUI_Widget_ActionPanel_Draw(false);

			InGame_Numpad_Move(key);

			GUI_DrawCredits((uint8)g_global->playerHouseID, 0);

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

	Unknown_07AE_0000(0);

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

static bool Unknown_25C4_000E(uint16 graphicMode, const char *fontFilename, bool arg0C)
{
	switch (graphicMode) {
		case 3:
			memset(&emu_get_memory8(0xA000, 0x0000, 0x0000), 0, 64000);
			break;

		default: break;
	}

	if (graphicMode != 8) {
		emu_push(graphicMode);
		emu_push(emu_cs); emu_push(0x0054); emu_cs = 0x263B; f__263B_002F_0016_FDB0();
		emu_sp += 2;

		emu_push(emu_cs); emu_push(0x005A); emu_cs = 0x29A3; emu_Mouse_Init();

		emu_push(0x353F); emu_push(0x6F22);
		emu_push(g_global->variable_6DB2[graphicMode].s.cs); emu_push(g_global->variable_6DB2[graphicMode].s.ip);
		emu_push(emu_cs); emu_push(0x0072); emu_cs = 0x22A3; f__22A3_000D_0010_9291();
		emu_sp += 8;

		if (emu_ax == 0) {
			emu_push(9);
			emu_push(emu_cs); emu_push(0x0082); emu_cs = 0x263B; f__263B_002F_0016_FDB0();
			emu_sp += 2;

			printf("\r\nCould not load overlay \"%s\".  Press a key to return to DOS...\r\n", (char *)emu_get_memorycsip(g_global->variable_6DB2[graphicMode]));

			emu_push(emu_cs); emu_push(0x00B7); emu_cs = 0x29E8; emu_Input_History_Clear();

			emu_push(emu_cs); emu_push(0x00BC); emu_cs = 0x29E8; f__29E8_07FA_0020_177A();

			return false;
		}
	}

	if (arg0C) {
		uint32 totalSize = 0;
		uint16 i;
		csip32 memBlock;

		for (i = 1; i < 8; i++) {
			uint32 size = (g_global->variable_6CD3[i][1] + 15) & 0xFFFFFFF0;

			if ((size & 0xFF000000) != 0) {
				emu_push(emu_cs); emu_push(0x011B); emu_cs = 0x3500; overlay(0x3500, 0); f__B500_0000_0008_FE1F();

				printf("PageArraySize is negative!\r\n");

				emu_push(emu_cs); emu_push(0x012C); emu_cs = 0x29E8; f__29E8_07FA_0020_177A();

				exit(5);
			}

			g_global->variable_6CD3[i][0] = size;
			g_global->variable_6CD3[i][1] = size;

			totalSize += size;
		}

		emu_push(g_global->variable_98F1 | 0x30);
		emu_push(totalSize >> 16); emu_push(totalSize & 0xFFFF);
		emu_push(emu_cs); emu_push(0x0187); emu_cs = 0x23E1; emu_Tools_Malloc();
		emu_sp += 6;
		memBlock.s.cs = emu_dx;
		memBlock.s.ip = emu_ax;

		for (i = 1; i < 8; i++) {
			if (g_global->variable_6CD3[i][0] == 0) continue;

			g_global->variable_6C93[i][0] = memBlock.s.cs;
			g_global->variable_6C93[i][1] = memBlock.s.cs;

			memBlock.csip += g_global->variable_6CD3[i][0];
			memBlock = Tools_GetSmallestIP(memBlock);
		}
	} else {
		uint16 i;

		for (i = 1; i < 8; i++) {
			if (g_global->variable_6CD3[i][1] == 0) continue;

			emu_push(g_global->variable_98ED | 0x20);
			emu_push(g_global->variable_6CD3[i][1] >> 16); emu_push(g_global->variable_6CD3[i][1] & 0xFFFF);
			emu_push(emu_cs); emu_push(0x022F); emu_cs = 0x23E1; emu_Tools_Malloc();
			emu_sp += 6;

			g_global->variable_6C93[i][0] = emu_ax;
			g_global->variable_6C93[i][1] = emu_dx;
		}
	}

	switch (graphicMode) {
		case 0:
		case 1:
			g_global->variable_6C93[0][0] = 0xB800;
			g_global->variable_6C93[0][1] = 0xB800;
			break;

		case 2:
			g_global->variable_6C93[0][0] = 0xA000;
			g_global->variable_6C93[1][0] = 0xA200;
			g_global->variable_6C93[2][0] = 0xA400;
			g_global->variable_6C93[3][0] = 0xA600;
			g_global->variable_6C93[4][0] = 0xA800;
			g_global->variable_6C93[5][0] = 0xAA00;
			g_global->variable_6C93[6][0] = 0xAC00;
			g_global->variable_6C93[7][0] = 0xAE00;
			break;

		case 3:
		case 6:
			g_global->variable_6C93[0][0] = 0xA000;
			g_global->variable_6C93[0][1] = 0xA000;
			break;

		case 4:
		case 5:
			g_global->variable_6C93[0][0] = 0xA000;
			g_global->variable_6C93[1][0] = 0xA400;
			g_global->variable_6C93[2][0] = 0xA800;
			g_global->variable_6C93[3][0] = 0xAC00;
			break;

		default: break;
	}

	if (graphicMode != 8) {
		emu_push(emu_cs); emu_push(0x02CD); emu_cs = 0x22A6; f__22A6_0796_000B_9035();

		if (fontFilename != NULL) {
			g_global->new8pFnt = Font_LoadFile(fontFilename);

			if (g_global->new8pFnt.csip == 0x0) {
				emu_push(9);
				emu_push(emu_cs); emu_push(0x02FB); emu_cs = 0x263B; f__263B_002F_0016_FDB0();
				emu_sp += 2;

				printf("\r\nUnable to load font %s\r\nReinstall program.\r\n", fontFilename);

				emu_push(emu_cs); emu_push(0x00BC); emu_cs = 0x29E8; f__29E8_07FA_0020_177A();

				return false;
			}

			Font_Select(g_global->new8pFnt);
		}
	}

	emu_push(0x10);
	emu_push(0); emu_push(0x300);
	emu_push(emu_cs); emu_push(0x0345); emu_cs = 0x23E1; emu_Tools_Malloc();
	emu_sp += 6;
	g_global->variable_998A.s.cs = emu_dx;
	g_global->variable_998A.s.ip = emu_ax;

	switch (graphicMode) {
		case 5:
			memcpy(emu_get_memorycsip(g_global->variable_998A), g_global->variable_6DA2, 16);

			emu_push(16);
			emu_push(0);
			emu_push(g_global->variable_998A.s.cs); emu_push(g_global->variable_998A.s.ip);
			emu_push(emu_cs); emu_push(0x038D); emu_cs = 0x2BA5; f__2BA5_0006_009C_A3D1();
			emu_sp += 8;
			break;

		case 2:
			memcpy(emu_get_memorycsip(g_global->variable_998A), g_global->variable_6D92, 16);

			emu_push(16);
			emu_push(0);
			emu_push(g_global->variable_998A.s.cs); emu_push(g_global->variable_998A.s.ip);
			emu_push(emu_cs); emu_push(0x038D); emu_cs = 0x2BA5; f__2BA5_0006_009C_A3D1();
			emu_sp += 8;
			break;

		case 3:
		case 4:
			memset(&emu_get_memorycsip(g_global->variable_998A)[45], 63, 3);

			emu_push(g_global->variable_998A.s.cs); emu_push(g_global->variable_998A.s.ip);
			emu_push(emu_cs); emu_push(0x03C4); emu_cs = 0x259E; f__259E_0040_0015_5E4A();
			emu_sp += 4;
			break;

		default: break;
	}

	emu_push(emu_cs); emu_push(0x03CD); emu_cs = 0x2533; f__2533_000D_001C_74EC();

	emu_push(0); emu_push(0);
	emu_push(emu_cs); emu_push(0x03D8); emu_cs = 0x01F7; f__01F7_103F_0010_4132();
	emu_sp += 4;

	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x03E0); emu_cs = 0x01F7; emu_Tools_Var79E4_Init();
	emu_sp += 2;

	Unknown_07AE_0000(0);

	return true;
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

	if (!Unknown_25C4_000E(g_global->variable_6C76, "new8p.fnt", true)) exit(1);

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
