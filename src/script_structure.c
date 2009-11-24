/* $Id$ */

#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "pool/structure.h"
#include "script.h"
#include "structure.h"

extern void emu_Structure_RemoveFogAroundTile();
extern void overlay(uint16 cs, uint8 force);

/**
 * Do nothing. This function has absolutely no functionality other than
 *  returning the value 0.
 *
 * Stack: *none*
 *
 * @param script The script engine to operate on
 * @return The value 0. Always.
 */
uint16 Script_Structure_NoOperation(ScriptEngine *script)
{
	VARIABLE_NOT_USED(script);
	return 0;
}

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
	emu_push(emu_cs); emu_push(0x13A6); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Structure_RemoveFogAroundTile();

	return 0;
}
