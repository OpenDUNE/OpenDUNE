/* $Id$ */

/** @file src/explosion.h Explosion definitions. */

#ifndef EXPLOSION_H
#define EXPLOSION_H

enum {
    EXPLOSION_MAX = 32                                      /*!< The maximum amount of active explosions we can have. */
};

/**
 * The valid types for command in Activity.
 */
typedef enum ActivityCommand {
	EXPLOSION_STOP,                                         /*!< Stop the Explosion. */
	EXPLOSION_SET_SPRITE,                                   /*!< Set the sprite for the Explosion. */
	EXPLOSION_SET_TIMEOUT,                                  /*!< Set the timeout for the Explosion. */
	EXPLOSION_SET_RANDOM_TIMEOUT,                           /*!< Set a random timeout for the Explosion. */
	EXPLOSION_SET_ROW,                                      /*!< Set the row of the position for the Explosion. */
	EXPLOSION_TILE_DAMAGE,                                  /*!< Handle damage to a tile in a Explosion. */
	EXPLOSION_PLAY_VOICE,                                   /*!< Play a voice. */
	EXPLOSION_NOOP,                                         /*!< Do nothing. */
	EXPLOSION_SET_ANIMATION,                                /*!< Set the animation for the Explosion. */
	EXPLOSION_BLOOM_EXPLOSION                               /*!< Make a bloom explode. */
} ActivityCommand;

/**
 * The layout of a single activity.
 */
typedef struct ExplosionCommandStruct {
	uint8  command;                                         /*!< The command of the Activity. */
	uint16 parameter;                                       /*!< The parameter of the Activity. */
} ExplosionCommandStruct;

/**
 * The layout of a Explosion.
 */
typedef struct Explosion {
	uint32 timeOut;                                         /*!< Time out for the next activity. */
	uint16 index;                                           /*!< Index in #g_explosion. */
	uint8  houseID;                                         /*!< A houseID. */
	bool   isDirty;                                         /*!< Does the MapAcitivty require a redraw next round. */
	uint8  current;                                         /*!< Index in #activities pointing to the next activity. */
	uint16 spriteID;                                        /*!< SpriteID. */
	const ExplosionCommandStruct *activities;                             /*!< Activities being executed, \c 0x0 means 'unused'. */
	tile32 position;                                        /*!< Position where this activity acts. */
} Explosion;

extern Explosion g_explosions[];
extern const ExplosionCommandStruct *g_table_explosion[];

extern void Explosion_Start(uint16 type, tile32 position);
extern uint32 Explosion_Tick();

#endif /* EXPLOSION_H */
