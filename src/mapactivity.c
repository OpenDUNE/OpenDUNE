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
	{  1,  153 },
	{  2,    3 },
	{ 13,    0 },
	{  4,  153 },
	{  2,    3 },
	{  0,    0 }
};

static const Activity _activities01[] = {
	{  1,  154 },
	{ 13,    0 },
	{  2,    3 },
	{  4,  153 },
	{  2,    3 },
	{  1,  154 },
	{  2,    3 },
	{  0,    0 }
};

static const Activity _activities02[] = {
	{  1,  183 },
	{  9,   50 },
	{ 13,    0 },
	{  8,    0 },
	{  2,   15 },
	{  1,  184 },
	{  2,   15 },
	{  0,    0 }
};

static const Activity _activities03[] = {
	{  1,  183 },
	{  9,   49 },
	{ 13,    0 },
	{  8,    0 },
	{  2,    3 },
	{  1,  184 },
	{  2,    3 },
	{  0,    0 }
};

static const Activity _activities04[] = {
	{  1,  203 },
	{  9,   51 },
	{ 13,    0 },
	{  8,    0 },
	{  2,    7 },
	{  1,  204 },
	{  2,    3 },
	{  1,  205 },
	{  2,    3 },
	{  1,  206 },
	{  2,    3 },
	{  1,  207 },
	{  2,    3 },
	{  0,    0 }
};

static const Activity _activities05[] = {
	{  3,   60 },
	{  1,  203 },
	{  9,   41 },
	{ 13,    0 },
	{  8,    0 },
	{  2,    7 },
	{  1,  204 },
	{  2,    3 },
	{  1,  205 },
	{  2,    3 },
	{  1,  206 },
	{  2,    3 },
	{  1,  207 },
	{  2,    3 },
	{  0,    0 }
};

static const Activity _activities06[] = {
	{  1,  198 },
	{  9,   51 },
	{ 13,    0 },
	{  8,    0 },
	{  2,    7 },
	{  1,  199 },
	{  2,    3 },
	{  1,  200 },
	{  2,    3 },
	{  1,  201 },
	{  2,    3 },
	{  1,  202 },
	{  2,    3 },
	{  0,    0 }
};

static const Activity _activities07[] = {
	{  1,  208 },
	{  9,   39 },
	{  2,   15 },
	{  1,  209 },
	{  2,   15 },
	{  1,  210 },
	{  2,   15 },
	{  1,  211 },
	{  2,   15 },
	{  1,  212 },
	{  2,   15 },
	{  0,    0 }
};

static const Activity _activities08[] = {
	{  1,  156 },
	{  9,   40 },
	{ 13,    0 },
	{  2,    7 },
	{  1,  157 },
	{  2,    3 },
	{  1,  158 },
	{  2,    3 },
	{  1,  157 },
	{  2,    3 },
	{  8,    0 },
	{  0,    0 }
};

static const Activity _activities09[] = {
	{  1,  183 },
	{  9,   41 },
	{ 13,    0 },
	{  8,    0 },
	{  2,    3 },
	{  1,  203 },
	{  2,    3 },
	{  7, 4016 },
	{  1,  168 },
	{  2,   15 },
	{  1,  169 },
	{  2,   15 },
	{  1,  170 },
	{  2,   15 },
	{  1,  168 },
	{  2,   15 },
	{  1,  169 },
	{  2,   15 },
	{  1,  170 },
	{  2,   15 },
	{  1,  168 },
	{  2,   15 },
	{  1,  169 },
	{  2,   15 },
	{  1,  170 },
	{  2,   15 },
	{  1,  168 },
	{  2,   15 },
	{  1,  169 },
	{  2,   15 },
	{  1,  170 },
	{  2,   15 },
	{  1,  168 },
	{  2,   15 },
	{  1,  169 },
	{  2,   15 },
	{  1,  170 },
	{  2,   15 },
	{  0,    0 }
};

static const Activity _activities10[] = {
	{  1,  151 },
	{  9,   49 },
	{ 13,    0 },
	{  8,    0 },
	{  2,    7 },
	{  1,  152 },
	{  2,    7 },
	{  0,    0 }
};

static const Activity _activities11[] = {
	{  3,   60 },
	{  1,  188 },
	{  9,   51 },
	{ 13,    0 },
	{  8,    0 },
	{  2,    7 },
	{  1,  189 },
	{  2,    3 },
	{  1,  190 },
	{  2,    3 },
	{  1,  191 },
	{  2,    3 },
	{  1,  192 },
	{  2,    3 },
	{  0,    0 }
};

static const Activity _activities12[] = {
	{  1,  213 },
	{  2,   15 },
	{  1,  214 },
	{  2,   15 },
	{  1,  215 },
	{  2,   15 },
	{  1,  216 },
	{  2,   15 },
	{  1,  217 },
	{  2,   30 },
	{  0,    0 }
};

static const Activity _activities13[] = {
	{  1,  218 },
	{  2,   15 },
	{  1,  219 },
	{  2,   15 },
	{  1,  220 },
	{  2,   15 },
	{  1,  221 },
	{  2,   15 },
	{  1,  222 },
	{  2,   30 },
	{  0,    0 }
};

static const Activity _activities14[] = {
	{  3,   60 },
	{  1,  188 },
	{  9,   51 },
	{  2,    7 },
	{  1,  189 },
	{ 13,    0 },
	{ 10,    0 },
	{  2,    3 },
	{  1,  190 },
	{  2,    3 },
	{  1,  191 },
	{  2,    3 },
	{  1,  192 },
	{  2,    3 },
	{  0,    0 }
};

static const Activity _activities15[] = {
	{  1,  183 },
	{  9,   49 },
	{  7, 4016 },
	{  2,    3 },
	{  1,  184 },
	{  2,    3 },
	{  1,  180 },
	{  2,   15 },
	{  1,  181 },
	{  2,   15 },
	{  1,  182 },
	{  2,   15 },
	{  1,  181 },
	{  2,   15 },
	{  1,  180 },
	{  2,   15 },
	{  1,  181 },
	{  2,   15 },
	{  1,  182 },
	{  2,   15 },
	{  1,  181 },
	{  2,   15 },
	{  1,  180 },
	{  2,   15 },
	{  1,  181 },
	{  2,   15 },
	{  1,  182 },
	{  2,   15 },
	{  1,  181 },
	{  2,   15 },
	{  1,  180 },
	{  2,   15 },
	{  1,  181 },
	{  2,   15 },
	{  1,  182 },
	{  2,   15 },
	{  1,  181 },
	{  2,   15 },
	{  1,  180 },
	{  2,   15 },
	{  1,  181 },
	{  2,   15 },
	{  1,  182 },
	{  2,   15 },
	{  1,  181 },
	{  2,   15 },
	{  1,  180 },
	{  2,   15 },
	{  1,  181 },
	{  2,   15 },
	{  1,  182 },
	{  2,   15 },
	{  1,  181 },
	{  2,   15 },
	{  0,    0 }
};

static const Activity _activities16[] = {
	{  1,  203 },
	{  9,   49 },
	{ 13,    0 },
	{ 11,    0 },
	{  2,    3 },
	{  1,  204 },
	{  1,  207 },
	{  2,    3 },
	{  0,    0 }
};

static const Activity _activities17[] = {
	{  1,  203 },
	{  9,   49 },
	{ 13,    0 },
	{ 11,    4 },
	{  2,    3 },
	{  1,  204 },
	{  1,  207 },
	{  2,    3 },
	{  0,    0 }
};

static const Activity _activities18[] = {
	{  1,  183 },
	{  9,   54 },
	{ 13,    0 },
	{  2,    3 },
	{  1,  184 },
	{  2,    3 },
	{  0,    0 }
};

static const Activity _activities19[] = {
	{  1,  156 },
	{  9,   40 },
	{ 10,    0 },
	{  2,    7 },
	{ 10,    0 },
	{  1,  157 },
	{  2,    3 },
	{ 10,    0 },
	{  1,  158 },
	{  2,    3 },
	{ 10,    0 },
	{  1,  157 },
	{  2,    3 },
	{ 10,    0 },
	{  8,    0 },
	{  0,    0 }
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
static void MapActivity_Damage(MapActivity *ma, uint16 parameter)
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
static void MapActivity_PlayVoice(MapActivity *ma, uint16 voiceID)
{
	Voice_PlayAtTile(voiceID, ma->position);
}

/**
 * A No-Op for MapActivity.
 * @param ma The MapActivity.
 * @param parameter Unused parameter.
 */
static void MapActivity_NoOperation(MapActivity *ma, uint16 parameter)
{
	VARIABLE_NOT_USED(ma);
	VARIABLE_NOT_USED(parameter);
}

/**
 * Let a bloom explode.
 * @param ma The MapActivity to perform to explosion on.
 * @param parameter Unused parameter.
 */
static void MapActivity_PerformBloomExplosion(MapActivity *ma, uint16 parameter)
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
static void MapActivity_SetAnimation(MapActivity *ma, uint16 animationMapID)
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
 * Set position at the top of a column.
 * @param ma The MapActivity to change.
 * @param column Column number.
 */
static void MapActivity_SetColumn(MapActivity *ma, uint16 column)
{
	if ((column & 0x800) != 0) column |= 0xF000;
	ma->position.s.x = column;
	ma->position.s.y = 0;
}

/**
 * Set position at the left of a row.
 * @param ma The MapActivity to change.
 * @param row Row number.
 */
static void MapActivity_SetRow(MapActivity *ma, uint16 row)
{
	if ((row & 0x800) != 0) row |= 0xF000;
	ma->position.s.x = 0;
	ma->position.s.y = row;
}

/**
 * Reset the activity counter of activity \a ma.
 * @param ma The MapActivity being reset.
 * @param parameter Unused parameter.
 */
static void MapActivity_ResetActCounter(MapActivity *ma, uint16 parameter)
{
	VARIABLE_NOT_USED(parameter);

	ma->actCounter = 0;
}

/**
 * Stop performing an activity.
 * @param ma The MapActivity to end.
 * @param parameter Unused parameter.
 */
static void MapActivity_StopActivity(MapActivity *ma, uint16 parameter)
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
static void MapActivity_SetTimeout(MapActivity *ma, uint16 value)
{
	ma->timeOut = g_timerGUI + value;
}

/**
 * Set timeout for next the map activity of \a ma to a random value up to \a value.
 * @param ma The MapActivity to change.
 * @param value The maximum amount of timeout.
 */
static void MapActivity_SetRandomTimeout(MapActivity *ma, uint16 value)
{
	ma->timeOut = g_timerGUI + Tools_RandomRange(0, value);
}

/**
 * Set the SpriteID of the MapActivity.
 * @param ma The MapActivity to change.
 * @param spriteID The new SpriteID for the MapActivity.
 */
static void MapActivity_SetSpriteID(MapActivity *ma, uint16 spriteID)
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

		MapActivity_StopActivity(ma, 0);
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
		s->actCounter  = 0;
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
	static MapActivityProc mapActivityFunctions[14] = {
		/* 00 */ MapActivity_StopActivity,
		/* 01 */ MapActivity_SetSpriteID,
		/* 02 */ MapActivity_SetTimeout,
		/* 03 */ MapActivity_SetRandomTimeout,
		/* 04 */ MapActivity_SetSpriteID,
		/* 05 */ MapActivity_ResetActCounter,
		/* 06 */ MapActivity_SetColumn,
		/* 07 */ MapActivity_SetRow,
		/* 08 */ MapActivity_Damage,
		/* 09 */ MapActivity_PlayVoice,
		/* 10 */ MapActivity_NoOperation,
		/* 11 */ MapActivity_SetAnimation,
		/* 12 */ NULL,
		/* 13 */ MapActivity_PerformBloomExplosion
	};

	uint8 i;

	if (s_mapActivityTimeout > g_timerGUI) return s_mapActivityTimeout;

	s_mapActivityTimeout += 10000;

	for (i = 0; i < 32; i++) {
		MapActivity *ma;

		ma = &g_mapActivity[i];

		if (ma->activities == NULL) continue;

		if (ma->timeOut <= g_timerGUI) {
			uint16 parameter = ma->activities[ma->actCounter].parameter;
			uint16 command   = ma->activities[ma->actCounter].command;

			ma->actCounter++;

			/* Any invalid action results in stopping of the activity */
			if (command == 12 || command > 13) command = 0;

			/* Execute the activity */
			mapActivityFunctions[command](ma, parameter);
		}

		if (ma->activities == NULL || ma->timeOut > s_mapActivityTimeout) continue;

		s_mapActivityTimeout = ma->timeOut;
	}

	return s_mapActivityTimeout;
}
