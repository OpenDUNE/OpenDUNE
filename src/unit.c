/* $Id$ */

#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "pool/unit.h"
#include "house.h"
#include "unit.h"

extern void f__1A34_1E99_0012_1117();
extern void f__1A34_1E99_0012_1117();
extern void f__1A34_204C_0043_B1ED();
extern void f__1A34_3312_0017_29E8();
extern void f__15C2_0395_0044_304E();
extern void f__2BB4_0004_0027_DC1D();
extern void f__1A34_204C_0043_B1ED();
extern void f__1A34_0E2E_0015_7E65();
extern void f__176C_000E_000E_633D();
extern void ovl__34CD(uint8 entry);

UnitInfo *g_unitInfo = NULL;

/**
 * Initialize the unit system.
 *
 * @init system_Init_Unit
 */
void System_Init_Unit()
{
	g_unitInfo = (UnitInfo *)&emu_get_memory8(0x2D07, 0x0, 0x0);
}

/**
 * Get the HouseID of a unit. This is not always u->houseID, as a unit can be
 *  deviated by the Ordos.
 *
 * @param u Unit to get the HouseID of.
 * @return The HouseID of the unit, which might be deviated.
 */
uint8 Unit_GetHouseID(Unit *u)
{
	if (u->deviated != 0) return HOUSE_ORDOS;
	return u->houseID;
}

/**
 * Create a new Unit.
 *
 * @param index The new index of the Unit, or UNIT_INDEX_INVALID to assign one.
 * @param typeID The type of the new Unit.
 * @param houseID The House of the new Unit.
 * @param var0C A CS:IP pair which is assigned when non-zero.
 * @param var10 An unknown parameter.
 * @return The new created Unit, or NULL if something failed.
 */
Unit *Unit_Create(uint16 index, uint8 typeID, uint8 houseID, csip32 var0C, uint16 var10)
{
	UnitInfo *ui = &g_unitInfo[typeID];
	Unit *u = Unit_Allocate(index, typeID, houseID);
	if (u == NULL) return NULL;

	u->houseID = houseID;

	/* XXX -- Temporary, to keep all the emu_calls workable for now */
	csip32 ucsip;
	ucsip.cs = g_global->unitStartPos.cs;
	ucsip.ip = g_global->unitStartPos.ip + u->index * sizeof(Unit);

	emu_push(0x00);
	emu_push(0x01);
	emu_push(var10);
	emu_push(ucsip.cs); emu_push(ucsip.ip);
	emu_push(emu_cs); emu_push(0x0958); f__1A34_1E99_0012_1117();
	emu_sp += 10;

	emu_push(0x01);
	emu_push(0x01);
	emu_push(var10);
	emu_push(ucsip.cs); emu_push(ucsip.ip);
	emu_push(emu_cs); emu_push(0x096F); f__1A34_1E99_0012_1117();
	emu_sp += 10;

	emu_push(0x00);
	emu_push(ucsip.cs); emu_push(ucsip.ip);
	emu_push(emu_cs); emu_push(0x0980); f__1A34_204C_0043_B1ED();
	emu_sp += 6;

	u->variable_0A.csip = var0C.csip;
	u->variable_0E      = ui->variable_10;
	u->variable_49.csip = 0x00000000;
	u->variable_4D      = 0x0000;
	u->variable_72      = 0xFF;

	if (var0C.csip != 0xFFFFFFFF) {
		emu_push(ucsip.cs); emu_push(ucsip.ip);
		emu_push(emu_cs); emu_push(0x09D9); f__1A34_3312_0017_29E8();
		emu_sp += 4;

		u->variable_4D      = emu_ax.x;
		u->variable_5A.csip = var0C.csip;
		u->variable_5E.csip = var0C.csip;
	}

	u->variable_03 = 0xFF;
	u->variable_10 = 0x0000;
	u->variable_4F = 0x03;
	u->variable_50 = 0xFF;
	u->variable_51 = 0x00;
	u->variable_52 = 0x7FFF;
	u->variable_56 = 0x0000;
	u->variable_58 = 0x00;
	u->variable_6E = 0x00;
	u->variable_6C = 0x00;
	u->variable_6D = 0x00;
	u->variable_70 = 0x0000;

	emu_push(0x353F); emu_push(emu_Global_GetIP(&g_global->variable_3902, 0x353F));
	emu_push(ucsip.cs); emu_push(ucsip.ip + 0x12);
	emu_push(emu_cs); emu_push(0x0A7C); emu_cs = 0x15C2; f__15C2_0395_0044_304E();
	emu_sp += 8;

	u->variable_04 |= 0x0002;

	if (ui->variable_3C == 0x0001) {
		emu_push(emu_cs); emu_push(0x0A96); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();

		if (emu_ax.x < g_global->variable_37F0[houseID * 0x1E + 0x0E]) {
			u->variable_04 |= 0x0400;
		}
	}

	bool loc0A = true;
	if (ui->variable_3C == 0x0004) {
		emu_push(0xFF);
		emu_push(ucsip.cs); emu_push(ucsip.ip);
		emu_push(emu_cs); emu_push(0x0AF2); f__1A34_204C_0043_B1ED();
		emu_sp += 6;
	} else {
		if (var0C.csip != 0xFFFFFFFF) {
			emu_push(ucsip.cs); emu_push(ucsip.ip);
			emu_push(emu_cs); emu_push(0x0AD7); f__1A34_0E2E_0015_7E65();
			emu_sp += 4;

			loc0A = (emu_ax.x == 0) ? true : false;
		}
	}

	if (var0C.csip == 0xFFFFFFFF) {
		u->variable_04 |= 0x0004;
		return u;
	}
	if (!loc0A) {
		Unit_Free(ucsip);
		return NULL;
	}

	emu_push(ucsip.cs); emu_push(ucsip.ip);
	emu_push(0x01);
	emu_push(emu_cs); emu_push(0x0B26); emu_cs = 0x34CD; ovl__34CD(22);
	emu_sp += 6;

	if (houseID == g_global->playerHouseID) {
		emu_push(ui->variable_28);
	} else {
		emu_push(ui->variable_48);
	}
	emu_push(ucsip.cs); emu_push(ucsip.ip);
	emu_push(emu_cs); emu_push(0x0B4D); emu_cs = 0x176C; f__176C_000E_000E_633D();
	emu_sp += 6;

	return u;
}
