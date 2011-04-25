/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "unknown.h"
#include "../animation.h"
#include "../gfx.h"
#include "../unit.h"
#include "../tile.h"
#include "../map.h"
#include "../os/math.h"
#include "../gui/gui.h"
#include "../structure.h"
#include "../pool/pool.h"
#include "../pool/house.h"
#include "../pool/unit.h"
#include "../house.h"
#include "../sprites.h"

extern void f__2642_0002_005E_87F6();
extern void f__2642_0069_0008_D517();
extern void f__2C17_000C_002F_3016();
extern void overlay(uint16 cs, uint8 force);

/**
 * C-ified function of f__07D4_18BD_0016_68BB()
 *
 * @name Unknown_07D4_18BD
 * @implements 07D4:18BD:0016:68BB ()
 */
static csip32 Unknown_07D4_18BD(uint16 index, uint16 houseID)
{
	csip32 ret_csip;
	uint8 i;

	ret_csip.csip = 0x0;

	if (index > 355) return ret_csip;

	ret_csip = g_sprites[index];

	if (ret_csip.csip == 0x0) return ret_csip;

	emu_push(ret_csip.s.cs); emu_push(ret_csip.s.ip);
	emu_push(emu_cs); emu_push(0x1904); emu_cs = 0x2903; emu_Unknown_2903_00CA();
	emu_sp += 4;

	if ((emu_ax & 0x1) == 0) return ret_csip;

	for (i = 0; i < 16; i++) {
		uint8 v = emu_get_memory8(ret_csip.s.cs, ret_csip.s.ip, 10 + i);

		if (v >= 0x90 && v <= 0x98) {
			if (v == 0xFF) break;
			v += houseID * 16;
		}

		g_global->variable_8420[i] = v;
	}

	return ret_csip;
}

/**
 * C-ified function of f__07D4_034D_001F_FF64()
 *
 * @name Unknown_07D4_034D
 * @implements 07D4:034D:001F:FF64 ()
 */
static void Unknown_07D4_034D(bool arg06, bool arg08, bool arg0A)
{
	uint16 x;
	uint16 y;
	uint16 loc0E;
	uint16 curPos;
	bool loc12;
	uint16 old_6C91;
	uint16 oldValue_07AE_0000;
	int16 minX[10];
	int16 maxX[10];

	PoolFindStruct find;

	loc12 = arg06;

	memset(minX, 0xF, 20);
	memset(maxX, 0, 20);

	old_6C91 = Unknown_Set_Global_6C91(2);

	oldValue_07AE_0000 = Unknown_07AE_0000(2);

	if (g_global->variable_39E2 != 0 || arg06) {
		for (y = 0; y < 10; y++) {
			uint16 top = (y << 4) + 0x28;
			for (x = 0; x < (arg0A ? 15 : 16); x++) {
				Tile *t;
				uint16 left;

				curPos = g_global->viewportPosition + Tile_PackXY(x, y);

				if (x < 15 && !arg06 && (g_global->variable_8FE5[curPos >> 3] & (1 << (curPos & 7))) != 0) {
					if (maxX[y] < x) maxX[y] = x;
					if (minX[y] > x) minX[y] = x;
					loc12 = true;
				}

				if ((g_global->variable_8DE5[curPos >> 3] & (1 << (curPos & 7))) == 0 && !arg06) continue;

				g_global->variable_8FE5[curPos >> 3] |= (1 << (curPos & 7));

				if (x < 15) {
					loc12 = true;
					if (maxX[y] < x) maxX[y] = x;
					if (minX[y] > x) minX[y] = x;
				}

				t = Map_GetTileByPosition(curPos);
				left = x << 4;

				if (g_global->debugScenario == 0x0 && g_global->variable_39F2 == t->overlaySpriteID) {
					GUI_DrawFilledRectangle(left, top, left + 15, top + 15, 12);
					continue;
				}

				GFX_DrawSprite(t->groundSpriteID, left >> 3, top, t->houseID);

				if (t->overlaySpriteID == 0 || g_global->debugScenario != 0x0) continue;

				GFX_DrawSprite(t->overlaySpriteID, left >> 3, top, t->houseID);
			}
		}
		g_global->variable_39E2 = 0;
	}

	find.type    = UNIT_SANDWORM;
	find.index   = 0xFFFF;
	find.houseID = 0xFFFF;

	while (true) {
		Unit *u;
		csip32 sprite_csip;

		u = Unit_Find(&find);

		if (u == NULL) break;

		if (!u->o.flags.s.variable_4_1000 && !arg06) continue;

		u->o.flags.s.variable_4_1000 = false;

		if (!Map_GetTileByPosition(Tile_PackTile(u->o.position))->isUnveiled && g_global->debugScenario == 0) continue;

		sprite_csip = Unknown_07D4_18BD(g_unitInfo[u->o.type].spriteID, Unit_GetHouseID(u));

		g_global->variable_8DE3 = 0x200;

		if (Map_IsPositionInViewport(u->o.position, &x, &y)) GUI_DrawSprite(g_global->variable_6C91, sprite_csip, x, y, 2, g_global->variable_8DE3 | 0xC000);

		if (Map_IsPositionInViewport(u->variable_5A, &x, &y)) GUI_DrawSprite(g_global->variable_6C91, sprite_csip, x, y, 2, g_global->variable_8DE3 | 0xC000);

		if (Map_IsPositionInViewport(u->variable_5E, &x, &y)) GUI_DrawSprite(g_global->variable_6C91, sprite_csip, x, y, 2, g_global->variable_8DE3 | 0xC000);

		if (g_global->selectionUnit.csip == 0x0 || u != Unit_Get_ByMemory(g_global->selectionUnit)) continue;

		if (!Map_IsPositionInViewport(u->o.position, &x, &y)) continue;

		GUI_DrawSprite(g_global->variable_6C91, g_sprites[6], x, y, 2, 0xC000);
	}

	g_global->variable_39E4 = 0;

	if (g_global->selectionUnit.csip == 0x0 && (g_global->variable_3A08 != 0 || arg08) && (Structure_Get_ByPackedTile(g_global->variable_3A00) != NULL || g_global->selectionType == 2 || g_global->debugScenario != 0)) {
		uint16 x1 = (Tile_GetPackedX(g_global->variable_3A00) - Tile_GetPackedX(g_global->minimapPosition)) << 4;
		uint16 y1 = ((Tile_GetPackedY(g_global->variable_3A00) - Tile_GetPackedY(g_global->minimapPosition)) << 4) + 0x28;
		uint16 x2 = x1 + (g_global->selectionWidth << 4) - 1;
		uint16 y2 = y1 + (g_global->selectionHeight << 4) - 1;

		GUI_SetClippingArea(0, 40, 239, SCREEN_HEIGHT - 1);
		GUI_DrawWiredRectangle(x1, y1, x2, y2, 0xFF);

		if (g_global->variable_38EC == 0 && g_global->selectionType == 2) {
			GUI_DrawLine(x1, y1, x2, y2, 0xFF);
			GUI_DrawLine(x2, y1, x1, y2, 0xFF);
		}

		GUI_SetClippingArea(0, 0, SCREEN_WIDTH - 1, SCREEN_HEIGHT - 1);

		g_global->variable_3A08 = 0;
	}

	if (g_global->variable_39E6 != 0 || arg06 || loc12) {
		find.type    = 0xFFFF;
		find.index   = 0xFFFF;
		find.houseID = 0xFFFF;

		while (true) {
			Unit *u;
			UnitInfo *ui;
			uint16 packed;
			uint8 orientation;
			uint16 index;

			u = Unit_Find(&find);

			if (u == NULL) break;

			if (u->o.index < 20 || u->o.index > 101) continue;

			packed = Tile_PackTile(u->o.position);

			if ((!u->o.flags.s.variable_4_1000 || u->o.flags.s.isNotOnMap) && !arg06 && (g_global->variable_8FE5[packed >> 3] & (1 << (packed & 7))) == 0) continue;

			u->o.flags.s.variable_4_1000 = false;

			if (!Map_GetTileByPosition(packed)->isUnveiled && g_global->debugScenario == 0) continue;

			ui = &g_unitInfo[u->o.type];

			if (!Map_IsPositionInViewport(u->o.position, &x, &y)) continue;

			x += emu_get_memory16(0x2DCE, u->variable_6C * 4, 0x0);
			y += emu_get_memory16(0x2DCE, u->variable_6C * 4, 0x2);

			orientation = Sprites_B4CD_17DC(u->orientation[0].current);

			if (u->variable_6D >= 0 || ui->variable_4C == 0) {
				index = ui->spriteID;

				switch (ui->displayMode) {
					case 1:
					case 2:
						if (ui->movementType == MOVEMENT_SLITHER) break;
						index += g_global->variable_32A4[orientation][0];
						g_global->variable_8DE3 = g_global->variable_32A4[orientation][1];
						break;

					case 3:
						index += g_global->variable_32C4[orientation][0] * 3;
						index += g_global->variable_334A[u->variable_6D & 3];
						g_global->variable_8DE3 = g_global->variable_32C4[orientation][1];
						break;

					case 4:
						index += g_global->variable_32C4[orientation][0] * 4;
						index += u->variable_6D & 3;
						g_global->variable_8DE3 = g_global->variable_32C4[orientation][1];
						break;

					default:
						g_global->variable_8DE3 = 0;
						break;
				}
			} else {
				index = ui->variable_4C - u->variable_6D - 1;
				g_global->variable_8DE3 = 0;
			}

			if (u->o.type != UNIT_SANDWORM && u->o.flags.s.variable_0800) g_global->variable_8DE3 |= 0x100;
			if (ui->o.flags.s.variable_0020) g_global->variable_8DE3 |= 0x200;

			GUI_DrawSprite(g_global->variable_6C91, Unknown_07D4_18BD(index, (u->deviated != 0) ? HOUSE_ORDOS : Unit_GetHouseID(u)), x, y, 2, g_global->variable_8DE3 | 0xE000, g_global->variable_8420, emu_get_memorycsip(g_global->variable_3C3E), 1);

			if (u->o.type == UNIT_HARVESTER && u->actionID == ACTION_HARVEST && u->variable_6D >= 0 && (u->actionID == ACTION_HARVEST || u->actionID == ACTION_MOVE)) {
				uint16 type = Map_B4CD_0750(packed);
				if (type == 8 || type == 9) {
					GUI_DrawSprite(g_global->variable_6C91, Unknown_07D4_18BD((u->variable_6D % 3) + 0xDF + (g_global->variable_32A4[orientation][0] * 3), Unit_GetHouseID(u)), x + g_global->variable_334E[orientation][0], y + g_global->variable_334E[orientation][1], 2, g_global->variable_32A4[orientation][1] | 0xC000);
				}
			}

			if (u->variable_6D >= 0 && ui->turretSpriteID != 0xFFFF) {
				uint16 offsetX = 0;
				uint16 offsetY = 0;
				uint16 index = ui->turretSpriteID;

				orientation = Sprites_B4CD_17DC(u->orientation[ui->o.flags.s.hasTurret ? 1 : 0].current);

				switch (ui->turretSpriteID) {
					case 0x8D: /* sonic tank */
						offsetY = 0xFFFE;
						break;

					case 0x92: /* rocket launcher */
						offsetY = 0xFFFD;
						break;

					case 0x7E: /* siege tank */
						offsetX = g_global->variable_336E[orientation][0];
						offsetY = g_global->variable_336E[orientation][1];
						break;

					case 0x88: /* devastator */
						offsetX = g_global->variable_338E[orientation][0];
						offsetY = g_global->variable_338E[orientation][1];
						break;

					default:
						break;
				}

				g_global->variable_8DE3 = g_global->variable_32A4[orientation][1];
				index += g_global->variable_32A4[orientation][0];

				GUI_DrawSprite(g_global->variable_6C91, Unknown_07D4_18BD(index, Unit_GetHouseID(u)), x + offsetX, y + offsetY, 2, g_global->variable_8DE3 | 0xE000, g_global->variable_8420);
			}

			if (u->o.flags.s.isSmoking) {
				uint16 spriteID = 180 + (u->variable_6D & 3);
				if (spriteID == 183) spriteID = 181;

				GUI_DrawSprite(g_global->variable_6C91, g_sprites[spriteID], x, y - 14, 2, 0xC000);
			}

			if (g_global->selectionUnit.csip == 0x0 || u != Unit_Get_ByMemory(g_global->selectionUnit)) continue;

			GUI_DrawSprite(g_global->variable_6C91, g_sprites[6], x, y, 2, 0xC000);
		}

		g_global->variable_39E6 = 0;
	}

	for (loc0E = 0; loc0E < 32; loc0E ++) {
		struct_395A *s;

		s = &((struct_395A *)emu_get_memorycsip(g_global->variable_395A))[loc0E];

		curPos = Tile_PackTile(s->position);

		if ((g_global->variable_8FE5[curPos >> 3] & (1 << (curPos & 7))) != 0) s->variable_07 = 1;

		if (s->variable_0C.csip == 0x0) continue;
		if (s->variable_07 == 0 && !arg06) continue;
		if (s->variable_0A == 0) continue;

		s->variable_07 = 0;

		if (!Map_GetTileByPosition(curPos)->isUnveiled && g_global->debugScenario == 0) continue;
		if (!Map_IsPositionInViewport(s->position, &x, &y)) continue;

		g_global->variable_8DE3 = 0xC000;

		GUI_DrawSprite(g_global->variable_6C91, Unknown_07D4_18BD(s->variable_0A, s->houseID), x, y, 2, g_global->variable_8DE3, g_global->variable_8420);
	}

	if (g_global->variable_39E8 != 0 || arg06 || loc12) {
		find.type    = 0xFFFF;
		find.index   = 0xFFFF;
		find.houseID = 0xFFFF;

		while (true) {
			Unit *u;
			UnitInfo *ui;
			uint8 orientation;
			csip32 sprite_csip;
			uint16 index;

			u = Unit_Find(&find);

			if (u == NULL) break;

			if (u->o.index > 15) continue;

			curPos = Tile_PackTile(u->o.position);

			if ((!u->o.flags.s.variable_4_1000 || u->o.flags.s.isNotOnMap) && !arg06 && (g_global->variable_8FE5[curPos >> 3] & (1 << (curPos & 7))) == 0) continue;

			u->o.flags.s.variable_4_1000 = false;

			if (!Map_GetTileByPosition(curPos)->isUnveiled && g_global->debugScenario == 0) continue;

			ui = &g_unitInfo[u->o.type];

			if (!Map_IsPositionInViewport(u->o.position, &x, &y)) continue;

			index = ui->spriteID;
			orientation = u->orientation[0].current;
			g_global->variable_8DE3 = 0xC000;

			switch (ui->displayMode) {
				case 0:
					if (u->o.flags.s.variable_4_0040) index++;
					break;

				case 1:
					orientation = Sprites_B4CD_17DC(orientation);

					index += g_global->variable_32E4[orientation][0];
					g_global->variable_8DE3 |= g_global->variable_32E4[orientation][1];
					break;

				case 2:
					orientation = Sprites_B4CD_17F7(orientation);

					index += g_global->variable_3304[orientation][0];
					g_global->variable_8DE3 |= g_global->variable_3304[orientation][1];
					break;

				case 5:
					orientation = Sprites_B4CD_17DC(orientation);

					index += (g_global->variable_32E4[orientation][0] * 3) + g_global->variable_33AE[u->variable_6D & 3];
					g_global->variable_8DE3 |= g_global->variable_32E4[orientation][1];
					break;

				default:
					g_global->variable_8DE3 = 0x0;
					break;
			}

			if ((ui->variable_36 & 0x2000) != 0 && u->o.flags.s.variable_4_0020) index += 5;
			if (u->o.type == UNIT_CARRYALL && u->o.flags.s.inTransport) index += 3;

			sprite_csip = Unknown_07D4_18BD(index, Unit_GetHouseID(u));

			if (ui->o.flags.s.variable_0001) GUI_DrawSprite(g_global->variable_6C91, sprite_csip, x + 1, y + 3, 2, (g_global->variable_8DE3 & 0xDFFF) | 0x300, emu_get_memorycsip(g_global->variable_3C3A), 1);

			if (ui->o.flags.s.variable_0020) g_global->variable_8DE3 |= 0x200;

			GUI_DrawSprite(g_global->variable_6C91, sprite_csip, x, y, 2, g_global->variable_8DE3 | 0x2000, g_global->variable_8420);
		}

		g_global->variable_39E8 = 0;
	}

	if (loc12) {
		memset(g_global->variable_8DE5, 0, 512);
		memset(g_global->variable_8FE5, 0, 512);
	}

	if (g_global->variable_3344 != 0) {
		bool init = false;
		bool update = false;
		uint16 old_6C91_2 = 2;

		for (loc0E = 0; loc0E < g_global->variable_3344; loc0E++) {
			curPos = g_global->variable_8290[loc0E];
			g_global->variable_91E5[curPos >> 3] &= ~(1 << (curPos & 7));

			if (!init) {
				init = true;

				old_6C91_2 = Unknown_Set_Global_6C91(2);

				emu_push(3);
				emu_push(emu_cs); emu_push(0x12EB); emu_cs = 0x2642; f__2642_0002_005E_87F6();
				emu_sp += 2;
			}

			Unknown_07D4_1625(curPos);

			if (!update && (g_global->variable_93E5[curPos >> 3] & (1 << (curPos & 7))) != 0) update = true;
		}

		if (update) Map_UpdateMinimapPosition(g_global->minimapPosition, true);

		if (init) {
			GUI_Unknown_24D0_000D(32, 136, 32, 136, 8, 64, g_global->variable_6C91, 0);

			Unknown_Set_Global_6C91(old_6C91_2);

			emu_push(emu_cs); emu_push(0x1372); emu_cs = 0x2642; f__2642_0069_0008_D517();
		}

		if (g_global->variable_3344 == 200) {
			g_global->variable_3344 = 0;

			for (loc0E = 0; loc0E < 4096; loc0E++) {
				if ((g_global->variable_91E5[loc0E >> 3] & (1 << (loc0E & 7))) == 0) continue;
				g_global->variable_8290[g_global->variable_3344++] = loc0E;
				if (g_global->variable_3344 == 200) break;
			}
		} else {
			g_global->variable_3344 = 0;
		}
	}

	if ((g_global->variable_37BA & 0x1) != 0 && g_global->variable_37BC.csip != 0x0 && (minX[6] <= 14 || maxX[6] >= 0 || arg08 || arg06)) {
		GUI_DrawText_Wrapper((char *)emu_get_memorycsip(g_global->variable_37BC), 112, 139, 15, 0, 0x132);
		minX[6] = -1;
		maxX[6] = 14;
	}

	if (loc12 && !arg0A) {
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
			bool init = false;

			for (loc0E = 0; loc0E < 10; loc0E++) {
				uint16 width;
				uint16 height;

				if (arg08) {
					minX[loc0E] = 0;
					maxX[loc0E] = 14;
				}

				if (maxX[loc0E] < minX[loc0E]) continue;

				x = minX[loc0E] * 2;
				y = (loc0E << 4) + 0x28;
				width  = (maxX[loc0E] - minX[loc0E] + 1) * 2;
				height = 16;

				if (!init) {
					emu_push(g_global->variable_6D5D);
					emu_push(emu_cs); emu_push(0x151C); emu_cs = 0x2642; f__2642_0002_005E_87F6();
					emu_sp += 2;

					init = true;
					g_global->variable_37A4 = 0;
				}

				GUI_Unknown_24D0_000D(x, y, x, y, width, height, g_global->variable_6C91, 0);
			}

			if (init) {
				emu_push(emu_cs); emu_push(0x155C); emu_cs = 0x2642; f__2642_0069_0008_D517();
			}
		}
	}

	Unknown_Set_Global_6C91(old_6C91);

	Unknown_07AE_0000(oldValue_07AE_0000);

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
	bool arg06;
	bool loc10;
	uint16 old_6C91;
	uint16 loc14;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	if (g_global->selectionType < 1 || g_global->selectionType > 4) return;

	arg06 = emu_get_memory16(emu_ss, emu_sp, 0) != 0;
	loc10 = false;

	old_6C91 = Unknown_Set_Global_6C91(arg06 ? 1 : 0);

	if (arg06) g_global->variable_3A12 = 1;

	Map_06F7_0602();
	Animation_Tick();
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
			loc10 = true;

			emu_push(2);
			emu_push(emu_cs); emu_push(0x0112); emu_cs = 0x2642; f__2642_0002_005E_87F6();
			emu_sp += 2;

			GUI_Unknown_24D0_000D(max(-locsi << 1, 0), 40 + max(-locdi << 4, 0), max(0, locsi << 1), 40 + max(0, locdi << 4), loc02 << 1, loc04 << 4, 0, 2);
		} else {
			g_global->variable_3A12 = 1;
		}

		locsi = max(0, locsi);
		locdi = max(0, locdi);

		for (loc08 = 0; loc08 < 10; loc08++) {
			uint16 loc0A = (loc08 + loc0E) << 6;

			for (loc06 = 0; loc06 < 15; loc06++) {
				if (loc06 >= locsi && (locsi + loc02) > loc06 && loc08 >= locdi && (locdi + loc04) > loc08 && g_global->variable_3A12 == 0) continue;

				Map_Update(loc06 + loc0C + loc0A, 0, true);
			}
		}
	}

	if (loc10) {
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
			Map_Update(g_global->viewportPosition + loc14 + 384, 0, true);
		}
	}

	Unknown_07D4_034D(g_global->variable_3A12 != 0, loc10, arg06);

	g_global->variable_3A12 = 0;

	Unknown_Set_Global_6C91(old_6C91);

	Map_SetSelectionObjectPosition(g_global->variable_3A00);
	Map_UpdateMinimapPosition(g_global->minimapPosition, false);

	emu_push(emu_cs); emu_push(0x02F2); emu_cs = 0x2642; f__2642_0069_0008_D517();
}

/**
 * C-ified function of f__07D4_159A_001D_F971()
 *
 * @name emu_Unknown_07D4_159A
 * @implements 07D4:159A:001D:F971 ()
 */
void emu_Unknown_07D4_159A()
{
	bool arg06;
	uint16 old_6C91 = 2;
	uint16 i;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	arg06 = emu_get_memory16(emu_ss, emu_sp, 0) != 0;

	if (!arg06) {
		old_6C91 = Unknown_Set_Global_6C91(2);
	}

	for (i = 0; i < 4096; i++) Unknown_07D4_1625(i);

	Map_UpdateMinimapPosition(g_global->minimapPosition, true);

	if (arg06) return;

	Unknown_Set_Global_6C91(old_6C91);

	emu_push(3);
	emu_push(emu_cs); emu_push(0x15F2); emu_cs = 0x2642; f__2642_0002_005E_87F6();
	emu_sp += 2;

	GUI_Unknown_24D0_000D(32, 136, 32, 136, 8, 64, 2, 0);

	emu_push(emu_cs); emu_push(0x161F); emu_cs = 0x2642; f__2642_0069_0008_D517();
}

/**
 * C-ified function of f__07D4_1625_001A_07E5()
 *
 * @name Unknown_07D4_1625
 * @implements 07D4:1625:001A:07E5 ()
 */
void Unknown_07D4_1625(uint16 packed)
{
	uint16 x;
	uint16 y;
	uint16 colour;
	uint16 spriteID;
	Tile *t;
	uint16 mapScale;

	colour = 12;
	spriteID = 0xFFFF;

	if (Tile_IsOutOfMap(packed) || !Map_IsValidPosition(packed)) return;

	x = Tile_GetPackedX(packed);
	y = Tile_GetPackedY(packed);

	mapScale = g_global->scenario.mapScale + 1;

	if (mapScale == 0 || (g_global->variable_93E5[packed >> 3] & (1 << (packed & 7))) != 0) return;

	t = Map_GetTileByPosition(packed);

	if ((t->isUnveiled && House_Get_ByMemory(g_global->playerHouse)->flags.s.radarActivated) || g_global->debugScenario != 0) {
		uint16 loc08 = Map_B4CD_0750(packed);
		Unit *u;

		if (mapScale > 1) {
			spriteID = g_global->scenario.mapScale + g_global->variable_3A3E[loc08][12] - 1;
		} else {
			colour = g_global->variable_3A3E[loc08][11];
		}

		if (g_global->variable_3A3E[loc08][11] == 0xFFFF) {
			if (mapScale > 1) {
				spriteID = mapScale + t->houseID * 2 + 29;
			} else {
				colour = g_houseInfo[t->houseID].minimapColor;
			}
		}

		u = Unit_Get_ByPackedTile(packed);

		if (u != NULL) {
			if (mapScale > 1) {
				if (u->o.type == UNIT_SANDWORM) {
					spriteID = mapScale + 53;
				} else {
					spriteID = mapScale + Unit_GetHouseID(u) * 2 + 29;
				}
			} else {
				if (u->o.type == UNIT_SANDWORM) {
					colour = 255;
				} else {
					colour = g_houseInfo[Unit_GetHouseID(u)].minimapColor;
				}
			}
		}
	} else {
		Structure *s;

		s = Structure_Get_ByPackedTile(packed);

		if (s != NULL && s->o.houseID == g_global->playerHouseID) {
			if (mapScale > 1) {
				spriteID = mapScale + s->o.houseID * 2 + 29;
			} else {
				colour = g_houseInfo[s->o.houseID].minimapColor;
			}
		} else {
			if (mapScale > 1) {
				spriteID = g_global->scenario.mapScale + g_global->variable_3A3E[6][12] - 1;
			} else {
				colour = 12;
			}
		}
	}

	x -= g_global->mapInfo[g_global->scenario.mapScale].minX;
	y -= g_global->mapInfo[g_global->scenario.mapScale].minY;

	if (spriteID != 0xFFFF) {
		x *= g_global->scenario.mapScale + 1;
		y *= g_global->scenario.mapScale + 1;
		GUI_DrawSprite(g_global->variable_6C91, g_sprites[spriteID], x, y, 3, 0x4000);
	} else {
		GFX_PutPixel(x + 256, y + 136, colour & 0xFF);
	}

	g_global->variable_37A6++;
}

/**
 * C-ified function of f__07D4_02F8_0055_0679()
 *
 * @name emu_Unknown_07D4_02F8
 * @implements 07D4:02F8:0055:0679 ()
 */
void emu_Unknown_07D4_02F8()
{
	uint16 packed;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	packed = emu_get_memory16(emu_ss, emu_sp, 0);

	if ((g_global->variable_93E5[packed >> 3] & (1 << (packed & 7))) != 0 && g_global->scenario.mapScale + 1 == 0) return;

	g_global->variable_91E5[packed >> 3] |= (1 << (packed & 7));

	if (g_global->variable_3344 < 200) g_global->variable_8290[g_global->variable_3344++] = packed;
}
