/* $Id$ */

/** @file src/table/mapactivity.c MapActivity file table. */

#include "types.h"

#include "../mapactivity.h"

static const Activity s_activities00[] = {
	{ MAPACTIVITY_SET_SPRITE        ,  153 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    3 },
	{ MAPACTIVITY_BLOOM_EXPLOSION   ,    0 },
	{ MAPACTIVITY_SET_SPRITE        ,  153 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    3 },
	{ MAPACTIVITY_STOP              ,    0 }
};

static const Activity s_activities01[] = {
	{ MAPACTIVITY_SET_SPRITE        ,  154 },
	{ MAPACTIVITY_BLOOM_EXPLOSION   ,    0 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    3 },
	{ MAPACTIVITY_SET_SPRITE        ,  153 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    3 },
	{ MAPACTIVITY_SET_SPRITE        ,  154 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    3 },
	{ MAPACTIVITY_STOP              ,    0 }
};

static const Activity s_activities02[] = {
	{ MAPACTIVITY_SET_SPRITE        ,  183 },
	{ MAPACTIVITY_PLAY_VOICE        ,   50 },
	{ MAPACTIVITY_BLOOM_EXPLOSION   ,    0 },
	{ MAPACTIVITY_TILE_DAMAGE       ,    0 },
	{ MAPACTIVITY_SET_TIMEOUT       ,   15 },
	{ MAPACTIVITY_SET_SPRITE        ,  184 },
	{ MAPACTIVITY_SET_TIMEOUT       ,   15 },
	{ MAPACTIVITY_STOP              ,    0 }
};

static const Activity s_activities03[] = {
	{ MAPACTIVITY_SET_SPRITE        ,  183 },
	{ MAPACTIVITY_PLAY_VOICE        ,   49 },
	{ MAPACTIVITY_BLOOM_EXPLOSION   ,    0 },
	{ MAPACTIVITY_TILE_DAMAGE       ,    0 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    3 },
	{ MAPACTIVITY_SET_SPRITE        ,  184 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    3 },
	{ MAPACTIVITY_STOP              ,    0 }
};

static const Activity s_activities04[] = {
	{ MAPACTIVITY_SET_SPRITE        ,  203 },
	{ MAPACTIVITY_PLAY_VOICE        ,   51 },
	{ MAPACTIVITY_BLOOM_EXPLOSION   ,    0 },
	{ MAPACTIVITY_TILE_DAMAGE       ,    0 },
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

static const Activity s_activities05[] = {
	{ MAPACTIVITY_SET_RANDOM_TIMEOUT,   60 },
	{ MAPACTIVITY_SET_SPRITE        ,  203 },
	{ MAPACTIVITY_PLAY_VOICE        ,   41 },
	{ MAPACTIVITY_BLOOM_EXPLOSION   ,    0 },
	{ MAPACTIVITY_TILE_DAMAGE       ,    0 },
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

static const Activity s_activities06[] = {
	{ MAPACTIVITY_SET_SPRITE        ,  198 },
	{ MAPACTIVITY_PLAY_VOICE        ,   51 },
	{ MAPACTIVITY_BLOOM_EXPLOSION   ,    0 },
	{ MAPACTIVITY_TILE_DAMAGE       ,    0 },
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

static const Activity s_activities07[] = {
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

static const Activity s_activities08[] = {
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
	{ MAPACTIVITY_TILE_DAMAGE       ,    0 },
	{ MAPACTIVITY_STOP              ,    0 }
};

static const Activity s_activities09[] = {
	{ MAPACTIVITY_SET_SPRITE        ,  183 },
	{ MAPACTIVITY_PLAY_VOICE        ,   41 },
	{ MAPACTIVITY_BLOOM_EXPLOSION   ,    0 },
	{ MAPACTIVITY_TILE_DAMAGE       ,    0 },
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

static const Activity s_activities10[] = {
	{ MAPACTIVITY_SET_SPRITE        ,  151 },
	{ MAPACTIVITY_PLAY_VOICE        ,   49 },
	{ MAPACTIVITY_BLOOM_EXPLOSION   ,    0 },
	{ MAPACTIVITY_TILE_DAMAGE       ,    0 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    7 },
	{ MAPACTIVITY_SET_SPRITE        ,  152 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    7 },
	{ MAPACTIVITY_STOP              ,    0 }
};

static const Activity s_activities11[] = {
	{ MAPACTIVITY_SET_RANDOM_TIMEOUT,   60 },
	{ MAPACTIVITY_SET_SPRITE        ,  188 },
	{ MAPACTIVITY_PLAY_VOICE        ,   51 },
	{ MAPACTIVITY_BLOOM_EXPLOSION   ,    0 },
	{ MAPACTIVITY_TILE_DAMAGE       ,    0 },
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

static const Activity s_activities12[] = {
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

static const Activity s_activities13[] = {
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

static const Activity s_activities14[] = {
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

static const Activity s_activities15[] = {
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

static const Activity s_activities16[] = {
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

static const Activity s_activities17[] = {
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

static const Activity s_activities18[] = {
	{ MAPACTIVITY_SET_SPRITE        ,  183 },
	{ MAPACTIVITY_PLAY_VOICE        ,   54 },
	{ MAPACTIVITY_BLOOM_EXPLOSION   ,    0 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    3 },
	{ MAPACTIVITY_SET_SPRITE        ,  184 },
	{ MAPACTIVITY_SET_TIMEOUT       ,    3 },
	{ MAPACTIVITY_STOP              ,    0 }
};

static const Activity s_activities19[] = {
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
	{ MAPACTIVITY_TILE_DAMAGE       ,    0 },
	{ MAPACTIVITY_STOP              ,    0 }
};

const Activity *g_table_mapActivity[] = {
	s_activities00,
	s_activities01,
	s_activities02,
	s_activities03,
	s_activities04,
	s_activities05,
	s_activities06,
	s_activities07,
	s_activities08,
	s_activities09,
	s_activities10,
	s_activities11,
	s_activities12,
	s_activities13,
	s_activities14,
	s_activities15,
	s_activities16,
	s_activities17,
	s_activities18,
	s_activities19
};
