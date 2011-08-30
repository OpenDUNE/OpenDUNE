/* $Id$ */

/** @file src/table/explosion.c Explosion file table. */

#include "types.h"

#include "../explosion.h"

static const ExplosionCommandStruct s_explosion00[] = {
	{ EXPLOSION_SET_SPRITE        ,  153 },
	{ EXPLOSION_SET_TIMEOUT       ,    3 },
	{ EXPLOSION_BLOOM_EXPLOSION   ,    0 },
	{ EXPLOSION_SET_SPRITE        ,  153 },
	{ EXPLOSION_SET_TIMEOUT       ,    3 },
	{ EXPLOSION_STOP              ,    0 }
};

static const ExplosionCommandStruct s_explosion01[] = {
	{ EXPLOSION_SET_SPRITE        ,  154 },
	{ EXPLOSION_BLOOM_EXPLOSION   ,    0 },
	{ EXPLOSION_SET_TIMEOUT       ,    3 },
	{ EXPLOSION_SET_SPRITE        ,  153 },
	{ EXPLOSION_SET_TIMEOUT       ,    3 },
	{ EXPLOSION_SET_SPRITE        ,  154 },
	{ EXPLOSION_SET_TIMEOUT       ,    3 },
	{ EXPLOSION_STOP              ,    0 }
};

static const ExplosionCommandStruct s_explosion02[] = {
	{ EXPLOSION_SET_SPRITE        ,  183 },
	{ EXPLOSION_PLAY_VOICE        ,   50 },
	{ EXPLOSION_BLOOM_EXPLOSION   ,    0 },
	{ EXPLOSION_TILE_DAMAGE       ,    0 },
	{ EXPLOSION_SET_TIMEOUT       ,   15 },
	{ EXPLOSION_SET_SPRITE        ,  184 },
	{ EXPLOSION_SET_TIMEOUT       ,   15 },
	{ EXPLOSION_STOP              ,    0 }
};

static const ExplosionCommandStruct s_explosion03[] = {
	{ EXPLOSION_SET_SPRITE        ,  183 },
	{ EXPLOSION_PLAY_VOICE        ,   49 },
	{ EXPLOSION_BLOOM_EXPLOSION   ,    0 },
	{ EXPLOSION_TILE_DAMAGE       ,    0 },
	{ EXPLOSION_SET_TIMEOUT       ,    3 },
	{ EXPLOSION_SET_SPRITE        ,  184 },
	{ EXPLOSION_SET_TIMEOUT       ,    3 },
	{ EXPLOSION_STOP              ,    0 }
};

static const ExplosionCommandStruct s_explosion04[] = {
	{ EXPLOSION_SET_SPRITE        ,  203 },
	{ EXPLOSION_PLAY_VOICE        ,   51 },
	{ EXPLOSION_BLOOM_EXPLOSION   ,    0 },
	{ EXPLOSION_TILE_DAMAGE       ,    0 },
	{ EXPLOSION_SET_TIMEOUT       ,    7 },
	{ EXPLOSION_SET_SPRITE        ,  204 },
	{ EXPLOSION_SET_TIMEOUT       ,    3 },
	{ EXPLOSION_SET_SPRITE        ,  205 },
	{ EXPLOSION_SET_TIMEOUT       ,    3 },
	{ EXPLOSION_SET_SPRITE        ,  206 },
	{ EXPLOSION_SET_TIMEOUT       ,    3 },
	{ EXPLOSION_SET_SPRITE        ,  207 },
	{ EXPLOSION_SET_TIMEOUT       ,    3 },
	{ EXPLOSION_STOP              ,    0 }
};

static const ExplosionCommandStruct s_explosion05[] = {
	{ EXPLOSION_SET_RANDOM_TIMEOUT,   60 },
	{ EXPLOSION_SET_SPRITE        ,  203 },
	{ EXPLOSION_PLAY_VOICE        ,   41 },
	{ EXPLOSION_BLOOM_EXPLOSION   ,    0 },
	{ EXPLOSION_TILE_DAMAGE       ,    0 },
	{ EXPLOSION_SET_TIMEOUT       ,    7 },
	{ EXPLOSION_SET_SPRITE        ,  204 },
	{ EXPLOSION_SET_TIMEOUT       ,    3 },
	{ EXPLOSION_SET_SPRITE        ,  205 },
	{ EXPLOSION_SET_TIMEOUT       ,    3 },
	{ EXPLOSION_SET_SPRITE        ,  206 },
	{ EXPLOSION_SET_TIMEOUT       ,    3 },
	{ EXPLOSION_SET_SPRITE        ,  207 },
	{ EXPLOSION_SET_TIMEOUT       ,    3 },
	{ EXPLOSION_STOP              ,    0 }
};

static const ExplosionCommandStruct s_explosion06[] = {
	{ EXPLOSION_SET_SPRITE        ,  198 },
	{ EXPLOSION_PLAY_VOICE        ,   51 },
	{ EXPLOSION_BLOOM_EXPLOSION   ,    0 },
	{ EXPLOSION_TILE_DAMAGE       ,    0 },
	{ EXPLOSION_SET_TIMEOUT       ,    7 },
	{ EXPLOSION_SET_SPRITE        ,  199 },
	{ EXPLOSION_SET_TIMEOUT       ,    3 },
	{ EXPLOSION_SET_SPRITE        ,  200 },
	{ EXPLOSION_SET_TIMEOUT       ,    3 },
	{ EXPLOSION_SET_SPRITE        ,  201 },
	{ EXPLOSION_SET_TIMEOUT       ,    3 },
	{ EXPLOSION_SET_SPRITE        ,  202 },
	{ EXPLOSION_SET_TIMEOUT       ,    3 },
	{ EXPLOSION_STOP              ,    0 }
};

static const ExplosionCommandStruct s_explosion07[] = {
	{ EXPLOSION_SET_SPRITE        ,  208 },
	{ EXPLOSION_PLAY_VOICE        ,   39 },
	{ EXPLOSION_SET_TIMEOUT       ,   15 },
	{ EXPLOSION_SET_SPRITE        ,  209 },
	{ EXPLOSION_SET_TIMEOUT       ,   15 },
	{ EXPLOSION_SET_SPRITE        ,  210 },
	{ EXPLOSION_SET_TIMEOUT       ,   15 },
	{ EXPLOSION_SET_SPRITE        ,  211 },
	{ EXPLOSION_SET_TIMEOUT       ,   15 },
	{ EXPLOSION_SET_SPRITE        ,  212 },
	{ EXPLOSION_SET_TIMEOUT       ,   15 },
	{ EXPLOSION_STOP              ,    0 }
};

static const ExplosionCommandStruct s_explosion08[] = {
	{ EXPLOSION_SET_SPRITE        ,  156 },
	{ EXPLOSION_PLAY_VOICE        ,   40 },
	{ EXPLOSION_BLOOM_EXPLOSION   ,    0 },
	{ EXPLOSION_SET_TIMEOUT       ,    7 },
	{ EXPLOSION_SET_SPRITE        ,  157 },
	{ EXPLOSION_SET_TIMEOUT       ,    3 },
	{ EXPLOSION_SET_SPRITE        ,  158 },
	{ EXPLOSION_SET_TIMEOUT       ,    3 },
	{ EXPLOSION_SET_SPRITE        ,  157 },
	{ EXPLOSION_SET_TIMEOUT       ,    3 },
	{ EXPLOSION_TILE_DAMAGE       ,    0 },
	{ EXPLOSION_STOP              ,    0 }
};

static const ExplosionCommandStruct s_explosion09[] = {
	{ EXPLOSION_SET_SPRITE        ,  183 },
	{ EXPLOSION_PLAY_VOICE        ,   41 },
	{ EXPLOSION_BLOOM_EXPLOSION   ,    0 },
	{ EXPLOSION_TILE_DAMAGE       ,    0 },
	{ EXPLOSION_SET_TIMEOUT       ,    3 },
	{ EXPLOSION_SET_SPRITE        ,  203 },
	{ EXPLOSION_SET_TIMEOUT       ,    3 },
	{ EXPLOSION_SET_ROW           , 4016 },
	{ EXPLOSION_SET_SPRITE        ,  168 },
	{ EXPLOSION_SET_TIMEOUT       ,   15 },
	{ EXPLOSION_SET_SPRITE        ,  169 },
	{ EXPLOSION_SET_TIMEOUT       ,   15 },
	{ EXPLOSION_SET_SPRITE        ,  170 },
	{ EXPLOSION_SET_TIMEOUT       ,   15 },
	{ EXPLOSION_SET_SPRITE        ,  168 },
	{ EXPLOSION_SET_TIMEOUT       ,   15 },
	{ EXPLOSION_SET_SPRITE        ,  169 },
	{ EXPLOSION_SET_TIMEOUT       ,   15 },
	{ EXPLOSION_SET_SPRITE        ,  170 },
	{ EXPLOSION_SET_TIMEOUT       ,   15 },
	{ EXPLOSION_SET_SPRITE        ,  168 },
	{ EXPLOSION_SET_TIMEOUT       ,   15 },
	{ EXPLOSION_SET_SPRITE        ,  169 },
	{ EXPLOSION_SET_TIMEOUT       ,   15 },
	{ EXPLOSION_SET_SPRITE        ,  170 },
	{ EXPLOSION_SET_TIMEOUT       ,   15 },
	{ EXPLOSION_SET_SPRITE        ,  168 },
	{ EXPLOSION_SET_TIMEOUT       ,   15 },
	{ EXPLOSION_SET_SPRITE        ,  169 },
	{ EXPLOSION_SET_TIMEOUT       ,   15 },
	{ EXPLOSION_SET_SPRITE        ,  170 },
	{ EXPLOSION_SET_TIMEOUT       ,   15 },
	{ EXPLOSION_SET_SPRITE        ,  168 },
	{ EXPLOSION_SET_TIMEOUT       ,   15 },
	{ EXPLOSION_SET_SPRITE        ,  169 },
	{ EXPLOSION_SET_TIMEOUT       ,   15 },
	{ EXPLOSION_SET_SPRITE        ,  170 },
	{ EXPLOSION_SET_TIMEOUT       ,   15 },
	{ EXPLOSION_STOP              ,    0 }
};

static const ExplosionCommandStruct s_explosion10[] = {
	{ EXPLOSION_SET_SPRITE        ,  151 },
	{ EXPLOSION_PLAY_VOICE        ,   49 },
	{ EXPLOSION_BLOOM_EXPLOSION   ,    0 },
	{ EXPLOSION_TILE_DAMAGE       ,    0 },
	{ EXPLOSION_SET_TIMEOUT       ,    7 },
	{ EXPLOSION_SET_SPRITE        ,  152 },
	{ EXPLOSION_SET_TIMEOUT       ,    7 },
	{ EXPLOSION_STOP              ,    0 }
};

static const ExplosionCommandStruct s_explosion11[] = {
	{ EXPLOSION_SET_RANDOM_TIMEOUT,   60 },
	{ EXPLOSION_SET_SPRITE        ,  188 },
	{ EXPLOSION_PLAY_VOICE        ,   51 },
	{ EXPLOSION_BLOOM_EXPLOSION   ,    0 },
	{ EXPLOSION_TILE_DAMAGE       ,    0 },
	{ EXPLOSION_SET_TIMEOUT       ,    7 },
	{ EXPLOSION_SET_SPRITE        ,  189 },
	{ EXPLOSION_SET_TIMEOUT       ,    3 },
	{ EXPLOSION_SET_SPRITE        ,  190 },
	{ EXPLOSION_SET_TIMEOUT       ,    3 },
	{ EXPLOSION_SET_SPRITE        ,  191 },
	{ EXPLOSION_SET_TIMEOUT       ,    3 },
	{ EXPLOSION_SET_SPRITE        ,  192 },
	{ EXPLOSION_SET_TIMEOUT       ,    3 },
	{ EXPLOSION_STOP              ,    0 }
};

static const ExplosionCommandStruct s_explosion12[] = {
	{ EXPLOSION_SET_SPRITE        ,  213 },
	{ EXPLOSION_SET_TIMEOUT       ,   15 },
	{ EXPLOSION_SET_SPRITE        ,  214 },
	{ EXPLOSION_SET_TIMEOUT       ,   15 },
	{ EXPLOSION_SET_SPRITE        ,  215 },
	{ EXPLOSION_SET_TIMEOUT       ,   15 },
	{ EXPLOSION_SET_SPRITE        ,  216 },
	{ EXPLOSION_SET_TIMEOUT       ,   15 },
	{ EXPLOSION_SET_SPRITE        ,  217 },
	{ EXPLOSION_SET_TIMEOUT       ,   30 },
	{ EXPLOSION_STOP              ,    0 }
};

static const ExplosionCommandStruct s_explosion13[] = {
	{ EXPLOSION_SET_SPRITE        ,  218 },
	{ EXPLOSION_SET_TIMEOUT       ,   15 },
	{ EXPLOSION_SET_SPRITE        ,  219 },
	{ EXPLOSION_SET_TIMEOUT       ,   15 },
	{ EXPLOSION_SET_SPRITE        ,  220 },
	{ EXPLOSION_SET_TIMEOUT       ,   15 },
	{ EXPLOSION_SET_SPRITE        ,  221 },
	{ EXPLOSION_SET_TIMEOUT       ,   15 },
	{ EXPLOSION_SET_SPRITE        ,  222 },
	{ EXPLOSION_SET_TIMEOUT       ,   30 },
	{ EXPLOSION_STOP              ,    0 }
};

static const ExplosionCommandStruct s_explosion14[] = {
	{ EXPLOSION_SET_RANDOM_TIMEOUT,   60 },
	{ EXPLOSION_SET_SPRITE        ,  188 },
	{ EXPLOSION_PLAY_VOICE        ,   51 },
	{ EXPLOSION_SET_TIMEOUT       ,    7 },
	{ EXPLOSION_SET_SPRITE        ,  189 },
	{ EXPLOSION_BLOOM_EXPLOSION   ,    0 },
	{ EXPLOSION_NOOP              ,    0 },
	{ EXPLOSION_SET_TIMEOUT       ,    3 },
	{ EXPLOSION_SET_SPRITE        ,  190 },
	{ EXPLOSION_SET_TIMEOUT       ,    3 },
	{ EXPLOSION_SET_SPRITE        ,  191 },
	{ EXPLOSION_SET_TIMEOUT       ,    3 },
	{ EXPLOSION_SET_SPRITE        ,  192 },
	{ EXPLOSION_SET_TIMEOUT       ,    3 },
	{ EXPLOSION_STOP              ,    0 }
};

static const ExplosionCommandStruct s_explosion15[] = {
	{ EXPLOSION_SET_SPRITE        ,  183 },
	{ EXPLOSION_PLAY_VOICE        ,   49 },
	{ EXPLOSION_SET_ROW           , 4016 },
	{ EXPLOSION_SET_TIMEOUT       ,    3 },
	{ EXPLOSION_SET_SPRITE        ,  184 },
	{ EXPLOSION_SET_TIMEOUT       ,    3 },
	{ EXPLOSION_SET_SPRITE        ,  180 },
	{ EXPLOSION_SET_TIMEOUT       ,   15 },
	{ EXPLOSION_SET_SPRITE        ,  181 },
	{ EXPLOSION_SET_TIMEOUT       ,   15 },
	{ EXPLOSION_SET_SPRITE        ,  182 },
	{ EXPLOSION_SET_TIMEOUT       ,   15 },
	{ EXPLOSION_SET_SPRITE        ,  181 },
	{ EXPLOSION_SET_TIMEOUT       ,   15 },
	{ EXPLOSION_SET_SPRITE        ,  180 },
	{ EXPLOSION_SET_TIMEOUT       ,   15 },
	{ EXPLOSION_SET_SPRITE        ,  181 },
	{ EXPLOSION_SET_TIMEOUT       ,   15 },
	{ EXPLOSION_SET_SPRITE        ,  182 },
	{ EXPLOSION_SET_TIMEOUT       ,   15 },
	{ EXPLOSION_SET_SPRITE        ,  181 },
	{ EXPLOSION_SET_TIMEOUT       ,   15 },
	{ EXPLOSION_SET_SPRITE        ,  180 },
	{ EXPLOSION_SET_TIMEOUT       ,   15 },
	{ EXPLOSION_SET_SPRITE        ,  181 },
	{ EXPLOSION_SET_TIMEOUT       ,   15 },
	{ EXPLOSION_SET_SPRITE        ,  182 },
	{ EXPLOSION_SET_TIMEOUT       ,   15 },
	{ EXPLOSION_SET_SPRITE        ,  181 },
	{ EXPLOSION_SET_TIMEOUT       ,   15 },
	{ EXPLOSION_SET_SPRITE        ,  180 },
	{ EXPLOSION_SET_TIMEOUT       ,   15 },
	{ EXPLOSION_SET_SPRITE        ,  181 },
	{ EXPLOSION_SET_TIMEOUT       ,   15 },
	{ EXPLOSION_SET_SPRITE        ,  182 },
	{ EXPLOSION_SET_TIMEOUT       ,   15 },
	{ EXPLOSION_SET_SPRITE        ,  181 },
	{ EXPLOSION_SET_TIMEOUT       ,   15 },
	{ EXPLOSION_SET_SPRITE        ,  180 },
	{ EXPLOSION_SET_TIMEOUT       ,   15 },
	{ EXPLOSION_SET_SPRITE        ,  181 },
	{ EXPLOSION_SET_TIMEOUT       ,   15 },
	{ EXPLOSION_SET_SPRITE        ,  182 },
	{ EXPLOSION_SET_TIMEOUT       ,   15 },
	{ EXPLOSION_SET_SPRITE        ,  181 },
	{ EXPLOSION_SET_TIMEOUT       ,   15 },
	{ EXPLOSION_SET_SPRITE        ,  180 },
	{ EXPLOSION_SET_TIMEOUT       ,   15 },
	{ EXPLOSION_SET_SPRITE        ,  181 },
	{ EXPLOSION_SET_TIMEOUT       ,   15 },
	{ EXPLOSION_SET_SPRITE        ,  182 },
	{ EXPLOSION_SET_TIMEOUT       ,   15 },
	{ EXPLOSION_SET_SPRITE        ,  181 },
	{ EXPLOSION_SET_TIMEOUT       ,   15 },
	{ EXPLOSION_STOP              ,    0 }
};

static const ExplosionCommandStruct s_explosion16[] = {
	{ EXPLOSION_SET_SPRITE        ,  203 },
	{ EXPLOSION_PLAY_VOICE        ,   49 },
	{ EXPLOSION_BLOOM_EXPLOSION   ,    0 },
	{ EXPLOSION_SET_ANIMATION     ,    0 },
	{ EXPLOSION_SET_TIMEOUT       ,    3 },
	{ EXPLOSION_SET_SPRITE        ,  204 },
	{ EXPLOSION_SET_SPRITE        ,  207 },
	{ EXPLOSION_SET_TIMEOUT       ,    3 },
	{ EXPLOSION_STOP              ,    0 }
};

static const ExplosionCommandStruct s_explosion17[] = {
	{ EXPLOSION_SET_SPRITE        ,  203 },
	{ EXPLOSION_PLAY_VOICE        ,   49 },
	{ EXPLOSION_BLOOM_EXPLOSION   ,    0 },
	{ EXPLOSION_SET_ANIMATION     ,    4 },
	{ EXPLOSION_SET_TIMEOUT       ,    3 },
	{ EXPLOSION_SET_SPRITE        ,  204 },
	{ EXPLOSION_SET_SPRITE        ,  207 },
	{ EXPLOSION_SET_TIMEOUT       ,    3 },
	{ EXPLOSION_STOP              ,    0 }
};

static const ExplosionCommandStruct s_explosion18[] = {
	{ EXPLOSION_SET_SPRITE        ,  183 },
	{ EXPLOSION_PLAY_VOICE        ,   54 },
	{ EXPLOSION_BLOOM_EXPLOSION   ,    0 },
	{ EXPLOSION_SET_TIMEOUT       ,    3 },
	{ EXPLOSION_SET_SPRITE        ,  184 },
	{ EXPLOSION_SET_TIMEOUT       ,    3 },
	{ EXPLOSION_STOP              ,    0 }
};

static const ExplosionCommandStruct s_explosion19[] = {
	{ EXPLOSION_SET_SPRITE        ,  156 },
	{ EXPLOSION_PLAY_VOICE        ,   40 },
	{ EXPLOSION_NOOP              ,    0 },
	{ EXPLOSION_SET_TIMEOUT       ,    7 },
	{ EXPLOSION_NOOP              ,    0 },
	{ EXPLOSION_SET_SPRITE        ,  157 },
	{ EXPLOSION_SET_TIMEOUT       ,    3 },
	{ EXPLOSION_NOOP              ,    0 },
	{ EXPLOSION_SET_SPRITE        ,  158 },
	{ EXPLOSION_SET_TIMEOUT       ,    3 },
	{ EXPLOSION_NOOP              ,    0 },
	{ EXPLOSION_SET_SPRITE        ,  157 },
	{ EXPLOSION_SET_TIMEOUT       ,    3 },
	{ EXPLOSION_NOOP              ,    0 },
	{ EXPLOSION_TILE_DAMAGE       ,    0 },
	{ EXPLOSION_STOP              ,    0 }
};

const ExplosionCommandStruct *g_table_explosion[] = {
	s_explosion00,
	s_explosion01,
	s_explosion02,
	s_explosion03,
	s_explosion04,
	s_explosion05,
	s_explosion06,
	s_explosion07,
	s_explosion08,
	s_explosion09,
	s_explosion10,
	s_explosion11,
	s_explosion12,
	s_explosion13,
	s_explosion14,
	s_explosion15,
	s_explosion16,
	s_explosion17,
	s_explosion18,
	s_explosion19
};
