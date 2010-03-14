/* $Id$ */

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
#include "../unit.h"

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
