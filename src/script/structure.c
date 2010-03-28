/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "../map.h"
#include "../pool/house.h"
#include "../pool/pool.h"
#include "../pool/structure.h"
#include "../pool/unit.h"
#include "../house.h"
#include "script.h"
#include "../structure.h"
#include "../tile.h"
#include "../tools.h"
#include "../unit.h"
#include "../unknown/unknown.h"

extern void f__0C10_00D2_000F_D61E();
extern void f__0C10_0182_0012_B114();
extern void f__0C3A_247A_0015_EA04();
extern void f__0F3F_0125_000D_4868();
extern void f__10E4_0117_0015_392D();
extern void f__1A34_2BB5_0025_30B8();
extern void f__B4CD_0000_0011_95D0();
extern void f__B4CD_17DC_0019_CB46();
extern void emu_Tile_RemoveFogInRadius();
extern void overlay(uint16 cs, uint8 force);

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

/**
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

/**
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

/**
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
		creditsStep += (Tools_Random_256() % 4) - 1;
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

/**
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

/**
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

	if (s->animation != 2) return IT_NONE;
	if (s->linkedID == 0xFF) return IT_NONE;

	loc06 = script->stack[script->stackPointer];

	emu_push(0);
	emu_push(g_global->structureCurrent.s.cs); emu_push(g_global->structureCurrent.s.ip);
	emu_push(emu_cs); emu_push(0x0B46); emu_cs = 0x0C3A; f__0C3A_247A_0015_EA04();
	emu_sp += 6;
	loc08 = emu_ax;

	u = Unit_Get_ByIndex(s->linkedID);

	if (g_global->playerHouseID == s->houseID && u->type == UNIT_HARVESTER && u->variable_5A.tile == 0 && loc08 != 0) {
		return IT_NONE;
	}

	emu_push(loc08 != 0 ? 0 : 1);
	emu_push(Tools_Index_Encode(s->index, IT_STRUCTURE));
	emu_push(s->houseID);
	emu_push(loc06);
	emu_push(emu_cs); emu_push(0x0BC3); emu_cs = 0x1A34; f__1A34_2BB5_0025_30B8();
	emu_sp += 8;
	ucsip.s.cs = emu_dx;
	ucsip.s.ip = emu_ax;

	if (ucsip.csip == 0) return IT_NONE;

	carryall = Unit_Get_ByMemory(ucsip);
	carryallIndex = Tools_Index_Encode(carryall->index, IT_UNIT);

	emu_push(carryallIndex);
	emu_push(g_global->objectCurrent.s.cs); emu_push(g_global->objectCurrent.s.ip);
	emu_push(emu_cs); emu_push(0x0BF5); emu_cs = 0x0C10; f__0C10_00D2_000F_D61E();
	emu_sp += 6;

	return carryallIndex;
}

/**
 * Unknown function 0C5A.
 *
 * Stack: *none*
 *
 * @param script The script engine to operate on.
 * @return unknown.
 */
uint16 Script_Structure_Unknown0C5A(ScriptEngine *script)
{
	tile32 tile;
	Structure *s;
	Unit *u;

	VARIABLE_NOT_USED(script);

	s = Structure_Get_ByMemory(g_global->structureCurrent);

	if (s->linkedID == 0xFF) return 0;

	u = Unit_Get_ByIndex(s->linkedID);

	if (g_unitInfo[u->type].variable_3C == 0x4 && Unit_SetPosition(u, s->position)) {
		s->linkedID = u->linkedID;
		u->linkedID = 0xFF;

		if (s->linkedID == 0xFF) Structure_SetAnimation(s, 0);

		emu_push(g_global->objectCurrent.s.cs); emu_push(g_global->objectCurrent.s.ip);
		emu_push(emu_cs); emu_push(0x0D03); emu_cs = 0x0C10; f__0C10_0182_0012_B114();
		emu_sp += 4;

		if (s->houseID == g_global->playerHouseID) {
			emu_push(g_global->playerHouseID + 49);
			emu_push(emu_cs); emu_push(0x0D20); emu_cs = 0x3483; overlay(0x3483, 0); emu_Unknown_B483_0363();
			emu_sp += 2;
		}
		return 1;
	}

	emu_push(u->type == UNIT_HARVESTER ? 1 : 0);
	emu_push(g_global->structureCurrent.s.cs); emu_push(g_global->structureCurrent.s.ip);
	emu_push(emu_cs); emu_push(0x0D46); emu_cs = 0x0C3A; f__0C3A_247A_0015_EA04();
	emu_sp += 6;

	emu_si = emu_ax;
	if (emu_si == 0) return 0;

	u->variable_09 |= s->variable_09;

	tile = Tile_Center(Tile_UnpackTile(emu_si));

	if (!Unit_SetPosition(u, tile)) return 0;

	s->linkedID = u->linkedID;
	u->linkedID = 0xFF;

	emu_push(u->position.s.y); emu_push(u->position.s.x);
	emu_push(s->position.s.y); emu_push(s->position.s.x);
	emu_push(emu_cs); emu_push(0x0DC2); emu_cs = 0x0F3F; f__0F3F_0125_000D_4868();
	emu_sp += 8;

	Unit_Unknown1E99(u, (uint8)(emu_ax & 0xE0), true, 0);
	Unit_Unknown1E99(u, u->variable_62[0][2], true, 1);

	if (u->houseID == g_global->playerHouseID) {
		emu_push(0x6A);
		emu_push(0x1B);
		emu_push(emu_cs); emu_push(0x0E12); emu_cs = 0x10E4; f__10E4_0117_0015_392D();
		emu_sp += 2;
	}

	if (s->linkedID == 0xFF) Structure_SetAnimation(s, 0);

	emu_push(g_global->objectCurrent.s.cs); emu_push(g_global->objectCurrent.s.ip);
	emu_push(emu_cs); emu_push(0x0E3F); emu_cs = 0x0C10; f__0C10_0182_0012_B114();
	emu_sp += 4;

	if (s->houseID != g_global->playerHouseID) return 1;
	if (s->type == STRUCTURE_REPAIR) return 1;

	emu_push(g_global->playerHouseID + (u->type == UNIT_HARVESTER) ? 68 : 30);
	emu_push(emu_cs); emu_push(0x0E79); emu_cs = 0x3483; overlay(0x3483, 0); emu_Unknown_B483_0363();
	emu_sp += 2;

	return 1;
}

/**
 * Find a Unit which is within range and not an ally.
 *
 * Stack: 0 - Range to find a target in (amount of tiles multiplied with 256).
 *
 * @param script The script engine to operate on.
 * @return The Unit Index of the closest unit within range and not friendly,
 *   or 0 if none exists.
 */
uint16 Script_Structure_FindTargetUnit(ScriptEngine *script)
{
	PoolFindStruct find;
	Structure *s;
	Unit *u;
	uint32 distanceCurrent;
	uint32 targetRange;

	s = Structure_Get_ByMemory(g_global->structureCurrent);
	targetRange = script->stack[script->stackPointer];
	distanceCurrent = 32000;
	u = NULL;

	find.houseID = 0xFFFF;
	find.index   = 0xFFFF;
	find.type    = 0xFFFF;

	while (true) {
		uint16 distance;
		Unit *uf;

		uf = Unit_Find(&find);
		if (uf == NULL) break;

		if (House_AreAllied(s->houseID, uf->houseID)) continue;

		if (uf->type != UNIT_ORNITHOPTER) {
			if ((uf->variable_09 & (1 << s->houseID)) == 0) continue;
		}

		distance = Tile_GetDistance(uf->position, s->position);
		if (distance >= distanceCurrent) continue;

		if (uf->type == UNIT_ORNITHOPTER) {
			if (distance >= targetRange * 3) continue;
		} else {
			if (distance >= targetRange) continue;
		}

		/* ENHANCEMENT -- The original code swapped the assignment, making it do nothing, Now it finds the closest unit to shoot at, what seems to be the intention */
		if (g_dune2_enhanced) distanceCurrent = distance;
		u = uf;
	}

	if (u == NULL) return IT_NONE;
	return Tools_Index_Encode(u->index, IT_UNIT);
}

/**
 * Rotate the turret to look at a tile.
 *
 * Stack: 0 - Tile to look at.
 *
 * @param script The script engine to operate on.
 * @return 0 if looking at target, otherwise 1.
 */
uint16 Script_Structure_RotateTurret(ScriptEngine *script)
{
	Structure *s;
	tile32 lookAt;
	Tile *tile;
	uint16 baseSpriteID;
	int16 rotation;
	int16 rotationNeeded;
	int16 rotateDiff;

	if (script->stack[script->stackPointer] == 0) return 0;

	s      = Structure_Get_ByMemory(g_global->structureCurrent);
	lookAt = Tools_Index_GetTile(script->stack[script->stackPointer]);
	tile   = Map_GetTileByPosition(Tile_PackTile(s->position));

	/* Find the base sprite of the structure */
	if (s->type == STRUCTURE_ROCKET_TURRET) {
		emu_ax = emu_get_memory16(g_global->variable_39EE.s.cs, g_global->variable_39EE.s.ip, 0x30);
	} else {
		emu_ax = emu_get_memory16(g_global->variable_39EE.s.cs, g_global->variable_39EE.s.ip, 0x2E);
	}
	baseSpriteID = emu_get_memory16(g_global->variable_39EE.s.cs, g_global->variable_39EE.s.ip + (emu_ax << 1), 0x4);

	rotation = tile->spriteID - baseSpriteID;
	if (rotation < 0 || rotation > 7) return 1;

	/* Find what rotation we should have to look at the target */
	emu_push(lookAt.s.y); emu_push(lookAt.s.x);
	emu_push(s->position.s.y); emu_push(s->position.s.x);
	emu_push(emu_cs); emu_push(0x10C9); emu_cs = 0x0F3F; f__0F3F_0125_000D_4868();
	emu_sp += 8;
	rotationNeeded = emu_ax;

	emu_push(rotationNeeded & 0xFF);
	emu_push(emu_cs); emu_push(0x10DB); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_17DC_0019_CB46();
	emu_sp += 2;
	rotationNeeded = emu_ax;

	/* Do we need to rotate */
	if (rotationNeeded == rotation) return 0;

	/* Find the fastest way to rotate to the correct rotation */
	rotateDiff = rotationNeeded - rotation;
	if (rotateDiff < 0) rotateDiff += 8;

	if (rotateDiff < 4) {
		rotation++;
	} else {
		rotation--;
	}
	rotation &= 0x7;

	/* Set the new sprites */
	tile->spriteID = baseSpriteID + rotation;
	s->variable_49 = rotation;

	emu_push(0);
	emu_push(0);
	emu_push(Tile_PackTile(s->position));
	emu_push(emu_cs); emu_push(0x113D); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0000_0011_95D0();
	emu_sp += 6;

	return 1;
}
