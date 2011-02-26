/* $Id$ */

#include <stdio.h>
#include <string.h>
#include "os/strings.h"
#include "os/math.h"
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "animation.h"
#include "gui/gui.h"
#include "house.h"
#include "pool/pool.h"
#include "pool/house.h"
#include "pool/structure.h"
#include "pool/team.h"
#include "pool/unit.h"
#include "house.h"
#include "map.h"
#include "script/script.h"
#include "unit.h"
#include "tile.h"
#include "string.h"
#include "structure.h"
#include "team.h"
#include "tools.h"
#include "unknown/unknown.h"
#include "sprites.h"
#include "gui/widget.h"

extern void f__259E_0040_0015_5E4A();
extern void f__B495_0000_0022_1CF6();
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

	if (g_global->tickStructureDegrade <= g_global->tickGlobal && g_global->campaignID > 1) {
		tickDegrade = true;
		g_global->tickStructureDegrade = g_global->tickGlobal + Tools_AdjustToGameSpeed(10800, 5400, 21600, true);
	}

	if (g_global->tickStructureStructure <= g_global->tickGlobal || g_global->debugInstantBuild != 0) {
		tickStructure = true;
		g_global->tickStructureStructure = g_global->tickGlobal + Tools_AdjustToGameSpeed(30, 15, 60, true);
	}

	if (g_global->tickStructureScript <= g_global->tickGlobal) {
		tickScript = true;
		g_global->tickStructureScript = g_global->tickGlobal + 5;
	}

	if (g_global->tickStructurePalace <= g_global->tickGlobal) {
		tickPalace = true;
		g_global->tickStructurePalace = g_global->tickGlobal + 60;
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
		if (s == NULL) break;

		si = &g_structureInfo[s->o.type];
		h  = House_Get_ByIndex(s->o.houseID);
		hi = &g_houseInfo[h->index];

		/* XXX -- Temporary, to keep all the emu_calls workable for now */
		g_global->structureCurrent          = g_global->structureStartPos;
		g_global->structureCurrent.s.ip    += s->o.index * sizeof(Structure);
		g_global->objectCurrent             = g_global->structureCurrent;
		g_global->structureInfoCurrent.s.cs = 0x2C94;
		g_global->structureInfoCurrent.s.ip = 0xA + s->o.type * sizeof(StructureInfo);
		g_global->houseCurrent              = g_global->houseStartPos;
		g_global->houseCurrent.s.ip        += h->index * sizeof(House);

		if (tickPalace && s->o.type == STRUCTURE_PALACE) {
			if (s->countDown != 0) {
				s->countDown--;

				if (s->o.houseID == g_global->playerHouseID) {
					GUI_Widget_ActionPanel_Draw(true);
				}
			}

			/* Check if we have to fire the weapon for the AI immediatly */
			if (s->countDown == 0 && !h->flags.s.human && h->flags.s.variable_0008) {
				Structure_ActivateSpecial(s);
			}
		}

		if (tickDegrade && s->o.flags.s.degrades && s->o.hitpoints > si->o.hitpoints / 2) {
			Structure_Damage(s, hi->variable_08 + 1, 0);
		}

		if (tickStructure) {
			if (s->o.flags.s.upgrading) {
				uint16 upgradeCost = si->o.buildCredits / 40;

				if (upgradeCost <= h->credits) {
					h->credits -= upgradeCost;

					if (s->upgradeTimeLeft > 5) {
						s->upgradeTimeLeft -= 5;
					} else {
						s->upgradeLevel++;
						s->o.flags.s.upgrading = false;

						/* Ordos Heavy Vehicle gets the last upgrade for free */
						if (s->o.houseID == HOUSE_ORDOS && s->o.type == STRUCTURE_HEAVY_VEHICLE && s->upgradeLevel == 2) s->upgradeLevel = 3;

						s->upgradeTimeLeft = Structure_IsUpgradable(s) ? 100 : 0;
					}
				} else {
					s->o.flags.s.upgrading = false;
				}
			} else if (s->o.flags.s.repairing) {
				uint16 repairCost;

				/* ENHANCEMENT -- The calculation of the repaircost is a bit unfair in Dune2, because of rounding errors (they use a 256 float-resolution, which is not sufficient) */
				if (g_dune2_enhanced) {
					repairCost = si->o.buildCredits * 2 / si->o.hitpoints;
				} else {
					repairCost = (2 * 256 / si->o.hitpoints) * si->o.buildCredits / 256;
				}

				if (repairCost <= h->credits) {
					h->credits -= repairCost;

					/* AIs repair in early games slower than in later games */
					if (s->o.houseID == g_global->playerHouseID || g_global->campaignID >= 3) {
						s->o.hitpoints += 5;
					} else {
						s->o.hitpoints += 3;
					}

					if (s->o.hitpoints > si->o.hitpoints) {
						s->o.hitpoints = si->o.hitpoints;
						s->o.flags.s.repairing = false;
						s->o.flags.s.onHold = false;
					}
				} else {
					s->o.flags.s.repairing = false;
				}
			} else {
				if (!s->o.flags.s.onHold && s->countDown != 0 && s->o.linkedID != 0xFF && s->animation == 1 && si->o.flags.s.factory) {
					ObjectInfo *oi;
					uint16 buildSpeed;
					uint16 buildCost;

					if (s->o.type == STRUCTURE_CONSTRUCTION_YARD) {
						oi = &g_structureInfo[s->objectType].o;
					} else if (s->o.type == STRUCTURE_REPAIR) {
						oi = &g_unitInfo[Unit_Get_ByIndex(s->o.linkedID)->o.type].o;
					} else {
						oi = &g_unitInfo[s->objectType].o;
					}

					buildSpeed = 256;
					if (s->o.hitpoints < si->o.hitpoints) {
						buildSpeed = s->o.hitpoints * 256 / si->o.hitpoints;
					}

					/* For AIs, we slow down building speed in all but the last campaign */
					if (g_global->playerHouseID != s->o.houseID) {
						if (buildSpeed > g_global->campaignID * 20 + 95) buildSpeed = g_global->campaignID * 20 + 95;
					}

					buildCost = oi->buildCredits * 256 / oi->buildTime;

					if (buildSpeed < 256) {
						buildCost = buildSpeed * buildCost / 256;
					}

					if (s->o.type == STRUCTURE_REPAIR && buildCost > 4) {
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

							Structure_SetAnimation(s, 2);

							if (s->o.houseID == g_global->playerHouseID) {
								if (s->o.type != STRUCTURE_BARRACKS && s->o.type != STRUCTURE_WOR_TROOPER) {
									uint16 stringID = 0x83; /* "is completed and awaiting orders." */
									if (s->o.type == STRUCTURE_HIGH_TECH) stringID = 0x81; /* "is complete." */
									if (s->o.type == STRUCTURE_CONSTRUCTION_YARD) stringID = 0x82; /* "is completed and ready to place." */

									GUI_DisplayText("%s %s", 0, String_Get_ByIndex(oi->stringID_full), String_Get_ByIndex(stringID));

									emu_push(0);
									emu_push(emu_cs); emu_push(0x0632); emu_cs = 0x3483; overlay(0x3483, 0); emu_Unknown_B483_0363();
									emu_sp += 2;
								}
							} else if (s->o.type == STRUCTURE_CONSTRUCTION_YARD) {
								/* An AI immediatly places the structure when it is done building */
								Structure *ns;
								uint8 i;

								ns = Structure_Get_ByIndex(s->o.linkedID);
								s->o.linkedID = 0xFF;

								/* The AI places structures which are operational immediatly */
								Structure_SetAnimation(s, 0);

								/* Find the position to place the structure */
								for (i = 0; i < 5; i++) {
									if (ns->o.type != h->ai_structureRebuild[i][0]) continue;

									if (!Structure_Place(ns, h->ai_structureRebuild[i][1])) continue;

									h->ai_structureRebuild[i][0] = 0;
									h->ai_structureRebuild[i][1] = 0;
									break;
								}

								/* If the AI no longer had in memory where to store the structure, free it and forget about it */
								if (i == 5) {
									StructureInfo *nsi = &g_structureInfo[ns->o.type];

									h->credits += nsi->o.buildCredits;

									Structure_Free(ns);
								}
							}
						}
					} else {
						/* Out of money means the building gets put on hold */
						if (s->o.houseID == g_global->playerHouseID) {
							s->o.type |= 0x4000;

							/* "Insufficient funds.  Construction is halted." */
							GUI_DisplayText(String_Get_ByIndex(0x84), 0);
						}
					}
				}

				if (s->o.type == STRUCTURE_REPAIR) {
					if (!s->o.flags.s.onHold && s->countDown != 0 && s->o.linkedID != 0xFF) {
						UnitInfo *ui;
						uint16 repairSpeed;
						uint16 repairCost;

						ui = &g_unitInfo[Unit_Get_ByIndex(s->o.linkedID)->o.type];

						repairSpeed = 256;
						if (s->o.hitpoints < si->o.hitpoints) {
							repairSpeed = s->o.hitpoints * 256 / si->o.hitpoints;
						}

						/* XXX -- This is highly unfair. Repairing becomes more expensive if your structure is more damaged */
						repairCost = 2 * ui->o.buildCredits / 256;

						if (repairCost < h->credits) {
							h->credits -= repairCost;

							if (repairSpeed < s->countDown) {
								s->countDown -= repairSpeed;
							} else {
								s->countDown = 0;

								Structure_SetAnimation(s, 2);

								if (s->o.houseID == g_global->playerHouseID) {
									emu_push(g_global->playerHouseID + 0x37);
									emu_push(emu_cs); emu_push(0x085A); emu_cs = 0x3483; overlay(0x3483, 0); emu_Unknown_B483_0363();
									emu_sp += 2;
								}
							}
						}
					} else if (h->credits != 0) {
						/* Automaticly resume repairing when there is money again */
						s->o.flags.s.onHold = false;
					}
				}

				/* AI maintenance on structures */
				if (h->flags.s.variable_0008 && s->o.flags.s.allocated && s->o.houseID != g_global->playerHouseID && h->credits != 0) {
					/* When structure is below 50% hitpoints, start repairing */
					if (s->o.hitpoints < si->o.hitpoints / 2) {
						Structure_SetRepairingState(s, 1, NULL);
					}

					/* If the structure is not doing something, but can build stuff, see if there is stuff to build */
					if (si->o.flags.s.factory && s->countDown == 0 && s->o.linkedID == 0xFF) {
						uint16 type = Structure_AI_PickNextToBuild(s);

						if (type != 0xFFFF) Structure_BuildObject(s, type);
					}
				}
			}
		}

		if (tickScript) {
			if (s->o.scriptDelay != 0) {
				s->o.scriptDelay--;
			} else {
				if (Script_IsLoaded(&s->o.script)) {
					uint8 i;

					/* XXX -- No idea, variable_37A2, variable_37A4 and variable_37A8 are only written to, never read. Most likely part of a script debugger. */
					if (g_global->debugGame) {
						g_global->variable_37A4 = 0;
						g_global->variable_37A2++;

						if (s->o.script.stackPointer <= 15 && 15 - s->o.script.stackPointer > g_global->variable_37A8) {
							g_global->variable_37A8 = 15 - s->o.script.stackPointer;
						}
					}

					/* Run the script 3 times in a row */
					for (i = 0; i < 3; i++) {
						if (!Script_Run(&s->o.script)) break;
					}

					/* ENHANCEMENT -- Dune2 aborts all other structures if one gives a script error. This doesn't seem correct */
					if (!g_dune2_enhanced && i != 3) return;
				} else {
					Script_Reset(&s->o.script, ScriptInfo_Get_ByMemory(s->o.script.scriptInfo));
					Script_Load(&s->o.script, s->o.type);
				}
			}
		}
	}
}

/**
 * Convert the name of a structure to the type value of that structure, or
 *  STRUCTURE_INVALID if not found.
 */
uint8 Structure_StringToType(const char *name)
{
	uint8 type;
	if (name == NULL) return STRUCTURE_INVALID;

	for (type = 0; type < STRUCTURE_MAX; type++) {
		const char *structureName = (const char *)emu_get_memorycsip(g_structureInfo[type].o.name);
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
	StructureInfo *si;
	Structure *s;

	if (houseID >= HOUSE_MAX) return NULL;
	if (typeID >= STRUCTURE_MAX) return NULL;

	si = &g_structureInfo[typeID];
	s = Structure_Allocate(index, typeID);
	if (s == NULL) return NULL;

	s->o.houseID            = houseID;
	s->variable_47          = houseID;
	s->o.flags.s.isOnMap = true;
	s->o.position.tile      = 0;
	s->o.linkedID           = 0xFF;
	s->animation            = (g_global->debugScenario) ? 0 : -1;

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

	s->o.hitpoints  = si->o.hitpoints;
	s->hitpointsMax = si->o.hitpoints;

	if (houseID == HOUSE_HARKONNEN && typeID == STRUCTURE_LIGHT_VEHICLE) {
		s->upgradeLevel = 1;
	}

	/* Check if there is an upgrade available */
	if (si->o.flags.s.factory) {
		s->upgradeTimeLeft = Structure_IsUpgradable(s) ? 100 : 0;
	}

	s->objectType = 0xFFFF;

	Structure_BuildObject(s, 0xFFFE);

	s->countDown = 0;

	/* AIs get the full upgrade immediatly */
	if (houseID != g_global->playerHouseID) {
		while (true) {
			if (!Structure_IsUpgradable(s)) break;
			s->upgradeLevel++;
		}
		s->upgradeTimeLeft = 0;
	}

	if (position != 0xFFFF && !Structure_Place(s, position)) {
		Structure_Free(s);
		return NULL;
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
	StructureInfo *si;
	int16 loc0A;

	if (s == NULL) return false;
	if (position == 0xFFFF) return false;

	si = &g_structureInfo[s->o.type];

	switch (s->o.type) {
		case STRUCTURE_WALL: {
			Tile *t;

			if (Structure_IsValidBuildLocation(position, STRUCTURE_WALL) == 0) return false;

			t = Map_GetTileByPosition(position);
			t->groundSpriteID = (g_global->variable_39FA + 1) & 0x1FF;
			/* ENHANCEMENT -- Dune2 wrongfully only removes the lower 2 bits, where the lower 3 bits are the owner. This is no longer visible. */
			t->houseID  = s->o.houseID;

			g_map[position] |= 0x8000;

			if (s->o.houseID == g_global->playerHouseID) Tile_RemoveFogInRadius(Tile_UnpackTile(position), 1);

			if (Map_IsPositionUnveiled(position)) t->overlaySpriteID = 0;

			Structure_ConnectWall(position, true);
			Structure_Free(s);

		} return true;

		case STRUCTURE_SLAB_1x1:
		case STRUCTURE_SLAB_2x2: {
			uint16 i, result;

			result = 0;

			for (i = 0; i < g_global->layoutTileCount[si->layout]; i++) {
				uint16 curPos = position + g_global->layoutTiles[si->layout][i];
				Tile *t = Map_GetTileByPosition(curPos);

				if (Structure_IsValidBuildLocation(curPos, STRUCTURE_SLAB_1x1) == 0) continue;

				t->groundSpriteID = g_global->variable_39F8 & 0x01FF;
				t->houseID  = s->o.houseID;

				g_map[curPos] |= 0x8000;

				if (s->o.houseID == g_global->playerHouseID) Tile_RemoveFogInRadius(Tile_UnpackTile(curPos), 1);

				if (Map_IsPositionUnveiled(curPos)) t->overlaySpriteID = 0;

				Map_Update(curPos, 0, false);

				result = 1;
			}

			/* XXX -- Dirt hack -- Parts of the 2x2 slab can be outside the building area, so by doing the same loop twice it will build for sure */
			if (s->o.type == STRUCTURE_SLAB_2x2) {
				for (i = 0; i < g_global->layoutTileCount[si->layout]; i++) {
					uint16 curPos = position + g_global->layoutTiles[si->layout][i];
					Tile *t = Map_GetTileByPosition(curPos);

					if (Structure_IsValidBuildLocation(curPos, STRUCTURE_SLAB_1x1) == 0) continue;

					t->groundSpriteID = g_global->variable_39F8 & 0x01FF;
					t->houseID  = s->o.houseID;

					g_map[curPos] |= 0x8000;

					if (s->o.houseID == g_global->playerHouseID) {
						Tile_RemoveFogInRadius(Tile_UnpackTile(curPos), 1);
						t->overlaySpriteID = 0;
					}

					Map_Update(curPos, 0, false);

					result = 1;
				}
			}

			if (result == 0) return false;

			Structure_Free(s);
		} return true;
	}

	loc0A = Structure_IsValidBuildLocation(position, s->o.type);

	if (loc0A == 0) {
		if ((s->o.houseID != g_global->playerHouseID || !g_global->debugScenario) && g_global->variable_38BC == 0) {
			return false;
		}
	}

	/* ENHACEMENT -- In Dune2, it only removes the fog around the top-left tile of a structure, leaving for big structures the right in the fog. */
	if (!g_dune2_enhanced && s->o.houseID == g_global->playerHouseID) Tile_RemoveFogInRadius(Tile_UnpackTile(position), 2);

	s->o.variable_09 |= 1 << s->o.houseID;
	if (s->o.houseID == g_global->playerHouseID) s->o.variable_09 |= 0xFF;

	s->o.flags.s.isOnMap = false;

	s->o.position = Tile_UnpackTile(position);
	s->o.position.s.x &= 0xFF00;
	s->o.position.s.y &= 0xFF00;

	s->variable_49  = 0;
	s->o.hitpoints  = si->o.hitpoints;
	s->hitpointsMax = si->o.hitpoints;

	/* If the return value is negative, there are tiles without slab. This gives a penalty to the hitpoints. */
	if (loc0A < 0) {
		uint16 tilesWithoutSlab = -(int16)loc0A;
		uint16 structureTileCount = g_global->layoutTileCount[si->layout];

		s->o.hitpoints -= (si->o.hitpoints / 2) * tilesWithoutSlab / structureTileCount;

		s->o.flags.s.degrades = true;
	} else {
		/* ENHANCEMENT -- When you build a structure completely on slabs, it should not degrade */
		if (!g_dune2_enhanced) {
			s->o.flags.s.degrades = true;
		}
	}

	Script_Reset(&s->o.script, &g_global->scriptStructure);

	s->o.script.variables[0] = 0;
	s->o.script.variables[4] = 0;

	/* XXX -- Weird .. if 'position' enters with 0xFFFF it is returned immediatly .. how can this ever NOT happen? */
	if (position != 0xFFFF) {
		s->o.scriptDelay = 0;
		Script_Reset(&s->o.script, ScriptInfo_Get_ByMemory(s->o.script.scriptInfo));
		Script_Load(&s->o.script, s->o.type);
	}

	{
		uint16 i;

		for (i = 0; i < g_global->layoutTileCount[si->layout]; i++) {
			uint16 curPos = position + g_global->layoutTiles[si->layout][i];
			Unit *u;

			u = Unit_Get_ByPackedTile(curPos);

			Unit_Unknown10EC(u);

			/* ENHACEMENT -- In Dune2, it only removes the fog around the top-left tile of a structure, leaving for big structures the right in the fog. */
			if (g_dune2_enhanced && s->o.houseID == g_global->playerHouseID) Tile_RemoveFogInRadius(Tile_UnpackTile(curPos), 2);

		}
	}

	if (s->o.type == STRUCTURE_WINDTRAP) {
		House *h;

		h = House_Get_ByIndex(s->o.houseID);
		h->windtrapCount += 1;
	}

	if (g_global->variable_38BC == 0x0) {
		House *h;

		h = House_Get_ByIndex(s->o.houseID);
		Structure_CalculatePowerAndCredit(h);
	}

	Structure_UpdateMap(s);

	{
		House *h;
		h = House_Get_ByIndex(s->o.houseID);
		h->structuresBuilt = Structure_GetStructuresBuilt(h);
	}

	return true;
}

/**
 * Calculate the power usage and production, and the credits storage.
 *
 * @param h The house to calculate the numbers for.
 */
void Structure_CalculatePowerAndCredit(House *h)
{
	PoolFindStruct find;

	if (h == NULL) return;

	h->powerUsage      = 0;
	h->powerProduction = 0;
	h->creditsStorage  = 0;

	find.houseID = h->index;
	find.index   = 0xFFFF;
	find.type    = 0xFFFF;

	while (true) {
		StructureInfo *si;
		Structure *s;

		s = Structure_Find(&find);
		if (s == NULL) break;

		si = &g_structureInfo[s->o.type];

		h->creditsStorage += si->creditsStorage;

		/* Positive values means usage */
		if (si->powerUsage >= 0) {
			h->powerUsage += si->powerUsage;
			continue;
		}

		/* Negative value and full health means everything goes to production */
		if (s->o.hitpoints >= si->o.hitpoints) {
			h->powerProduction += -si->powerUsage;
			continue;
		}

		/* Negative value and partial health, calculate how much should go to production (capped at 50%) */
		/* ENHANCEMENT -- The 50% cap of Dune2 is silly and disagress with the GUI. If your hp is 10%, so should the production. */
		if (!g_dune2_enhanced && s->o.hitpoints <= si->o.hitpoints / 2) {
			h->powerProduction += (-si->powerUsage) / 2;
			continue;
		}
		h->powerProduction += (-si->powerUsage) * s->o.hitpoints / si->o.hitpoints;
	}

	/* Check if we are low on power */
	if (h->index == g_global->playerHouseID && h->powerUsage > h->powerProduction) {
		/* "Insufficient power.  Windtrap is needed." */
		GUI_DisplayText(String_Get_ByIndex(0x10E), 1);
	}

	/* If there are no buildings left, you lose your right on 'credits without storage' */
	if (h->index == g_global->playerHouseID && h->structuresBuilt == 0 && g_global->variable_38BC == 0) {
		g_global->playerCreditsNoSilo = 0;
	}
}

/**
 * Calculate the power usage and production, and the credits storage.
 *
 * @param h The house to calculate the numbers for.
 */
void Structure_CalculateHitpointsMax(House *h)
{
	PoolFindStruct find;
	uint16 power = 0;

	if (h == NULL) return;

	if (h->index == g_global->playerHouseID) House_UpdateRadarState(h);

	if (h->powerUsage == 0) {
		power = 256;
	} else {
		power = min(h->powerProduction * 256 / h->powerUsage, 256);
	}

	find.houseID = h->index;
	find.index   = 0xFFFF;
	find.type    = 0xFFFF;

	while (true) {
		StructureInfo *si;
		Structure *s;

		s = Structure_Find(&find);
		if (s == NULL) return;

		si = &g_structureInfo[s->o.type];

		s->hitpointsMax = si->o.hitpoints * power / 256;
		s->hitpointsMax = max(s->hitpointsMax, si->o.hitpoints / 2);

		if (s->hitpointsMax >= s->o.hitpoints) continue;
		Structure_Damage(s, 1, 0);
	}
}

/**
 * Set the animation for the given structure.
 *
 * @param s The structure to set the animation of.
 * @param animation The new animation value.
 */
void Structure_SetAnimation(Structure *s, int16 animation)
{
	if (s == NULL) return;
	s->animation = animation;

	Structure_UpdateMap(s);
}

/**
 * Get the structure on the given packed tile.
 *
 * @param packed The packed tile to get the structure from.
 * @return The structure.
 */
Structure *Structure_Get_ByPackedTile(uint16 packed)
{
	Tile *tile;

	if (Tile_IsOutOfMap(packed)) return NULL;

	tile = Map_GetTileByPosition(packed);
	if (!tile->hasStructure) return NULL;
	return Structure_Get_ByIndex(tile->index - 1);
}

/**
 * Get a bitmask of all built structure types for the given House.
 *
 * @param h The house to get built structures for.
 * @return The bitmask.
 */
uint32 Structure_GetStructuresBuilt(House *h)
{
	PoolFindStruct find;
	uint32 result;

	if (h == NULL) return 0;

	result = 0;
	find.houseID = h->index;
	find.index   = 0xFFFF;
	find.type    = 0xFFFF;

	while (true) {
		Structure *s;

		s = Structure_Find(&find);
		if (s == NULL) break;
		if (s->o.flags.s.isOnMap) continue;
		result |= 1 << s->o.type;
	}

	return result;
}

/**
 * Checks if the given position is a valid location for the given structure type.
 *
 * @param position The (packed) tile to check.
 * @param type The structure type to check the position for.
 * @return 0 if the position is not valid, 1 if the position is valid and have enough slabs, <0 if the position is valid but miss some slabs.
 */
int16 Structure_IsValidBuildLocation(uint16 position, StructureType type)
{
	StructureInfo *si;
	uint16 *layoutTile;
	uint8 i;
	uint16 neededSlabs;
	bool isValid;
	uint16 curPos;

	si = &g_structureInfo[type];
	layoutTile = g_global->layoutTiles[si->layout];

	isValid = true;
	neededSlabs = 0;
	for (i = 0; i < g_global->layoutTileCount[si->layout]; i++) {
		uint16 loc10;

		curPos = position + layoutTile[i];

		loc10 = Map_B4CD_0750(curPos);

		if (g_global->debugScenario != 0) {
			if (g_global->variable_3A3E[loc10][8] == 0) {
				isValid = false;
				break;
			}
		} else {
			if (!Map_IsValidPosition(curPos)) {
				isValid = false;
				break;
			}

			if (si->o.flags.s.variable_0008) {
				if (g_global->variable_3A3E[loc10][8] == 0 && g_global->variable_38BC == 0) {
					isValid = false;
					break;
				}
			} else {
				if (g_global->variable_3A3E[loc10][6] == 0 && g_global->variable_38BC == 0) {
					isValid = false;
					break;
				}
				if (loc10 != 10) neededSlabs++;
			}
		}

		if (Object_GetByPackedTile(curPos) != NULL) {
			isValid = false;
			break;
		}
	}

	if (g_global->variable_38BC == 0 && isValid && type != STRUCTURE_CONSTRUCTION_YARD && g_global->debugScenario == 0) {
		isValid = false;
		for (i = 0; i < 16; i++) {
			uint16 offset, loc14;
			Structure *s;

			offset = g_global->layoutTilesAround[si->layout][i];
			if (offset == 0) break;

			curPos = position + offset;
			s = Structure_Get_ByPackedTile(curPos);
			if (s != NULL) {
				if (s->o.houseID != g_global->playerHouseID) continue;
				isValid = true;
				break;
			}

			loc14 = Map_B4CD_0750(curPos);
			if (loc14 != 10 && loc14 != 11) continue;
			if (Map_GetTileByPosition(curPos)->houseID != g_global->playerHouseID) continue;

			isValid = true;
			break;
		}
	}

	if (!isValid) return 0;
	if (neededSlabs == 0) return 1;
	return -neededSlabs;
}

/**
 * Save all Structures to a file. It converts pointers to indices where needed.
 * @param fp The file to save to.
 * @return True if and only if all bytes were written successful.
 */
bool Structure_Save(FILE *fp)
{
	PoolFindStruct find;

	find.houseID = 0xFFFF;
	find.type    = 0xFFFF;
	find.index   = 0xFFFF;

	while (true) {
		Structure *s;
		Structure ss;

		s = Structure_Find(&find);
		if (s == NULL) break;
		ss = *s;

		/* Rewrite the pointer in the scriptEngine to an index */
		if (ss.o.script.script.csip != 0x00000000) {
			ScriptInfo *scriptInfo;
			scriptInfo = ScriptInfo_Get_ByMemory(ss.o.script.scriptInfo);
			ss.o.script.script.csip = (ss.o.script.script.csip - scriptInfo->start.csip) / 2;
		}
		ss.o.script.scriptInfo.csip = 0x00000000;

		if (fwrite(&ss, sizeof(Structure), 1, fp) != 1) return false;
	}

	return true;
}

/**
 * Load all Structures from a file.
 * @param fp The file to load from.
 * @param length The length of the data chunk.
 * @return True if and only if all bytes were read successful.
 */
bool Structure_Load(FILE *fp, uint32 length)
{
	while (length >= sizeof(Structure)) {
		csip32 scsip;
		Structure *s;
		Structure sl;

		length -= sizeof(Structure);

		/* Read the next Structure from disk */
		if (fread(&sl, sizeof(Structure), 1, fp) != 1) return false;

		sl.o.script.scriptInfo.s.cs = 0x353F;
		sl.o.script.scriptInfo.s.ip = emu_Global_GetIP(&g_global->scriptStructure, 0x353F);
		if (sl.o.script.script.csip != 0x0) {
			uint16 lineno = sl.o.script.script.csip;

			sl.o.script.script = g_global->scriptStructure.start;
			sl.o.script.script.s.ip += lineno * 2;
		}

		/* Get the Structure from the pool */
		s = Structure_Get_ByIndex(sl.o.index);
		if (s == NULL) return false;

		/* Copy over the data */
		*s = sl;

		if (s->upgradeTimeLeft != 0) continue;

		/* XXX -- Temporary, to keep all the emu_calls workable for now */
		scsip.s.cs = g_global->structureStartPos.s.cs;
		scsip.s.ip = g_global->structureStartPos.s.ip + s->o.index * sizeof(Structure);

		s->upgradeTimeLeft = Structure_IsUpgradable(s) ? 100 : 0;
	}
	if (length != 0) return false;

	Structure_Recount();

	return true;
}

/**
 * Activate the special weapon of a house.
 *
 * @param s The structure which launches the weapon. Has to be the Palace.
 */
void Structure_ActivateSpecial(Structure *s)
{
	House *h;

	if (s == NULL) return;
	if (s->o.type != STRUCTURE_PALACE) return;

	h = House_Get_ByIndex(s->o.houseID);
	if (!h->flags.s.used) return;

	switch (g_houseInfo[s->o.houseID].specialWeapon) {
		case HOUSE_WEAPON_MISSLE: {
			Unit *u;
			tile32 position;

			position.s.x = 0xFFFF;
			position.s.y = 0xFFFF;

			g_global->variable_38BC++;
			u = Unit_Create(UNIT_INDEX_INVALID, UNIT_MISSILE_HOUSE, s->o.houseID, position, Tools_Random_256());
			g_global->variable_38BC--;

			g_global->unitHouseMissile.csip = 0x0;
			if (u == NULL) break;

			g_global->unitHouseMissile.csip = g_global->unitStartPos.csip;
			g_global->unitHouseMissile.s.ip += u->o.index * sizeof(Unit);

			s->countDown = g_houseInfo[s->o.houseID].specialCountDown;

			if (!h->flags.s.human) {
				PoolFindStruct find;

				find.houseID = 0xFFFF;
				find.type    = 0xFFFF;
				find.index   = 0xFFFF;

				/* For the AI, try to find the first structure which is not ours, and launch missile to there */
				while (true) {
					Structure *sf;

					sf = Structure_Find(&find);
					if (sf == NULL) break;

					if (House_AreAllied(s->o.houseID, sf->o.houseID)) continue;

					Unit_LaunchHouseMissile(Tile_PackTile(sf->o.position));

					return;
				}

				/* We failed to find a target, so remove the missile */
				Unit_Free(u);
				g_global->unitHouseMissile.csip = 0x0;

				return;
			}

			/* Give the user 7 seconds to select their target */
			g_global->houseMissileCountdown = 7;

			GUI_ChangeSelectionType(1);
		} break;

		case HOUSE_WEAPON_FREMEN: {
			uint16 location;
			uint16 i;

			/* Find a random location to appear */
			location = Map_B4CD_1816(4, HOUSE_INVALID);

			for (i = 0; i < 5; i++) {
				Unit *u;
				tile32 position;
				uint16 unitType;

				Tools_Random_256();

				position = Tile_UnpackTile(location);
				position = Tile_MoveByRandom(position, 32, true);

				unitType = (Tools_RandomRange(0, 3) == 1) ? UNIT_TROOPER : UNIT_TROOPERS;

				g_global->variable_38BC++;
				u = Unit_Create(UNIT_INDEX_INVALID, (uint8)unitType, HOUSE_FREMEN, position, (int8)emu_ax);
				g_global->variable_38BC--;

				if (u == NULL) continue;

				Unit_SetAction(u, ACTION_HUNT);
			}

			s->countDown = g_houseInfo[s->o.houseID].specialCountDown;
		} break;

		case HOUSE_WEAPON_SABOTEUR: {
			Unit *u;
			uint16 position;

			/* Find a spot next to the structure */
			position = Structure_0C3A_247A(s, false);

			/* If there is no spot, reset countdown */
			if (position == 0) {
				s->countDown = 1;
				return;
			}

			g_global->variable_38BC++;
			u = Unit_Create(UNIT_INDEX_INVALID, UNIT_SABOTEUR, s->o.houseID, Tile_UnpackTile(position), Tools_Random_256());
			g_global->variable_38BC--;

			s->countDown = g_houseInfo[s->o.houseID].specialCountDown;

			if (u == NULL) return;

			Unit_SetAction(u, ACTION_SABOTAGE);
		} break;

		default: break;
	}

	if (s->o.houseID == g_global->playerHouseID) {
		GUI_Widget_ActionPanel_Draw(true);
	}
}

/**
 * Remove the fog around a structure.
 *
 * @param s The Structure.
 */
void Structure_RemoveFog(Structure *s)
{
	if (s == NULL || s->o.houseID != g_global->playerHouseID) return;

	Tile_RemoveFogInRadius(s->o.position, g_structureInfo[s->o.type].o.fogUncoverRadius);
}

/**
 * Handles destroying of a structure.
 *
 * @param s The Structure.
 */
static void Structure_Destroy(Structure *s)
{
	uint8 linkedID;
	House *h;
	StructureInfo *si;

	if (s == NULL) return;

	if (g_global->debugScenario != 0) {
		Structure_0C3A_1002(s);
		return;
	}

	s->o.script.variables[0] = 1;
	s->o.flags.s.allocated = false;
	s->o.flags.s.repairing = false;
	s->o.scriptDelay = 0;

	Script_Reset(&s->o.script, &g_global->scriptStructure);
	Script_Load(&s->o.script, s->o.type);

	Voice_PlayAtTile(44, s->o.position);

	linkedID = s->o.linkedID;

	if (linkedID != 0xFF) {
		if (s->o.type == STRUCTURE_CONSTRUCTION_YARD) {
			Structure_Destroy(Structure_Get_ByIndex(linkedID));
			s->o.linkedID = 0xFF;
		} else {
			while (linkedID != 0xFF) {
				Unit *u = Unit_Get_ByIndex(linkedID);

				linkedID = u->o.linkedID;

				Unit_Unknown10EC(u);
			}
		}
	}

	h = House_Get_ByIndex(s->o.houseID);
	si = &g_structureInfo[s->o.type];

	h->credits -= (h->creditsStorage == 0) ? h->credits : min(h->credits, (h->credits * 256 / h->creditsStorage) * si->creditsStorage / 256);

	if (s->o.houseID != g_global->playerHouseID) h->credits += si->o.buildCredits + (g_global->campaignID > 7 ? si->o.buildCredits / 2 : 0);

	if (s->o.type != STRUCTURE_WINDTRAP) return;

	h->windtrapCount--;
}

/**
 * Damage the structure, and bring the surrounding to an explosion if needed.
 *
 * @param s The structure to damage.
 * @param damage The damage to deal to the structure.
 * @param range The range in which an explosion should be possible.
 * @return True if and only if the structure is now destroyed.
 */
bool Structure_Damage(Structure *s, uint16 damage, uint16 range)
{
	StructureInfo *si;

	if (s == NULL) return false;
	if (damage == 0) return false;
	if (s->o.script.variables[0] == 1) return false;

	si = &g_structureInfo[s->o.type];

	if (s->o.hitpoints >= damage) {
		s->o.hitpoints -= damage;
	} else {
		s->o.hitpoints = 0;
	}

	if (s->o.hitpoints == 0) {
		uint16 score;

		score = si->o.buildCredits / 100;
		if (score < 1) score = 1;

		if (House_AreAllied((uint8)g_global->playerHouseID, s->o.houseID)) {
			g_global->scenario.destroyedAllied++;
			g_global->scenario.score -= score;
		} else {
			g_global->scenario.destroyedEnemy++;
			g_global->scenario.score += score;
		}

		Structure_Destroy(s);

		if (g_global->playerHouseID == s->o.houseID) {
			uint16 locdi;

			switch (s->o.houseID) {
				case HOUSE_HARKONNEN: locdi = 22; break;
				case HOUSE_ATREIDES:  locdi = 23; break;
				case HOUSE_ORDOS:     locdi = 24; break;
				default: locdi = 0xFFFF; break;
			}

			emu_push(locdi);
			emu_push(emu_cs); emu_push(0x132D); emu_cs = 0x3483; overlay(0x3483, 0); emu_Unknown_B483_0363();
			emu_sp += 2;
		} else {
			emu_push(21);
			emu_push(emu_cs); emu_push(0x1339); emu_cs = 0x3483; overlay(0x3483, 0); emu_Unknown_B483_0363();
			emu_sp += 2;
		}

		Structure_UntargetMe(s);
		return true;
	}

	if (range == 0) return false;

	Map_MakeExplosion(2, Tile_AddTileDiff(s->o.position, g_global->layoutTileDiff[si->layout]), 0, 0);
	return false;
}

/**
 * Check wether the given structure is upgradable.
 *
 * @param s The Structure to check.
 * @return True if and only if the structure is upgradable.
 */
bool Structure_IsUpgradable(Structure *s)
{
	StructureInfo *si;

	if (s == NULL) return false;

	si = &g_structureInfo[s->o.type];

	if (s->o.houseID == HOUSE_HARKONNEN && s->o.type == STRUCTURE_HIGH_TECH) return false;
	if (s->o.houseID == HOUSE_ORDOS && s->o.type == STRUCTURE_HEAVY_VEHICLE && s->upgradeLevel == 1 && si->variable_5A[2] > g_global->campaignID) return false;

	if (si->variable_5A[s->upgradeLevel] != 0 && si->variable_5A[s->upgradeLevel] <= g_global->campaignID + 1) {
		House *h;

		if (s->o.type != STRUCTURE_CONSTRUCTION_YARD) return true;
		if (s->upgradeLevel != 1) return true;

		h = House_Get_ByIndex(s->o.houseID);
		if ((h->structuresBuilt & g_structureInfo[STRUCTURE_ROCKET_TURRET].o.structuresRequired) == g_structureInfo[STRUCTURE_ROCKET_TURRET].o.structuresRequired) return true;

		return false;
	}

	if (s->o.houseID == HOUSE_HARKONNEN && s->o.type == STRUCTURE_WOR_TROOPER && s->upgradeLevel == 0 && g_global->campaignID > 3) return true;
	return false;
}

/**
 * Connect walls around the given position.
 *
 * @param position The packed position.
 * @param recurse Wether to recurse.
 * @return True if and only if a change happened.
 */
bool Structure_ConnectWall(uint16 position, bool recurse)
{
	uint16 bits = 0;
	uint16 spriteID;
	bool isTypeD;
	uint8 i;
	Tile *tile;

	if (g_global->variable_3562 == 0) {
		uint8 *var_2DC9_0000 = &emu_get_memory8(0x2DC9, 0x00, 0x00);

		g_global->variable_3562 = 1;

		for (i = 0; i < 74; i++) g_global->variable_3462[var_2DC9_0000[i]] = i;

		g_global->variable_3462[10]  = 1;
		g_global->variable_3462[8]   = 1;
		g_global->variable_3462[1]   = 3;
		g_global->variable_3462[5]   = 3;
		g_global->variable_3462[34]  = 13;
		g_global->variable_3462[136] = 14;
		g_global->variable_3462[68]  = 17;
	}

	isTypeD = Map_B4CD_0750(position) == 0xD;

	for (i = 0; i < 4; i++) {
		uint16 curPos = position + g_global->variable_345A[i];

		if (recurse && Map_B4CD_0750(curPos) == 0xB) Structure_ConnectWall(curPos, false);

		if (isTypeD) continue;

		switch (Map_B4CD_0750(curPos)) {
			case 0xD: bits |= (1 << (i + 4));
				/* FALL-THROUGH */
			case 0xB: bits |= (1 << i);
				/* FALL-THROUGH */
			default:  break;
		}
	}

	if (isTypeD) return false;

	spriteID = g_global->variable_39FA + g_global->variable_3462[bits] + 1;

	tile = Map_GetTileByPosition(position);
	if (tile->groundSpriteID == spriteID) return false;

	tile->groundSpriteID = spriteID;
	g_map[position] |= 0x8000;
	Map_Update(position, 0, false);

	return true;
}

/**
 * Get the unit linked to this structure, or NULL if there is no.
 * @param s The structure to get the linked unit from.
 * @return The linked unit, or NULL if there was none.
 */
Unit *Structure_GetLinkedUnit(Structure *s)
{
	if (s->o.linkedID == 0xFF) return NULL;
	return Unit_Get_ByIndex(s->o.linkedID);
}

/**
 * Untarget the given Structure.
 *
 * @param unit The Structure to untarget.
 */
void Structure_UntargetMe(Structure *s)
{
	PoolFindStruct find;
	uint16 encoded = Tools_Index_Encode(s->o.index, IT_STRUCTURE);

	Object_Script_Variable4_Clear(&s->o);

	find.houseID = 0xFFFF;
	find.index   = 0xFFFF;
	find.type    = 0xFFFF;

	while (true) {
		Unit *u;

		u = Unit_Find(&find);
		if (u == NULL) break;

		if (u->targetMove == encoded) u->targetMove = 0;
		if (u->targetAttack == encoded) u->targetAttack = 0;
		if (u->o.script.variables[4] == encoded) Object_Script_Variable4_Clear(&u->o);
	}

	find.houseID = 0xFFFF;
	find.index   = 0xFFFF;
	find.type    = 0xFFFF;

	while (true) {
		Team *t;

		t = Team_Find(&find);
		if (t == NULL) break;

		if (t->target == encoded) t->target = 0;
	}
}

uint16 Structure_0C3A_247A(Structure *s, bool checkDistance)
{
	StructureInfo *si;
	uint16 packed;
	uint16 loc0C;
	uint16 bestPacked;
	uint16 bestDistance;
	int16 loc12;
	uint16 i;

	if (s == NULL) return 0;

	si = &g_structureInfo[s->o.type];
	packed = Tile_PackTile(Tile_Center(s->o.position));

	loc0C = (checkDistance) ? Map_B4CD_08E7(packed, 10) : 0;
	bestPacked = 0;
	bestDistance = 0;
	i = Tools_Random_256() & 0xF;
	loc12 = 16;

	while (loc12 > 0) {
		uint16 offset = g_global->layoutTilesAround[si->layout][i];

		if (offset != 0) {
			uint16 curPacked;

			curPacked = packed + offset;

			if (Map_IsValidPosition(curPacked)) {
				uint16 type = Map_B4CD_0750(curPacked);
				Tile *t = Map_GetTileByPosition(curPacked);

				if (!t->hasUnit && !t->hasStructure && type != 0xB && type != 0x6 && type != 0x7) {
					if (!checkDistance) return curPacked;

					if (bestDistance == 0 || Tile_GetDistancePacked(curPacked, loc0C) < bestDistance) {
						bestPacked = curPacked;
						bestDistance = Tile_GetDistancePacked(curPacked, loc0C);
					}
				}
			}
		}

		i++;
		loc12--;
		if (i <= 15 && offset != 0) {
			i++;
		} else {
			loc12 -= 16 - i;
			i = 0;
		}
	}

	return bestPacked;
}

void Structure_0C3A_1002(Structure *s)
{
	uint16 packed;
	StructureInfo *si;
	uint16 i;
	House *h;

	if (s == NULL) return;

	si = &g_structureInfo[s->o.type];
	packed = Tile_PackTile(s->o.position);

	for (i = 0; i < g_global->layoutTileCount[si->layout]; i++) {
		Tile *t;
		uint16 curPacked = packed + g_global->layoutTiles[si->layout][i];

		Animation_Stop_ByTile(curPacked);

		t = Map_GetTileByPosition(curPacked);
		t->hasStructure = false;

		if (g_global->debugScenario == 0) continue;

		t->groundSpriteID = g_map[curPacked] & 0x1FF;
		t->overlaySpriteID = 0;
	}

	if (g_global->debugScenario == 0) {
		csip32 proc;

		proc.csip = 0x2C6F0000;

		Animation_Start(proc, s->o.position, si->layout, s->o.houseID, (uint8)si->variable_3C);
	}

	h = House_Get_ByIndex(s->o.houseID);

	for (i = 0; i < 5; i++) {
		if (h->ai_structureRebuild[i][0] != 0) continue;
		h->ai_structureRebuild[i][0] = s->o.type;
		h->ai_structureRebuild[i][1] = packed;
		break;
	}

	Structure_Free(s);
	Structure_UntargetMe(s);

	h->structuresBuilt = Structure_GetStructuresBuilt(h);

	House_UpdateCreditsStorage(s->o.houseID);

	if (g_global->debugScenario != 0) return;

	switch (s->o.type) {
		case STRUCTURE_WINDTRAP:
			Structure_CalculatePowerAndCredit(h);
			break;

		case STRUCTURE_OUTPOST:
			House_UpdateRadarState(h);
			break;

		default: break;
	}
}

static bool Structure_0C3A_0B93(uint16 objectType, uint8 houseID)
{
	StructureInfo *si;
	uint16 tileCount;
	uint16 i;

	si = &g_structureInfo[objectType];

	tileCount = g_global->layoutTileCount[si->layout];

	if (objectType == STRUCTURE_SLAB_1x1 || objectType == STRUCTURE_SLAB_2x2) return true;

	for (i = 0; i < 4096; i++) {
		bool stop = true;
		uint16 j;

		for (j = 0; j < tileCount; j++) {
			uint16 packed = i + g_global->layoutTiles[si->layout][j];

			if (Map_B4CD_0750(packed) == 0xA && Map_GetTileByPosition(packed)->houseID == houseID) continue;

			stop = false;
			break;
		}

		if (stop) return true;
	}

	return false;
}

/**
 * Cancel the building of object for given structure.
 *
 * @param s The Structure.
 */
static void Structure_CancelBuild(Structure *s)
{
	ObjectInfo *oi;

	if (s == NULL || s->o.linkedID == 0xFF) return;

	if (s->o.type == STRUCTURE_CONSTRUCTION_YARD) {
		Structure *s2 = Structure_Get_ByIndex(s->o.linkedID);
		oi = &g_structureInfo[s2->o.type].o;
		Structure_Free(s2);
	} else {
		Unit *u = Unit_Get_ByIndex(s->o.linkedID);
		oi = &g_unitInfo[u->o.type].o;
		Unit_Free(u);
	}

	House_Get_ByIndex(s->o.houseID)->credits += ((oi->buildTime - (s->countDown >> 8)) * 256 / oi->buildTime) * oi->buildCredits / 256;

	s->o.flags.s.onHold = false;
	s->countDown = 0;
	s->o.linkedID = 0xFF;
}

/**
 * Make the given Structure build an object.
 *
 * @param s The Structure.
 * @param objectType The type of the object to build or a special value (0xFFFD, 0xFFFE, 0xFFFF).
 * @return ??.
 */
bool Structure_BuildObject(Structure *s, uint16 objectType)
{
	StructureInfo *si;
	House *h;
	char *str;
	Object *o;
	ObjectInfo *oi;

	if (s == NULL) return false;

	si = &g_structureInfo[s->o.type];

	if (!si->o.flags.s.factory) return false;

	h = House_Get_ByIndex(s->o.houseID);

	Structure_SetRepairingState(s, 0, NULL);

	if (objectType == 0xFFFD) {
		Structure_SetUpgradingState(s, 1, NULL);
		return false;
	}

	if (objectType == 0xFFFF || objectType == 0xFFFE) {
		uint16 loc1C = 0;
		uint32 buildable;

		if (Structure_IsUpgradable(s) && si->o.hitpoints == s->o.hitpoints) {
			loc1C = (si->o.buildCredits + (si->o.buildCredits >> 15)) / 2;
		}

		if (loc1C != 0 && s->o.type == STRUCTURE_HIGH_TECH && s->o.houseID == HOUSE_HARKONNEN) loc1C = 0;
		if (s->o.type == STRUCTURE_STARPORT) loc1C = 0;

		buildable = Structure_GetBuildable(s);

		if (buildable == 0) {
			s->objectType = 0;
			return false;
		}

		if (s->o.type == STRUCTURE_CONSTRUCTION_YARD) {
			uint8 i;

			g_global->variable_8BE8 = 1;

			for (i = 0; i < STRUCTURE_MAX; i++) {
				if ((buildable & (1 << i)) == 0) continue;
				g_structureInfo[i].o.available = 1;
				if (objectType != 0xFFFE) continue;
				s->objectType = i;
				return false;
			}
		} else {
			g_global->variable_8BE8 = 0;

			if (s->o.type == STRUCTURE_STARPORT) {
				uint8 linkedID = 0xFF;
				int16 loc60[UNIT_MAX];
				Unit *u;
				bool loop = true;

				memset(loc60, 0, UNIT_MAX * 2);

				while (loop) {
					uint8 i;

					loop = false;

					for (i = 0; i < UNIT_MAX; i++) {
						int16 loc2A = g_global->starportAvailable[i];

						if (loc2A == 0) {
							g_unitInfo[i].o.available = 0;
							continue;
						}

						if (loc2A < 0) {
							g_unitInfo[i].o.available = -1;
							continue;
						}

						if (loc60[i] >= loc2A) continue;

						g_global->variable_38BC++;

						u = Unit_Allocate(UNIT_INDEX_INVALID, i, s->o.houseID);

						g_global->variable_38BC--;

						if (u != NULL) {
							loop = true;
							u->o.linkedID = linkedID;
							linkedID = u->o.index & 0xFF;
							loc60[i]++;
							g_unitInfo[i].o.available = (int8)loc60[i];
							continue;
						}

						if (loc60[i] == 0) g_unitInfo[i].o.available = -1;
					}
				}

				while (linkedID != 0xFF) {
					u = Unit_Get_ByIndex(linkedID);
					linkedID = u->o.linkedID;
					Unit_Free(u);
				}
			} else {
				uint8 i;

				for (i = 0; i < UNIT_MAX; i++) {
					if ((buildable & (1 << i)) == 0) continue;
					g_unitInfo[i].o.available = 1;
					if (objectType != 0xFFFE) continue;
					s->objectType = i;
					return false;
				}
			}
		}

		if (objectType == 0xFFFF) {
			uint16 loc1E;

			Sprites_UnloadTiles();

			memmove(emu_get_memorycsip(g_global->variable_3C32), g_global->variable_70A2, 768);

			GUI_ChangeSelectionType(0);

			emu_push(0);
			emu_push(emu_cs); emu_push(0x17A6); emu_cs = 0x34E9; overlay(0x34E9, 0); emu_Unknown_B4E9_0000();
			emu_sp += 2;

			emu_push(loc1C);
			emu_push(s->o.type == STRUCTURE_STARPORT ? 1 : 0);
			emu_push(g_global->variable_8BE8);
			emu_push(emu_cs); emu_push(0x17C5); emu_cs = 0x3495; overlay(0x3495, 0); f__B495_0000_0022_1CF6();
			emu_sp += 6;
			loc1E = emu_ax;

			emu_push(1);
			emu_push(emu_cs); emu_push(0x17D4); emu_cs = 0x34E9; overlay(0x34E9, 0); emu_Unknown_B4E9_0000();
			emu_sp += 2;

			Sprites_LoadTiles();

			emu_push(g_global->variable_3C32.s.cs); emu_push(g_global->variable_3C32.s.ip);
			emu_push(emu_cs); emu_push(0x17E7); emu_cs = 0x259E; f__259E_0040_0015_5E4A();
			emu_sp += 4;

			Sprites_Load(0, 7, g_sprites);

			GUI_ChangeSelectionType(4);

			if (loc1E == 0) return false;

			if (loc1E == 2) {
				Structure_SetUpgradingState(s, 1, NULL);
				return false;
			}

			if (loc1E == 1) {
				uint8 i;

				for (i = 0; i < 25; i++) {
					UnitInfo *ui;
					Unit *u;

					if (g_global->variable_8BEA[i][2] == 0) continue;
					objectType = ((uint16 *)g_global->variable_8BEA[i])[0];

					if (s->o.type != STRUCTURE_STARPORT) {
						Structure_CancelBuild(s);

						s->objectType = objectType;

						if (g_global->variable_8BE8 != 1) continue;

						if (Structure_0C3A_0B93(objectType, s->o.houseID)) continue;

						if (GUI_DisplayHint(20, g_structureInfo[objectType].o.spriteID) == 0) continue;

						s->objectType = objectType;

						return false;
					}

					ui = &g_unitInfo[objectType];

					g_global->variable_38BC++;
					{
						tile32 tile;
						tile.tile = 0xFFFFFFFF;
						u = Unit_Create(UNIT_INDEX_INVALID, (uint8)objectType, s->o.houseID, tile, 0);
					}
					g_global->variable_38BC--;

					if (u == NULL) {
						h->credits += g_unitInfo[UNIT_CARRYALL].o.buildCredits;
						if (s->o.houseID != g_global->playerHouseID) continue;
						/* "Unable to create more." */
						GUI_DisplayText(String_Get_ByIndex(0x88), 2);
						continue;
					}

					g_global->structureIndex = s->o.index;

					if (h->starportTimeLeft == 0) h->starportTimeLeft = g_houseInfo[h->index].starportDeliveryTime;

					u->o.linkedID = h->starportLinkedID & 0xFF;
					h->starportLinkedID = u->o.index;

					g_global->starportAvailable[objectType]--;

					if (g_global->starportAvailable[objectType] <= 0) g_global->starportAvailable[objectType] = -1;

					g_global->variable_8BEA[i][2]--;
					if (g_global->variable_8BEA[i][2] != 0) i--;
				}
			}
		} else {
			s->objectType = objectType;
		}
	}

	if (s->o.type == STRUCTURE_STARPORT) return true;

	if (s->objectType != objectType) Structure_CancelBuild(s);

	if (s->o.linkedID != 0xFF || objectType == 0xFFFF) return false;

	if (s->o.type != STRUCTURE_CONSTRUCTION_YARD) {
		tile32 tile;
		tile.tile = 0xFFFFFFFF;

		oi = &g_unitInfo[objectType].o;
		o = &Unit_Create(UNIT_INDEX_INVALID, (uint8)objectType, s->o.houseID, tile, 0)->o;
		str = String_Get_ByIndex(g_unitInfo[objectType].o.stringID_full);
	} else {
		oi = &g_structureInfo[objectType].o;
		o = &Structure_Create(STRUCTURE_INDEX_INVALID, (uint8)objectType, s->o.houseID, 0xFFFF)->o;
		str = String_Get_ByIndex(g_structureInfo[objectType].o.stringID_full);
	}

	s->o.flags.s.onHold = false;

	if (o != NULL) {
		s->o.linkedID = o->index & 0xFF;
		s->objectType = objectType;
		s->countDown = oi->buildTime << 8;

		Structure_SetAnimation(s, 1);

		if (s->o.houseID != g_global->playerHouseID) return true;

		/* "Production of %s has started." */
		GUI_DisplayText(String_Get_ByIndex(0x89), 2, str);

		return true;
	}

	if (s->o.houseID != g_global->playerHouseID) return false;

	/* "Unable to create more." */
	GUI_DisplayText(String_Get_ByIndex(0x88), 2);

	return false;
}

/**
 * Sets or toggle the upgrading state of the given Structure.
 *
 * @param s The Structure.
 * @param value The upgrading state, -1 to toggle.
 * @param w The widget.
 * @return True if and only if the state changed.
 */
bool Structure_SetUpgradingState(Structure *s, int8 state, Widget *w)
{
	bool ret = false;

	if (s == NULL) return false;

	if (state == -1) state = s->o.flags.s.upgrading ? 0 : 1;

	if (state == 0 && s->o.flags.s.upgrading) {
		if (s->o.houseID == g_global->playerHouseID) {
			/* "Upgrading stops." */
			GUI_DisplayText(String_Get_ByIndex(0x8C), 2);
		}

		s->o.flags.s.upgrading = false;
		s->o.flags.s.onHold = false;

		GUI_Widget_MakeNormal(w, false);

		ret = true;
	}

	if (state == 0 || s->o.flags.s.upgrading || s->upgradeTimeLeft == 0) return ret;

	if (s->o.houseID == g_global->playerHouseID) {
		/* "Upgrading starts." */
		GUI_DisplayText(String_Get_ByIndex(0x8D), 2);
	}

	s->o.flags.s.onHold = true;
	s->o.flags.s.repairing = false;
	s->o.flags.s.upgrading = true;

	GUI_Widget_MakeSelected(w, false);

	return true;
}

/**
 * Sets or toggle the repairing state of the given Structure.
 *
 * @param s The Structure.
 * @param value The repairing state, -1 to toggle.
 * @param w The widget.
 * @return True if and only if the state changed.
 */
bool Structure_SetRepairingState(Structure *s, int8 state, Widget *w)
{
	bool ret = false;

	if (s == NULL) return false;

	if (!s->o.flags.s.allocated) state = 0;

	if (state == -1) state = s->o.flags.s.repairing ? 0 : 1;

	if (state == 0 && s->o.flags.s.repairing) {
		if (s->o.houseID == g_global->playerHouseID) {
			/* "Repairing stops." */
			GUI_DisplayText(String_Get_ByIndex(0x8A), 2);
		}

		s->o.flags.s.repairing = false;
		s->o.flags.s.onHold = false;

		GUI_Widget_MakeNormal(w, false);

		ret = true;
	}

	if (state == 0 || s->o.flags.s.repairing || s->o.hitpoints == g_structureInfo[s->o.type].o.hitpoints) return ret;

	if (s->o.houseID == g_global->playerHouseID) {
		/* "Repairing starts." */
		GUI_DisplayText(String_Get_ByIndex(0x8B), 2);
	}

	s->o.flags.s.onHold = true;
	s->o.flags.s.repairing = true;

	GUI_Widget_MakeSelected(w, false);

	return true;
}

/**
 * Update the map with the right data for this structure.
 * @param s The structure to update on the map.
 */
void Structure_UpdateMap(Structure *s)
{
	StructureInfo *si;
	csip32 animationProc;
	uint16 layoutSize;
	uint16 *layout;
	uint16 *gIconMap;
	uint16 *iconMap;
	int i;

	if (s == NULL) return;
	if (!s->o.flags.s.used) return;
	if (s->o.flags.s.isOnMap) return;

	si = &g_structureInfo[s->o.type];

	layout = g_global->layoutTiles[si->layout];
	layoutSize = g_global->layoutTileCount[si->layout];

	gIconMap = (uint16 *)emu_get_memorycsip(g_global->iconMap);
	iconMap = &gIconMap[gIconMap[si->variable_3C] + layoutSize + layoutSize];

	for (i = 0; i < layoutSize; i++) {
		uint16 position;
		Tile *t;

		position = Tile_PackTile(s->o.position) + layout[i];

		t = Map_GetTileByPosition(position);
		t->houseID = s->o.houseID;
		t->hasStructure = true;
		t->index = s->o.index + 1;

		t->groundSpriteID = iconMap[i] + s->variable_49;

		if (t->overlaySpriteID > g_global->variable_39F2 || g_global->variable_39F2 > t->overlaySpriteID + 15) {
			t->overlaySpriteID = 0;
		}

		Map_Update(position, 0, false);
	}

	if (s->animation >= 0) {
		uint16 animation = (s->animation > 2) ? 2 : s->animation;
		if (si->variable_3E[animation].csip == 0) animation &= 1;

		animationProc.csip = si->variable_3E[animation].csip;
	} else {
		animationProc.s.cs = 0x2C70;
		animationProc.s.ip = 0x0;
	}

	s->o.flags.s.variable_4_1000 = true;

	Animation_Start(animationProc, s->o.position, si->layout, s->o.houseID, (uint8)si->variable_3C);

	g_global->variable_37A4 = 0;
}

uint32 Structure_GetBuildable(Structure *s)
{
	StructureInfo *si;
	uint32 structuresBuilt;
	uint32 ret = 0;
	int i;

	if (s == NULL) return 0;

	si = &g_structureInfo[s->o.type];

	structuresBuilt = House_Get_ByIndex(s->o.houseID)->structuresBuilt;

	switch (s->o.type) {
		case STRUCTURE_LIGHT_VEHICLE:
		case STRUCTURE_HEAVY_VEHICLE:
		case STRUCTURE_HIGH_TECH:
		case STRUCTURE_WOR_TROOPER:
		case STRUCTURE_BARRACKS:
			for (i = 0; i < UNIT_MAX; i++) {
				g_unitInfo[i].o.available = 0;
			}

			for (i = 0; i < 8; i++) {
				UnitInfo *ui;
				uint16 upgradeLevelRequired;
				uint16 unitType = si->buildableUnits[i];

				if (unitType == 0xFFFF) continue;

				if (unitType == UNIT_TRIKE && s->variable_47 == HOUSE_ORDOS) unitType = UNIT_RAIDER_TRIKE;

				ui = &g_unitInfo[unitType];
				upgradeLevelRequired = ui->o.upgradeLevelRequired;

				if (unitType == UNIT_SIEGE_TANK && s->variable_47 == HOUSE_ORDOS) upgradeLevelRequired--;

				if ((structuresBuilt & ui->o.structuresRequired) != ui->o.structuresRequired) continue;
				if ((ui->o.availableHouse & (1 << s->variable_47)) == 0) continue;

				if (s->upgradeLevel >= upgradeLevelRequired) {
					ui->o.available = 1;

					ret |= (1 << unitType);
					continue;
				}

				if (s->upgradeTimeLeft != 0 && s->upgradeLevel + 1 >= upgradeLevelRequired) {
					ui->o.available = -1;
				}
			}
			return ret;

		case STRUCTURE_CONSTRUCTION_YARD:
			for (i = 0; i < STRUCTURE_MAX; i++) {
				StructureInfo *localsi = &g_structureInfo[i];
				uint16 availableCampaign;
				uint32 structuresRequired;

				localsi->o.available = 0;

				availableCampaign = localsi->o.availableCampaign;
				structuresRequired = localsi->o.structuresRequired;

				if (i == STRUCTURE_WOR_TROOPER && s->o.houseID == HOUSE_HARKONNEN && g_global->campaignID >= 1) {
					structuresRequired &= ~(1 << STRUCTURE_BARRACKS);
					availableCampaign = 2;
				}

				if ((structuresBuilt & structuresRequired) == structuresRequired || s->o.houseID != g_global->playerHouseID) {
					if (s->o.houseID == HOUSE_HARKONNEN && i == STRUCTURE_LIGHT_VEHICLE) {
						availableCampaign = 2;
					}

					if (g_global->campaignID >= availableCampaign - 1 && (localsi->o.availableHouse & (1 << s->o.houseID)) != 0) {
						if (s->upgradeLevel >= localsi->o.upgradeLevelRequired || s->o.houseID != g_global->playerHouseID) {
							localsi->o.available = 1;

							ret |= (1 << i);
						} else if (s->upgradeTimeLeft != 0 && s->upgradeLevel + 1 >= localsi->o.upgradeLevelRequired) {
							localsi->o.available = -1;
						}
					}
				}
			}
			return ret;

		case STRUCTURE_STARPORT:
			return -1;

		default:
			return 0;
	}
}

/**
 * The house is under attack in the form of a structure being hit.
 * @param houseID The house who is being attacked.
 */
void Structure_HouseUnderAttack(uint8 houseID)
{
	PoolFindStruct find;
	House *h;

	emu_si = houseID;

	h = House_Get_ByIndex(houseID);

	if (houseID != g_global->playerHouseID && h->flags.s.variable_0004) return;

	h->flags.s.variable_0004 = true;

	if (h->flags.s.human) {
		if (h->variable_28 != 0) return;

		emu_push(48);
		emu_push(emu_cs); emu_push(0x0EA2); emu_cs = 0x3483; overlay(0x3483, 0); emu_Unknown_B483_0363();
		emu_sp += 2;

		h->variable_28 = 8;
		return;
	}

	/* ENHANCEMENT -- Dune2 originally only searches for units with type 0 (Carry-all). In result, the rest of this function does nothing. */
	if (!g_dune2_enhanced) return;

	find.houseID = houseID;
	find.index   = 0xFFFF;
	find.type    = 0xFFFF;

	while (true) {
		UnitInfo *ui;
		Unit *u;

		u = Unit_Find(&find);
		if (u == NULL) break;

		ui = &g_unitInfo[u->o.type];

		if (ui->bulletType == 0xFFFF) continue;

		/* XXX -- Dune2 does something odd here. What was their intention? */
		if ((u->actionID == ACTION_GUARD && u->actionID == ACTION_AMBUSH) || u->actionID == ACTION_AREA_GUARD) Unit_SetAction(u, ACTION_HUNT);
	}
}

/**
 * Find the next object to build.
 * @param s The structure in which we can build something.
 * @return The type (either UnitType or StructureType) of what we should build next.
 */
uint16 Structure_AI_PickNextToBuild(Structure *s)
{
	PoolFindStruct find;
	uint16 buildable;
	uint16 type;
	House *h;
	int i;

	if (s == NULL) return 0xFFFF;

	h = House_Get_ByIndex(s->o.houseID);
	buildable = Structure_GetBuildable(s);

	if (s->o.type == STRUCTURE_CONSTRUCTION_YARD) {
		for (i = 0; i < 5; i++) {
			uint16 type = h->ai_structureRebuild[i][0];

			if (type == 0) continue;
			if ((buildable & (1 << type)) == 0) continue;

			return type;
		}

		return 0xFFFF;
	}

	if (s->o.type == STRUCTURE_HIGH_TECH) {
		find.houseID = s->o.houseID;
		find.index   = 0xFFFF;
		find.type    = UNIT_CARRYALL;

		while (true) {
			Unit *u;

			u = Unit_Find(&find);
			if (u == NULL) break;

			buildable &= ~(1 << UNIT_CARRYALL);
		}
	}

	if (s->o.type == STRUCTURE_HEAVY_VEHICLE) {
		buildable &= ~(1 << UNIT_HARVESTER);
		buildable &= ~(1 << UNIT_MGV);
	}

	type = 0xFFFF;
	for (i = 0; i < UNIT_MAX; i++) {
		if ((buildable & (1 << i)) == 0) continue;

		if ((Tools_Random_256() % 4) == 0) type = i;

		if (type != 0xFFFF) {
			if (g_unitInfo[i].o.priorityBuild <= g_unitInfo[type].o.priorityBuild) continue;
		}

		type = i;
	}

	return type;
}
