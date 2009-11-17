/* $Id$ */

#include <stdio.h>
#include "os/strings.h"
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "pool/pool.h"
#include "pool/house.h"
#include "pool/structure.h"
#include "house.h"
#include "map.h"
#include "structure.h"

extern void emu_Structure_ConnectWall();
extern void emu_Structure_GetStructuresBuilt();
extern void emu_Structure_IsUpgradable();
extern void emu_Structure_IsValidBuildLocation();
extern void emu_Structure_Place();
extern void emu_Structure_RemoveFogAroundTile();
extern void emu_Structure_UpdateMap();
extern void emu_Tile_Unpack();
extern void f__0C3A_142D_0018_6667();
extern void f__0C3A_25EC_0011_E453();
extern void f__0FCB_005F_001C_FDC4();
extern void f__10E4_09AB_0031_5E8E();
extern void f__15C2_0395_0044_304E();
extern void f__15C2_03D9_0011_D202();
extern void f__1A34_10EC_000E_A326();
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

	if (g_global->scenarioPreview) {
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

		if (emu_ax != 0) emu_al = 0x64;
		s->upgradeTimeLeft = emu_al;
	}

	s->variable_4C = 0xFFFF;

	emu_push(0xFFFE);
	emu_push(scsip.s.cs); emu_push(scsip.s.ip);
	emu_push(emu_cs); emu_push(0x0145); emu_cs = 0x0C3A; f__0C3A_142D_0018_6667();
	emu_sp += 6;

	s->buildTimeLeft = 0;

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
		if ((s->houseID != g_global->playerHouseID || !g_global->scenarioPreview) && g_global->variable_38BC == 0) {
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

	emu_push(emu_ds); emu_push(0x3918);
	emu_push(scsip.s.cs); emu_push(scsip.s.ip + 0x12);
	emu_push(emu_cs); emu_push(0x0645); emu_cs = 0x15C2; f__15C2_0395_0044_304E();
	emu_sp += 8;

	s->variable_1E = 0;
	s->variable_26 = 0;

	/* XXX -- Weird .. if 'position' enters with 0xFFFF it is returned immediatly .. how can this ever NOT happen? */
	if (position != 0xFFFF) {
		s->variable_10 = 0;

		emu_push(s->variable_18); emu_push(s->variable_16);
		emu_push(scsip.s.cs); emu_push(scsip.s.ip + 0x12);
		emu_push(emu_cs); emu_push(0x0682); emu_cs = 0x15C2; f__15C2_0395_0044_304E();
		emu_sp += 8;

		emu_push(s->type);
		emu_push(scsip.s.cs); emu_push(scsip.s.ip + 0x12);
		emu_push(emu_cs); emu_push(0x069D); emu_cs = 0x15C2; f__15C2_03D9_0011_D202();
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
		emu_push(emu_cs); emu_push(0x20A4); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
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
