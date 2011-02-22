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
#include "structure.h"
#include "unknown/unknown.h"

extern void f__151A_02C8_0016_FA9C();

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
static void Animation_Func_SetOverlaySprite(Animation *animation, int16 parameter)
{
	uint16 *iconMap = (uint16 *)emu_get_memorycsip(g_global->iconMap);
	uint16 packed = Tile_PackTile(animation->tile);
	Tile *t = Map_GetTileByPosition(packed);

	assert(parameter >= 0);

	if (!Map_IsPositionUnveiled(packed)) return;

	t->overlaySpriteID = iconMap[iconMap[animation->iconGroup] + parameter];
	t->houseID = animation->houseID;

	Map_Update(packed, 0, false);
}

/**
 * Rewind the animation.
 * @param animation The Animation to rewind.
 * @param parameter Not used.
 */
static void Animation_Func_Rewind(Animation *animation, int16 parameter)
{
	VARIABLE_NOT_USED(parameter);

	animation->current = 0;
}

/**
 * Set the ground sprite of the tile.
 * @param animation The Animation for which we change the ground sprite.
 * @param parameter The offset in the iconGroup to which the ground sprite is set.
 */
static void Animation_Func_SetGroundSprite(Animation *animation, int16 parameter)
{
	uint16 specialMap[1];
	uint16 *iconMap = (uint16 *)emu_get_memorycsip(g_global->iconMap);
	uint16 *layout = g_global->layoutTiles[animation->tileLayout];
	uint16 packed = Tile_PackTile(animation->tile);
	uint16 layoutTileCount;
	int i;

	layoutTileCount = g_global->layoutTileCount[animation->tileLayout];
	iconMap = &iconMap[iconMap[animation->iconGroup] + layoutTileCount * parameter];

	/* Some special case for turrets */
	if (parameter > 1 && (animation->iconGroup == 23 || animation->iconGroup == 24)) {
		Structure *s = Structure_Get_ByPackedTile(packed);
		assert(s != NULL);
		assert(layoutTileCount == 1);

		specialMap[0] = s->variable_49 + iconMap[iconMap[animation->iconGroup]] + 2;
		iconMap = &specialMap[0];
	}

	for (i = 0; i < layoutTileCount; i++) {
		uint16 position = packed + (*layout++);
		uint16 spriteID = *iconMap++;
		Tile *t = Map_GetTileByPosition(position);

		if (t->groundSpriteID == spriteID) continue;
		t->groundSpriteID = spriteID;
		t->houseID = animation->houseID;

		if (Map_IsPositionUnveiled(position)) {
			t->overlaySpriteID = 0;
		}

		Map_Update(position, 0, false);

		emu_push(position);
		emu_push(emu_cs); emu_push(0x06AF); emu_cs = 0x07D4; emu_Unknown_07D4_02F8();
		emu_sp += 2;
	}
}

/**
 * Forward the current Animation with the given amount of steps.
 * @param animation The Animation to forward.
 * @param parameter With what value you want to forward the Animation.
 * @note Forwarding with 1 is just the next instruction, making this command a NOP.
 */
static void Animation_Func_Forward(Animation *animation, int16 parameter)
{
	animation->current += parameter - 1;
}

/**
 * Set the IconGroup of the Animation.
 * @param animation The Animation to change.
 * @param parameter To what value IconGroup should change.
 */
static void Animation_Func_SetIconGroup(Animation *animation, int16 parameter)
{
	assert(parameter >= 0);

	animation->iconGroup = (uint8)parameter;
}

/**
 * Start an Animation.
 * @param proc The proc to the Animation.
 * @param tile The tile to do the Animation on.
 * @param layout The layout of tiles for the Animation.
 * @param houseID The house of the item being Animation.
 * @param iconGroup In which IconGroup the sprites of the Animation belongs.
 */
void Animation_Start(csip32 proc, tile32 tile, uint16 tileLayout, uint8 houseID, uint8 iconGroup)
{
	Animation *animation = (Animation *)emu_get_memorycsip(g_global->animations);
	uint16 packed = Tile_PackTile(tile);
	Tile *t;
	int i;

	t = Map_GetTileByPosition(packed);
	Animation_Stop_ByTile(packed);

	for (i = 0; i < ANIMATION_MAX; i++, animation++) {
		if (animation->proc.csip != 0) continue;

		animation->tickNext    = g_global->variable_76AC;
		animation->tileLayout  = tileLayout;
		animation->houseID     = houseID;
		animation->current     = 0;
		animation->iconGroup   = iconGroup;
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

	for (i = 0; i < ANIMATION_MAX; i++, animation++) {
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

			commands += animation->current++;
			command = *commands;

			parameter = command & 0x0FFF;
			/* Sign extend if needed */
			if ((parameter & 0x0800) != 0) parameter |= 0xF000;

			switch (command >> 12) {
				case 0: case 9: default: Animation_Func_Stop(animation, parameter); break;
				case 1: Animation_Func_Abort(animation, parameter); break;
				case 2: Animation_Func_SetOverlaySprite(animation, parameter); break;
				case 3: Animation_Func_Pause(animation, parameter); break;
				case 4: Animation_Func_Rewind(animation, parameter); break;
				case 6: Animation_Func_SetGroundSprite(animation, parameter); break;
				case 7: Animation_Func_Forward(animation, parameter); break;
				case 8: Animation_Func_SetIconGroup(animation, parameter); break;

				case 5:
					emu_push(parameter);
					emu_push(g_global->animations.s.cs); emu_push(g_global->animations.s.ip + i * sizeof(Animation));
					emu_push(emu_cs); emu_push(0x0); emu_cs = 0x151A; f__151A_02C8_0016_FA9C();
					emu_sp += 6;
					break;
			}

			if (animation->proc.csip == 0) continue;
		}

		if (animation->tickNext < g_global->variable_60E8) g_global->variable_60E8 = animation->tickNext;
	}
}
