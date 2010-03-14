/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "../pool/house.h"
#include "../pool/structure.h"
#include "../pool/unit.h"
#include "../house.h"
#include "script.h"
#include "../structure.h"
#include "../tools.h"
#include "../unit.h"

extern void f__0C10_00D2_000F_D61E();
extern void f__0C10_0182_0012_B114();
extern void f__0C3A_247A_0015_EA04();
extern void f__1A34_2BB5_0025_30B8();
extern void emu_Tile_RemoveFogInRadius();
extern void overlay(uint16 cs, uint8 force);
extern void emu_Tools_Random_256();

/**
 * Get the animation frame of the current structure.
 *
 * Stack: *none*
 *
 * @param script The script engine to operate on.
 * @return Animation frame of current structure.
 */
uint16 Script_Structure_GetAnimation(ScriptEngine *script)
{
	Structure *s;

	VARIABLE_NOT_USED(script);

	s = Structure_Get_ByMemory(g_global->structureCurrent);
	return s->animation;
}

/*
 * Set the animation for the current structure.
 *
 * Stack: 0 - The animation.
 *
 * @param script The script engine to operate on.
 * @return The value 0. Always.
 */
uint16 Script_Structure_SetAnimation(ScriptEngine *script)
{
	Structure *s;
	int16 animation;

	s = Structure_Get_ByMemory(g_global->structureCurrent);
	animation = script->stack[script->stackPointer];

	if (animation == -2) {
		if (s->linkedID == 0xFF) {
			animation = 0;
		} else {
			if (s->countDown == 0) {
				animation = 2;
			} else {
				animation = 1;
			}
		}
	}

	Structure_SetAnimation(s, animation);

	return 0;
}

/*
 * Remove fog around the current structure.
 * Radius to uncover is taken from the current structure info.
 *
 * Stack: *none*
 *
 * @param script The script engine to operate on.
 * @return The value 0. Always.
 */
uint16 Script_Structure_RemoveFogAroundTile(ScriptEngine *script)
{
	Structure *s;
	StructureInfo *si;

	VARIABLE_NOT_USED(script);

	s = Structure_Get_ByMemory(g_global->structureCurrent);
	if (s->houseID != g_global->playerHouseID) return 0;

	si = &g_structureInfo[s->type];

	emu_push(si->fogUncoverRadius);
	emu_push(s->position.s.y); emu_push(s->position.s.x);
	emu_push(emu_cs); emu_push(0x13A6); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Tile_RemoveFogInRadius();

	return 0;
}

/*
 * Refine spice in the current structure.
 *
 * Stack: *none*
 *
 * @param script The script engine to operate on.
 * @return 0 if there is no spice to refine, otherwise 1.
 */
uint16 Script_Structure_RefineSpice(ScriptEngine *script)
{
	Structure *s;
	StructureInfo *si;
	Unit *u;
	House *h;
	uint16 harvesterStep, creditsStep;

	VARIABLE_NOT_USED(script);

	s = Structure_Get_ByMemory(g_global->structureCurrent);

	if (s->linkedID == 0xFF) {
		Structure_SetAnimation(s, 0);
		return 0;
	}

	u = Unit_Get_ByIndex(s->linkedID);
	si = &g_structureInfo[s->type];

	harvesterStep = (s->hitpoints * 256 / si->hitpoints) * 3 / 256;

	if (u->amount < harvesterStep) harvesterStep = u->amount;
	if (u->amount != 0 && harvesterStep < 1) harvesterStep = 1;
	if (harvesterStep == 0) return 0;

	creditsStep = 7;
	if (u->houseID != g_global->playerHouseID) {
		emu_push(emu_cs); emu_push(0x145F); emu_cs = 0x2BB4; emu_Tools_Random_256();
		creditsStep += (emu_ax % 4) - 1;
	}

	creditsStep *= harvesterStep;

	if (House_AreAllied((uint8)g_global->playerHouseID, s->houseID)) {
		g_global->scenario.harvestedAllied += creditsStep;
		if (g_global->scenario.harvestedAllied > 0xFDE8) g_global->scenario.harvestedAllied = 0xFDE8;
	} else {
		g_global->scenario.harvestedEnemy += creditsStep;
		if (g_global->scenario.harvestedEnemy > 0xFDE8) g_global->scenario.harvestedEnemy = 0xFDE8;
	}

	h = House_Get_ByIndex(s->houseID);
	h->credits += creditsStep;
	u->amount -= harvesterStep;

	if (u->amount == 0) u->flags.s.inTransport = false;
	s->scriptDelay = 6;
	return 1;
}

/*
 * Unknown function 0A81.
 *
 * Stack: *none*
 *
 * @param script The script engine to operate on.
 * @return unknown.
 */
uint16 Script_Structure_Unknown0A81(ScriptEngine *script)
{
	uint16 structureIndex;
	Structure *s;
	Unit *u;

	VARIABLE_NOT_USED(script);

	assert(g_global->structureCurrent.csip == g_global->objectCurrent.csip);

	s = Structure_Get_ByMemory(g_global->structureCurrent);

	structureIndex = Tools_Index_Encode(s->index, IT_STRUCTURE);

	u = Tools_Index_GetUnit(s->script.variables[4]);
	if (u != NULL) {
		if (structureIndex == u->script.variables[4]) return s->script.variables[4];

		emu_push(g_global->unitStartPos.s.cs); emu_push(g_global->unitStartPos.s.ip + u->index * sizeof(Unit));
		emu_push(emu_cs); emu_push(0x0AE2); emu_cs = 0x0C10; f__0C10_0182_0012_B114();
		emu_sp += 4;
	}

	emu_push(g_global->objectCurrent.s.cs); emu_push(g_global->objectCurrent.s.ip);
	emu_push(emu_cs); emu_push(0x0AF1); emu_cs = 0x0C10; f__0C10_0182_0012_B114();
	emu_sp += 4;

	return 0;
}

/*
 * Unknown function 0AFC.
 *
 * Stack: 0 - Unknown.
 *
 * @param script The script engine to operate on.
 * @return unknown.
 */
uint16 Script_Structure_Unknown0AFC(ScriptEngine *script)
{
	Structure *s;
	Unit *u;
	Unit *carryall;
	csip32 ucsip;
	uint16 loc06;
	uint16 loc08;
	uint16 carryallIndex;

	s = Structure_Get_ByMemory(g_global->structureCurrent);

	if (s->animation != 2) return 0;
	if (s->linkedID == 0xFF) return 0;

	loc06 = script->stack[script->stackPointer];

	emu_push(0);
	emu_push(g_global->structureCurrent.s.cs); emu_push(g_global->structureCurrent.s.ip);
	emu_push(emu_cs); emu_push(0x0B46); emu_cs = 0x0C3A; f__0C3A_247A_0015_EA04();
	emu_sp += 6;
	loc08 = emu_ax;

	u = Unit_Get_ByIndex(s->linkedID);

	if (g_global->playerHouseID == s->houseID && u->type == UNIT_HARVESTER && u->variable_5A.tile == 0 && loc08 != 0) {
		return 0;
	}

	emu_push(loc08 != 0 ? 0 : 1);
	emu_push(Tools_Index_Encode(s->index, IT_STRUCTURE));
	emu_push(s->houseID);
	emu_push(loc06);
	emu_push(emu_cs); emu_push(0x0BC3); emu_cs = 0x1A34; f__1A34_2BB5_0025_30B8();
	emu_sp += 8;
	ucsip.s.cs = emu_dx;
	ucsip.s.ip = emu_ax;

	if (ucsip.csip == 0) return 0;

	carryall = Unit_Get_ByMemory(ucsip);
	carryallIndex = Tools_Index_Encode(carryall->index, IT_UNIT);

	emu_push(carryallIndex);
	emu_push(g_global->objectCurrent.s.cs); emu_push(g_global->objectCurrent.s.ip);
	emu_push(emu_cs); emu_push(0x0BF5); emu_cs = 0x0C10; f__0C10_00D2_000F_D61E();
	emu_sp += 6;

	return carryallIndex;
}
