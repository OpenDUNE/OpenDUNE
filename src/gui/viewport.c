/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "../house.h"
#include "../map.h"
#include "../os/math.h"
#include "../os/strings.h"
#include "../pool/house.h"
#include "../pool/structure.h"
#include "../pool/unit.h"
#include "../structure.h"
#include "../tile.h"
#include "../tools.h"
#include "../unit.h"
#include "widget.h"
#include "../unknown/unknown.h"
#include "../string.h"

extern void f__0C10_0182_0012_B114();
extern void f__0C3A_142D_0018_6667();
extern void f__0C3A_1B79_0021_8C40();
extern void f__10E4_0117_0015_392D();
extern void f__10E4_09AB_0031_5E8E();
extern void f__1A34_232C_0011_B7DE();
extern void f__1A34_27A8_0012_7198();
extern void f__1A34_2F9E_0016_5A55();
extern void f__1DD7_0477_000E_5C89();
extern void f__2B4C_0002_0029_64AF();
extern void f__B483_0000_0019_F96A();
extern void f__B4CD_0D74_0020_7CC1();
extern void f__B4CD_1086_0040_F11C();
extern void f__B4CD_1178_000D_B1D5();
extern void f__B4E9_0050_003F_292A();
extern void emu_Unit_LaunchHouseMissle();
extern void overlay(uint16 cs, uint8 force);

/**
 * Handles the Click events for the Viewport widget.
 *
 * @param w The widget.
 */
bool GUI_Widget_Viewport_Click(Widget *w)
{
	uint16 direction;
	uint16 x, y;
	uint16 spriteID;
	uint16 packed;
	bool click, drag;

	spriteID = g_global->cursorSpriteID;
	switch (w->index) {
		default: break;
		case 39: spriteID = 1; break;
		case 40: spriteID = 2; break;
		case 41: spriteID = 4; break;
		case 42: spriteID = 3; break;
		case 43: spriteID = g_global->cursorDefaultSpriteID; break;
		case 44: spriteID = g_global->cursorDefaultSpriteID; break;
		case 45: spriteID = 0; break;
	}

	if (spriteID != g_global->cursorSpriteID) {
		g_global->tickCursor = g_global->tickGlobal;

		emu_push(emu_get_memory16(0x2DCE, spriteID * 4, 0x442));
		emu_push(emu_get_memory16(0x2DCE, spriteID * 4, 0x440));
		emu_push(g_global->cursorHotSpots[spriteID][1]);
		emu_push(g_global->cursorHotSpots[spriteID][0]);
		emu_push(emu_cs); emu_push(0x00E8); emu_cs = 0x2B4C; f__2B4C_0002_0029_64AF();
		emu_sp += 8;

		g_global->cursorSpriteID = spriteID;
	}

	if (w->index == 45) return true;

	click = false;
	drag = false;

	if ((w->state & 0x1100) != 0) {
		click = true;
		g_global->variable_37B8 = 0;
	} else if ((w->state & 0x2200) != 0 && g_global->variable_37B8 == 0) {
		drag = true;
	}

	direction = 0xFFFF;
	switch (w->index) {
		default: break;
		case 39: direction = 0; break;
		case 40: direction = 2; break;
		case 41: direction = 6; break;
		case 42: direction = 4; break;
	}

	if (direction != 0xFFFF) {
		if (!click && !drag) {
			if (g_global->tickMapScroll + 10 >= g_global->tickGlobal || g_global->tickCursor + 20 >= g_global->tickGlobal) return true;
			if (g_global->gameConfig.autoScroll == 0) return true;
			if (!g_global->config.useMouse || g_global->selectionType == 4 || g_global->selectionType == 3) return true;
		}

		g_global->tickMapScroll = g_global->tickGlobal;

		Map_MoveDirection(direction);
		return true;
	}

	if (click) {
		x = g_global->mouseClickX;
		y = g_global->mouseClickY;
	} else {
		x = g_global->mouseX;
		y = g_global->mouseY;
	}

	if (w->index == 43) {
		x =  x / 16 + Tile_GetPackedX(g_global->minimapPosition);
		y = (y - 40) / 16 + Tile_GetPackedY(g_global->minimapPosition);
	} else if (w->index == 44) {
		uint16 mapScale;
		MapInfo *mapInfo;

		mapScale = g_global->scenario.mapScale;
		mapInfo = &g_global->mapInfo[mapScale];

		x = min((max(x, 256) - 256) / (mapScale + 1), mapInfo->sizeX - 1) + mapInfo->minX;
		y = min((max(y, 136) - 136) / (mapScale + 1), mapInfo->sizeY - 1) + mapInfo->minY;
	}

	packed = Tile_PackXY(x, y);

	if (click && g_global->selectionType == 1) {
		Unit *u;
		ActionType action;
		uint16 encoded;

		emu_push(0xFFFF);
		emu_push(0);
		emu_push(0);
		emu_push(emu_cs); emu_push(0x036F); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
		emu_sp += 6;

		if (g_global->unitHouseMissile.csip != 0x0) {
			emu_push(packed);
			emu_push(emu_cs); emu_push(0x0383); emu_cs = 0x1423; emu_Unit_LaunchHouseMissle();
			emu_sp += 2;
			return true;
		}

		u = Unit_Get_ByMemory(g_global->activeUnit);

		action = g_global->activeAction;

		emu_push(g_global->activeUnit.s.cs); emu_push(g_global->activeUnit.s.ip);
		emu_push(emu_cs); emu_push(0x0397); emu_cs = 0x0C10; f__0C10_0182_0012_B114();
		emu_sp += 2;

		u->targetAttack = 0;
		u->targetMove   = 0;
		u->variable_72  = 0xFF;

		if (action != ACTION_MOVE && action != ACTION_HARVEST) {
			emu_push(packed);
			emu_push(emu_cs); emu_push(0x03CC); emu_cs = 0x1A34; f__1A34_2F9E_0016_5A55();
			emu_sp += 2;
			encoded = Tools_Index_Encode(emu_ax, IT_TILE);
		} else {
			encoded = Tools_Index_Encode(packed, IT_TILE);
		}

		Unit_SetAction(u, action);

		if (action == ACTION_MOVE) {
			Unit_SetDestination(u, encoded);
		} else if (action == ACTION_HARVEST) {
			u->targetMove = encoded;
		} else {
			Unit *target;

			Unit_SetTarget(u, encoded);
			target = Tools_Index_GetUnit(u->targetAttack);
			if (target != NULL) target->variable_6E = 8;
		}

		if (g_global->variable_6D8F == 0) {
			emu_push(36);
			emu_push(emu_cs); emu_push(0x046B); emu_cs = 0x1DD7; f__1DD7_0477_000E_5C89();
			emu_sp += 2;
		} else if (g_unitInfo[u->type].variable_3C == 0) {
			emu_push(g_actionInfo[action].variable_0A);
			emu_push(emu_cs); emu_push(0x04B8); emu_cs = 0x3483; overlay(0x3483, 0); emu_Unknown_B483_0156();
			emu_sp += 2;
		} else {
			emu_push(((Tools_Random_256() & 0x1) == 0) ? 20 : 17);
			emu_push(emu_cs); emu_push(0x04B8); emu_cs = 0x3483; overlay(0x3483, 0); emu_Unknown_B483_0156();
			emu_sp += 2;
		}

		g_global->activeUnit.csip = 0x0;
		g_global->activeAction    = 0xFFFF;

		emu_push(3);
		emu_push(emu_cs); emu_push(0x04D4); emu_cs = 0x34E9; overlay(0x34E9, 0); f__B4E9_0050_003F_292A();
		emu_sp += 2;
		return true;
	}

	if (click && g_global->selectionType == 2) {
		Structure *s;
		StructureInfo *si;
		House *h;

		s = Structure_Get_ByMemory(g_global->activeStructure);
		si = &g_structureInfo[g_global->activeStructureType];
		h = House_Get_ByMemory(g_global->playerHouse);

		if (Structure_Place(s, g_global->selectionPosition)) {
			emu_push(0);
			emu_push(0);
			emu_push(20);
			emu_push(emu_cs); emu_push(0x0527); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0000_0019_F96A();
			emu_sp += 2;

			if (s->type == STRUCTURE_PALACE) House_Get_ByIndex(s->houseID)->palacePosition = s->position;

			if (g_global->activeStructureType == STRUCTURE_REFINERY && g_global->variable_38BC == 0) {
				csip32 ucsip;

				g_global->variable_38BC++;

				emu_push(Tools_Index_Encode(s->index, IT_STRUCTURE));
				emu_push(UNIT_HARVESTER);
				emu_push(g_global->playerHouseID);
				emu_push(emu_cs); emu_push(0x058F); emu_cs = 0x1A34; f__1A34_232C_0011_B7DE();
				emu_sp += 6;

				/* XXX -- Temporary, to keep all the emu_calls workable for now */
				ucsip.s.cs = emu_dx;
				ucsip.s.ip = emu_ax;

				g_global->variable_38BC--;

				if (ucsip.csip == 0x0) {
					h->variable_02++;
				} else {
					Unit_Get_ByMemory(ucsip)->variable_4D = Tools_Index_Encode(s->index, IT_STRUCTURE);
				}
			}

			emu_push(4);
			emu_push(emu_cs); emu_push(0x05D0); emu_cs = 0x34E9; overlay(0x34E9, 0); f__B4E9_0050_003F_292A();
			emu_sp += 2;

			s = Structure_Get_ByPackedTile(g_global->activeStructurePosition);
			if (s != NULL) {
				uint32 returnValue;

				emu_push(g_global->structureStartPos.s.cs); emu_push(g_global->structureStartPos.s.ip + s->index * sizeof(Structure));
				emu_push(emu_cs); emu_push(0x05F4); emu_cs = 0x0C3A; f__0C3A_1B79_0021_8C40();
				emu_sp += 4;
				returnValue = (emu_dx << 16) | emu_ax;

				if ((returnValue & (1 << s->objectType)) == 0) {
					emu_push(0xFFFE);
					emu_push(g_global->structureStartPos.s.cs); emu_push(g_global->structureStartPos.s.ip + s->index * sizeof(Structure));
					emu_push(emu_cs); emu_push(0x0622); emu_cs = 0x0C3A; f__0C3A_142D_0018_6667();
					emu_sp += 6;
				}
			}

			g_global->activeStructureType  = 0xFFFF;
			g_global->activeStructure.csip = 0x0;
			g_global->variable_38EC        = 0;

			emu_push(si->spriteID);
			emu_push(si->variable_2B);
			emu_push(emu_cs); emu_push(0x0650); emu_cs = 0x10E4; f__10E4_0117_0015_392D();
			emu_sp += 4;

			emu_push(g_global->playerHouseID);
			emu_push(emu_cs); emu_push(0x065B); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0D74_0020_7CC1();
			emu_sp += 2;

			if (h->powerProduction < h->powerUsage) {
				if ((h->structuresBuilt & (1 << STRUCTURE_OUTPOST)) != 0) {
					emu_push(0x14C); /* Not enough power for radar.  Build windtraps. */
					emu_push(emu_cs); emu_push(0x0691); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
					emu_sp += 2;

					emu_push(3);
					emu_push(emu_dx); emu_push(emu_ax);
					emu_push(emu_cs); emu_push(0x0699); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
					emu_sp += 6;
				}
			}
			return true;
		}

		emu_push(0);
		emu_push(0);
		emu_push(47);
		emu_push(emu_cs); emu_push(0x06AD); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0000_0019_F96A();
		emu_sp += 6;

		if (g_global->activeStructureType == STRUCTURE_SLAB_1x1 || g_global->activeStructureType == STRUCTURE_SLAB_2x2) {
			emu_push(0x87); /* Can not place foundation here. */
			emu_push(emu_cs); emu_push(0x06CB); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
			emu_sp += 2;

			emu_push(2);
			emu_push(emu_dx); emu_push(emu_ax);
			emu_push(emu_cs); emu_push(0x0713); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
			emu_sp += 6;
		} else {
			emu_push(0xFFFF);
			emu_push(26);
			emu_push(emu_cs); emu_push(0x06DC); emu_cs = 0x10E4; f__10E4_0117_0015_392D();
			emu_sp += 4;

			/* "Can not place %s here." */
			snprintf((char*)&g_global->variable_9939, sizeof(g_global->variable_9939), String_Get_ByIndex(0x86), String_Get_ByIndex(si->stringID_abbrev));

			emu_push(2);
			emu_push(0x353F); emu_push(emu_Global_GetIP(g_global->variable_9939, 0x353F));
			emu_push(emu_cs); emu_push(0x0713); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
			emu_sp += 6;
		}
		return true;
	}

	if (click && w->index == 43) {
		uint16 position;

		if (g_global->debugScenario != 0) {
			position = packed;
		} else {
			emu_push(packed);
			emu_push(emu_cs); emu_push(0x0740); emu_cs = 0x1A34; f__1A34_2F9E_0016_5A55();
			emu_sp += 2;
			position = emu_ax;
		}

		if (Map_GetTileByPosition(position)->fogOfWar != g_global->variable_39F2 || g_global->debugScenario != 0) {
			emu_push(position);
			emu_push(emu_cs); emu_push(0x076B); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_1086_0040_F11C();
			emu_sp += 2;

			if (emu_ax != 0 || emu_dx != 0 || g_global->debugScenario != 0) {
				Map_SetSelection(position);

				emu_push(g_global->selectionUnit.s.cs); emu_push(g_global->selectionUnit.s.ip);
				emu_push(emu_cs); emu_push(0x078B); emu_cs = 0x1A34; f__1A34_27A8_0012_7198();
				emu_sp += 4;
			}
		}

		if ((w->state & 0x1000) != 0) {
			emu_push(packed);
			emu_push(emu_cs); emu_push(0x07A0); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_1178_000D_B1D5();
			emu_sp += 2;
		}
		return true;
	}

	if ((click || drag) && w->index == 44) {
		emu_push(packed);
		emu_push(emu_cs); emu_push(0x07C2); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_1178_000D_B1D5();
		emu_sp += 2;
		return true;
	}

	if (g_global->selectionType == 1) {
		emu_push(packed);
		emu_push(emu_cs); emu_push(0x07D3); emu_cs = 0x1A34; f__1A34_2F9E_0016_5A55();
		emu_sp += 2;
		Map_SetSelection(emu_ax);
	} else if (g_global->selectionType == 2) {
		Map_SetSelection(packed);
	}

	return true;
}
