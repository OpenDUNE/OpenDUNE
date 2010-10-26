/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "unknown.h"
#include "../unit.h"
#include "../tile.h"
#include "../map.h"
#include "../os/math.h"
#include "../gui/gui.h"
#include "../structure.h"
#include "../pool/pool.h"
#include "../pool/unit.h"
#include "../house.h"
#include "../sprites.h"

extern void f__06F7_0602_0018_CEB0();
extern void f__07D4_1625_001A_07E5();
extern void f__07D4_18BD_0016_68BB();
extern void f__151A_0196_0018_AF63();
extern void f__22A6_0B60_006A_2F61();
extern void f__22A6_10DD_0023_B468();
extern void f__24D0_000D_0039_C17D();
extern void f__2598_0000_0017_EB80();
extern void f__2642_0002_005E_87F6();
extern void f__2642_0069_0008_D517();
extern void f__2C17_000C_002F_3016();
extern void f__B4CD_0000_0011_95D0();
extern void f__B4CD_0750_0027_7BA5();
extern void f__B4CD_17DC_0019_CB46();
extern void f__B4CD_17F7_001D_1CA2();
extern void overlay(uint16 cs, uint8 force);
extern void emu_GUI_DrawFilledRectangle();
extern void emu_GUI_DrawLine();
extern void emu_GUI_DrawSprite();

/**
 * C-ified function of f__07D4_034D_001F_FF64()
 *
 * @name emu_Unknown_07D4_034D
 * @implements 07D4:034D:001F:FF64 ()
 */
void emu_Unknown_07D4_034D()
{
	uint16 arg06;
	uint16 arg08;
	uint16 arg0A;

	uint16 locsi;
	uint16 locdi;

	uint16 loc02;
	uint16 loc04;
	uint16 loc06;
	uint16 loc08;
	uint16 loc0A;
	uint16 loc0C;
	uint16 loc0E;
	uint16 loc10;
	uint16 loc12;
	uint16 loc14;
	uint16 loc16;
	uint16 loc18;
	uint16 loc1A;
	uint16 loc1C;
	csip32 csip1C;
	csip32 loc2A;
	uint16 loc2C;
	uint16 loc2E;
	int16 loc42[10];
	int16 loc56[10];

	PoolFindStruct find;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	arg06 = emu_get_memory16(emu_ss, emu_sp, 0);
	arg08 = emu_get_memory16(emu_ss, emu_sp, 2);
	arg0A = emu_get_memory16(emu_ss, emu_sp, 4);

	loc12 = 0x0;

	memset(loc42, 0xF, 20);
	memset(loc56, 0, 20);

	emu_push(2);
	emu_push(emu_cs); emu_push(0x038C); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	emu_sp += 2;
	loc14 = emu_ax;

	emu_push(2);
	emu_push(emu_cs); emu_push(0x0399); emu_cs = 0x07AE; emu_Unknown_07AE_0000();
	emu_sp += 2;
	loc16 = emu_ax;

	loc12 = arg06;

	if (g_global->variable_39E2 != 0 || arg06 != 0) {
		for (loc04 = 0; loc04 < 10; loc04++) {
			loc0C = (loc04 << 4) + 0x28;
			for (loc02 = 0; loc02 < ((arg0A == 0) ? 16 : 15); loc02++) {
				Tile *t;

				loc10 = g_global->viewportPosition + (loc04 << 6) + loc02;

				if (loc02 < 15 && arg06 == 0 && (g_global->variable_8FE5[loc10 >> 3] & (1 << (loc10 & 7))) != 0) {
					if (loc56[loc04] < loc02) loc56[loc04] = loc02;
					if (loc42[loc04] > loc02) loc42[loc04] = loc02;
					loc12 = 0x1;
				}

				if ((g_global->variable_8DE5[loc10 >> 3] & (1 << (loc10 & 7))) == 0 && arg06 == 0) continue;

				g_global->variable_8FE5[loc10 >> 3] |= (1 << (loc10 & 7));

				if (loc02 < 15) {
					loc12 = 0x1;
					if (loc56[loc04] < loc02) loc56[loc04] = loc02;
					if (loc42[loc04] > loc02) loc42[loc04] = loc02;
				}

				t = Map_GetTileByPosition(loc10);
				loc0A = loc02 << 4;

				if (g_global->debugScenario == 0x0 && g_global->variable_39F2 == t->fogOfWar) {
					emu_push(0xC);
					emu_push(loc0C +15);
					emu_push(loc0A + 15);
					emu_push(loc0C);
					emu_push(loc0A);
					emu_push(emu_cs); emu_push(0x0544); emu_cs = 0x22A6; emu_GUI_DrawFilledRectangle();
					emu_sp += 10;
					continue;
				}

				emu_push(t->houseID);
				emu_push(loc0C);
				emu_push(loc0A >> 3);
				emu_push(t->spriteID);
				emu_push(emu_cs); emu_push(0x057A); emu_cs = 0x22A6; f__22A6_0B60_006A_2F61();
				emu_sp += 8;

				if (t->fogOfWar == 0 || g_global->debugScenario != 0x0) continue;

				emu_push(t->houseID);
				emu_push(loc0C);
				emu_push(loc0A >> 3);
				emu_push(t->fogOfWar);
				emu_push(emu_cs); emu_push(0x059F); emu_cs = 0x22A6; f__22A6_0B60_006A_2F61();
				emu_sp += 8;
			}
		}
		g_global->variable_39E2 = 0;
	}

	find.type    = UNIT_SANDWORM;
	find.index   = 0xFFFF;
	find.houseID = 0xFFFF;

	while (true) {
		Unit *u;

		u = Unit_Find(&find);

		if (u == NULL) break;

		if (!u->o.flags.s.variable_4_1000 && arg06 == 0) continue;

		u->o.flags.s.variable_4_1000 = false;

		loc10 = Tile_PackTile(u->o.position);

		if (!Map_GetTileByPosition(loc10)->isUnveiled && g_global->debugScenario == 0) continue;

		emu_push(Unit_GetHouseID(u));
		emu_push(g_unitInfo[u->o.type].variable_44);
		emu_push(emu_cs); emu_push(0x067A); emu_cs = 0x07D4; f__07D4_18BD_0016_68BB();
		emu_sp += 4;
		loc2A.s.cs = emu_dx;
		loc2A.s.ip = emu_ax;

		g_global->variable_8DE3 = 0x200;

		if (Map_IsPositionInViewport(u->o.position, &loc02, &loc04)) {
			emu_push(g_global->variable_8DE3 | 0xC000);
			emu_push(2);
			emu_push(loc04);
			emu_push(loc02);
			emu_push(loc2A.s.cs);
			emu_push(loc2A.s.ip);
			emu_push(g_global->variable_6C91);
			emu_push(emu_cs); emu_push(0x06CA); emu_cs = 0x2903; emu_GUI_DrawSprite();
			emu_sp += 14;
		}

		if (Map_IsPositionInViewport(u->variable_5A, &loc02, &loc04)) {
			emu_push(g_global->variable_8DE3 | 0xC000);
			emu_push(2);
			emu_push(loc04);
			emu_push(loc02);
			emu_push(loc2A.s.cs);
			emu_push(loc2A.s.ip);
			emu_push(g_global->variable_6C91);
			emu_push(emu_cs); emu_push(0x070E); emu_cs = 0x2903; emu_GUI_DrawSprite();
			emu_sp += 14;
		}

		if (Map_IsPositionInViewport(u->variable_5E, &loc02, &loc04)) {
			emu_push(g_global->variable_8DE3 | 0xC000);
			emu_push(2);
			emu_push(loc04);
			emu_push(loc02);
			emu_push(loc2A.s.cs);
			emu_push(loc2A.s.ip);
			emu_push(g_global->variable_6C91);
			emu_push(emu_cs); emu_push(0x0752); emu_cs = 0x2903; emu_GUI_DrawSprite();
			emu_sp += 14;
		}

		if (g_global->selectionUnit.csip == 0x0 || u != Unit_Get_ByMemory(g_global->selectionUnit)) continue;

		if (!Map_IsPositionInViewport(u->o.position, &loc02, &loc04)) continue;

		emu_push(0xC000);
		emu_push(2);
		emu_push(loc04);
		emu_push(loc02);
		emu_push(g_sprites[6].s.cs); emu_push(g_sprites[6].s.ip);
		emu_push(g_global->variable_6C91);
		emu_push(emu_cs); emu_push(0x07AE); emu_cs = 0x2903; emu_GUI_DrawSprite();
		emu_sp += 14;
	}

	g_global->variable_39E4 = 0;

	if (g_global->selectionUnit.csip == 0x0 && (g_global->variable_3A08 != 0 || arg08 != 0) && (Structure_Get_ByPackedTile(g_global->variable_3A00) != NULL || g_global->selectionType == 2 || g_global->debugScenario != 0)) {
		locsi = (Tile_GetPackedX(g_global->variable_3A00) - Tile_GetPackedX(g_global->minimapPosition)) << 4;
		locdi = ((Tile_GetPackedY(g_global->variable_3A00) - Tile_GetPackedY(g_global->minimapPosition)) << 4) + 0x28;
		loc1A = locsi + (g_global->selectionWidth << 4) - 1;
		loc1C = locdi + (g_global->selectionHeight << 4) - 1;

		emu_push(0xC7);
		emu_push(0xEF);
		emu_push(0x28);
		emu_push(0);
		emu_push(emu_cs); emu_push(0x0885); emu_cs = 0x22A6; f__22A6_10DD_0023_B468();
		emu_sp += 8;

		GUI_DrawWiredRectangle(locsi, locdi, loc1A, loc1C, 0xFF);

		if (g_global->variable_38EC == 0 && g_global->selectionType == 2) {
			emu_push(0xFF);
			emu_push(loc1C);
			emu_push(loc1A);
			emu_push(locdi);
			emu_push(locsi);
			emu_push(emu_cs); emu_push(0x08C0); emu_cs = 0x22A6; emu_GUI_DrawLine();
			emu_sp += 10;

			emu_push(0xFF);
			emu_push(loc1C);
			emu_push(locsi);
			emu_push(locdi);
			emu_push(loc1A);
			emu_push(emu_cs); emu_push(0x08D9); emu_cs = 0x22A6; emu_GUI_DrawLine();
			emu_sp += 10;
		}

		emu_push(0xC7);
		emu_push(0x13F);
		emu_push(0);
		emu_push(0);
		emu_push(emu_cs); emu_push(0x08F4); emu_cs = 0x22A6; f__22A6_10DD_0023_B468();
		emu_sp += 8;

		g_global->variable_3A08 = 0;
	}

	if (g_global->variable_39E6 != 0 || arg06 != 0 || loc12 != 0) {
		find.type    = 0xFFFF;
		find.index   = 0xFFFF;
		find.houseID = 0xFFFF;

		while (true) {
			Unit *u;
			UnitInfo *ui;
			uint16 packed;

			u = Unit_Find(&find);

			if (u == NULL) break;

			if (u->o.index < 20 || u->o.index > 101) continue;

			packed = Tile_PackTile(u->o.position);

			if ((!u->o.flags.s.variable_4_1000 || u->o.flags.s.beingBuilt) && arg06 == 0 && (g_global->variable_8FE5[packed >> 3] & (1 << (packed & 7))) == 0) continue;

			u->o.flags.s.variable_4_1000 = false;

			if (!Map_GetTileByPosition(packed)->isUnveiled && g_global->debugScenario == 0) continue;

			ui = &g_unitInfo[u->o.type];

			if (!Map_IsPositionInViewport(u->o.position, &loc02, &loc04)) continue;

			loc02 += emu_get_memory16(0x2DCE, u->variable_6C * 4, 0x0);
			loc04 += emu_get_memory16(0x2DCE, u->variable_6C * 4, 0x2);

			emu_push(u->variable_62[0][2]);
			emu_push(emu_cs); emu_push(0x0A57); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_17DC_0019_CB46();
			emu_sp += 2;
			locdi = emu_ax;

			if (u->variable_6D >= 0 || ui->variable_4C == 0) {
				locsi = ui->variable_44;

				switch (ui->variable_4A) {
					case 1:
					case 2:
						if (ui->movementType == MOVEMENT_SLITHER) break;
						locsi += g_global->variable_32A4[locdi][0];
						g_global->variable_8DE3 = g_global->variable_32A4[locdi][1];
						break;

					case 3:
						locsi += g_global->variable_32C4[locdi][0] * 3;
						locsi += g_global->variable_334A[u->variable_6D & 3];
						g_global->variable_8DE3 = g_global->variable_32C4[locdi][1];
						break;

					case 5:
						locsi += g_global->variable_32C4[locdi][0] * 4;
						locsi += u->variable_6D & 3;
						g_global->variable_8DE3 = g_global->variable_32C4[locdi][1];
						break;

					default:
						g_global->variable_8DE3 = 0;
						break;
				}
			} else {
				locsi = ui->variable_4C - u->variable_6D - 1;
				g_global->variable_8DE3 = 0;
			}

			emu_push((u->deviated != 0) ? HOUSE_ORDOS : Unit_GetHouseID(u));
			emu_push(locsi);
			emu_push(emu_cs); emu_push(0x0B4C); emu_cs = 0x07D4; f__07D4_18BD_0016_68BB();
			emu_sp += 4;
			loc2A.s.cs = emu_dx;
			loc2A.s.ip = emu_ax;

			if (u->o.type != UNIT_SANDWORM && u->o.flags.s.variable_0800) g_global->variable_8DE3 |= 0x100;
			if (ui->flags.s.variable_0020) g_global->variable_8DE3 |= 0x200;

			emu_push(1);
			emu_push(g_global->variable_3C3E.s.cs);
			emu_push(g_global->variable_3C3E.s.ip);
			emu_push(0x353F); emu_push(0x8420);
			emu_push(g_global->variable_8DE3 | 0xE000);
			emu_push(2);
			emu_push(loc04);
			emu_push(loc02);
			emu_push(loc2A.s.cs);
			emu_push(loc2A.s.ip);
			emu_push(g_global->variable_6C91);
			emu_push(emu_cs); emu_push(0x0BB2); emu_cs = 0x2903; emu_GUI_DrawSprite();
			emu_sp += 24;

			if (u->o.type == UNIT_HARVESTER && u->actionID == ACTION_HARVEST && u->variable_6D >= 0 && (u->actionID == ACTION_HARVEST || u->actionID == ACTION_MOVE)) {
				emu_push(packed);
				emu_push(emu_cs); emu_push(0x0BFB); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0750_0027_7BA5();
				emu_sp += 2;

				if (emu_ax == 8 || emu_ax == 9) {
					locsi = (u->variable_6D % 3) + 0xDF + (g_global->variable_32A4[locdi][0] * 3);

					emu_push(Unit_GetHouseID(u));
					emu_push(locsi);
					emu_push(emu_cs); emu_push(0x0C41); emu_cs = 0x07D4; f__07D4_18BD_0016_68BB();
					emu_sp += 4;
					loc2A.s.cs = emu_dx;
					loc2A.s.ip = emu_ax;

					emu_push(g_global->variable_32A4[locdi][1] | 0xC000);
					emu_push(2);
					emu_push(loc04 + g_global->variable_334E[locdi][1]);
					emu_push(loc02 + g_global->variable_334E[locdi][0]);
					emu_push(loc2A.s.cs);
					emu_push(loc2A.s.ip);
					emu_push(g_global->variable_6C91);
					emu_push(emu_cs); emu_push(0x0C87); emu_cs = 0x2903; emu_GUI_DrawSprite();
					emu_sp += 14;
				}
			}

			if (u->variable_6D >= 0 && ui->variable_46 != 0xFFFF) {
				loc2E = 0;
				loc2C = 0;
				loc2A.csip = 0x0;
				locsi = ui->variable_46;

				emu_push(u->variable_62[ui->flags.s.variable_0040 ? 1 : 0][2]);
				emu_push(emu_cs); emu_push(0x0CE4); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_17DC_0019_CB46();
				emu_sp += 2;
				locdi = emu_ax;

				loc18 = locsi;

				switch (loc18) {
					case 0x8D:
						loc2E = 0xFFFE;
						break;

					case 0x92:
						loc2E = 0xFFFD;
						break;

					case 0x7E:
						loc2C = g_global->variable_336E[locdi][0];
						loc2E = g_global->variable_336E[locdi][1];
						break;

					case 0x88:
						loc2C = g_global->variable_338E[locdi][0];
						loc2E = g_global->variable_338E[locdi][1];
						break;

					default:
						break;
				}

				g_global->variable_8DE3 = g_global->variable_32A4[locdi][1];
				locsi += g_global->variable_32A4[locdi][0];

				emu_push(Unit_GetHouseID(u));
				emu_push(locsi);
				emu_push(emu_cs); emu_push(0x0D75); emu_cs = 0x07D4; f__07D4_18BD_0016_68BB();
				emu_sp += 4;
				loc2A.s.cs = emu_dx;
				loc2A.s.ip = emu_ax;

				emu_push(0x353F); emu_push(0x8420);
				emu_push(g_global->variable_8DE3 | 0xE000);
				emu_push(2);
				emu_push(loc04 + loc2E);
				emu_push(loc02 + loc2C);
				emu_push(loc2A.s.cs);
				emu_push(loc2A.s.ip);
				emu_push(g_global->variable_6C91);
				emu_push(emu_cs); emu_push(0x0DAB); emu_cs = 0x2903; emu_GUI_DrawSprite();
				emu_sp += 18;
			}

			if (u->o.flags.s.variable_0008) {
				loc2C = u->variable_6D & 3;
				if (loc2C == 3) loc2C = 1;

				emu_push(0xC000);
				emu_push(2);
				emu_push(loc04 - 14);
				emu_push(loc02);
				emu_push(g_sprites[loc2C + 180].s.cs); emu_push(g_sprites[loc2C + 180].s.ip);
				emu_push(g_global->variable_6C91);
				emu_push(emu_cs); emu_push(0x0E03); emu_cs = 0x2903; emu_GUI_DrawSprite();
				emu_sp += 14;
			}

			if (g_global->selectionUnit.csip == 0x0 || u != Unit_Get_ByMemory(g_global->selectionUnit)) continue;

			emu_push(0xC000);
			emu_push(2);
			emu_push(loc04);
			emu_push(loc02);
			emu_push(g_sprites[6].s.cs); emu_push(g_sprites[6].s.ip);
			emu_push(g_global->variable_6C91);
			emu_push(emu_cs); emu_push(0x0E3E); emu_cs = 0x2903; emu_GUI_DrawSprite();
			emu_sp += 14;
		}

		g_global->variable_39E6 = 0;
	}

	for (loc0E = 0; loc0E < 32; loc0E ++) {
		tile32 position;

		csip1C = g_global->variable_395A;
		csip1C.s.ip += loc0E * 0x14;

		position = emu_get_tile32(csip1C.s.cs, csip1C.s.ip, 0x10);
		loc10 = Tile_PackTile(position);

		if ((g_global->variable_8FE5[loc10 >> 3] & (1 << (loc10 & 7))) != 0) emu_get_memory8(csip1C.s.cs, csip1C.s.ip, 0x7) = 0x1;

		if (emu_get_csip32(csip1C.s.cs, csip1C.s.ip, 0xC).csip == 0x0) continue;
		if (emu_get_memory8(csip1C.s.cs, csip1C.s.ip, 0x7) == 0 && arg06 == 0) continue;
		if (emu_get_memory16(csip1C.s.cs, csip1C.s.ip, 0xA) == 0) continue;

		emu_get_memory8(csip1C.s.cs, csip1C.s.ip, 0x7) = 0;

		if (!Map_GetTileByPosition(loc10)->isUnveiled && g_global->debugScenario == 0) continue;
		if (!Map_IsPositionInViewport(position, &loc02, &loc04)) continue;

		g_global->variable_8DE3 = 0xC000;

		emu_push(emu_get_memory8(csip1C.s.cs, csip1C.s.ip, 0x6));
		emu_push(emu_get_memory16(csip1C.s.cs, csip1C.s.ip, 0xA));
		emu_push(emu_cs); emu_push(0x0F6F); emu_cs = 0x07D4; f__07D4_18BD_0016_68BB();
		emu_sp += 4;

		emu_push(0x353F); emu_push(0x8420);
		emu_push(g_global->variable_8DE3);
		emu_push(2);
		emu_push(loc04);
		emu_push(loc02);
		emu_push(emu_dx); emu_push(emu_ax);
		emu_push(g_global->variable_6C91);
		emu_push(emu_cs); emu_push(0x0F9A); emu_cs = 0x2903; emu_GUI_DrawSprite();
		emu_sp += 18;
	}

	if (g_global->variable_39E8 != 0 || arg06 != 0 || loc12 != 0) {
		find.type    = 0xFFFF;
		find.index   = 0xFFFF;
		find.houseID = 0xFFFF;

		while (true) {
			Unit *u;
			UnitInfo *ui;

			u = Unit_Find(&find);

			if (u == NULL) break;

			if (u->o.index > 15) continue;

			loc10 = Tile_PackTile(u->o.position);

			if ((!u->o.flags.s.variable_4_1000 || u->o.flags.s.beingBuilt) && arg06 == 0 && (g_global->variable_8FE5[loc10 >> 3] & (1 << (loc10 & 7))) == 0) continue;

			u->o.flags.s.variable_4_1000 = false;

			if (!Map_GetTileByPosition(loc10)->isUnveiled && g_global->debugScenario == 0) continue;

			ui = &g_unitInfo[u->o.type];

			if (!Map_IsPositionInViewport(u->o.position, &loc02, &loc04)) continue;

			locsi = ui->variable_44;
			locdi = u->variable_62[0][2];
			g_global->variable_8DE3 = 0xC000;

			switch (ui->variable_4A) {
				case 0:
					if (u->o.flags.s.variable_4_0040) locsi++;
					break;

				case 1:
					emu_push(locdi);
					emu_push(emu_cs); emu_push(0x10FA); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_17DC_0019_CB46();
					emu_sp += 2;
					locdi = emu_ax;

					locsi += g_global->variable_32E4[locdi][0];
					g_global->variable_8DE3 |= g_global->variable_32E4[locdi][1];
					break;

				case 2:
					emu_push(locdi);
					emu_push(emu_cs); emu_push(0x1115); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_17F7_001D_1CA2();
					emu_sp += 2;
					locdi = emu_ax;

					locsi += g_global->variable_3304[locdi][0];
					g_global->variable_8DE3 |= g_global->variable_3304[locdi][1];
					break;

				case 5:
					emu_push(locdi);
					emu_push(emu_cs); emu_push(0x113A); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_17DC_0019_CB46();
					emu_sp += 2;
					locdi = emu_ax;

					locsi += (g_global->variable_32E4[emu_bx][0] * 3) + g_global->variable_33AE[u->variable_6D & 3];
					g_global->variable_8DE3 |= g_global->variable_32E4[locdi][1];
					break;

				default:
					g_global->variable_8DE3 = 0x0;
					break;
			}

			if ((ui->variable_36 & 0x2000) != 0 && u->o.flags.s.variable_4_0020) locsi += 5;
			if (u->o.type == UNIT_CARRYALL && u->o.flags.s.inTransport) locsi += 3;

			emu_push(Unit_GetHouseID(u));
			emu_push(locsi);
			emu_push(emu_cs); emu_push(0x11BB); emu_cs = 0x07D4; f__07D4_18BD_0016_68BB();
			emu_sp += 4;
			loc2A.s.cs = emu_dx;
			loc2A.s.ip = emu_ax;

			if (ui->flags.s.variable_0001) {
				emu_push(1);
				emu_push(g_global->variable_3C3A.s.cs);
				emu_push(g_global->variable_3C3A.s.ip);
				emu_push((g_global->variable_8DE3 & 0xDFFF) | 0x300);
				emu_push(2);
				emu_push(loc04 + 3);
				emu_push(loc02 + 1);
				emu_push(loc2A.s.cs);
				emu_push(loc2A.s.ip);
				emu_push(g_global->variable_6C91);
				emu_push(emu_cs); emu_push(0x1204); emu_cs = 0x2903; emu_GUI_DrawSprite();
				emu_sp += 20;
			}

			if (ui->flags.s.variable_0020) g_global->variable_8DE3 |= 0x200;

			emu_push(0x353F); emu_push(0x8420);
			emu_push(g_global->variable_8DE3 | 0x2000);
			emu_push(2);
			emu_push(loc04);
			emu_push(loc02);
			emu_push(loc2A.s.cs);
			emu_push(loc2A.s.ip);
			emu_push(g_global->variable_6C91);
			emu_push(emu_cs); emu_push(0x123D); emu_cs = 0x2903; emu_GUI_DrawSprite();
			emu_sp += 18;
		}

		g_global->variable_39E8 = 0;
	}

	if (loc12 != 0) {
		memset(g_global->variable_8DE5, 0, 512);
		memset(g_global->variable_8FE5, 0, 512);
	}

	if (g_global->variable_3344 != 0) {
		locsi = 0;
		locdi = 0;
		loc1A = 0x2;

		for (loc0E = 0; loc0E < g_global->variable_3344; loc0E++) {
			loc10 = g_global->variable_8290[loc0E];
			g_global->variable_91E5[loc10 >> 3] &= ~(1 << (loc10 & 7));

			if (locsi == 0) {
				locsi = 0x1;

				emu_push(2);
				emu_push(emu_cs); emu_push(0x12DE); emu_cs = 0x2598; f__2598_0000_0017_EB80();
				emu_sp += 2;
				loc1A = emu_ax;

				emu_push(3);
				emu_push(emu_cs); emu_push(0x12EB); emu_cs = 0x2642; f__2642_0002_005E_87F6();
				emu_sp += 2;
			}

			emu_push(loc10);
			emu_push(emu_cs); emu_push(0x12F3); emu_cs = 0x07D4; f__07D4_1625_001A_07E5();
			emu_sp += 2;

			if (locdi == 0 && (g_global->variable_93E5[loc10 >> 3] & (1 << (loc10 & 7))) != 0) locdi = 1;
		}

		if (locdi != 0) Map_UpdateMinimapPosition(g_global->minimapPosition, true);

		if (locsi != 0) {
			emu_push(0);
			emu_push(g_global->variable_6C91);
			emu_push(0x40);
			emu_push(0x8);
			emu_push(0x88);
			emu_push(0x20);
			emu_push(0x88);
			emu_push(0x20);
			emu_push(emu_cs); emu_push(0x1361); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
			emu_sp += 16;

			emu_push(loc1A);
			emu_push(emu_cs); emu_push(0x136C); emu_cs = 0x2598; f__2598_0000_0017_EB80();
			emu_sp += 2;

			emu_push(emu_cs); emu_push(0x1372); emu_cs = 0x2642; f__2642_0069_0008_D517();
		}

		if (g_global->variable_3344 == 0xC8) {
			g_global->variable_3344 = 0;

			for (loc0E = 0; loc0E < 4096; loc0E++) {
				if ((g_global->variable_91E5[loc0E >> 3] & (1 << (loc0E & 7))) == 0) continue;
				g_global->variable_8290[g_global->variable_3344++] = loc0E;
				if (g_global->variable_3344 == 0xC8) break;
			}
		} else {
			g_global->variable_3344 = 0;
		}
	}

	if ((g_global->variable_37BA & 0x1) != 0 && g_global->variable_37BC.csip != 0x0 && (loc42[6] <= 14 || loc56[6] >= 0 || arg08 != 0 || arg06 != 0)) {
		GUI_DrawText_Wrapper((char *)emu_get_memorycsip(g_global->variable_37BC), 112, 139, 15, 0, 0x132);
		loc42[6] = -1;
		loc56[6] = 14;
	}

	if (loc12 != 0 && arg0A == 0) {
		if (g_global->variable_3A14 != 0) {
			emu_push(g_global->variable_6D5D);
			emu_push(emu_cs); emu_push(0x1448); emu_cs = 0x2642; f__2642_0002_005E_87F6();
			emu_sp += 2;

			emu_push(0);
			emu_push(g_global->variable_6C91);
			emu_push(g_global->variable_9931);
			emu_push(g_global->variable_992F);
			emu_push(g_global->variable_992B);
			emu_push(g_global->variable_992D);
			emu_push(g_global->variable_992B);
			emu_push(g_global->variable_992D);
			emu_push(emu_cs); emu_push(0x146D); emu_cs = 0x2C17; f__2C17_000C_002F_3016();
			emu_sp += 16;

			emu_push(emu_cs); emu_push(0x1475); emu_cs = 0x2642; f__2642_0069_0008_D517();

			g_global->variable_3A14 = 0;
		} else {
			locsi = 0;

			for (loc0E = 0; loc0E < 10; loc0E++) {
				if (arg08 != 0x0) {
					loc42[loc0E] = 0;
					loc56[loc0E] = 14;
				}

				if (loc56[loc0E] < loc42[loc0E]) continue;

				loc02 = loc42[loc0E] * 2;
				loc04 = (loc0E << 4) + 0x28;
				loc06 = (loc56[loc0E] - loc42[loc0E] + 1) * 2;
				loc08 = 16;

				if (locsi == 0) {
					emu_push(g_global->variable_6D5D);
					emu_push(emu_cs); emu_push(0x151C); emu_cs = 0x2642; f__2642_0002_005E_87F6();
					emu_sp += 2;

					locsi = 1;
					g_global->variable_37A4 = 0;
				}

				emu_push(0);
				emu_push(g_global->variable_6C91);
				emu_push(loc08);
				emu_push(loc06);
				emu_push(loc04);
				emu_push(loc02);
				emu_push(loc04);
				emu_push(loc02);
				emu_push(emu_cs); emu_push(0x1544); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
				emu_sp += 16;
			}

			if (locsi != 0) {
				emu_push(emu_cs); emu_push(0x155C); emu_cs = 0x2642; f__2642_0069_0008_D517();
			}
		}
	}

	emu_push(loc14);
	emu_push(emu_cs); emu_push(0x1564); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	emu_sp +=2;

	emu_push(loc16);
	emu_push(emu_cs); emu_push(0x156D); emu_cs = 0x07AE; emu_Unknown_07AE_0000();
	emu_sp += 2;

	return;
}

/**
 * C-ified function of f__07D4_0000_0027_FA61()
 *
 * @name emu_Unknown_07D4_0000
 * @implements 07D4:0000:0027:FA61 ()
 */
void emu_Unknown_07D4_0000()
{
	uint16 arg06;
	uint16 loc10;
	uint16 loc12;
	uint16 loc14;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	if (g_global->selectionType < 1 || g_global->selectionType > 4) return;

	arg06 = emu_get_memory16(emu_ss, emu_sp, 0);
	loc10 = 0;

	emu_push(arg06);
	emu_push(emu_cs); emu_push(0x0034); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	emu_sp += 2;

	loc12 = emu_ax;

	if (arg06 != 0) g_global->variable_3A12 = 1;

	emu_push(emu_cs); emu_push(0x0049); emu_cs = 0x06F7; f__06F7_0602_0018_CEB0();

	emu_push(emu_cs); emu_push(0x004E); emu_cs = 0x151A; f__151A_0196_0018_AF63();

	Unit_Sort();

	if (g_global->variable_3A12 == 0 && g_global->viewportPosition != g_global->minimapPosition) {
		uint16 loc0C = Tile_GetPackedX(g_global->viewportPosition);
		uint16 loc0E = Tile_GetPackedY(g_global->viewportPosition);
		int16 locsi = Tile_GetPackedX(g_global->minimapPosition) - loc0C;
		int16 locdi = Tile_GetPackedY(g_global->minimapPosition) - loc0E;

		int16 loc02 = 15 - abs(locsi);
		int16 loc04 = 10 - abs(locdi);

		int16 loc06, loc08;

		if (loc02 < 1 || loc04 < 1) g_global->variable_3A12 = 1;

		if (g_global->variable_3A12 == 0 && (loc02 != 15 || loc04 != 10)) {
			Map_SetSelectionObjectPosition(0xFFFF);
			loc10 = 1;

			emu_push(2);
			emu_push(emu_cs); emu_push(0x0112); emu_cs = 0x2642; f__2642_0002_005E_87F6();
			emu_sp += 2;

			emu_push(2);
			emu_push(0);
			emu_push(loc04 << 4);
			emu_push(loc02 << 1);
			emu_push(40 + ((locdi < 0) ? 0 : (locdi << 4)));
			emu_push((locsi < 0) ? 0 : (locsi << 1));
			emu_push(40 + ((locdi < 0) ? (-locdi << 4) : 0));
			emu_push((locsi < 0) ? (-locsi << 1) : 0);
			emu_push(emu_cs); emu_push(0x016F); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
			emu_sp += 16;
		} else {
			g_global->variable_3A12 = 1;
		}

		locsi = max(0, locsi);
		locdi = max(0, locdi);

		for (loc08 = 0; loc08 < 10; loc08++) {
			uint16 loc0A = (loc08 + loc0E) << 6;

			for (loc06 = 0; loc06 < 15; loc06++) {
				if (loc06 >= locsi && (locsi + loc02) > loc06 && loc08 >= locdi && (locdi + loc04) > loc08 && g_global->variable_3A12 == 0) continue;

				emu_push(1);
				emu_push(0);
				emu_push(loc06 + loc0C + loc0A);
				emu_push(emu_cs); emu_push(0x01E1); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0000_0011_95D0();
				emu_sp += 6;
			}
		}
	}

	if (loc10 != 0) {
		Map_SetSelectionObjectPosition(0xFFFF);

		for (loc14 = 0; loc14 < 14; loc14++) {
			uint16 v = g_global->minimapPosition + loc14 + 384;

			g_global->variable_8FE5[v >> 3] |= 1 << (v & 7);
			g_global->variable_8DE5[v >> 3] |= 1 << (v & 7);

			g_global->variable_39E2++;
		}
	}

	g_global->minimapPosition = g_global->viewportPosition;
	g_global->variable_3A00 = g_global->selectionPosition;

	if (g_global->variable_37BA != 0 && g_global->variable_3346 < g_global->variable_76AC) {
		g_global->variable_37BA--;
		g_global->variable_3346 = g_global->variable_76AC + 60;

		for (loc14 = 0; loc14 < 14; loc14++) {
			emu_push(1);
		emu_push(0);
			emu_push(g_global->viewportPosition + loc14 + 384);
			emu_push(emu_cs); emu_push(0x02A8); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0000_0011_95D0();
			emu_sp += 6;
		}
	}

	emu_push(arg06);
	emu_push(loc10);
	emu_push(g_global->variable_3A12);
	emu_push(emu_cs); emu_push(0x02C2); emu_cs = 0x07D4; emu_Unknown_07D4_034D();
	emu_sp += 6;

	g_global->variable_3A12 = 0;

	emu_push(loc12);
	emu_push(emu_cs); emu_push(0x02D4); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	emu_sp += 2;

	Map_SetSelectionObjectPosition(g_global->variable_3A00);
	Map_UpdateMinimapPosition(g_global->minimapPosition, false);

	emu_push(emu_cs); emu_push(0x02F2); emu_cs = 0x2642; f__2642_0069_0008_D517();
}
