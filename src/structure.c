/* $Id$ */

#include <stdio.h>
#include "os/strings.h"
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "pool/structure.h"
#include "house.h"
#include "structure.h"

extern void f__0C3A_25EC_0011_E453();
extern void f__0C3A_142D_0018_6667();
extern void f__0C3A_01BA_0018_69C9();
extern void emu_Structure_IsUpgradable();

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

	if (g_global->variable_37A0 != 0) {
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
		emu_push(position);
		emu_push(scsip.s.cs); emu_push(scsip.s.ip);
		emu_push(emu_cs); emu_push(0x018D); emu_cs = 0x0C3A; f__0C3A_01BA_0018_69C9();
		emu_sp += 6;

		if (emu_ax == 0) {
			Structure_Free(scsip);
			return NULL;
		}
	}

	return s;
}
