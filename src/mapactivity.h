/* $Id$ */

/** @file src/mapactivity.h MapActivity definitions. */

#ifndef MAPACTIVITY_H
#define MAPACTIVITY_H

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
	uint8  actCounter;                                      /*!< Index in #activities pointing to the next activity. */
	uint16 spriteID;                                        /*!< SpriteID. */
	const Activity *activities;                             /*!< Activities being executed, \c 0x0 means 'unused'. */
	tile32 position;                                        /*!< Position where this activity acts. */
} MapActivity;

typedef void (*MapActivityProc)(MapActivity *ma, uint16 parameter);

extern MapActivity g_mapActivity[];

extern void MapActivity_Initialize(uint16 type, tile32 position);
extern uint32 MapActivity_Tick();

#endif /* MAPACTIVITY_H */
