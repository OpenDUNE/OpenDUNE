/** @file src/explosion.h Explosion definitions. */

#ifndef EXPLOSION_H
#define EXPLOSION_H

enum {
    EXPLOSION_MAX = 32                                      /*!< The maximum amount of active explosions we can have. */
};

/**
 * Types of Explosions available in the game.
 */
typedef enum ExplosionType {
	EXPLOSION_IMPACT_SMALL        = 0,
	EXPLOSION_IMPACT_MEDIUM       = 1,
	EXPLOSION_IMPACT_LARGE        = 2,
	EXPLOSION_IMPACT_EXPLODE      = 3,
	EXPLOSION_SABOTEUR_DEATH      = 4,
	EXPLOSION_SABOTEUR_INFILTRATE = 5,
	EXPLOSION_TANK_EXPLODE        = 6,
	EXPLOSION_DEVIATOR_GAS        = 7,
	EXPLOSION_SAND_BURST          = 8,
	EXPLOSION_TANK_FLAMES         = 9,
	EXPLOSION_WHEELED_VEHICLE     = 10,
	EXPLOSION_DEATH_HAND          = 11,
	EXPLOSION_UNUSED_12           = 12,
	EXPLOSION_SANDWORM_SWALLOW    = 13,
	EXPLOSION_STRUCTURE           = 14,
	EXPLOSION_SMOKE_PLUME         = 15,
	EXPLOSION_ORNITHOPTER_CRASH   = 16,
	EXPLOSION_CARRYALL_CRASH      = 17,
	EXPLOSION_MINI_ROCKET         = 18,
	EXPLOSION_SPICE_BLOOM_TREMOR  = 19,

	EXPLOSION_INVALID             = 0xFFFF
} ExplosionType;

/**
 * The valid types for command in Explosion.
 */
typedef enum ExplosionCommand {
	EXPLOSION_STOP,                                         /*!< Stop the Explosion. */
	EXPLOSION_SET_SPRITE,                                   /*!< Set the sprite for the Explosion. */
	EXPLOSION_SET_TIMEOUT,                                  /*!< Set the timeout for the Explosion. */
	EXPLOSION_SET_RANDOM_TIMEOUT,                           /*!< Set a random timeout for the Explosion. */
	EXPLOSION_MOVE_Y_POSITION,                              /*!< Move the Y-position of the Explosion. */
	EXPLOSION_TILE_DAMAGE,                                  /*!< Handle damage to a tile in a Explosion. */
	EXPLOSION_PLAY_VOICE,                                   /*!< Play a voice. */
	EXPLOSION_SCREEN_SHAKE,                                 /*!< Shake the screen around. */
	EXPLOSION_SET_ANIMATION,                                /*!< Set the animation for the Explosion. */
	EXPLOSION_BLOOM_EXPLOSION                               /*!< Make a bloom explode. */
} ExplosionCommand;

/**
 * The layout of a single explosion command.
 */
typedef struct ExplosionCommandStruct {
	uint8  command;                                         /*!< The command of the Explosion. */
	uint16 parameter;                                       /*!< The parameter of the Explosion. */
} ExplosionCommandStruct;

/**
 * The layout of a Explosion.
 */
typedef struct Explosion {
	uint32 timeOut;                                         /*!< Time out for the next command. */
	uint8  houseID;                                         /*!< A houseID. */
	bool   isDirty;                                         /*!< Does the Explosion require a redraw next round. */
	uint8  current;                                         /*!< Index in #commands pointing to the next command. */
	uint16 spriteID;                                        /*!< SpriteID. */
	const ExplosionCommandStruct *commands;                 /*!< Commands being executed. */
	tile32 position;                                        /*!< Position where this explosion acts. */
} Explosion;

extern Explosion g_explosions[];
extern const ExplosionCommandStruct *g_table_explosion[];

extern void Explosion_Start(uint16 explosionType, tile32 position);
extern void Explosion_Tick(void);

#endif /* EXPLOSION_H */
