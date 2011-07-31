/* $Id$ */

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
	ANIMATION_STOP               = 0,                       /*!< Gracefully stop with animation. Clean up the tiles etc. */
	ANIMATION_ABORT              = 1,                       /*!< Abort animation. Leave it as it is. */
	ANIMATION_SET_OVERLAY_SPRITE = 2,                       /*!< Set a new overlay sprite. Param: the new overlay sprite. */
	ANIMATION_PAUSE              = 3,                       /*!< Pause the animation. Param: amount of ticks to pause. */
	ANIMATION_REWIND             = 4,                       /*!< Rewind the animation.*/
	ANIMATION_PLAY_VOICE         = 5,                       /*!< Play a voice. Param: the voice to play. */
	ANIMATION_SET_GROUND_SPRITE  = 6,                       /*!< Set a new ground sprite. Param: the new ground sprite. */
	ANIMATION_FORWARD            = 7,                       /*!< Forward the animation. Param: how many commands to forward. */
	ANIMATION_SET_ICONGROUP      = 8                        /*!< Set a newicongroup. Param: the new icongroup. */
} AnimationCommand;

MSVC_PACKED_BEGIN
/**
 * How a single command looks like.
 */
typedef struct AnimationCommandStruct {
	PACK BIT_S16 parameter:12;                              /*!< The parameter for this command. */
	PACK BIT_U16 command:4;                                 /*!< The command of this command (see AnimationCommand). */
} GCC_PACKED AnimationCommandStruct;
MSVC_PACKED_END
assert_compile(sizeof(AnimationCommandStruct) == 0x2);

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

extern Animation g_animations[];

extern void Animation_Start(void *commands, tile32 tile, uint16 tileLayout, uint8 houseID, uint8 iconGroup);
extern void Animation_Stop_ByTile(uint16 packed);
extern void Animation_Tick();

#endif /* ANIMATE_H */
