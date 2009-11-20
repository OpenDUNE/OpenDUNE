/* $Id$ */

#include <stdio.h>
#include "os/strings.h"
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "pool/pool.h"
#include "pool/house.h"
#include "pool/structure.h"
#include "pool/unit.h"
#include "house.h"
#include "structure.h"
#include "unit.h"

#ifndef max
	#define max(a, b) ((a) > (b) ? (a) : (b))
#endif /* max */

extern void emu_String_GetString();
extern void emu_Tile_Unpack();
extern void f__0C3A_20DB_0011_DA16();
extern void f__10E4_09AB_0031_5E8E();
extern void f__1423_07C5_0016_E9C2();
extern void f__167E_00F3_001E_8CB3();
extern void f__1A34_1B68_0019_AAA0();
extern void f__1A34_21E0_001A_547E();
extern void f__1A34_232C_0011_B7DE();
extern void f__1A34_2958_0013_3A47();
extern void f__2537_000C_001C_86CB();
extern void f__2BB4_0004_0027_DC1D();
extern void f__B483_0363_0016_83DF();
extern void f__B4CD_1816_0033_B55B();
extern void overlay(uint16 cs, uint8 force);

HouseInfo *g_houseInfo = NULL;

/**
 * Initialize the house system.
 *
 * @init System_Init_House
 */
void System_Init_House()
{
	g_houseInfo = (HouseInfo *)&emu_get_memory8(0x353F, 0x0, 0x37F8);
}

/**
 * Loop over all houses, preforming various of tasks.
 */
void GameLoop_House()
{
	PoolFindStruct find;
	House *h = NULL;
	bool loc02 = false;
	bool loc04 = false;
	bool loc06 = false;
	bool loc08 = false;
	bool loc0A = false;
	bool loc0C = false;
	bool loc0E = false;

	if (g_global->debugScenario) return;

	if (g_global->variable_6086 <= g_global->variable_76B0) {
		loc02 = true;
		g_global->variable_6086 = g_global->variable_76B0 + 900;
	}

	if (g_global->variable_38C0 <= g_global->variable_76B0 || g_global->variable_608A <= g_global->variable_76B0) {
		loc04 = true;
		g_global->variable_608A = g_global->variable_76B0 + 10800;
	}

	if (g_global->variable_608E <= g_global->variable_76B0) {
		loc06 = true;
		g_global->variable_608E = g_global->variable_76B0 + 180;
	}

	if (g_global->variable_6092 <= g_global->variable_76B0) {
		loc08 = true;
		g_global->variable_6092 = g_global->variable_76B0 + (g_global->debugGame ? 60 : 600);
	}

	if (g_global->variable_6096 <= g_global->variable_76B0) {
		loc0A = true;
		g_global->variable_6096 = g_global->variable_76B0 + 5;
	}

	if (g_global->variable_609A <= g_global->variable_76B0) {
		loc0C = true;
		g_global->variable_609A = g_global->variable_76B0 + 60;
	}

	if (g_global->variable_609E <= g_global->variable_76B0) {
		loc0E = true;
		g_global->variable_609E = g_global->variable_76B0 + 1800;
	}

	if (loc0C && g_global->variable_38FE != 0) {
		g_global->variable_38FE--;
		emu_push(g_global->variable_38FE + 41);
		emu_push(emu_cs); emu_push(0x01C7); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0363_0016_83DF();
		emu_sp += 2;

		if (g_global->variable_38FE == 0) {
			emu_push(g_global->playerHouseID);
			emu_push(4);
			emu_push(emu_cs); emu_push(0x01DC); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_1816_0033_B55B();
			emu_sp += 4;

			emu_push(emu_ax);
			emu_push(emu_cs); emu_push(0x01E4); emu_cs = 0x1423; f__1423_07C5_0016_E9C2();
			emu_sp += 2;
		}
	}

	if (loc0E) {
		emu_push(26);
		emu_push(0);
		emu_push(emu_cs); emu_push(0x01F7); emu_cs = 0x2537; f__2537_000C_001C_86CB();
		emu_sp += 4;

		if (g_global->variable_97E7[emu_ax] != 0 && (int16)g_global->variable_97E7[emu_ax] < 10) {
			if (g_global->variable_97E7[emu_ax] != 0xFFFF) {
				g_global->variable_97E7[emu_ax] = 1;
			} else {
				g_global->variable_97E7[emu_ax]++;
			}
		}
	}
	if (loc08) {
		int i;
		Unit *u = NULL;
		Unit *nu = NULL;
		uint16 loc1E = 0;
		uint16 loc20 = 0;

		for (i = 0; i < 16; i++) {
			csip32 ucsip;
			if (g_global->scenario.reinforcement[i].unitID == UNIT_INDEX_INVALID) continue;
			if (g_global->scenario.reinforcement[i].timeLeft == 0) continue;
			if (--g_global->scenario.reinforcement[i].timeLeft != 0) continue;

			u = Unit_Get_ByIndex(g_global->scenario.reinforcement[i].unitID);
			/* XXX -- Temporary, to keep all the emu_calls workable for now */
			ucsip.s.cs = g_global->unitStartPos.s.cs;
			ucsip.s.ip = g_global->unitStartPos.s.ip + u->index * sizeof(u);

			loc1E = g_global->scenario.reinforcement[i].locationID;
			loc20 = 0;

			if (loc1E >= 4) {
				if (nu == NULL) {
					tile32 tile;
					csip32 nucsip;

					emu_push(emu_cs); emu_push(0x02E9); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();

					emu_push(u->houseID);
					emu_push(emu_ax & 0x3);
					emu_push(emu_cs); emu_push(0x02F2); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_1816_0033_B55B();
					emu_sp += 4;

					emu_push(emu_ax);
					emu_push(emu_cs); emu_push(0x02FA); emu_cs = 0x0F3F; emu_Tile_Unpack();
					emu_sp += 2;

					tile.s.x = emu_ax;
					tile.s.y = emu_dx;

					nu = Unit_Create(UNIT_INDEX_INVALID, UNIT_CARRYALL, u->houseID, tile, 100);
					/* XXX -- Temporary, to keep all the emu_calls workable for now */
					nucsip.s.cs = g_global->unitStartPos.s.cs;
					nucsip.s.ip = g_global->unitStartPos.s.ip + nu->index * sizeof(u);

					nu->flags |= 0x200;

					emu_push(u->houseID);
					emu_push(loc1E);
					emu_push(emu_cs); emu_push(0x0339); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_1816_0033_B55B();
					emu_sp += 4;

					emu_push(1);
					emu_push(emu_ax);
					emu_push(emu_cs); emu_push(0x0341); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
					emu_sp += 4;

					emu_push(emu_ax);
					emu_push(nucsip.s.cs); emu_push(nucsip.s.ip);
					emu_push(emu_cs); emu_push(0x034F); emu_cs = 0x1A34; f__1A34_1B68_0019_AAA0();
					emu_sp += 6;
				}

				if (nu != NULL) {
					u->linkedStructureID = nu->linkedStructureID;
					nu->linkedStructureID = u->index;
					nu->flags |= 0x100;
					g_global->scenario.reinforcement[i].unitID = UNIT_INDEX_INVALID;
					loc20 = 1;
				} else {
					g_global->scenario.reinforcement[i].timeLeft = 1;
				}
			} else {
				emu_push(u->houseID);
				emu_push(loc1E);
				emu_push(emu_cs); emu_push(0x03BC); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_1816_0033_B55B();
				emu_sp += 4;

				emu_push(emu_ax);
				emu_push(emu_cs); emu_push(0x03C4); emu_cs = 0x0F3F; emu_Tile_Unpack();
				emu_sp += 2;

				emu_push(emu_dx); emu_push(emu_ax);
				emu_push(ucsip.s.cs); emu_push(ucsip.s.ip);
				emu_push(emu_cs); emu_push(0x03D2); emu_cs = 0x1A34; f__1A34_2958_0013_3A47();
				emu_sp += 8;
				loc20 = emu_ax;
			}

			if (loc20 != 0 && g_global->scenario.reinforcement[i].repeat != 0) {
				tile32 tile;
				tile.tile = 0xFFFFFFFF;
				g_global->variable_38BC++;
				u = Unit_Create(UNIT_INDEX_INVALID, u->type, u->houseID, tile, 0);
				g_global->variable_38BC--;

				if (u != NULL) {
					g_global->scenario.reinforcement[i].unitID = u->index;
					g_global->scenario.reinforcement[i].timeLeft = g_global->scenario.reinforcement[i].timeBetween;
				}
			}
		}
	}

	h = House_Get_ByMemory(g_global->houseCurrent);
	if (h->index != g_global->playerHouseID) {
		if (h->creditsStorage < h->credits) {
			h->credits = h->creditsStorage;
		}
	} else {
		uint16 max_credits = max(h->creditsStorage, g_global->playerCreditsNoSilo);
		if (h->credits > max_credits) {
			h->credits = max_credits;
			emu_push(0x91); /* "Insufficient spice storage available.  Spice is lost." */
			emu_push(emu_cs); emu_push(0x04D2); emu_cs = 0x0FCB; emu_String_GetString();
			emu_sp += 2;

			emu_push(1);
			emu_push(emu_dx); emu_push(emu_ax);
			emu_push(emu_cs); emu_push(0x04DA); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
			emu_sp += 6;
		}
	}

	find.houseID = 0xFFFF;
	find.index   = 0xFFFF;
	find.type    = 0xFFFF;

	while (true) {
		h = House_Find(&find);
		if (h == NULL) return;

		/* XXX -- Temporary, to keep all the emu_calls workable for now */
		g_global->houseCurrent.s.cs         = g_global->houseStartPos.s.cs;
		g_global->houseCurrent.s.ip         = g_global->houseStartPos.s.ip + h->index * sizeof(House);

		if (loc02) {
			if (h->index == g_global->playerHouseID) {
				if (h->creditsStorage > g_global->playerCreditsNoSilo) {
					g_global->playerCreditsNoSilo = 0;
				}

				if (g_global->playerCreditsNoSilo == 0 && g_global->campaignID > 1 && h->credits != 0) {
					if (h->credits * 256 / max(h->creditsStorage, g_global->playerCreditsNoSilo) > 200) {
						emu_push(0x142); /* "Spice storage capacity low, build silos." */
						emu_push(emu_cs); emu_push(0x0568); emu_cs = 0x0FCB; emu_String_GetString();
						emu_sp += 2;

						emu_push(0);
						emu_push(emu_dx); emu_push(emu_ax);
						emu_push(emu_cs); emu_push(0x0570); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
						emu_sp += 6;
					}
				}

				if (h->credits < 100 && g_global->playerCreditsNoSilo != 0) {
					emu_push(0x14B); /* "Credits are low. Harvest spice for more credits." */
					emu_push(emu_cs); emu_push(0x0591); emu_cs = 0x0FCB; emu_String_GetString();
					emu_sp += 2;

					emu_push(0);
					emu_push(emu_dx); emu_push(emu_ax);
					emu_push(emu_cs); emu_push(0x0599); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
					emu_sp += 6;
				}
			}

			emu_push(h->index);
			emu_push(emu_cs); emu_push(0x05AE); emu_cs = 0x1A34; f__1A34_21E0_001A_547E();
			emu_sp += 2;
		}

		if (h->variable_2C != 0xFFFF && loc06) {
			Structure *s = NULL;
			Unit *u = NULL;
			csip32 ucsip;
			if ((uint16)(--h->variable_2A) <= 0) h->variable_2A = 0;
			if (h->variable_2A == 0) {
				s = Structure_Get_ByIndex(g_global->structureIndex);
				if (s != NULL) {
					if (s->type == STRUCTURE_PALACE) {
						if (s->houseID == h->index) {
							emu_push(3);
							emu_push(s->index);
							emu_push(emu_cs); emu_push(0x0647); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
							emu_sp += 4;

							emu_push(emu_ax);
							emu_push(26);
							emu_push(h->index);
							emu_push(emu_cs); emu_push(0x065A); emu_cs = 0x1A34; f__1A34_232C_0011_B7DE();
							emu_sp += 6;

							ucsip.s.cs = emu_dx;
							ucsip.s.ip = emu_ax;
							u = Unit_Get_ByMemory(ucsip);
							if (u != NULL) {
								u->linkedStructureID = h->variable_2C;
								h->variable_2C = 0xFFFF;
								u->flags |= 0x100;

								emu_push(38);
								emu_push(emu_cs); emu_push(0x0696); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0363_0016_83DF();
								emu_sp += 2;
							}
						}
					}
				} else {
					PoolFindStruct find2;
					find2.houseID = h->index;
					find2.index = 0xFFFF;
					find2.type = STRUCTURE_PALACE;
					while (true) {
						s = Structure_Find(&find2);
						if (s == NULL) break;
						if (s->linkedUnitID != 0xFF) continue;

						emu_push(3);
						emu_push(s->index);
						emu_push(emu_cs); emu_push(0x06CE); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
						emu_sp += 4;

						emu_push(emu_ax);
						emu_push(26);
						emu_push(h->index);
						emu_push(emu_cs); emu_push(0x06E1); emu_cs = 0x1A34; f__1A34_232C_0011_B7DE();
						emu_sp += 6;

						ucsip.s.cs = emu_dx;
						ucsip.s.ip = emu_ax;
						u = Unit_Get_ByMemory(ucsip);
						if (u != NULL) {
							u->linkedStructureID = h->variable_2C;
							h->variable_2C = 0xFFFF;
							u->flags |= 0x100;

							emu_push(38);
							emu_push(emu_cs); emu_push(0x0696); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0363_0016_83DF();
							emu_sp += 2;
						}
					}
				}

				h->variable_2A = (u != NULL) ? g_houseInfo[h->index].variable_0E : 1;
			}
		}

		if (!loc02) {
			Structure_CalculatePowerAndCredit(h->index);

			emu_push(h->index);
			emu_push(emu_cs); emu_push(0x078E); emu_cs = 0x0C3A; f__0C3A_20DB_0011_DA16();
			emu_sp += 2;

			if (h->variable_24 != 0) h->variable_24--;
			if (h->variable_26 != 0) h->variable_26--;
			if (h->variable_28 != 0) h->variable_28--;

			if (h->variable_02 > 0) {
				emu_push(0);
				emu_push(16);
				emu_push(h->index);
				emu_push(emu_cs); emu_push(0x07E6); emu_cs = 0x1A34; f__1A34_232C_0011_B7DE();
				emu_sp += 6;

				if (emu_ax != 0 || emu_dx != 0) h->variable_02--;
			}
		}
	}

	if (loc04) h->credits -= max(h->credits, (h->powerUsage / 32) + 1);
}

/**
 * Convert the name of a house to the type value of that house, or
 *  HOUSE_INVALID if not found.
 *
 * @name House_StringToType
 * @implements 1381:0051:0010:81BB
 * @implements 1381:0061:001C:0B13
 * @implements 1381:007D:000B:E2C7
 * @implements 1381:0086:0002:C5BA
 * @implements 1381:0088:000B:F9D9
 * @implements 1381:0089:000A:39D1
 * @implements 1381:008E:0005:5395
 * @implements 1381:0093:0003:2E57
 */
uint8 House_StringToType(const char *name)
{
	uint8 index;
	if (name == NULL) return HOUSE_INVALID;

	for (index = 0; index < 6; index++) {
		const char *houseName = (const char *)emu_get_memorycsip(g_houseInfo[index].name);
		if (strcasecmp(houseName, name) == 0) return index;
	}

	return HOUSE_INVALID;
}
