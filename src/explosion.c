/** @file src/explosion.c Explosion routines. */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "types.h"

#include "explosion.h"

#include "animation.h"
#include "audio/sound.h"
#include "house.h"
#include "map.h"
#include "sprites.h"
#include "structure.h"
#include "tile.h"
#include "timer.h"
#include "tools.h"


Explosion g_explosions[EXPLOSION_MAX];                      /*!< Explosions. */
static uint32 s_explosionTimer = 0;                         /*!< Timeout value for next explosion activity. */


/**
 * Update the tile a Explosion is on.
 * @param type Are we introducing (0) or updating (2) the tile.
 * @param e The Explosion in question.
 */
static void Explosion_Update(uint16 type, Explosion *e)
{
	if (e == NULL) return;

	if (type == 1 && e->isDirty) return;

	e->isDirty = (type != 0);

	Map_UpdateAround(24, e->position, NULL, g_functions[2][type]);
}

/**
 * Handle damage to a tile, removing spice, removing concrete, stuff like that.
 * @param e The Explosion to handle damage on.
 * @param parameter Unused parameter.
 */
static void Explosion_Func_TileDamage(Explosion *e, uint16 parameter)
{
	static const int16 craterIconMapIndex[] = { -1, 2, 1 };

	uint16 packed;
	uint16 type;
	Tile *t;
	int16 iconMapIndex;
	uint16 overlaySpriteID;
	uint16 *iconMap;

	VARIABLE_NOT_USED(parameter);

	packed = Tile_PackTile(e->position);

	if (!Map_IsPositionUnveiled(packed)) return;

	type = Map_GetLandscapeType(packed);

	if (type == LST_STRUCTURE || type == LST_DESTROYED_WALL) return;

	t = &g_map[packed];

	if (type == LST_CONCRETE_SLAB) {
		t->groundSpriteID = g_mapSpriteID[packed];
		Map_Update(packed, 0, false);
	}

	if (g_table_landscapeInfo[type].craterType == 0) return;

	/* You cannot damage veiled tiles */
	overlaySpriteID = t->overlaySpriteID;
	if (!Sprite_IsUnveiled(overlaySpriteID)) return;

	iconMapIndex = craterIconMapIndex[g_table_landscapeInfo[type].craterType];
	iconMap = &g_iconMap[g_iconMap[iconMapIndex]];

	if (iconMap[0] <= overlaySpriteID && overlaySpriteID <= iconMap[10]) {
		/* There already is a crater; make it bigger */
		overlaySpriteID -= iconMap[0];
		if (overlaySpriteID < 4) overlaySpriteID += 2;
	} else {
		/* Randomly pick 1 of the 2 possible craters */
		overlaySpriteID = Tools_Random_256() & 1;
	}

	/* Reduce spice if there is any */
	Map_ChangeSpiceAmount(packed, -1);

	/* Boom a bloom if there is one */
	if (t->groundSpriteID == g_bloomSpriteID) {
		Map_Bloom_ExplodeSpice(packed, g_playerHouseID);
		return;
	}

	/* Update the tile with the crater */
	t->overlaySpriteID = overlaySpriteID + iconMap[0];
	Map_Update(packed, 0, false);
}

/**
 * Play a voice for a Explosion.
 * @param e The Explosion to play the voice on.
 * @param voiceID The voice to play.
 */
static void Explosion_Func_PlayVoice(Explosion *e, uint16 voiceID)
{
	Voice_PlayAtTile(voiceID, e->position);
}

/**
 * Shake the screen.
 * @param e The Explosion.
 * @param parameter Unused parameter.
 */
static void Explosion_Func_ScreenShake(Explosion *e, uint16 parameter)
{
	VARIABLE_NOT_USED(e);
	VARIABLE_NOT_USED(parameter);

	/* TODO -- Implement this function */
}

/**
 * Check if there is a bloom at the location, and make it explode if needed.
 * @param e The Explosion to perform the explosion on.
 * @param parameter Unused parameter.
 */
static void Explosion_Func_BloomExplosion(Explosion *e, uint16 parameter)
{
	uint16 packed;

	VARIABLE_NOT_USED(parameter);

	packed = Tile_PackTile(e->position);

	if (g_map[packed].groundSpriteID != g_bloomSpriteID) return;

	Map_Bloom_ExplodeSpice(packed, g_playerHouseID);
}

/**
 * Set the animation of a Explosion.
 * @param e The Explosion to change.
 * @param animationMapID The animation map to use.
 */
static void Explosion_Func_SetAnimation(Explosion *e, uint16 animationMapID)
{
	uint16 packed;

	packed = Tile_PackTile(e->position);

	if (Structure_Get_ByPackedTile(packed) != NULL) return;

	animationMapID += Tools_Random_256() & 0x1;
	animationMapID += g_table_landscapeInfo[Map_GetLandscapeType(packed)].isSand ? 0 : 2;

	assert(animationMapID < 16);
	Animation_Start(g_table_animation_map[animationMapID], e->position, 0, e->houseID, 3);
}

/**
 * Set position at the left of a row.
 * @param e The Explosion to change.
 * @param row Row number.
 */
static void Explosion_Func_MoveYPosition(Explosion *e, uint16 row)
{
	e->position.s.y += (int16)row;
}

/**
 * Stop performing an explosion.
 * @param e The Explosion to end.
 * @param parameter Unused parameter.
 */
static void Explosion_Func_Stop(Explosion *e, uint16 parameter)
{
	VARIABLE_NOT_USED(parameter);

	g_map[Tile_PackTile(e->position)].hasExplosion = false;

	Explosion_Update(0, e);

	e->commands = NULL;
}

/**
 * Set timeout for next the activity of \a e.
 * @param e The Explosion to change.
 * @param value The new timeout value.
 */
static void Explosion_Func_SetTimeout(Explosion *e, uint16 value)
{
	e->timeOut = g_timerGUI + value;
}

/**
 * Set timeout for next the activity of \a e to a random value up to \a value.
 * @param e The Explosion to change.
 * @param value The maximum amount of timeout.
 */
static void Explosion_Func_SetRandomTimeout(Explosion *e, uint16 value)
{
	e->timeOut = g_timerGUI + Tools_RandomLCG_Range(0, value);
}

/**
 * Set the SpriteID of the Explosion.
 * @param e The Explosion to change.
 * @param spriteID The new SpriteID for the Explosion.
 */
static void Explosion_Func_SetSpriteID(Explosion *e, uint16 spriteID)
{
	e->spriteID = spriteID;

	Explosion_Update(2, e);
}

/**
 * Stop any Explosion at position \a packed.
 * @param packed A packed position where no activities should take place (any more).
 */
static void Explosion_StopAtPosition(uint16 packed)
{
	Tile *t;
	uint8 i;

	t = &g_map[packed];

	if (!t->hasExplosion) return;

	for (i = 0; i < EXPLOSION_MAX; i++) {
		Explosion *e;

		e = &g_explosions[i];

		if (e->commands == NULL || Tile_PackTile(e->position) != packed) continue;

		Explosion_Func_Stop(e, 0);
	}
}

/**
 * Start a Explosion on a tile.
 * @param explosionType Type of Explosion.
 * @param position The position to use for init.
 */
void Explosion_Start(uint16 explosionType, tile32 position)
{
	const ExplosionCommandStruct *commands;
	uint16 packed;
	uint8 i;

	if (explosionType > EXPLOSION_SPICE_BLOOM_TREMOR) return;
	commands = g_table_explosion[explosionType];

	packed = Tile_PackTile(position);

	Explosion_StopAtPosition(packed);

	for (i = 0; i < EXPLOSION_MAX; i++) {
		Explosion *e;

		e = &g_explosions[i];

		if (e->commands != NULL) continue;

		e->commands = commands;
		e->current  = 0;
		e->spriteID = 0;
		e->position = position;
		e->isDirty  = false;
		e->timeOut  = g_timerGUI;
		s_explosionTimer = 0;
		g_map[packed].hasExplosion = true;

		break;
	}
}

/**
 * Timer tick for explosions.
 */
void Explosion_Tick(void)
{
	uint8 i;

	if (s_explosionTimer > g_timerGUI) return;
	s_explosionTimer += 10000;

	for (i = 0; i < EXPLOSION_MAX; i++) {
		Explosion *e;

		e = &g_explosions[i];

		if (e->commands == NULL) continue;

		if (e->timeOut <= g_timerGUI) {
			uint16 parameter = e->commands[e->current].parameter;
			uint16 command   = e->commands[e->current].command;

			e->current++;

			switch (command) {
				default:
				case EXPLOSION_STOP:               Explosion_Func_Stop(e, parameter); break;

				case EXPLOSION_SET_SPRITE:         Explosion_Func_SetSpriteID(e, parameter); break;
				case EXPLOSION_SET_TIMEOUT:        Explosion_Func_SetTimeout(e, parameter); break;
				case EXPLOSION_SET_RANDOM_TIMEOUT: Explosion_Func_SetRandomTimeout(e, parameter); break;
				case EXPLOSION_MOVE_Y_POSITION:    Explosion_Func_MoveYPosition(e, parameter); break;
				case EXPLOSION_TILE_DAMAGE:        Explosion_Func_TileDamage(e, parameter); break;
				case EXPLOSION_PLAY_VOICE:         Explosion_Func_PlayVoice(e, parameter); break;
				case EXPLOSION_SCREEN_SHAKE:       Explosion_Func_ScreenShake(e, parameter); break;
				case EXPLOSION_SET_ANIMATION:      Explosion_Func_SetAnimation(e, parameter); break;
				case EXPLOSION_BLOOM_EXPLOSION:    Explosion_Func_BloomExplosion(e, parameter); break;
			}
		}

		if (e->commands == NULL || e->timeOut > s_explosionTimer) continue;

		s_explosionTimer = e->timeOut;
	}
}
