/* $Id$ */

/** @file src/map.c Map routines. */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "types.h"

#include "mapactivity.h"

#include "animation.h"
#include "audio/sound.h"
#include "house.h"
#include "map.h"
#include "sprites.h"
#include "structure.h"
#include "tile.h"
#include "timer.h"
#include "tools.h"


MapActivity g_mapActivity[32];                              /*!< Map activities. */
static uint32 s_mapActivityTimeout = 0;                     /*!< Timeout value for next map activity. */


static const Activity _activities00[] = {
	{ MAPACTIVITY_SET_SPRITE        ,  153 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    3 },
	{ MAPACTIVITY_BLOOM_EXPLOSION   ,    0 },
	{ MAPACTIVITY_SET_SPRITE        ,  153 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    3 },
	{ MAPACTIVITY_STOP              ,    0 }
};

static const Activity _activities01[] = {
	{ MAPACTIVITY_SET_SPRITE        ,  154 },
	{ MAPACTIVITY_BLOOM_EXPLOSION   ,    0 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    3 },
	{ MAPACTIVITY_SET_SPRITE        ,  153 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    3 },
	{ MAPACTIVITY_SET_SPRITE        ,  154 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    3 },
	{ MAPACTIVITY_STOP              ,    0 }
};

static const Activity _activities02[] = {
	{ MAPACTIVITY_SET_SPRITE        ,  183 },
	{ MAPACTIVITY_PLAY_VOICE        ,   50 },
	{ MAPACTIVITY_BLOOM_EXPLOSION   ,    0 },
	{ MAPACTIVITY_DAMAGE            ,    0 },
	{ MAPACTIVITY_SET_TIMEOUT       ,   15 },
	{ MAPACTIVITY_SET_SPRITE        ,  184 },
	{ MAPACTIVITY_SET_TIMEOUT       ,   15 },
	{ MAPACTIVITY_STOP              ,    0 }
};

static const Activity _activities03[] = {
	{ MAPACTIVITY_SET_SPRITE        ,  183 },
	{ MAPACTIVITY_PLAY_VOICE        ,   49 },
	{ MAPACTIVITY_BLOOM_EXPLOSION   ,    0 },
	{ MAPACTIVITY_DAMAGE            ,    0 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    3 },
	{ MAPACTIVITY_SET_SPRITE        ,  184 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    3 },
	{ MAPACTIVITY_STOP              ,    0 }
};

static const Activity _activities04[] = {
	{ MAPACTIVITY_SET_SPRITE        ,  203 },
	{ MAPACTIVITY_PLAY_VOICE        ,   51 },
	{ MAPACTIVITY_BLOOM_EXPLOSION   ,    0 },
	{ MAPACTIVITY_DAMAGE            ,    0 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    7 },
	{ MAPACTIVITY_SET_SPRITE        ,  204 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    3 },
	{ MAPACTIVITY_SET_SPRITE        ,  205 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    3 },
	{ MAPACTIVITY_SET_SPRITE        ,  206 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    3 },
	{ MAPACTIVITY_SET_SPRITE        ,  207 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    3 },
	{ MAPACTIVITY_STOP              ,    0 }
};

static const Activity _activities05[] = {
	{ MAPACTIVITY_SET_RANDOM_TIMEOUT,   60 },
	{ MAPACTIVITY_SET_SPRITE        ,  203 },
	{ MAPACTIVITY_PLAY_VOICE        ,   41 },
	{ MAPACTIVITY_BLOOM_EXPLOSION   ,    0 },
	{ MAPACTIVITY_DAMAGE            ,    0 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    7 },
	{ MAPACTIVITY_SET_SPRITE        ,  204 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    3 },
	{ MAPACTIVITY_SET_SPRITE        ,  205 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    3 },
	{ MAPACTIVITY_SET_SPRITE        ,  206 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    3 },
	{ MAPACTIVITY_SET_SPRITE        ,  207 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    3 },
	{ MAPACTIVITY_STOP              ,    0 }
};

static const Activity _activities06[] = {
	{ MAPACTIVITY_SET_SPRITE        ,  198 },
	{ MAPACTIVITY_PLAY_VOICE        ,   51 },
	{ MAPACTIVITY_BLOOM_EXPLOSION   ,    0 },
	{ MAPACTIVITY_DAMAGE            ,    0 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    7 },
	{ MAPACTIVITY_SET_SPRITE        ,  199 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    3 },
	{ MAPACTIVITY_SET_SPRITE        ,  200 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    3 },
	{ MAPACTIVITY_SET_SPRITE        ,  201 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    3 },
	{ MAPACTIVITY_SET_SPRITE        ,  202 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    3 },
	{ MAPACTIVITY_STOP              ,    0 }
};

static const Activity _activities07[] = {
	{ MAPACTIVITY_SET_SPRITE        ,  208 },
	{ MAPACTIVITY_PLAY_VOICE        ,   39 },
	{ MAPACTIVITY_SET_TIMEOUT       ,   15 },
	{ MAPACTIVITY_SET_SPRITE        ,  209 },
	{ MAPACTIVITY_SET_TIMEOUT       ,   15 },
	{ MAPACTIVITY_SET_SPRITE        ,  210 },
	{ MAPACTIVITY_SET_TIMEOUT       ,   15 },
	{ MAPACTIVITY_SET_SPRITE        ,  211 },
	{ MAPACTIVITY_SET_TIMEOUT       ,   15 },
	{ MAPACTIVITY_SET_SPRITE        ,  212 },
	{ MAPACTIVITY_SET_TIMEOUT       ,   15 },
	{ MAPACTIVITY_STOP              ,    0 }
};

static const Activity _activities08[] = {
	{ MAPACTIVITY_SET_SPRITE        ,  156 },
	{ MAPACTIVITY_PLAY_VOICE        ,   40 },
	{ MAPACTIVITY_BLOOM_EXPLOSION   ,    0 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    7 },
	{ MAPACTIVITY_SET_SPRITE        ,  157 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    3 },
	{ MAPACTIVITY_SET_SPRITE        ,  158 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    3 },
	{ MAPACTIVITY_SET_SPRITE        ,  157 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    3 },
	{ MAPACTIVITY_DAMAGE            ,    0 },
	{ MAPACTIVITY_STOP              ,    0 }
};

static const Activity _activities09[] = {
	{ MAPACTIVITY_SET_SPRITE        ,  183 },
	{ MAPACTIVITY_PLAY_VOICE        ,   41 },
	{ MAPACTIVITY_BLOOM_EXPLOSION   ,    0 },
	{ MAPACTIVITY_DAMAGE            ,    0 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    3 },
	{ MAPACTIVITY_SET_SPRITE        ,  203 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    3 },
	{ MAPACTIVITY_SET_ROW           , 4016 },
	{ MAPACTIVITY_SET_SPRITE        ,  168 },
	{ MAPACTIVITY_SET_TIMEOUT       ,   15 },
	{ MAPACTIVITY_SET_SPRITE        ,  169 },
	{ MAPACTIVITY_SET_TIMEOUT       ,   15 },
	{ MAPACTIVITY_SET_SPRITE        ,  170 },
	{ MAPACTIVITY_SET_TIMEOUT       ,   15 },
	{ MAPACTIVITY_SET_SPRITE        ,  168 },
	{ MAPACTIVITY_SET_TIMEOUT       ,   15 },
	{ MAPACTIVITY_SET_SPRITE        ,  169 },
	{ MAPACTIVITY_SET_TIMEOUT       ,   15 },
	{ MAPACTIVITY_SET_SPRITE        ,  170 },
	{ MAPACTIVITY_SET_TIMEOUT       ,   15 },
	{ MAPACTIVITY_SET_SPRITE        ,  168 },
	{ MAPACTIVITY_SET_TIMEOUT       ,   15 },
	{ MAPACTIVITY_SET_SPRITE        ,  169 },
	{ MAPACTIVITY_SET_TIMEOUT       ,   15 },
	{ MAPACTIVITY_SET_SPRITE        ,  170 },
	{ MAPACTIVITY_SET_TIMEOUT       ,   15 },
	{ MAPACTIVITY_SET_SPRITE        ,  168 },
	{ MAPACTIVITY_SET_TIMEOUT       ,   15 },
	{ MAPACTIVITY_SET_SPRITE        ,  169 },
	{ MAPACTIVITY_SET_TIMEOUT       ,   15 },
	{ MAPACTIVITY_SET_SPRITE        ,  170 },
	{ MAPACTIVITY_SET_TIMEOUT       ,   15 },
	{ MAPACTIVITY_SET_SPRITE        ,  168 },
	{ MAPACTIVITY_SET_TIMEOUT       ,   15 },
	{ MAPACTIVITY_SET_SPRITE        ,  169 },
	{ MAPACTIVITY_SET_TIMEOUT       ,   15 },
	{ MAPACTIVITY_SET_SPRITE        ,  170 },
	{ MAPACTIVITY_SET_TIMEOUT       ,   15 },
	{ MAPACTIVITY_STOP              ,    0 }
};

static const Activity _activities10[] = {
	{ MAPACTIVITY_SET_SPRITE        ,  151 },
	{ MAPACTIVITY_PLAY_VOICE        ,   49 },
	{ MAPACTIVITY_BLOOM_EXPLOSION   ,    0 },
	{ MAPACTIVITY_DAMAGE            ,    0 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    7 },
	{ MAPACTIVITY_SET_SPRITE        ,  152 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    7 },
	{ MAPACTIVITY_STOP              ,    0 }
};

static const Activity _activities11[] = {
	{ MAPACTIVITY_SET_RANDOM_TIMEOUT,   60 },
	{ MAPACTIVITY_SET_SPRITE        ,  188 },
	{ MAPACTIVITY_PLAY_VOICE        ,   51 },
	{ MAPACTIVITY_BLOOM_EXPLOSION   ,    0 },
	{ MAPACTIVITY_DAMAGE            ,    0 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    7 },
	{ MAPACTIVITY_SET_SPRITE        ,  189 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    3 },
	{ MAPACTIVITY_SET_SPRITE        ,  190 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    3 },
	{ MAPACTIVITY_SET_SPRITE        ,  191 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    3 },
	{ MAPACTIVITY_SET_SPRITE        ,  192 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    3 },
	{ MAPACTIVITY_STOP              ,    0 }
};

static const Activity _activities12[] = {
	{ MAPACTIVITY_SET_SPRITE        ,  213 },
	{ MAPACTIVITY_SET_TIMEOUT       ,   15 },
	{ MAPACTIVITY_SET_SPRITE        ,  214 },
	{ MAPACTIVITY_SET_TIMEOUT       ,   15 },
	{ MAPACTIVITY_SET_SPRITE        ,  215 },
	{ MAPACTIVITY_SET_TIMEOUT       ,   15 },
	{ MAPACTIVITY_SET_SPRITE        ,  216 },
	{ MAPACTIVITY_SET_TIMEOUT       ,   15 },
	{ MAPACTIVITY_SET_SPRITE        ,  217 },
	{ MAPACTIVITY_SET_TIMEOUT       ,   30 },
	{ MAPACTIVITY_STOP              ,    0 }
};

static const Activity _activities13[] = {
	{ MAPACTIVITY_SET_SPRITE        ,  218 },
	{ MAPACTIVITY_SET_TIMEOUT       ,   15 },
	{ MAPACTIVITY_SET_SPRITE        ,  219 },
	{ MAPACTIVITY_SET_TIMEOUT       ,   15 },
	{ MAPACTIVITY_SET_SPRITE        ,  220 },
	{ MAPACTIVITY_SET_TIMEOUT       ,   15 },
	{ MAPACTIVITY_SET_SPRITE        ,  221 },
	{ MAPACTIVITY_SET_TIMEOUT       ,   15 },
	{ MAPACTIVITY_SET_SPRITE        ,  222 },
	{ MAPACTIVITY_SET_TIMEOUT       ,   30 },
	{ MAPACTIVITY_STOP              ,    0 }
};

static const Activity _activities14[] = {
	{ MAPACTIVITY_SET_RANDOM_TIMEOUT,   60 },
	{ MAPACTIVITY_SET_SPRITE        ,  188 },
	{ MAPACTIVITY_PLAY_VOICE        ,   51 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    7 },
	{ MAPACTIVITY_SET_SPRITE        ,  189 },
	{ MAPACTIVITY_BLOOM_EXPLOSION   ,    0 },
	{ MAPACTIVITY_NOOP              ,    0 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    3 },
	{ MAPACTIVITY_SET_SPRITE        ,  190 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    3 },
	{ MAPACTIVITY_SET_SPRITE        ,  191 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    3 },
	{ MAPACTIVITY_SET_SPRITE        ,  192 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    3 },
	{ MAPACTIVITY_STOP              ,    0 }
};

static const Activity _activities15[] = {
	{ MAPACTIVITY_SET_SPRITE        ,  183 },
	{ MAPACTIVITY_PLAY_VOICE        ,   49 },
	{ MAPACTIVITY_SET_ROW           , 4016 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    3 },
	{ MAPACTIVITY_SET_SPRITE        ,  184 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    3 },
	{ MAPACTIVITY_SET_SPRITE        ,  180 },
	{ MAPACTIVITY_SET_TIMEOUT       ,   15 },
	{ MAPACTIVITY_SET_SPRITE        ,  181 },
	{ MAPACTIVITY_SET_TIMEOUT       ,   15 },
	{ MAPACTIVITY_SET_SPRITE        ,  182 },
	{ MAPACTIVITY_SET_TIMEOUT       ,   15 },
	{ MAPACTIVITY_SET_SPRITE        ,  181 },
	{ MAPACTIVITY_SET_TIMEOUT       ,   15 },
	{ MAPACTIVITY_SET_SPRITE        ,  180 },
	{ MAPACTIVITY_SET_TIMEOUT       ,   15 },
	{ MAPACTIVITY_SET_SPRITE        ,  181 },
	{ MAPACTIVITY_SET_TIMEOUT       ,   15 },
	{ MAPACTIVITY_SET_SPRITE        ,  182 },
	{ MAPACTIVITY_SET_TIMEOUT       ,   15 },
	{ MAPACTIVITY_SET_SPRITE        ,  181 },
	{ MAPACTIVITY_SET_TIMEOUT       ,   15 },
	{ MAPACTIVITY_SET_SPRITE        ,  180 },
	{ MAPACTIVITY_SET_TIMEOUT       ,   15 },
	{ MAPACTIVITY_SET_SPRITE        ,  181 },
	{ MAPACTIVITY_SET_TIMEOUT       ,   15 },
	{ MAPACTIVITY_SET_SPRITE        ,  182 },
	{ MAPACTIVITY_SET_TIMEOUT       ,   15 },
	{ MAPACTIVITY_SET_SPRITE        ,  181 },
	{ MAPACTIVITY_SET_TIMEOUT       ,   15 },
	{ MAPACTIVITY_SET_SPRITE        ,  180 },
	{ MAPACTIVITY_SET_TIMEOUT       ,   15 },
	{ MAPACTIVITY_SET_SPRITE        ,  181 },
	{ MAPACTIVITY_SET_TIMEOUT       ,   15 },
	{ MAPACTIVITY_SET_SPRITE        ,  182 },
	{ MAPACTIVITY_SET_TIMEOUT       ,   15 },
	{ MAPACTIVITY_SET_SPRITE        ,  181 },
	{ MAPACTIVITY_SET_TIMEOUT       ,   15 },
	{ MAPACTIVITY_SET_SPRITE        ,  180 },
	{ MAPACTIVITY_SET_TIMEOUT       ,   15 },
	{ MAPACTIVITY_SET_SPRITE        ,  181 },
	{ MAPACTIVITY_SET_TIMEOUT       ,   15 },
	{ MAPACTIVITY_SET_SPRITE        ,  182 },
	{ MAPACTIVITY_SET_TIMEOUT       ,   15 },
	{ MAPACTIVITY_SET_SPRITE        ,  181 },
	{ MAPACTIVITY_SET_TIMEOUT       ,   15 },
	{ MAPACTIVITY_SET_SPRITE        ,  180 },
	{ MAPACTIVITY_SET_TIMEOUT       ,   15 },
	{ MAPACTIVITY_SET_SPRITE        ,  181 },
	{ MAPACTIVITY_SET_TIMEOUT       ,   15 },
	{ MAPACTIVITY_SET_SPRITE        ,  182 },
	{ MAPACTIVITY_SET_TIMEOUT       ,   15 },
	{ MAPACTIVITY_SET_SPRITE        ,  181 },
	{ MAPACTIVITY_SET_TIMEOUT       ,   15 },
	{ MAPACTIVITY_STOP              ,    0 }
};

static const Activity _activities16[] = {
	{ MAPACTIVITY_SET_SPRITE        ,  203 },
	{ MAPACTIVITY_PLAY_VOICE        ,   49 },
	{ MAPACTIVITY_BLOOM_EXPLOSION   ,    0 },
	{ MAPACTIVITY_SET_ANIMATION     ,    0 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    3 },
	{ MAPACTIVITY_SET_SPRITE        ,  204 },
	{ MAPACTIVITY_SET_SPRITE        ,  207 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    3 },
	{ MAPACTIVITY_STOP              ,    0 }
};

static const Activity _activities17[] = {
	{ MAPACTIVITY_SET_SPRITE        ,  203 },
	{ MAPACTIVITY_PLAY_VOICE        ,   49 },
	{ MAPACTIVITY_BLOOM_EXPLOSION   ,    0 },
	{ MAPACTIVITY_SET_ANIMATION     ,    4 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    3 },
	{ MAPACTIVITY_SET_SPRITE        ,  204 },
	{ MAPACTIVITY_SET_SPRITE        ,  207 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    3 },
	{ MAPACTIVITY_STOP              ,    0 }
};

static const Activity _activities18[] = {
	{ MAPACTIVITY_SET_SPRITE        ,  183 },
	{ MAPACTIVITY_PLAY_VOICE        ,   54 },
	{ MAPACTIVITY_BLOOM_EXPLOSION   ,    0 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    3 },
	{ MAPACTIVITY_SET_SPRITE        ,  184 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    3 },
	{ MAPACTIVITY_STOP              ,    0 }
};

static const Activity _activities19[] = {
	{ MAPACTIVITY_SET_SPRITE        ,  156 },
	{ MAPACTIVITY_PLAY_VOICE        ,   40 },
	{ MAPACTIVITY_NOOP              ,    0 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    7 },
	{ MAPACTIVITY_NOOP              ,    0 },
	{ MAPACTIVITY_SET_SPRITE        ,  157 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    3 },
	{ MAPACTIVITY_NOOP              ,    0 },
	{ MAPACTIVITY_SET_SPRITE        ,  158 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    3 },
	{ MAPACTIVITY_NOOP              ,    0 },
	{ MAPACTIVITY_SET_SPRITE        ,  157 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    3 },
	{ MAPACTIVITY_NOOP              ,    0 },
	{ MAPACTIVITY_DAMAGE            ,    0 },
	{ MAPACTIVITY_STOP              ,    0 }
};

static const Activity *_activities[] = {
	_activities00,
	_activities01,
	_activities02,
	_activities03,
	_activities04,
	_activities05,
	_activities06,
	_activities07,
	_activities08,
	_activities09,
	_activities10,
	_activities11,
	_activities12,
	_activities13,
	_activities14,
	_activities15,
	_activities16,
	_activities17,
	_activities18,
	_activities19
};


/**
 * Update the tile a MapActivity is on.
 * @param type Are we introducing (0) or updating (2) the tile.
 * @param ma The MapActivity in question.
 */
static void MapActivity_Update(uint16 type, MapActivity *ma)
{
	if (ma == NULL) return;

	if (type == 1 && ma->isDirty) return;

	ma->isDirty = (type != 0);

	Map_UpdateAround(24, ma->position, NULL, g_functions[2][type]);
}

/**
 * Handle damage to a tile, removing spice, removing concrete, stuff like that.
 * @param ma The MapActivity to handle damage on.
 * @param parameter Unused parameter.
 */
static void MapActivity_Func_Damage(MapActivity *ma, uint16 parameter)
{
	static const int16 bloomLocations[] = { -1, 2, 1 };

	uint16 packed;
	uint16 type;
	Tile *t;
	int16 iconMapIndex;
	uint16 overlaySpriteID;
	uint16 *iconMap;

	VARIABLE_NOT_USED(parameter);

	packed = Tile_PackTile(ma->position);

	if (!Map_IsPositionUnveiled(packed)) return;

	type = Map_GetLandscapeType(packed);

	if (type == LST_STRUCTURE || type == LST_DESTROYED_WALL) return;

	t = &g_map[packed];

	if (type == LST_CONCRETE_SLAB) {
		t->groundSpriteID = g_mapSpriteID[packed];
		Map_Update(packed, 0, false);
	}

	iconMapIndex = bloomLocations[g_table_landscapeInfo[type].variable_10];
	if (iconMapIndex == -1) return;

	overlaySpriteID = t->overlaySpriteID;

	if (!Sprite_IsUnveiled(overlaySpriteID)) return;

	iconMap = &g_iconMap[g_iconMap[iconMapIndex]];
	if (iconMap[0] <= overlaySpriteID && overlaySpriteID <= iconMap[10]) {
		overlaySpriteID -= iconMap[0];
		if (overlaySpriteID < 4) overlaySpriteID += 2;
	} else {
		overlaySpriteID = Tools_Random_256() & 1;
	}

	Map_ChangeSpiceAmount(packed, -1);

	if (t->groundSpriteID == g_bloomSpriteID) {
		Map_ExplodeBloom(packed, g_playerHouseID);
		return;
	}

	t->overlaySpriteID = overlaySpriteID + iconMap[0];

	Map_Update(packed, 0, false);
}

/**
 * Play a voice for a MapActivity.
 * @param ma The MapActivity to play the voice on.
 * @param voiceID The voice to play.
 */
static void MapActivity_Func_PlayVoice(MapActivity *ma, uint16 voiceID)
{
	Voice_PlayAtTile(voiceID, ma->position);
}

/**
 * A No-Op for MapActivity.
 * @param ma The MapActivity.
 * @param parameter Unused parameter.
 */
static void MapActivity_Func_NoOperation(MapActivity *ma, uint16 parameter)
{
	VARIABLE_NOT_USED(ma);
	VARIABLE_NOT_USED(parameter);
}

/**
 * Let a bloom explode.
 * @param ma The MapActivity to perform to explosion on.
 * @param parameter Unused parameter.
 */
static void MapActivity_Func_BloomExplosion(MapActivity *ma, uint16 parameter)
{
	uint16 packed;

	VARIABLE_NOT_USED(parameter);

	packed = Tile_PackTile(ma->position);

	if (g_map[packed].groundSpriteID != g_bloomSpriteID) return;

	Map_ExplodeBloom(packed, g_playerHouseID);
}

/**
 * Set the animation of a MapActivity.
 * @param ma The MapActivity to change.
 * @param animationMapID The animation map to use.
 */
static void MapActivity_Func_SetAnimation(MapActivity *ma, uint16 animationMapID)
{
	uint16 packed;

	packed = Tile_PackTile(ma->position);

	if (Structure_Get_ByPackedTile(packed) != NULL) return;

	animationMapID += Tools_Random_256() & 0x1;
	animationMapID += g_table_landscapeInfo[Map_GetLandscapeType(packed)].variable_07 ? 0 : 2;

	assert(animationMapID < 16);
	Animation_Start(g_table_animation_map[animationMapID], ma->position, 0, ma->houseID, 3);
}

/**
 * Set position at the left of a row.
 * @param ma The MapActivity to change.
 * @param row Row number.
 */
static void MapActivity_Func_SetRow(MapActivity *ma, uint16 row)
{
	if ((row & 0x800) != 0) row |= 0xF000;
	ma->position.s.x = 0;
	ma->position.s.y = row;
}

/**
 * Stop performing an activity.
 * @param ma The MapActivity to end.
 * @param parameter Unused parameter.
 */
static void MapActivity_Func_Stop(MapActivity *ma, uint16 parameter)
{
	VARIABLE_NOT_USED(parameter);

	g_map[Tile_PackTile(ma->position)].hasMapActivity = false;

	MapActivity_Update(0, ma);

	ma->activities = NULL;
}

/**
 * Set timeout for next the map activity of \a ma.
 * @param ma The MapActivity to change.
 * @param value The new timeout value.
 */
static void MapActivity_Func_SetTimeout(MapActivity *ma, uint16 value)
{
	ma->timeOut = g_timerGUI + value;
}

/**
 * Set timeout for next the map activity of \a ma to a random value up to \a value.
 * @param ma The MapActivity to change.
 * @param value The maximum amount of timeout.
 */
static void MapActivity_Func_SetRandomTimeout(MapActivity *ma, uint16 value)
{
	ma->timeOut = g_timerGUI + Tools_RandomRange(0, value);
}

/**
 * Set the SpriteID of the MapActivity.
 * @param ma The MapActivity to change.
 * @param spriteID The new SpriteID for the MapActivity.
 */
static void MapActivity_Func_SetSpriteID(MapActivity *ma, uint16 spriteID)
{
	ma->spriteID = spriteID;

	MapActivity_Update(2, ma);
}

/**
 * Stop any MapActivity at position \a packed.
 * @param packed A packed position where no activities should take place (any more).
 */
static void MapActivity_StopAtPosition(uint16 packed)
{
	Tile *t;
	uint8 i;

	t = &g_map[packed];

	if (!t->hasMapActivity) return;

	for (i = 0; i < 32; i++) {
		MapActivity *ma;

		ma = &g_mapActivity[i];

		if (ma->activities == NULL || Tile_PackTile(ma->position) != packed) continue;

		MapActivity_Func_Stop(ma, 0);
	}
}

/**
 * Initialize map activity.
 * @param type Type of activity to load.
 * @param position The position to use for init.
 */
void MapActivity_Initialize(uint16 type, tile32 position)
{
	const Activity *activities = _activities[type];
	uint16 packed;
	uint8 i;

	if (activities == NULL) return;

	packed = Tile_PackTile(position);

	MapActivity_StopAtPosition(packed);

	for (i = 0; i < 32; i++) {
		MapActivity *s;

		s = &g_mapActivity[i];

		if (s->activities != NULL) continue;

		s->index       = i;
		s->activities  = activities;
		s->current     = 0;
		s->spriteID    = 0;
		s->position    = position;
		s->isDirty     = false;
		s->timeOut     = g_timerGUI;
		s_mapActivityTimeout = 0;
		g_map[packed].hasMapActivity = true;

		break;
	}
}

/**
 * Timer tick for map activities.
 * @return Timer value for next activity.
 */
uint32 MapActivity_Tick()
{
	uint8 i;

	if (s_mapActivityTimeout > g_timerGUI) return s_mapActivityTimeout;

	s_mapActivityTimeout += 10000;

	for (i = 0; i < 32; i++) {
		MapActivity *ma;

		ma = &g_mapActivity[i];

		if (ma->activities == NULL) continue;

		if (ma->timeOut <= g_timerGUI) {
			uint16 parameter = ma->activities[ma->current].parameter;
			uint16 command   = ma->activities[ma->current].command;

			ma->current++;

			switch (command) {
				default:
				case MAPACTIVITY_STOP:               MapActivity_Func_Stop(ma, parameter); break;

				case MAPACTIVITY_SET_SPRITE:         MapActivity_Func_SetSpriteID(ma, parameter); break;
				case MAPACTIVITY_SET_TIMEOUT:        MapActivity_Func_SetTimeout(ma, parameter); break;
				case MAPACTIVITY_SET_RANDOM_TIMEOUT: MapActivity_Func_SetRandomTimeout(ma, parameter); break;
				case MAPACTIVITY_SET_ROW:            MapActivity_Func_SetRow(ma, parameter); break;
				case MAPACTIVITY_DAMAGE:             MapActivity_Func_Damage(ma, parameter); break;
				case MAPACTIVITY_PLAY_VOICE:         MapActivity_Func_PlayVoice(ma, parameter); break;
				case MAPACTIVITY_NOOP:               MapActivity_Func_NoOperation(ma, parameter); break;
				case MAPACTIVITY_SET_ANIMATION:      MapActivity_Func_SetAnimation(ma, parameter); break;
				case MAPACTIVITY_BLOOM_EXPLOSION:    MapActivity_Func_BloomExplosion(ma, parameter); break;
			}
		}

		if (ma->activities == NULL || ma->timeOut > s_mapActivityTimeout) continue;

		s_mapActivityTimeout = ma->timeOut;
	}

	return s_mapActivityTimeout;
}
