/** @file src/animation.h %Animation definitions. */

#ifndef ANIMATE_H
#define ANIMATE_H

enum {
    ANIMATION_MAX = 112                                     /*!< The maximum amount of active animations we can have. */
};

/**
 * The valid types for command in AnimationCommandStruct.
 */
typedef enum AnimationCommand {
	ANIMATION_STOP,                                         /*!< Gracefully stop with animation. Clean up the tiles etc. */
	ANIMATION_ABORT,                                        /*!< Abort animation. Leave it as it is. */
	ANIMATION_SET_OVERLAY_SPRITE,                           /*!< Set a new overlay sprite. Param: the new overlay sprite. */
	ANIMATION_PAUSE,                                        /*!< Pause the animation. Param: amount of ticks to pause. */
	ANIMATION_REWIND,                                       /*!< Rewind the animation.*/
	ANIMATION_PLAY_VOICE,                                   /*!< Play a voice. Param: the voice to play. */
	ANIMATION_SET_GROUND_SPRITE,                            /*!< Set a new ground sprite. Param: the new ground sprite. */
	ANIMATION_FORWARD,                                      /*!< Forward the animation. Param: how many commands to forward. */
	ANIMATION_SET_ICONGROUP                                 /*!< Set a newicongroup. Param: the new icongroup. */
} AnimationCommand;

/**
 * How a single command looks like.
 */
typedef struct AnimationCommandStruct {
	uint8 command;                                          /*!< The command of this command (see AnimationCommand). */
	uint16 parameter;                                       /*!< The parameter for this command. */
} AnimationCommandStruct;

/**
 * Information about an active animation.
 */
typedef struct Animation {
	uint32  tickNext;                                       /*!< Which tick this Animation should be called again. */
	uint16  tileLayout;                                     /*!< Tile layout of the Animation. */
	uint8   houseID;                                        /*!< House of the item being animated. */
	uint8   current;                                        /*!< At which command we currently are in the Animation. */
	uint8   iconGroup;                                      /*!< Which iconGroup the sprites of the Animation belongs. */
	AnimationCommandStruct *commands;                       /*!< List of commands for this Animation. */
	tile32  tile;                                           /*!< Top-left tile of Animation. */
} Animation;

extern AnimationCommandStruct g_table_animation_unitMove[8][8];
extern AnimationCommandStruct g_table_animation_unitScript1[4][8];
extern AnimationCommandStruct g_table_animation_unitScript2[4][8];
extern AnimationCommandStruct g_table_animation_map[16][8];
extern AnimationCommandStruct g_table_animation_structure[29][16];

extern Animation g_animations[];

extern void Animation_Start(void *commands, tile32 tile, uint16 tileLayout, uint8 houseID, uint8 iconGroup);
extern void Animation_Stop_ByTile(uint16 packed);
extern void Animation_Tick(void);

#endif /* ANIMATE_H */
