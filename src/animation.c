/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "animation.h"
#include "map.h"
#include "tile.h"
#include "tools.h"

extern void f__151A_02C8_0016_FA9C();
extern void f__151A_0526_0028_A3A6();

/**
 * Stop with this Animation.
 * @param animation The Animation to stop.
 * @param parameter Not used.
 */
static void Animation_Func_Stop(Animation *animation, int16 parameter)
{
	uint16 *layout = g_global->layoutTiles[animation->tileLayout];
	uint16 packed = Tile_PackTile(animation->tile);
	Tile *t = Map_GetTileByPosition(packed);
	int i;

	VARIABLE_NOT_USED(parameter);

	t->hasAnimation = false;
	animation->proc.csip = 0x0;

	for (i = 0; i < g_global->layoutTileCount[animation->tileLayout]; i++) {
		uint16 position = packed + (*layout++);

		if (animation->tileLayout != 0) {
			Map_GetTileByPosition(position)->groundSpriteID = g_map[position];
		}

		if (Map_IsPositionUnveiled(position)) {
			Map_GetTileByPosition(position)->overlaySpriteID = 0;
		}

		Map_Update(position, 0, false);
	}
}


/**
 * Abort this Animation.
 * @param animation The Animation to abort.
 * @param parameter Not used.
 */
static void Animation_Func_Abort(Animation *animation, int16 parameter)
{
	uint16 packed = Tile_PackTile(animation->tile);
	Tile *t = Map_GetTileByPosition(packed);

	VARIABLE_NOT_USED(parameter);

	t->hasAnimation = false;
	animation->proc.csip = 0x0;

	Map_Update(packed, 0, false);
}

/**
 * Pause the animation for a few ticks.
 * @param animation The Animation to pause.
 * @param parameter How many ticks it should pause.
 * @note Delays are randomly delayed with [0..3] ticks.
 */
static void Animation_Func_Pause(Animation *animation, int16 parameter)
{
	assert(parameter >= 0);

	animation->tickNext = g_global->variable_76AC + parameter + (Tools_Random_256() % 4);
}

/**
 * Set the overlay sprite of the tile.
 * @param animation The Animation for which we change the overlay sprite.
 * @param parameter The SpriteID to which the overlay sprite is set.
 */
static void Animation_Func_SetOverlay(Animation *animation, int16 parameter)
{
	uint16 *iconMap = (uint16 *)emu_get_memorycsip(g_global->iconMap);
	uint16 packed = Tile_PackTile(animation->tile);
	Tile *t = Map_GetTileByPosition(packed);

	assert(parameter >= 0);

	if (!Map_IsPositionUnveiled(packed)) return;

	t->overlaySpriteID = iconMap[iconMap[animation->variable_08] + parameter];
	t->houseID = animation->houseID;

	Map_Update(packed, 0, false);
}

/**
 * Resets variable 7 of the Animation to zero.
 * @param animation The Animation to change.
 * @param parameter Not used.
 */
static void Animation_Func_Unknown4(Animation *animation, int16 parameter)
{
	VARIABLE_NOT_USED(parameter);

	animation->variable_07 = 0;
}

/**
 * Adds to variable 7 of the Animation.
 * @param animation The Animation to change.
 * @param parameter To what value to variable 7 should be add.
 */
static void Animation_Func_Unknown7(Animation *animation, int16 parameter)
{
	animation->variable_07 += parameter - 1;
}

/**
 * Set variable 8 of the Animation.
 * @param animation The Animation to change.
 * @param parameter To what value variable 8 should change.
 */
static void Animation_Func_Unknown8(Animation *animation, int16 parameter)
{
	assert(parameter >= 0);

	animation->variable_08 = (uint8)parameter;
}

/**
 * Start an Animation.
 * @param proc The proc to the Animation.
 * @param tile The tile to do the Animation on.
 * @param layout The layout of tiles for the Animation.
 * @param houseID The house of the item being Animation.
 * @param unknown2 Unknown.
 */
void Animation_Start(csip32 proc, tile32 tile, uint16 tileLayout, uint8 houseID, uint8 unknown2)
{
	Animation *animation = (Animation *)emu_get_memorycsip(g_global->animations);
	uint16 packed = Tile_PackTile(tile);
	Tile *t;
	int i;

	t = Map_GetTileByPosition(packed);
	Animation_Stop_ByTile(packed);

	for (i = 0; i < 112; i++, animation++) {
		if (animation->proc.csip != 0) continue;

		animation->tickNext = g_global->variable_76AC;
		animation->tileLayout  = tileLayout;
		animation->houseID     = houseID;
		animation->variable_07 = 0;
		animation->variable_08 = unknown2;
		animation->proc.csip   = proc.csip;
		animation->tile        = tile;

		g_global->variable_60E8 = 0;

		t->houseID = houseID;
		t->hasAnimation = true;
		return;
	}
}

/**
 * Stop an Animation on a tile, if any.
 * @param packed The tile to check for animation on.
 */
void Animation_Stop_ByTile(uint16 packed)
{
	Animation *animation = (Animation *)emu_get_memorycsip(g_global->animations);
	Tile *t = Map_GetTileByPosition(packed);
	int i;

	if (!t->hasAnimation) return;

	for (i = 0; i < 112; i++, animation++) {
		if (animation->proc.csip == 0) continue;
		if (Tile_PackTile(animation->tile) != packed) continue;

		Animation_Func_Stop(animation, 0);
		return;
	}
}

/**
 * Check all Animations if they need changing.
 */
void Animation_Tick()
{
	Animation *animation = (Animation *)emu_get_memorycsip(g_global->animations);
	int i;

	if (g_global->variable_60E8 > g_global->variable_76AC) return;
	g_global->variable_60E8 += 10000;

	for (i = 0; i < ANIMATION_MAX; i++, animation++) {
		if (animation->proc.csip == 0) continue;

		if (animation->tickNext <= g_global->variable_76AC) {
			uint16 *commands = (uint16 *)emu_get_memorycsip(animation->proc);
			uint16 command;
			int16 parameter;

			commands += animation->variable_07++;
			command = *commands;

			parameter = command & 0x0FFF;
			/* Sign extend if needed */
			if ((parameter & 0x0800) != 0) parameter |= 0xF000;

			switch (command >> 12) {
				case 0: case 9: default: Animation_Func_Stop(animation, parameter); break;
				case 1: Animation_Func_Abort(animation, parameter); break;
				case 2: Animation_Func_SetOverlay(animation, parameter); break;
				case 3: Animation_Func_Pause(animation, parameter); break;
				case 4: Animation_Func_Unknown4(animation, parameter); break;
				case 7: Animation_Func_Unknown7(animation, parameter); break;
				case 8: Animation_Func_Unknown8(animation, parameter); break;

				case 5:
				case 6:
					emu_push(parameter);
					emu_push(g_global->animations.s.cs); emu_push(g_global->animations.s.ip + i * sizeof(Animation));
					emu_push(emu_cs); emu_push(0x0); emu_cs = 0x151A;
					switch (command >> 12) {
						case 5: f__151A_02C8_0016_FA9C(); break;
						case 6: f__151A_0526_0028_A3A6(); break;
					}
					emu_sp += 6;
					break;
			}

			if (animation->proc.csip == 0) continue;
		}

		if (animation->tickNext >= g_global->variable_60E8) continue;
		g_global->variable_60E8 = animation->tickNext;
	}
}
