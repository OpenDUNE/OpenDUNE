/* $Id$ */

#include <stdio.h>
#include "os/strings.h"
#include "os/math.h"
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "pool/pool.h"
#include "pool/house.h"
#include "pool/structure.h"
#include "pool/unit.h"
#include "house.h"
#include "string.h"
#include "structure.h"
#include "tile.h"
#include "tools.h"
#include "unit.h"
#include "unknown/unknown.h"

extern void f__10E4_09AB_0031_5E8E();
extern void f__1A34_232C_0011_B7DE();
extern void f__B4CD_1816_0033_B55B();
extern void emu_Tools_Random_256();
extern void emu_Tools_RandomRange();
extern void emu_Unit_LaunchHouseMissle();
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
	bool tickHouse                = false;
	bool tickPowerMaintenance     = false;
	bool tickStarport             = false;
	bool tickReinforcement        = false;
	bool tickUnused               = false;
	bool tickMissileCountdown     = false;
	bool tickStarportAvailability = false;

	if (g_global->debugScenario) return;

	if (g_global->tickHouseHouse <= g_global->tickGlobal) {
		tickHouse = true;
		g_global->tickHouseHouse = g_global->tickGlobal + 900;
	}

	if (g_global->variable_38C0 <= g_global->tickGlobal && g_global->tickHousePowerMaintenance <= g_global->tickGlobal) {
		tickPowerMaintenance = true;
		g_global->tickHousePowerMaintenance = g_global->tickGlobal + 10800;
	}

	if (g_global->tickHouseStarport <= g_global->tickGlobal) {
		tickStarport = true;
		g_global->tickHouseStarport = g_global->tickGlobal + 180;
	}

	if (g_global->tickHouseReinforcement <= g_global->tickGlobal) {
		tickReinforcement = true;
		g_global->tickHouseReinforcement = g_global->tickGlobal + (g_global->debugGame ? 60 : 600);
	}

	if (g_global->tickHouseUnused <= g_global->tickGlobal) {
		tickUnused = true;
		g_global->tickHouseUnused = g_global->tickGlobal + 5;
	}

	if (g_global->tickHouseMissileCountdown <= g_global->tickGlobal) {
		tickMissileCountdown = true;
		g_global->tickHouseMissileCountdown = g_global->tickGlobal + 60;
	}

	if (g_global->tickHouseStarportAvailability <= g_global->tickGlobal) {
		tickStarportAvailability = true;
		g_global->tickHouseStarportAvailability = g_global->tickGlobal + 1800;
	}

	if (tickMissileCountdown && g_global->houseMissleCountdown != 0) {
		g_global->houseMissleCountdown--;
		emu_push(g_global->houseMissleCountdown + 41);
		emu_push(emu_cs); emu_push(0x01C7); emu_cs = 0x3483; overlay(0x3483, 0); emu_Unknown_B483_0363();
		emu_sp += 2;

		if (g_global->houseMissleCountdown == 0) {
			emu_push(g_global->playerHouseID);
			emu_push(4);
			emu_push(emu_cs); emu_push(0x01DC); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_1816_0033_B55B();
			emu_sp += 4;

			emu_push(emu_ax);
			emu_push(emu_cs); emu_push(0x01E4); emu_cs = 0x1423; emu_Unit_LaunchHouseMissle();
			emu_sp += 2;
		}
	}

	if (tickStarportAvailability) {
		/* Pick a random unit to increase starport availability */
		emu_push(UNIT_MAX - 1);
		emu_push(0);
		emu_push(emu_cs); emu_push(0x01F7); emu_cs = 0x2537; emu_Tools_RandomRange();
		emu_sp += 4;

		/* Increase how many of this unit is available via starport by one */
		if (g_global->starportAvailable[emu_ax] != 0 && g_global->starportAvailable[emu_ax] < 10) {
			if (g_global->starportAvailable[emu_ax] == -1) {
				g_global->starportAvailable[emu_ax] = 1;
			} else {
				g_global->starportAvailable[emu_ax]++;
			}
		}
	}

	if (tickReinforcement) {
		Unit *nu = NULL;
		int i;

		for (i = 0; i < 16; i++) {
			uint16 locationID;
			bool deployed;
			csip32 ucsip;
			Unit *u;

			if (g_global->scenario.reinforcement[i].unitID == UNIT_INDEX_INVALID) continue;
			if (g_global->scenario.reinforcement[i].timeLeft == 0) continue;
			if (--g_global->scenario.reinforcement[i].timeLeft != 0) continue;

			u = Unit_Get_ByIndex(g_global->scenario.reinforcement[i].unitID);

			/* XXX -- Temporary, to keep all the emu_calls workable for now */
			ucsip = g_global->unitStartPos;
			ucsip.s.ip += u->index * sizeof(Unit);

			locationID = g_global->scenario.reinforcement[i].locationID;
			deployed   = false;

			if (locationID >= 4) {
				if (nu == NULL) {
					csip32 nucsip;

					emu_push(emu_cs); emu_push(0x02E9); emu_cs = 0x2BB4; emu_Tools_Random_256();

					emu_push(u->houseID);
					emu_push(emu_ax & 0x3);
					emu_push(emu_cs); emu_push(0x02F2); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_1816_0033_B55B();
					emu_sp += 4;

					nu = Unit_Create(UNIT_INDEX_INVALID, UNIT_CARRYALL, u->houseID, Tile_UnpackTile(emu_ax), 100);

					/* XXX -- Temporary, to keep all the emu_calls workable for now */
					nucsip = g_global->unitStartPos;
					nucsip.s.ip += nu->index * sizeof(Unit);

					nu->flags.s.byScenario = true;

					emu_push(u->houseID);
					emu_push(locationID);
					emu_push(emu_cs); emu_push(0x0339); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_1816_0033_B55B();
					emu_sp += 4;

					Unit_SetDestination(nu, Tools_Index_Encode(emu_ax, IT_TILE));
				}

				if (nu != NULL) {
					u->linkedID = nu->linkedID;
					nu->linkedID = (uint8)u->index;
					nu->flags.s.inTransport = true;
					g_global->scenario.reinforcement[i].unitID = UNIT_INDEX_INVALID;
					deployed = true;
				} else {
					/* Failed to create carry-all, try again in a short moment */
					g_global->scenario.reinforcement[i].timeLeft = 1;
				}
			} else {
				emu_push(u->houseID);
				emu_push(locationID);
				emu_push(emu_cs); emu_push(0x03BC); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_1816_0033_B55B();
				emu_sp += 4;

				deployed = Unit_SetPosition(u, Tile_UnpackTile(emu_ax));
			}

			if (deployed && g_global->scenario.reinforcement[i].repeat != 0) {
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

	/* ENHANCEMENT -- This seems oddly wrong placed, as 'houseCurrent' is not alternating between houses over multiple runs. So we moved this inside the house loop below */
	if (!g_dune2_enhanced) {
		h = House_Get_ByMemory(g_global->houseCurrent);
		if (h->index != g_global->playerHouseID) {
			if (h->creditsStorage < h->credits) {
				h->credits = h->creditsStorage;
			}
		} else {
			uint16 maxCredits = max(h->creditsStorage, g_global->playerCreditsNoSilo);
			if (h->credits > maxCredits) {
				h->credits = maxCredits;

				emu_push(0x91); /* "Insufficient spice storage available.  Spice is lost." */
				emu_push(emu_cs); emu_push(0x04D2); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
				emu_sp += 2;

				emu_push(1);
				emu_push(emu_dx); emu_push(emu_ax);
				emu_push(emu_cs); emu_push(0x04DA); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
				emu_sp += 6;
			}
		}
	}

	find.houseID = 0xFFFF;
	find.index   = 0xFFFF;
	find.type    = 0xFFFF;

	while (true) {
		h = House_Find(&find);
		if (h == NULL) break;

		/* XXX -- Temporary, to keep all the emu_calls workable for now */
		g_global->houseCurrent = g_global->houseStartPos;
		g_global->houseCurrent.s.ip += h->index * sizeof(House);

		if (tickHouse) {
			/* ENHANCEMENT -- Originally this code was outside the house loop, which seems very odd */
			if (g_dune2_enhanced) {
				if (h->index != g_global->playerHouseID) {
					if (h->creditsStorage < h->credits) {
						h->credits = h->creditsStorage;
					}
				} else {
					uint16 maxCredits = max(h->creditsStorage, g_global->playerCreditsNoSilo);
					if (h->credits > maxCredits) {
						h->credits = maxCredits;

						emu_push(0x91); /* "Insufficient spice storage available.  Spice is lost." */
						emu_push(emu_cs); emu_push(0x04D2); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
						emu_sp += 2;

						emu_push(1);
						emu_push(emu_dx); emu_push(emu_ax);
						emu_push(emu_cs); emu_push(0x04DA); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
						emu_sp += 6;
					}
				}
			}

			if (h->index == g_global->playerHouseID) {
				if (h->creditsStorage > g_global->playerCreditsNoSilo) {
					g_global->playerCreditsNoSilo = 0;
				}

				if (g_global->playerCreditsNoSilo == 0 && g_global->campaignID > 1 && h->credits != 0) {
					if (h->creditsStorage != 0 && ((h->credits * 256 / h->creditsStorage) > 200)) {
						emu_push(0x142); /* "Spice storage capacity low, build silos." */
						emu_push(emu_cs); emu_push(0x0568); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
						emu_sp += 2;

						emu_push(0);
						emu_push(emu_dx); emu_push(emu_ax);
						emu_push(emu_cs); emu_push(0x0570); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
						emu_sp += 6;
					}
				}

				if (h->credits < 100 && g_global->playerCreditsNoSilo != 0) {
					emu_push(0x14B); /* "Credits are low. Harvest spice for more credits." */
					emu_push(emu_cs); emu_push(0x0591); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
					emu_sp += 2;

					emu_push(0);
					emu_push(emu_dx); emu_push(emu_ax);
					emu_push(emu_cs); emu_push(0x0599); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
					emu_sp += 6;
				}
			}
		}

		if (tickHouse) House_EnsureHarvesterAvailable((uint8)h->index);

		if (tickStarport && h->starportLinkedID != UNIT_INDEX_INVALID) {
			Unit *u = NULL;
			csip32 ucsip;

			h->starportTimeLeft--;
			if ((int16)h->starportTimeLeft < 0) h->starportTimeLeft = 0;

			if (h->starportTimeLeft == 0) {
				Structure *s;

				s = Structure_Get_ByIndex(g_global->structureIndex);
				if (s->type == STRUCTURE_STARPORT && s->houseID == h->index) {
					emu_push(Tools_Index_Encode(s->index, IT_STRUCTURE));
					emu_push(UNIT_FRIGATE);
					emu_push(h->index);
					emu_push(emu_cs); emu_push(0x065A); emu_cs = 0x1A34; f__1A34_232C_0011_B7DE();
					emu_sp += 6;

					ucsip.s.cs = emu_dx;
					ucsip.s.ip = emu_ax;
					if (ucsip.csip != 0) {
						u = Unit_Get_ByMemory(ucsip);

						u->linkedID = (uint8)h->starportLinkedID;
						h->starportLinkedID = UNIT_INDEX_INVALID;
						u->flags.s.inTransport = true;

						emu_push(38);
						emu_push(emu_cs); emu_push(0x0696); emu_cs = 0x3483; overlay(0x3483, 0); emu_Unknown_B483_0363();
						emu_sp += 2;
					}
				} else {
					PoolFindStruct find2;

					find2.houseID = h->index;
					find2.index   = 0xFFFF;
					find2.type    = STRUCTURE_STARPORT;

					while (true) {
						s = Structure_Find(&find2);
						if (s == NULL) break;
						if (s->linkedID != 0xFF) continue;

						emu_push(Tools_Index_Encode(s->index, IT_STRUCTURE));
						emu_push(UNIT_FRIGATE);
						emu_push(h->index);
						emu_push(emu_cs); emu_push(0x06E1); emu_cs = 0x1A34; f__1A34_232C_0011_B7DE();
						emu_sp += 6;

						ucsip.s.cs = emu_dx;
						ucsip.s.ip = emu_ax;
						if (ucsip.csip != 0) {
							u = Unit_Get_ByMemory(ucsip);

							u->linkedID = (uint8)h->starportLinkedID;
							h->starportLinkedID = 0xFFFF;
							u->flags.s.inTransport = true;

							emu_push(38);
							emu_push(emu_cs); emu_push(0x0696); emu_cs = 0x3483; overlay(0x3483, 0); emu_Unknown_B483_0363();
							emu_sp += 2;
						}
					}
				}

				h->starportTimeLeft = (u != NULL) ? g_houseInfo[h->index].starportDeliveryTime : 1;
			}
		}

		if (tickHouse) {
			Structure_CalculatePowerAndCredit(h);
			Structure_CalculateHitpointsMax(h);

			if (h->variable_24 != 0) h->variable_24--;
			if (h->variable_26 != 0) h->variable_26--;
			if (h->variable_28 != 0) h->variable_28--;

			if (h->variable_02 > 0) {
				emu_push(0);
				emu_push(UNIT_HARVESTER);
				emu_push(h->index);
				emu_push(emu_cs); emu_push(0x07E6); emu_cs = 0x1A34; f__1A34_232C_0011_B7DE();
				emu_sp += 6;

				if (emu_ax != 0 || emu_dx != 0) h->variable_02--;
			}
		}

		if (tickPowerMaintenance) {
			uint16 powerMaintenanceCost = (h->powerUsage / 32) + 1;
			h->credits -= min(h->credits, powerMaintenanceCost);
		}
	}
}

/**
 * Convert the name of a house to the type value of that house, or
 *  HOUSE_INVALID if not found.
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

/**
 * Gives a harvester to the given house if it has a refinery and no harvesters.
 *
 * @param houseID The index of the house to give a harvester to.
 */
void House_EnsureHarvesterAvailable(uint8 houseID)
{
	PoolFindStruct find;
	Structure *s;

	find.houseID = houseID;
	find.type    = 0xFFFF;
	find.index   = 0xFFFF;

	while (true) {
		s = Structure_Find(&find);
		if (s == NULL) break;
		/* ENHANCEMENT -- Dune2 checked the wrong type to skip. LinkedID is a structure for a Construction Yard */
		if (!g_dune2_enhanced && s->type == STRUCTURE_HEAVY_VEHICLE) continue;
		if (g_dune2_enhanced && s->type == STRUCTURE_CONSTRUCTION_YARD) continue;
		if (s->linkedID == UNIT_INVALID) continue;
		if (Unit_Get_ByIndex(s->linkedID)->type == UNIT_HARVESTER) return;
	}

	find.houseID = houseID;
	find.type    = UNIT_CARRYALL;
	find.index   = 0xFFFF;

	while (true) {
		Unit *u;

		u = Unit_Find(&find);
		if (u == NULL) break;
		if (u->linkedID == UNIT_INVALID) continue;
		if (Unit_Get_ByIndex(u->linkedID)->type == UNIT_HARVESTER) return;
	}

	if (Unit_IsTypeOnMap(houseID, UNIT_HARVESTER)) return;

	find.houseID = houseID;
	find.type    = STRUCTURE_REFINERY;
	find.index   = 0xFFFF;

	s = Structure_Find(&find);
	if (s == NULL) return;

	emu_push(Tools_Index_Encode(s->index, IT_STRUCTURE));
	emu_push(UNIT_HARVESTER);
	emu_push(houseID);
	emu_push(emu_cs); emu_push(0x22F1); f__1A34_232C_0011_B7DE();
	emu_sp += 6;
	if (emu_dx == 0 && emu_ax == 0) return;

	if (houseID != g_global->playerHouseID) return;

	emu_push(0x32); /* "Harvester is heading to refinery." */
	emu_push(emu_cs); emu_push(0x2314); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
	emu_sp += 2;

	emu_push(0);
	emu_push(emu_dx); emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x231C); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
	emu_sp += 6;
}

/**
 * Checks if two houses are allied.
 *
 * @param houseID1 The index of the first house.
 * @param houseID2 The index of the second house.
 * @return True if and only if the two houses are allies of eachother.
 */
bool House_AreAllied(uint8 houseID1, uint8 houseID2)
{
	if (houseID1 == HOUSE_INVALID || houseID2 == HOUSE_INVALID) return false;

	if (houseID1 == houseID2) return true;

	if (houseID1 == HOUSE_FREMEN || houseID2 == HOUSE_FREMEN) {
		return (houseID1 == HOUSE_ATREIDES || houseID2 == HOUSE_ATREIDES);
	}

	return (houseID1 != g_global->playerHouseID && houseID2 != g_global->playerHouseID);
}

/**
 * Save all Houses to a file.
 * @param fp The file to save to.
 * @return True if and only if all bytes were written successful.
 */
bool House_Save(FILE *fp)
{
	PoolFindStruct find;

	find.houseID = 0xFFFF;
	find.type    = 0xFFFF;
	find.index   = 0xFFFF;

	while (true) {
		House *h;

		h = House_Find(&find);
		if (h == NULL) break;

		if (fwrite(h, sizeof(House), 1, fp) != 1) return false;
	}

	return true;
}

/**
 * Load all Houses from a file.
 * @param fp The file to load from.
 * @param length The length of the data chunk.
 * @return True if and only if all bytes were read successful.
 */
bool House_Load(FILE *fp, uint32 length)
{
	while (length >= sizeof(House)) {
		House *h;
		House hl;

		length -= sizeof(House);

		/* Read the next House from disk */
		if (fread(&hl, sizeof(House), 1, fp) != 1) return false;

		/* Create the House in the pool */
		h = House_Allocate((uint8)hl.index);
		if (h == NULL) return false;

		/* Copy over the data */
		*h = hl;

		/* See if it is a human house */
		if (h->flags.s.human) {
			g_global->playerHouseID = h->index;
			g_global->playerHouse.s.cs = g_global->houseStartPos.s.cs;
			g_global->playerHouse.s.ip = g_global->houseStartPos.s.ip + h->index * sizeof(House);

			if (h->starportLinkedID != 0xFFFF && h->starportTimeLeft == 0) h->starportTimeLeft = 1;
		}
	}
	if (length != 0) return false;

	return true;
}
