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
#include "map.h"
#include "unit.h"
#include "structure.h"

extern void emu_Script_IsLoaded();
extern void emu_Script_Load();
extern void emu_Script_Reset();
extern void emu_Script_Run();
extern void emu_String_GetString();
extern void emu_String_sprintf();
extern void emu_Structure_ConnectWall();
extern void emu_Structure_GetStructuresBuilt();
extern void emu_Structure_IsUpgradable();
extern void emu_Structure_IsValidBuildLocation();
extern void emu_Structure_Place();
extern void emu_Structure_RemoveFogAroundTile();
extern void emu_Structure_UpdateMap();
extern void emu_Structure_UpdateVariable54();
extern void emu_Tile_Unpack();
extern void emu_Tools_AdjustToGameSpeed();
extern void f__0C3A_1216_0013_E56D();
extern void f__0C3A_142D_0018_6667();
extern void f__0C3A_25EC_0011_E453();
extern void f__0C3A_2814_0015_76F0();
extern void f__10E4_09AB_0031_5E8E();
extern void f__10E4_0F1A_0088_7622();
extern void f__1423_04F2_0016_CD6B();
extern void f__1423_0C74_0015_3419();
extern void f__1A34_10EC_000E_A326();
extern void f__B483_0363_0016_83DF();
extern void f__B4CD_0000_0011_95D0();
extern void f__B4CD_10EE_0039_EC73();
extern void f__B4CD_1BC4_0013_1AB3();
extern void overlay(uint16 cs, uint8 force);

StructureInfo *g_structureInfo = NULL;

/**
 * Initialize the structure system.
 *
 * @init System_Init_Structure
 */
void System_Init_Structure()
{
	g_structureInfo = (StructureInfo *)&emu_get_memory8(0x2C94, 0x0, 0x0A);
}

/**
 * Loop over all structures, preforming various of tasks.
 */
void GameLoop_Structure()
{
	PoolFindStruct find;
	bool tickDegrade   = false;
	bool tickStructure = false;
	bool tickScript    = false;
	bool tickPalace    = false;

	if (g_global->variable_341A <= g_global->variable_76B0 && g_global->campaignID > 1) {
		tickDegrade = true;

		emu_push(0);
		emu_push(0x5460);
		emu_push(0x1518);
		emu_push(0x2A30);
		emu_push(emu_cs); emu_push(0x00A5); emu_cs = 0x07C9; emu_Tools_AdjustToGameSpeed();
		emu_sp += 8;

		g_global->variable_341A = g_global->variable_76B0 + emu_ax;
	}

	if (g_global->variable_341E <= g_global->variable_76B0 || g_global->variable_37AC != 0) {
		tickStructure = true;

		emu_push(0);
		emu_push(0x3C);
		emu_push(0xF);
		emu_push(0x1E);
		emu_push(emu_cs); emu_push(0x0058); emu_cs = 0x07C9; emu_Tools_AdjustToGameSpeed();
		emu_sp += 8;

		g_global->variable_341E = g_global->variable_76B0 + emu_ax;
	}

	if (g_global->variable_3422 <= g_global->variable_76B0) {
		tickScript = true;

		g_global->variable_3422 = g_global->variable_76B0 + 5;
	}

	if (g_global->variable_3426 <= g_global->variable_76B0) {
		tickPalace = true;

		g_global->variable_3426 = g_global->variable_76B0 + 60;
	}

	find.houseID = 0xFFFF;
	find.index   = 0xFFFF;
	find.type    = 0xFFFF;

	if (g_global->debugScenario) return;

	while (true) {
		StructureInfo *si;
		Structure *s;
		HouseInfo *hi;
		House *h;

		s = Structure_Find(&find);
		if (s == NULL) return;

		si = &g_structureInfo[s->type];
		h  = House_Get_ByIndex(s->houseID);
		hi = &g_houseInfo[h->index];

		/* XXX -- Temporary, to keep all the emu_calls workable for now */
		g_global->structureCurrent2.s.cs    = g_global->structureStartPos.s.cs;
		g_global->structureCurrent2.s.ip    = g_global->structureStartPos.s.ip + s->index * sizeof(Structure);
		g_global->structureCurrent.csip     = g_global->structureCurrent2.csip;
		g_global->structureInfoCurrent.s.cs = 0x2C94;
		g_global->structureInfoCurrent.s.ip = 0xA + s->type * sizeof(StructureInfo);
		g_global->houseCurrent.s.cs         = g_global->houseStartPos.s.cs;
		g_global->houseCurrent.s.ip         = g_global->houseStartPos.s.ip + h->index * sizeof(House);

		if (tickPalace && s->type == STRUCTURE_PALACE) {
			if (s->countDown != 0) {
				s->countDown--;

				if (s->houseID == g_global->playerHouseID) {
					emu_push(1);
					emu_push(emu_cs); emu_push(0x01BA); emu_cs = 0x10E4; f__10E4_0F1A_0088_7622();
					emu_sp += 2;
				}
			}

			/* If we can launch and we are an AI and flag 0x0008 is set, fire the Palace weapon */
			if (s->countDown == 0 && (h->flags & (0x0002 | 0x0008)) == 0x0008) {
				emu_push(g_global->structureCurrent2.s.cs); emu_push(g_global->structureCurrent2.s.ip);
				emu_push(emu_cs); emu_push(0x01E3); emu_cs = 0x1423; f__1423_04F2_0016_CD6B();
				emu_sp += 4;
			}
		}

		if (tickDegrade && (s->flags & 0x0400) != 0 && s->hitpoints > si->hitpoints / 2) {
			emu_push(0);
			emu_push(hi->variable_08 + 1);
			emu_push(g_global->structureCurrent2.s.cs); emu_push(g_global->structureCurrent2.s.ip);
			emu_push(emu_cs); emu_push(0x023F); emu_cs = 0x0C3A; f__0C3A_1216_0013_E56D();
			emu_sp += 8;
		}

		if (tickStructure) {
			if ((s->variable_06 & 0x0002) != 0) {
				uint16 upgradeCost = si->buildCredits / 40;

				if (upgradeCost <= h->credits) {
					h->credits -= upgradeCost;

					if (s->upgradeTimeLeft > 5) {
						s->upgradeTimeLeft -= 5;
					} else {
						s->upgradeLevel++;
						s->variable_06 &= 0xFFFD;

						/* Ordos Heavy Vehicle gets the last upgrade for free */
						if (s->houseID == HOUSE_ORDOS && s->type == STRUCTURE_HEAVY_VEHICLE && s->upgradeLevel == 2) s->upgradeLevel = 3;

						emu_push(g_global->structureCurrent2.s.cs); emu_push(g_global->structureCurrent2.s.ip);
						emu_push(emu_cs); emu_push(0x02E4); emu_cs = 0x0C3A; emu_Structure_IsUpgradable();
						emu_sp += 2;

						s->upgradeTimeLeft = (emu_ax == 0) ? 0 : 100;
					}
				} else {
					s->variable_06 &= 0xFFFD;
				}
			} else if ((s->flags & 0x2000) != 0) {
				uint16 repairCost;

				/* ENHANCEMENT -- The calculation of the repaircost is a bit unfair in Dune2, because of rounding errors (they use a 256 float-resolution, which is not sufficient) */
				if (g_dune2_enhanced) {
					repairCost = si->buildCredits * 2 / si->hitpoints;
				} else {
					repairCost = (2 * 256 / si->hitpoints) * si->buildCredits / 256;
				}

				if (repairCost <= h->credits) {
					h->credits -= repairCost;

					/* AIs repair in early games slower than in later games */
					if (s->houseID == g_global->playerHouseID || g_global->campaignID >= 3) {
						s->hitpoints += 5;
					} else {
						s->hitpoints += 3;
					}

					if (s->hitpoints > si->hitpoints) {
						s->hitpoints = si->hitpoints;
						s->flags &= 0x9FFF;
					}
				} else {
					s->flags &= 0xDFFF;
				}
			} else {
				if ((s->flags & 0x4000) == 0 && s->countDown != 0 && s->linkedUnitID != 0xFF && s->variable_54 == 0x0001 && (si->variable_0C & 0x0002) != 0) {
					UnitInfo *ui;
					uint16 buildSpeed;
					uint16 buildCost;

					if (s->type == STRUCTURE_CONSTRUCTION_YARD) {
						/* XXX -- This is not really pretty */
						ui = (UnitInfo *)&g_structureInfo[s->variable_4C];
					} else if (s->type == STRUCTURE_REPAIR) {
						ui = &g_unitInfo[Unit_Get_ByIndex(s->linkedUnitID)->type];
					} else {
						ui = &g_unitInfo[s->variable_4C];
					}

					buildSpeed = 256;
					if (s->hitpoints < si->hitpoints) {
						buildSpeed = s->hitpoints * 256 / si->hitpoints;
					}

					/* For AIs, we slow down building speed in all but the last campaign */
					if (g_global->playerHouseID != s->houseID) {
						if (buildSpeed > g_global->campaignID * 20 + 95) buildSpeed = g_global->campaignID * 20 + 95;
					}

					buildCost = ui->buildCredits * 256 / ui->buildTime;

					if (buildSpeed < 256) {
						buildCost = buildSpeed * buildCost / 256;
					}

					if (s->type == STRUCTURE_REPAIR && buildCost > 4) {
						buildCost /= 4;
					}

					buildCost += s->variable_52;

					if (buildCost / 256 <= h->credits) {
						s->variable_52 = buildCost & 0xFF;
						h->credits -= buildCost / 256;

						if (buildSpeed < s->countDown) {
							s->countDown -= buildSpeed;
						} else {
							s->countDown = 0;
							s->variable_52 = 0;

							emu_push(2);
							emu_push(g_global->structureCurrent2.s.cs); emu_push(g_global->structureCurrent2.s.ip);
							emu_push(emu_cs); emu_push(0x05A1); emu_cs = 0x0C3A; emu_Structure_UpdateVariable54();
							emu_sp += 6;

							if (s->houseID == g_global->playerHouseID) {
								if (s->type != STRUCTURE_BARRACKS && s->type != STRUCTURE_WOR_TROOPER) {
									uint16 stringID = 0x83;
									if (s->type == STRUCTURE_HIGH_TECH) stringID = 0x81;
									if (s->type == STRUCTURE_CONSTRUCTION_YARD) stringID = 0x82;

									emu_push(stringID);
									emu_push(emu_cs); emu_push(0x05F6); emu_cs = 0x0FCB; emu_String_GetString();
									emu_sp += 2;

									emu_push(emu_dx); emu_push(emu_ax);

									emu_push(ui->stringID);
									emu_push(emu_cs); emu_push(0x0605); emu_cs = 0x0FCB; emu_String_GetString();
									emu_sp += 2;

									emu_push(emu_dx); emu_push(emu_ax);
									emu_push(emu_ds); emu_push(0x342A); /* %s %s */
									emu_push(emu_ds); emu_push(0x9939);
									emu_push(emu_cs); emu_push(0x0617); emu_cs = 0x01F7; emu_String_sprintf();
									emu_sp += 16;

									emu_push(0);
									emu_push(emu_ds); emu_push(0x9939);
									emu_push(emu_cs); emu_push(0x0627); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
									emu_sp += 6;

									emu_push(0);
									emu_push(emu_cs); emu_push(0x0632); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0363_0016_83DF();
									emu_sp += 2;
								}
							} else if (s->type == STRUCTURE_CONSTRUCTION_YARD) {
								/* An AI immediatly places the structure when it is done building */
								Structure *ns;
								uint8 i;

								ns = Structure_Get_ByIndex(s->linkedUnitID);
								s->linkedUnitID = 0xFF;

								/* The AI places structures which are operational immediatly */
								emu_push(0);
								emu_push(g_global->structureCurrent2.s.cs); emu_push(g_global->structureCurrent2.s.ip);
								emu_push(emu_cs); emu_push(0x0672); emu_cs = 0x0C3A; emu_Structure_UpdateVariable54();
								emu_sp += 6;

								/* Find the position to place the structure */
								for (i = 0; i < 5; i++) {
									if (ns->type != h->ai_structureRebuild[i * 2]) continue;

									if (!Structure_Place(ns, h->ai_structureRebuild[i * 2 + 1])) continue;

									h->ai_structureRebuild[i * 2] = 0;
									h->ai_structureRebuild[i * 2 + 1] = 0;
									break;
								}

								/* If the AI no longer had in memory where to store the structure, free it and forget about it */
								if (i == 5) {
									csip32 nscsip;
									StructureInfo *nsi = &g_structureInfo[ns->type];

									h->credits += nsi->buildCredits;

									nscsip.s.cs = g_global->structureStartPos.s.cs;
									nscsip.s.ip = g_global->structureStartPos.s.ip + ns->index * sizeof(Structure);

									Structure_Free(nscsip);
								}
							}
						}
					} else {
						/* Out of money means the building gets put on hold */
						if (s->houseID == g_global->playerHouseID) {
							s->type |= 0x4000;

							emu_push(0x84);
							emu_push(emu_cs); emu_push(0x073B); emu_cs = 0x0FCB; emu_String_GetString();
							emu_sp += 2;

							emu_push(0);
							emu_push(emu_dx); emu_push(emu_ax);
							emu_push(emu_cs); emu_push(0x0743); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
							emu_sp += 6;
						}
					}
				}

				if (s->type == STRUCTURE_REPAIR) {
					if ((s->flags & 0x4000) == 0 && s->countDown != 0 && s->linkedUnitID != 0xFF) {
						UnitInfo *ui;
						uint16 repairSpeed;
						uint16 repairCost;

						ui = &g_unitInfo[Unit_Get_ByIndex(s->linkedUnitID)->type];

						repairSpeed = 256;
						if (s->hitpoints < si->hitpoints) {
							repairSpeed = s->hitpoints * 256 / si->hitpoints;
						}

						/* XXX -- This is highly unfair. Repairing becomes more expensive if your structure is more damaged */
						repairCost = 2 * ui->buildCredits / 256;

						if (repairCost < h->credits) {
							h->credits -= repairCost;

							if (repairSpeed < s->countDown) {
								s->countDown -= repairSpeed;
							} else {
								s->countDown = 0;

								emu_push(2);
								emu_push(g_global->structureCurrent2.s.cs); emu_push(g_global->structureCurrent2.s.ip);
								emu_push(emu_cs); emu_push(0x083C); emu_cs = 0x0C3A; emu_Structure_UpdateVariable54();
								emu_sp += 6;

								if (s->houseID == g_global->playerHouseID) {
									emu_push(g_global->playerHouseID + 0x37);
									emu_push(emu_cs); emu_push(0x085A); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0363_0016_83DF();
									emu_sp += 2;
								}
							}
						}
					} else if (h->credits != 0) {
						/* Automaticly resume repairing when there is money again (remove the 'on hold') */
						s->flags &= 0xBFFF;
					}
				}

				/* AI maintenance on structures */
				if ((h->flags & 0x0008) != 0 && (s->flags & 0x0002) != 0 && s->houseID != g_global->playerHouseID && h->credits != 0) {
					/* When structure is below 50% hitpoints, start repairing */
					if (s->hitpoints < si->hitpoints / 2) {
						emu_push(0); emu_push(0);
						emu_push(1);
						emu_push(g_global->structureCurrent2.s.cs); emu_push(g_global->structureCurrent2.s.ip);
						emu_push(emu_cs); emu_push(0x08EA); emu_cs = 0x0C3A; f__0C3A_2814_0015_76F0();
						emu_sp += 10;
					}

					/* If the structure is not doing something, but can build stuff, see if there is stuff to build */
					if ((si->variable_0C & 0x0002) != 0 && s->countDown == 0 && s->linkedUnitID == 0xFF) {
						emu_push(g_global->structureCurrent2.s.cs); emu_push(g_global->structureCurrent2.s.ip);
						emu_push(emu_cs); emu_push(0x091E); emu_cs = 0x1423; f__1423_0C74_0015_3419();
						emu_sp += 4;

						if (emu_ax != 0xFFFF) {
							emu_push(emu_ax);
							emu_push(g_global->structureCurrent2.s.cs); emu_push(g_global->structureCurrent2.s.ip);
							emu_push(emu_cs); emu_push(0x0935); emu_cs = 0x0C3A; f__0C3A_142D_0018_6667();
							emu_sp += 6;
						}
					}
				}
			}
		}

		if (tickScript) {
			if (s->scriptDelay != 0) {
				s->scriptDelay--;
			} else {
				emu_push(g_global->structureCurrent2.s.cs); emu_push(g_global->structureCurrent2.s.ip + 0x12); /* &s->script */
				emu_push(emu_cs); emu_push(0x095F); emu_cs = 0x15C2; emu_Script_IsLoaded();
				emu_sp += 4;

				if (emu_ax != 0) {
					uint8 i;

					/* XXX -- No idea, variable_37A2, variable_37A4 and variable_37A8 are only written to, never read. Most likely part of a script debugger. */
					if (g_global->debugGame) {
						g_global->variable_37A4 = 0;
						g_global->variable_37A2++;

						if (s->script.variable_0B <= 15 && 15 - s->script.variable_0B > g_global->variable_37A8) {
							g_global->variable_37A8 = 15 - s->script.variable_0B;
						}
					}

					/* Run the script 3 times in a row */
					for (i = 0; i < 3; i++) {
						emu_push(g_global->structureCurrent2.s.cs); emu_push(g_global->structureCurrent2.s.ip + 0x12); /* &s->script */
						emu_push(emu_cs); emu_push(0x09C2); emu_cs = 0x15C2; emu_Script_Run();
						emu_sp += 4;

						if (emu_ax == 0) break;
					}

					/* ENHANCEMENT -- Dune2 aborts all other structures if one gives a script error. This doesn't seem correct */
					if (!g_dune2_enhanced && i != 3) return;
				} else {
					emu_push(s->script.scriptInfo.s.cs); emu_push(s->script.scriptInfo.s.ip);
					emu_push(g_global->structureCurrent2.s.cs); emu_push(g_global->structureCurrent2.s.ip + 0x12); /* &s->script */
					emu_push(emu_cs); emu_push(0x0682); emu_cs = 0x15C2; emu_Script_Reset();
					emu_sp += 8;

					emu_push(s->type);
					emu_push(g_global->structureCurrent2.s.cs); emu_push(g_global->structureCurrent2.s.ip + 0x12); /* &s->script */
					emu_push(emu_cs); emu_push(0x0A37); emu_cs = 0x15C2; emu_Script_Load();
					emu_sp += 6;
				}
			}
		}
	}
}

/**
 * Convert the name of a structure to the type value of that structure, or
 *  STRUCTURE_INVALID if not found.
 *
 * @name Structure_StringToType
 * @implements B530:0000:0010:8273
 * @implements B530:0010:0023:BD3C
 * @implements B530:0033:000B:E2C7
 * @implements B530:003C:0002:C5BA
 * @implements B530:003E:000B:90D9
 * @implements B530:003F:000A:50D1
 * @implements B530:0044:0005:5395
 * @implements B530:0049:0003:2E57
 */
uint8 Structure_StringToType(const char *name)
{
	uint8 type;
	if (name == NULL) return STRUCTURE_INVALID;

	for (type = 0; type < STRUCTURE_MAX; type++) {
		const char *structureName = (const char *)emu_get_memorycsip(g_structureInfo[type].name);
		if (strcasecmp(structureName, name) == 0) return type;
	}

	return STRUCTURE_INVALID;
}

/**
 * Create a new Structure.
 *
 * @param index The new index of the Structure, or STRUCTURE_INDEX_INVALID to assign one.
 * @param typeID The type of the new Structure.
 * @param houseID The House of the new Structure.
 * @param var0C An unknown parameter.
 * @return The new created Structure, or NULL if something failed.
 */
Structure *Structure_Create(uint16 index, uint8 typeID, uint8 houseID, uint16 position)
{
	csip32 scsip;
	StructureInfo *si;
	Structure *s;

	if (houseID >= HOUSE_MAX) return NULL;
	if (typeID >= STRUCTURE_MAX) return NULL;

	si = &g_structureInfo[typeID];
	s = Structure_Allocate(index, typeID);
	if (s == NULL) return NULL;

	/* XXX -- Temporary, to keep all the emu_calls workable for now */
	scsip.s.cs = g_global->structureStartPos.s.cs;
	scsip.s.ip = g_global->structureStartPos.s.ip + s->index * sizeof(Structure);

	s->houseID       = houseID;
	s->variable_47   = houseID;
	s->flags        |= 0x0004;
	s->position.tile = 0;
	s->linkedUnitID  = 0xFF;
	s->variable_54   = 0xFFFF;

	if (g_global->debugScenario) {
		s->variable_54 = 0;
	}

	if (typeID == STRUCTURE_TURRET) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
		emu_ax = emu_get_memory16(emu_es, emu_bx, 0x2E) * 2;

		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
		emu_bx += emu_ax;

		s->variable_49 = emu_get_memory16(emu_es, emu_bx, 0x2);
	}
	if (typeID == STRUCTURE_ROCKET_TURRET) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
		emu_ax = emu_get_memory16(emu_es, emu_bx, 0x30) * 2;

		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
		emu_bx += emu_ax;

		s->variable_49 = emu_get_memory16(emu_es, emu_bx, 0x2);
	}

	s->hitpoints    = si->hitpoints;
	s->hitpointsMax = si->hitpoints;

	if (houseID == HOUSE_HARKONNEN && typeID == STRUCTURE_LIGHT_VEHICLE) {
		s->upgradeLevel = 1;
	}

	/* Check if there is an upgrade available */
	if ((si->variable_0C & 0x0002) != 0) {
		emu_push(scsip.s.cs); emu_push(scsip.s.ip);
		emu_push(emu_cs); emu_push(0x011A); emu_cs = 0x0C3A; emu_Structure_IsUpgradable();
		emu_sp += 4;

		s->upgradeTimeLeft = (emu_ax == 0) ? 0 : 100;
	}

	s->variable_4C = 0xFFFF;

	emu_push(0xFFFE);
	emu_push(scsip.s.cs); emu_push(scsip.s.ip);
	emu_push(emu_cs); emu_push(0x0145); emu_cs = 0x0C3A; f__0C3A_142D_0018_6667();
	emu_sp += 6;

	s->countDown = 0;

	/* AIs get the full upgrade immediatly */
	if (houseID != g_global->playerHouseID) {
		while (true) {
			emu_push(scsip.s.cs); emu_push(scsip.s.ip);
			emu_push(emu_cs); emu_push(0x016E); emu_cs = 0x0C3A; emu_Structure_IsUpgradable();
			emu_sp += 4;

			if (emu_ax == 0) break;
			s->upgradeLevel++;
		}
		s->upgradeTimeLeft = 0;
	}

	if (position != 0xFFFF) {
		if (!Structure_Place(s, position)) {
			Structure_Free(scsip);
			return NULL;
		}
	}

	return s;
}

/**
 * Place a structure on the map.
 *
 * @param structure The structure to place on the map.
 * @param position The (packed) tile to place the struction on.
 * @return True if and only if the structure is placed on the map.
 */
bool Structure_Place(Structure *s, uint16 position)
{
	csip32 scsip;
	StructureInfo *si;
	int16 loc0A;

	if (s == NULL) return false;
	if (position == 0xFFFF) return false;

	si = &g_structureInfo[s->type];

	/* XXX -- Temporary, to keep all the emu_calls workable for now */
	scsip.s.cs = g_global->structureStartPos.s.cs;
	scsip.s.ip = g_global->structureStartPos.s.ip + s->index * sizeof(Structure);

	switch (s->type) {
		case STRUCTURE_WALL: {
			Tile *t;

			emu_push(STRUCTURE_WALL);
			emu_push(position);
			emu_push(emu_cs); emu_push(0x0227); emu_cs = 0x0C3A; emu_Structure_IsValidBuildLocation();
			emu_sp += 4;
			if (emu_ax == 0) return false;

			t = Map_GetTileByPosition(position);
			t->spriteID = (g_global->variable_39FA + 1) & 0x1FF;
			/* ENHANCEMENT -- Dune2 wrongfully only removes the lower 2 bits, where the lower 3 bits are the owner. This is no longer visible. */
			t->houseID  = s->houseID;

			emu_get_memory16(0x2E9C, position * 2, 0x323F) |= 0x8000;

			if (s->houseID == g_global->playerHouseID) {
				emu_push(position);
				emu_push(emu_cs); emu_push(0x029B); emu_cs = 0x0F3F; emu_Tile_Unpack();
				emu_sp += 2;

				emu_push(1);
				emu_push(emu_dx); emu_push(emu_ax);
				emu_push(emu_cs); emu_push(0x02A3); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Structure_RemoveFogAroundTile();
				emu_sp += 6;
			}

			emu_push(position);
			emu_push(emu_cs); emu_push(0x02AC); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_1BC4_0013_1AB3();
			emu_sp += 2;

			if (emu_ax != 0) t->fogOfWar = 0;

			emu_push(1);
			emu_push(position);
			emu_push(emu_cs); emu_push(0x02CC); emu_cs = 0x0C3A; emu_Structure_ConnectWall();
			emu_sp += 4;

			emu_push(scsip.s.cs); emu_push(scsip.s.ip);
			emu_push(emu_cs); emu_push(0x02D9); emu_cs = 0x1082; emu_Structure_Free();
			emu_sp += 4;

		} return true;

		case STRUCTURE_SLAB_1x1:
		case STRUCTURE_SLAB_2x2: {
			uint16 i, result;

			result = 0;

			for (i = 0; i < g_global->structureLayoutCount[si->layout]; i++) {
				uint16 curPos = position + g_global->structureLayout[si->layout][i];
				Tile *t = Map_GetTileByPosition(curPos);

				emu_push(STRUCTURE_SLAB_1x1);
				emu_push(curPos);
				emu_push(emu_cs); emu_push(0x0341); emu_cs = 0x0C3A; emu_Structure_IsValidBuildLocation();
				emu_sp += 2;

				if (emu_ax == 0) continue;

				t->spriteID = g_global->variable_39F8 & 0x01FF;
				t->houseID  = s->houseID;

				emu_get_memory16(0x2E9C, curPos * 2, 0x323F) |= 0x8000;

				if (s->houseID == g_global->playerHouseID) {
					emu_push(curPos);
					emu_push(emu_cs); emu_push(0x03B4); emu_cs = 0x0F3F; emu_Tile_Unpack();
					emu_sp += 2;

					emu_push(1);
					emu_push(emu_dx); emu_push(emu_ax);
					emu_push(emu_cs); emu_push(0x03BC); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Structure_RemoveFogAroundTile();
					emu_sp += 6;
				}

				emu_push(curPos);
				emu_push(emu_cs); emu_push(0x03C5); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_1BC4_0013_1AB3();
				emu_sp += 2;

				if (emu_ax != 0) t->fogOfWar = 0;

				emu_push(0);
				emu_push(0);
				emu_push(curPos);
				emu_push(emu_cs); emu_push(0x03E7); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0000_0011_95D0();
				emu_sp += 6;

				result = 1;
			}

			/* XXX -- Dirt hack -- Parts of the 2x2 slab can be outside the building area, so by doing the same loop twice it will build for sure */
			if (s->type == STRUCTURE_SLAB_2x2) {
				for (i = 0; i < g_global->structureLayoutCount[si->layout]; i++) {
					uint16 curPos = position + g_global->structureLayout[si->layout][i];
					Tile *t = Map_GetTileByPosition(curPos);

					emu_push(STRUCTURE_SLAB_1x1);
					emu_push(curPos);
					emu_push(emu_cs); emu_push(0x043E); emu_cs = 0x0C3A; emu_Structure_IsValidBuildLocation();
					emu_sp += 4;

					if (emu_ax == 0) continue;

					t->spriteID = g_global->variable_39F8 & 0x01FF;
					t->houseID  = s->houseID;

					emu_get_memory16(0x2E9C, curPos * 2, 0x323F) |= 0x8000;

					if (s->houseID == g_global->playerHouseID) {
						emu_push(curPos);
						emu_push(emu_cs); emu_push(0x04B1); emu_cs = 0x0F3F; emu_Tile_Unpack();
						emu_sp += 2;

						emu_push(1);
						emu_push(emu_dx); emu_push(emu_ax);
						emu_push(emu_cs); emu_push(0x04B9); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Structure_RemoveFogAroundTile();
						emu_sp += 6;

						t->fogOfWar = 0;
					}

					emu_push(0);
					emu_push(0);
					emu_push(curPos);
					emu_push(emu_cs); emu_push(0x04D9); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0000_0011_95D0();
					emu_sp += 6;

					result = 1;
				}
			}

			if (result == 0) return false;

			emu_push(scsip.s.cs); emu_push(scsip.s.ip);
			emu_push(emu_cs); emu_push(0x0500); emu_cs = 0x1082; emu_Structure_Free();
			emu_sp += 4;
		} return true;
	}

	emu_push(s->type);
	emu_push(position);
	emu_push(emu_cs); emu_push(0x0517); emu_cs = 0x0C3A; emu_Structure_IsValidBuildLocation();
	emu_sp += 4;
	loc0A = (int16)emu_ax;

	if (loc0A == 0) {
		if ((s->houseID != g_global->playerHouseID || !g_global->debugScenario) && g_global->variable_38BC == 0) {
			return false;
		}
	}

	/* ENHACEMENT -- In Dune2, it only removes the fog around the top-left tile of a structure, leaving for big structures the right in the fog. */
	if (!g_dune2_enhanced && s->houseID == g_global->playerHouseID) {
		emu_push(position);
		emu_push(emu_cs); emu_push(0x054A); emu_cs = 0x0F3F; emu_Tile_Unpack();
		emu_sp += 2;

		emu_push(2);
		emu_push(emu_dx); emu_push(emu_ax);
		emu_push(emu_cs); emu_push(0x0552); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Structure_RemoveFogAroundTile();
		emu_sp += 6;
	}

	s->variable_09 |= 1 << s->houseID;
	if (s->houseID == g_global->playerHouseID) s->variable_09 |= 0xFF;

	/* We are no longer building the structure */
	s->flags &= 0xFFFB;

	emu_push(position);
	emu_push(emu_cs); emu_push(0x058B); emu_cs = 0x0F3F; emu_Tile_Unpack();
	emu_sp += 2;

	s->position.s.x = emu_ax & 0xFF00;
	s->position.s.y = emu_dx & 0xFF00;

	s->variable_49  = 0;
	s->hitpoints    = si->hitpoints;
	s->hitpointsMax = si->hitpoints;

	/* If the return value is negative, there are tiles without slab. This gives a penalty to the hitpoints. */
	if (loc0A < 0) {
		uint16 tilesWithoutSlab = -(int16)loc0A;
		uint16 structureTileCount = g_global->structureLayoutCount[si->layout];

		s->hitpoints -= (si->hitpoints / 2) * tilesWithoutSlab / structureTileCount;

		/* Mark the structure as 'will degrade' */
		s->flags |= 0x0400;
	} else {
		/* ENHANCEMENT -- When you build a structure completely on slabs, it should not degrade */
		if (!g_dune2_enhanced) {
			/* Mark the structure as 'will degrade' */
			s->flags |= 0x0400;
		}
	}

	emu_push(emu_ds); emu_push(emu_Global_GetIP(&g_global->scriptStructure, 0x353F));
	emu_push(scsip.s.cs); emu_push(scsip.s.ip + 0x12); /* &s->script */
	emu_push(emu_cs); emu_push(0x0645); emu_cs = 0x15C2; emu_Script_Reset();
	emu_sp += 8;

	s->script.variable_0C = 0;
	s->script.variable_14 = 0;

	/* XXX -- Weird .. if 'position' enters with 0xFFFF it is returned immediatly .. how can this ever NOT happen? */
	if (position != 0xFFFF) {
		s->scriptDelay = 0;

		emu_push(s->script.scriptInfo.s.cs); emu_push(s->script.scriptInfo.s.ip);
		emu_push(scsip.s.cs); emu_push(scsip.s.ip + 0x12); /* &s->script */
		emu_push(emu_cs); emu_push(0x0682); emu_cs = 0x15C2; emu_Script_Reset();
		emu_sp += 8;

		emu_push(s->type);
		emu_push(scsip.s.cs); emu_push(scsip.s.ip + 0x12); /* &s->script */
		emu_push(emu_cs); emu_push(0x069D); emu_cs = 0x15C2; emu_Script_Load();
		emu_sp += 6;
	}

	{
		uint16 i;

		for (i = 0; i < g_global->structureLayoutCount[si->layout]; i++) {
			uint16 curPos = position + g_global->structureLayout[si->layout][i];

			emu_push(curPos);
			emu_push(emu_cs); emu_push(0x06E0); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_10EE_0039_EC73();
			emu_sp += 2;

			emu_push(emu_dx); emu_push(emu_ax);
			emu_push(emu_cs); emu_push(0x06E8); emu_cs = 0x1A34; f__1A34_10EC_000E_A326();
			emu_sp += 4;

			/* ENHACEMENT -- In Dune2, it only removes the fog around the top-left tile of a structure, leaving for big structures the right in the fog. */
			if (g_dune2_enhanced && s->houseID == g_global->playerHouseID) {
				emu_push(curPos);
				emu_push(emu_cs); emu_push(0x054A); emu_cs = 0x0F3F; emu_Tile_Unpack();
				emu_sp += 2;

				emu_push(2);
				emu_push(emu_dx); emu_push(emu_ax);
				emu_push(emu_cs); emu_push(0x0552); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Structure_RemoveFogAroundTile();
				emu_sp += 6;
			}

		}
	}

	if (s->type == STRUCTURE_WINDTRAP) {
		House *h;

		h = House_Get_ByIndex(s->houseID);
		h->windtrapCount += 1;
	}

	if (g_global->variable_38BC == 0x0) {
		Structure_CalculatePowerAndCredit(s->houseID);
	}

	emu_push(scsip.s.cs); emu_push(scsip.s.ip);
	emu_push(emu_cs); emu_push(0x0732); emu_cs = 0x0C3A; emu_Structure_UpdateMap();
	emu_sp += 4;

	{
		House *h;
		h = House_Get_ByIndex(s->houseID);

		emu_push(h->index);
		emu_push(emu_cs); emu_push(0x0742); emu_cs = 0x0C3A; emu_Structure_GetStructuresBuilt();
		emu_sp += 4;

		h->structuresBuilt = (emu_dx << 16) + emu_ax;
	}

	return true;
}

/**
 * Calculate the power usage and production, and the credits storage.
 *
 * @param houseID The index of the jouse to calculate the numbers for.
 */
void Structure_CalculatePowerAndCredit(uint8 houseID)
{
	PoolFindStruct find;
	House *h;

	if (houseID >= HOUSE_MAX) return;

	h = House_Get_ByIndex(houseID);
	if (h == NULL) return;

	h->powerUsage      = 0;
	h->powerProduction = 0;
	h->creditsStorage  = 0;

	find.houseID = houseID;
	find.index   = 0xFFFF;
	find.type    = 0xFFFF;

	while (true) {
		StructureInfo *si;
		Structure *s;

		s = Structure_Find(&find);
		if (s == NULL) break;

		si = &g_structureInfo[s->type];

		h->creditsStorage += si->creditsStorage;

		/* Positive values means usage */
		if (si->powerUsage >= 0) {
			h->powerUsage += si->powerUsage;
			continue;
		}

		/* Negative value and full health means everything goes to production */
		if (s->hitpoints >= si->hitpoints) {
			h->powerProduction += -si->powerUsage;
			continue;
		}

		/* Negative value and partial health, calculate how much should go to production (capped at 50%) */
		/* ENHANCEMENT -- The 50% cap of Dune2 is silly and disagress with the GUI. If your hp is 10%, so should the production. */
		if (!g_dune2_enhanced && s->hitpoints <= si->hitpoints / 2) {
			h->powerProduction += (-si->powerUsage) / 2;
			continue;
		}
		h->powerProduction += (-si->powerUsage) * s->hitpoints / si->hitpoints;
	}

	/* Check if we are low on power */
	if (houseID == g_global->playerHouseID && h->powerUsage > h->powerProduction) {
		emu_push(0x010E);
		emu_push(emu_cs); emu_push(0x20A4); emu_cs = 0x0FCB; emu_String_GetString();
		emu_sp += 2;

		emu_push(0x1);
		emu_push(emu_dx); emu_push(emu_ax);
		emu_push(emu_cs); emu_push(0x20AC); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
		emu_sp += 6;
	}

	/* If there are no buildings left, you lose your right on 'credits without storage' */
	if (houseID == g_global->playerHouseID && h->structuresBuilt == 0 && g_global->variable_38BC == 0) {
		g_global->playerCreditsNoSilo = 0;
	}
}
