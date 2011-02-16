/* $Id$ */

#include <stdio.h>
#include "os/strings.h"
#include "os/sleep.h"
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
#include "gui/gui.h"
#include "map.h"
#include "wsa.h"

extern void f__2B6C_0137_0020_C73F();
extern void f__2B6C_0169_001E_6939();
extern void f__B483_0000_0019_F96A();
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

	if (tickMissileCountdown && g_global->houseMissileCountdown != 0) {
		g_global->houseMissileCountdown--;
		emu_push(g_global->houseMissileCountdown + 41);
		emu_push(emu_cs); emu_push(0x01C7); emu_cs = 0x3483; overlay(0x3483, 0); emu_Unknown_B483_0363();
		emu_sp += 2;

		if (g_global->houseMissileCountdown == 0) Unit_LaunchHouseMissile(Map_B4CD_1816(4, (uint8)g_global->playerHouseID));
	}

	if (tickStarportAvailability) {
		uint16 type;

		/* Pick a random unit to increase starport availability */
		type = Tools_RandomRange(0, UNIT_MAX - 1);

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
			Unit *u;

			if (g_global->scenario.reinforcement[i].unitID == UNIT_INDEX_INVALID) continue;
			if (g_global->scenario.reinforcement[i].timeLeft == 0) continue;
			if (--g_global->scenario.reinforcement[i].timeLeft != 0) continue;

			u = Unit_Get_ByIndex(g_global->scenario.reinforcement[i].unitID);

			locationID = g_global->scenario.reinforcement[i].locationID;
			deployed   = false;

			if (locationID >= 4) {
				if (nu == NULL) {
					nu = Unit_Create(UNIT_INDEX_INVALID, UNIT_CARRYALL, u->o.houseID, Tile_UnpackTile(Map_B4CD_1816(Tools_Random_256() & 3, u->o.houseID)), 100);

					if (nu != NULL) {
						nu->o.flags.s.byScenario = true;
						Unit_SetDestination(nu, Tools_Index_Encode(Map_B4CD_1816(locationID, u->o.houseID), IT_TILE));
					}
				}

				if (nu != NULL) {
					u->o.linkedID = nu->o.linkedID;
					nu->o.linkedID = (uint8)u->o.index;
					nu->o.flags.s.inTransport = true;
					g_global->scenario.reinforcement[i].unitID = UNIT_INDEX_INVALID;
					deployed = true;
				} else {
					/* Failed to create carry-all, try again in a short moment */
					g_global->scenario.reinforcement[i].timeLeft = 1;
				}
			} else {
				deployed = Unit_SetPosition(u, Tile_UnpackTile(Map_B4CD_1816(locationID, u->o.houseID)));
			}

			if (deployed && g_global->scenario.reinforcement[i].repeat != 0) {
				tile32 tile;
				tile.tile = 0xFFFFFFFF;

				g_global->variable_38BC++;
				u = Unit_Create(UNIT_INDEX_INVALID, u->o.type, u->o.houseID, tile, 0);
				g_global->variable_38BC--;

				if (u != NULL) {
					g_global->scenario.reinforcement[i].unitID = u->o.index;
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

				/* "Insufficient spice storage available.  Spice is lost." */
				GUI_DisplayText(String_Get_ByIndex(0x91), 1);
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

						/* "Insufficient spice storage available.  Spice is lost." */
						GUI_DisplayText(String_Get_ByIndex(0x91), 1);
					}
				}
			}

			if (h->index == g_global->playerHouseID) {
				if (h->creditsStorage > g_global->playerCreditsNoSilo) {
					g_global->playerCreditsNoSilo = 0;
				}

				if (g_global->playerCreditsNoSilo == 0 && g_global->campaignID > 1 && h->credits != 0) {
					if (h->creditsStorage != 0 && ((h->credits * 256 / h->creditsStorage) > 200)) {
						/* "Spice storage capacity low, build silos." */
						GUI_DisplayText(String_Get_ByIndex(0x142), 0);
					}
				}

				if (h->credits < 100 && g_global->playerCreditsNoSilo != 0) {
					/* "Credits are low. Harvest spice for more credits." */
					GUI_DisplayText(String_Get_ByIndex(0x14B), 0);
				}
			}
		}

		if (tickHouse) House_EnsureHarvesterAvailable((uint8)h->index);

		if (tickStarport && h->starportLinkedID != UNIT_INDEX_INVALID) {
			Unit *u = NULL;

			h->starportTimeLeft--;
			if ((int16)h->starportTimeLeft < 0) h->starportTimeLeft = 0;

			if (h->starportTimeLeft == 0) {
				Structure *s;

				s = Structure_Get_ByIndex(g_global->structureIndex);
				if (s->o.type == STRUCTURE_STARPORT && s->o.houseID == h->index) {
					u = Unit_CreateWrapper((uint8)h->index, UNIT_FRIGATE, Tools_Index_Encode(s->o.index, IT_STRUCTURE));

					if (u != NULL) {
						u->o.linkedID = (uint8)h->starportLinkedID;
						h->starportLinkedID = UNIT_INDEX_INVALID;
						u->o.flags.s.inTransport = true;

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
						if (s->o.linkedID != 0xFF) continue;

						u = Unit_CreateWrapper((uint8)h->index, UNIT_FRIGATE, Tools_Index_Encode(s->o.index, IT_STRUCTURE));

						if (u != NULL) {
							u->o.linkedID = (uint8)h->starportLinkedID;
							h->starportLinkedID = 0xFFFF;
							u->o.flags.s.inTransport = true;

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
			if (h->variable_02 > 0 && Unit_CreateWrapper((uint8)h->index, UNIT_HARVESTER, 0) != NULL) h->variable_02--;
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
		if (!g_dune2_enhanced && s->o.type == STRUCTURE_HEAVY_VEHICLE) continue;
		if (g_dune2_enhanced && s->o.type == STRUCTURE_CONSTRUCTION_YARD) continue;
		if (s->o.linkedID == UNIT_INVALID) continue;
		if (Unit_Get_ByIndex(s->o.linkedID)->o.type == UNIT_HARVESTER) return;
	}

	find.houseID = houseID;
	find.type    = UNIT_CARRYALL;
	find.index   = 0xFFFF;

	while (true) {
		Unit *u;

		u = Unit_Find(&find);
		if (u == NULL) break;
		if (u->o.linkedID == UNIT_INVALID) continue;
		if (Unit_Get_ByIndex(u->o.linkedID)->o.type == UNIT_HARVESTER) return;
	}

	if (Unit_IsTypeOnMap(houseID, UNIT_HARVESTER)) return;

	find.houseID = houseID;
	find.type    = STRUCTURE_REFINERY;
	find.index   = 0xFFFF;

	s = Structure_Find(&find);
	if (s == NULL) return;

	if (Unit_CreateWrapper(houseID, UNIT_HARVESTER, Tools_Index_Encode(s->o.index, IT_STRUCTURE)) == NULL) return;

	if (houseID != g_global->playerHouseID) return;

	/* "Harvester is heading to refinery." */
	GUI_DisplayText(String_Get_ByIndex(0x32), 0);
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

/**
 * Updates the radar state for the given house.
 * @param h The house.
 * @return True if and only if the radar has been activated.
 */
bool House_UpdateRadarState(House *h)
{
	csip32 wsaBuffer;
	WSAHeader *header;
	uint16 frame;
	uint16 frameCount;
	bool activate;

	if (h == NULL || h->index != g_global->playerHouseID) return false;

	wsaBuffer.csip = 0x0;

	activate = h->flags.s.radarActivated;

	if (h->flags.s.radarActivated) {
		/* Deactivate radar */
		if ((h->structuresBuilt & (1 << STRUCTURE_OUTPOST)) == 0 || h->powerProduction < h->powerUsage) activate = false;
	} else {
		/* Activate radar */
		if ((h->structuresBuilt & (1 << STRUCTURE_OUTPOST)) != 0 && h->powerProduction >= h->powerUsage) activate = true;
	}

	if (h->flags.s.radarActivated == activate) return false;

	emu_push(3);
	emu_push(emu_cs); emu_push(0x0E2A); emu_cs = 0x252E; emu_Memory_GetBlock1();
	emu_sp += 2;

	emu_push(0); emu_push(0);
	emu_push(1);
	emu_push(g_global->variable_6CD3[1][1] >> 16); emu_push(g_global->variable_6CD3[1][1] & 0xFFFF);
	emu_push(emu_dx); emu_push(emu_ax); /* memory block */
	emu_push(0x353F); emu_push(0x2574); /* "STATIC.WSA" */
	emu_push(emu_cs); emu_push(0x0E37); emu_cs = 0x352A; overlay(0x352A, 0); emu_WSA_LoadFile();
	emu_sp += 18;
	wsaBuffer.s.cs = emu_dx;
	wsaBuffer.s.ip = emu_ax;

	header = (WSAHeader *)emu_get_memorycsip(wsaBuffer);
	frameCount = WSA_GetFrameCount(header);

	g_global->variable_38C4 = 1;

	emu_push(emu_cs); emu_push(0x0E4B); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();

	do {
		emu_push(emu_cs); emu_push(0x0E52); emu_cs = 0x1DD7; emu_Driver_Voice_01EB();
	} while (emu_ax != 0);

	emu_push(0); emu_push(0);
	emu_push(0x3E);
	emu_push(emu_cs); emu_push(0x0E65); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0000_0019_F96A();
	emu_sp += 6;

	emu_push(activate ? 0x1C : 0x1D);
	emu_push(emu_cs); emu_push(0x0E80); emu_cs = 0x3483; overlay(0x3483, 0); emu_Unknown_B483_0363();
	emu_sp += 2;

	frameCount = WSA_GetFrameCount(header);

	for (frame = 0; frame < frameCount; frame++) {
		emu_push(0);
		emu_push(0);
		emu_push(136);
		emu_push(256);
		emu_push(activate ? frameCount - frame : frame);
		emu_push(wsaBuffer.s.cs); emu_push(wsaBuffer.s.ip);
		emu_push(emu_cs); emu_push(0x0EAC); emu_cs = 0x352A; overlay(0x352A, 0); emu_WSA_DisplayFrame();
		emu_sp += 14;

		GUI_PaletteAnimate();

		g_global->variable_76B4 = 3;

		while (g_global->variable_76B4 != 0) sleep(0);
	}

	h->flags.s.radarActivated = activate;

	emu_push(wsaBuffer.s.cs); emu_push(wsaBuffer.s.ip);
	emu_push(emu_cs); emu_push(0x0F60); emu_cs = 0x352A; overlay(0x352A, 0); emu_WSA_Unload();
	emu_sp += 4;

	g_global->variable_3A12 = 1;

	emu_push(emu_cs); emu_push(0x0F6D); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();

	emu_push(0);
	emu_push(emu_cs); emu_push(0x0F75); emu_cs = 0x07D4; emu_Unknown_07D4_159A();
	emu_sp += 2;

	return activate;
}
