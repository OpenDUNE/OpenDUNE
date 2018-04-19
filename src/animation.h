/** @file src/animation.h %Animation definitions. */

#ifndef ANIMATE_H
#define ANIMATE_H

/**
 * The valid types for command in AnimationCommandStruct.
 */
typedef enum AnimationCommand {
	ANIMATION_STOP,                                         /*!< Gracefully stop with animation. Clean up the tiles etc. */
	ANIMATION_ABORT,                                        /*!< Abort animation. Leave it as it is. */
	ANIMATION_SET_OVERLAY_TILE,                             /*!< Set a new overlay tile. Param: the new overlay tile. */
	ANIMATION_PAUSE,                                        /*!< Pause the animation. Param: amount of ticks to pause. */
	ANIMATION_REWIND,                                       /*!< Rewind the animation.*/
	ANIMATION_PLAY_VOICE,                                   /*!< Play a voice. Param: the voice to play. */
	ANIMATION_SET_GROUND_TILE,                              /*!< Set a new ground tile. Param: the new ground tile. */
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

extern const AnimationCommandStruct g_table_animation_unitMove[8][8];
extern const AnimationCommandStruct g_table_animation_unitScript1[4][8];
extern const AnimationCommandStruct g_table_animation_unitScript2[4][8];
extern const AnimationCommandStruct g_table_animation_map[16][8];
extern const AnimationCommandStruct g_table_animation_structure[29][16];

extern void Animation_Init(void);
extern void Animation_Start(const AnimationCommandStruct *commands, tile32 tile, uint16 tileLayout, uint8 houseID, uint8 iconGroup);
extern void Animation_Stop_ByTile(uint16 packed);
extern void Animation_Tick(void);

#endif /* ANIMATE_H */
