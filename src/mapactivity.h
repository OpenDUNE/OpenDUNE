/* $Id$ */

/** @file src/mapactivity.h MapActivity definitions. */

#ifndef MAPACTIVITY_H
#define MAPACTIVITY_H

/**
 * The valid types for command in Activity.
 */
typedef enum ActivityCommand {
	MAPACTIVITY_STOP,                                       /*!< Stop the MapActivity. */
	MAPACTIVITY_SET_SPRITE,                                 /*!< Set the sprite for the MapActivity. */
	MAPACTIVITY_SET_TIMEOUT,                                /*!< Set the timeout for the MapActivity. */
	MAPACTIVITY_SET_RANDOM_TIMEOUT,                         /*!< Set a random timeout for the MapActivity. */
	MAPACTIVITY_SET_ROW,                                    /*!< Set the row of the position for the MapActivity. */
	MAPACTIVITY_DAMAGE,                                     /*!< Handle damage to a tile in a MapActivity. */
	MAPACTIVITY_PLAY_VOICE,                                 /*!< Play a voice. */
	MAPACTIVITY_NOOP,                                       /*!< Do nothing. */
	MAPACTIVITY_SET_ANIMATION,                              /*!< Set the animation for the MapActivity. */
	MAPACTIVITY_BLOOM_EXPLOSION                             /*!< Make a bloom explode. */
} ActivityCommand;

/**
 * The layout of a single activity.
 */
typedef struct Activity {
	uint8  command;                                         /*!< The command of the Activity. */
	uint16 parameter;                                       /*!< The parameter of the Activity. */
} Activity;

/**
 * The layout of a MapActivity.
 */
typedef struct MapActivity {
	uint32 timeOut;                                         /*!< Time out for the next activity. */
	uint16 index;                                           /*!< Index in #g_mapActivity. */
	uint8  houseID;                                         /*!< A houseID. */
	bool   isDirty;                                         /*!< Does the MapAcitivty require a redraw next round. */
	uint8  current;                                         /*!< Index in #activities pointing to the next activity. */
	uint16 spriteID;                                        /*!< SpriteID. */
	const Activity *activities;                             /*!< Activities being executed, \c 0x0 means 'unused'. */
	tile32 position;                                        /*!< Position where this activity acts. */
} MapActivity;

extern MapActivity g_mapActivity[];

extern void MapActivity_Initialize(uint16 type, tile32 position);
extern uint32 MapActivity_Tick();

#endif /* MAPACTIVITY_H */
