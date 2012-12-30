/** @file src/animation.c %Animation routines. */

#include <assert.h>
#include <stdio.h>
#include "types.h"

#include "animation.h"

#include "audio/sound.h"
#include "map.h"
#include "tile.h"
#include "tools.h"
#include "timer.h"
#include "sprites.h"
#include "structure.h"

Animation g_animations[ANIMATION_MAX];
static uint32 s_animationTimer; /*!< Timer for animations. */

/**
 * Stop with this Animation.
 * @param animation The Animation to stop.
 * @param parameter Not used.
 */
static void Animation_Func_Stop(Animation *animation, int16 parameter)
{
	const uint16 *layout = g_table_structure_layoutTiles[animation->tileLayout];
	uint16 packed = Tile_PackTile(animation->tile);
	Tile *t = &g_map[packed];
	int i;

	VARIABLE_NOT_USED(parameter);

	t->hasAnimation = false;
	animation->commands = NULL;

	for (i = 0; i < g_table_structure_layoutTileCount[animation->tileLayout]; i++) {
		uint16 position = packed + (*layout++);

		if (animation->tileLayout != 0) {
			g_map[position].groundSpriteID = g_mapSpriteID[position];
		}

		if (Map_IsPositionUnveiled(position)) {
			g_map[position].overlaySpriteID = 0;
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
	Tile *t = &g_map[packed];

	VARIABLE_NOT_USED(parameter);

	t->hasAnimation = false;
	animation->commands = NULL;

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

	animation->tickNext = g_timerGUI + parameter + (Tools_Random_256() % 4);
}

/**
 * Set the overlay sprite of the tile.
 * @param animation The Animation for which we change the overlay sprite.
 * @param parameter The SpriteID to which the overlay sprite is set.
 */
static void Animation_Func_SetOverlaySprite(Animation *animation, int16 parameter)
{
	uint16 packed = Tile_PackTile(animation->tile);
	Tile *t = &g_map[packed];

	assert(parameter >= 0);

	if (!Map_IsPositionUnveiled(packed)) return;

	t->overlaySpriteID = g_iconMap[g_iconMap[animation->iconGroup] + parameter];
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
	uint16 *iconMap;
	const uint16 *layout = g_table_structure_layoutTiles[animation->tileLayout];
	uint16 packed = Tile_PackTile(animation->tile);
	uint16 layoutTileCount;
	int i;

	layoutTileCount = g_table_structure_layoutTileCount[animation->tileLayout];
	iconMap = &g_iconMap[g_iconMap[animation->iconGroup] + layoutTileCount * parameter];

	/* Some special case for turrets */
	if (parameter > 1 && (animation->iconGroup == 23 || animation->iconGroup == 24)) {
		Structure *s = Structure_Get_ByPackedTile(packed);
		assert(s != NULL);
		assert(layoutTileCount == 1);

		specialMap[0] = s->rotationSpriteDiff + g_iconMap[g_iconMap[animation->iconGroup]] + 2;
		iconMap = &specialMap[0];
	}

	for (i = 0; i < layoutTileCount; i++) {
		uint16 position = packed + (*layout++);
		uint16 spriteID = *iconMap++;
		Tile *t = &g_map[position];

		if (t->groundSpriteID == spriteID) continue;
		t->groundSpriteID = spriteID;
		t->houseID = animation->houseID;

		if (Map_IsPositionUnveiled(position)) {
			t->overlaySpriteID = 0;
		}

		Map_Update(position, 0, false);

		Map_MarkTileDirty(position);
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
 * Play a Voice on the tile of animation.
 * @param animation The Animation which gives the position the voice plays at.
 * @param parameter The VoiceID to play.
 */
static void Animation_Func_PlayVoice(Animation *animation, int16 parameter)
{
	Voice_PlayAtTile(parameter, animation->tile);
}

/**
 * Start an Animation.
 * @param commands List of commands for the Animation.
 * @param tile The tile to do the Animation on.
 * @param layout The layout of tiles for the Animation.
 * @param houseID The house of the item being Animation.
 * @param iconGroup In which IconGroup the sprites of the Animation belongs.
 */
void Animation_Start(void *commands, tile32 tile, uint16 tileLayout, uint8 houseID, uint8 iconGroup)
{
	Animation *animation = g_animations;
	uint16 packed = Tile_PackTile(tile);
	Tile *t;
	int i;

	t = &g_map[packed];
	Animation_Stop_ByTile(packed);

	for (i = 0; i < ANIMATION_MAX; i++, animation++) {
		if (animation->commands != NULL) continue;

		animation->tickNext   = g_timerGUI;
		animation->tileLayout = tileLayout;
		animation->houseID    = houseID;
		animation->current    = 0;
		animation->iconGroup  = iconGroup;
		animation->commands   = commands;
		animation->tile       = tile;

		s_animationTimer = 0;

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
	Animation *animation = g_animations;
	Tile *t = &g_map[packed];
	int i;

	if (!t->hasAnimation) return;

	for (i = 0; i < ANIMATION_MAX; i++, animation++) {
		if (animation->commands == NULL) continue;
		if (Tile_PackTile(animation->tile) != packed) continue;

		Animation_Func_Stop(animation, 0);
		return;
	}
}

/**
 * Check all Animations if they need changing.
 */
void Animation_Tick(void)
{
	Animation *animation = g_animations;
	int i;

	if (s_animationTimer > g_timerGUI) return;
	s_animationTimer += 10000;

	for (i = 0; i < ANIMATION_MAX; i++, animation++) {
		if (animation->commands == NULL) continue;

		if (animation->tickNext <= g_timerGUI) {
			AnimationCommandStruct *commands = animation->commands;
			int16 parameter;

			commands += animation->current++;

			parameter = commands->parameter;
			assert((parameter & 0x0800) == 0 || (parameter & 0xF000) != 0); /* Validate if the compiler sign-extends correctly */

			switch (commands->command) {
				case ANIMATION_STOP:
				default:                           Animation_Func_Stop(animation, parameter); break;

				case ANIMATION_ABORT:              Animation_Func_Abort(animation, parameter); break;
				case ANIMATION_SET_OVERLAY_SPRITE: Animation_Func_SetOverlaySprite(animation, parameter); break;
				case ANIMATION_PAUSE:              Animation_Func_Pause(animation, parameter); break;
				case ANIMATION_REWIND:             Animation_Func_Rewind(animation, parameter); break;
				case ANIMATION_PLAY_VOICE:         Animation_Func_PlayVoice(animation, parameter); break;
				case ANIMATION_SET_GROUND_SPRITE:  Animation_Func_SetGroundSprite(animation, parameter); break;
				case ANIMATION_FORWARD:            Animation_Func_Forward(animation, parameter); break;
				case ANIMATION_SET_ICONGROUP:      Animation_Func_SetIconGroup(animation, parameter); break;
			}

			if (animation->commands == NULL) continue;
		}

		if (animation->tickNext < s_animationTimer) s_animationTimer = animation->tickNext;
	}
}
