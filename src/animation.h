/* $Id$ */

/** @file src/animation.h %Animation definitions. */

#ifndef ANIMATE_H
#define ANIMATE_H

enum {
    ANIMATION_MAX = 112                                     /*!< The maximum amount of active animations we can have. */
};

/**
 * Information about an active animation.
 */
typedef struct Animation {
	uint32  tickNext;                                       /*!< Which tick this Animation should be called again. */
	uint16  tileLayout;                                     /*!< Tile layout of the Animation. */
	uint8   houseID;                                        /*!< House of the item being animated. */
	uint8   current;                                        /*!< At which command we currently are in the Animation. */
	uint8   iconGroup;                                      /*!< Which iconGroup the sprites of the Animation belongs. */
	uint16 *commands;                                       /*!< List of commands for this Animation. */
	tile32  tile;                                           /*!< Top-left tile of Animation. */
} Animation;

extern Animation g_animations[];

extern void Animation_Start(void *commands, tile32 tile, uint16 tileLayout, uint8 houseID, uint8 iconGroup);
extern void Animation_Stop_ByTile(uint16 packed);
extern void Animation_Tick();

#endif /* ANIMATE_H */
