/** @file src/table/animation.c Animation file table. */

#include "types.h"

#include "../animation.h"

AnimationCommandStruct g_table_animation_unitMove[8][8] = {
		{ /* 0 */
			{ ANIMATION_SET_OVERLAY_SPRITE, 0 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_SET_OVERLAY_SPRITE, 4 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_STOP              , 0 }
		},
		{ /* 1 */
			{ ANIMATION_SET_OVERLAY_SPRITE, 1 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_SET_OVERLAY_SPRITE, 5 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_STOP              , 0 }
		},
		{ /* 2 */
			{ ANIMATION_SET_OVERLAY_SPRITE, 2 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_SET_OVERLAY_SPRITE, 6 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_STOP              , 0 }
		},
		{ /* 3 */
			{ ANIMATION_SET_OVERLAY_SPRITE, 3 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_SET_OVERLAY_SPRITE, 7 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_STOP              , 0 }
		},
		{ /* 4 */
			{ ANIMATION_SET_OVERLAY_SPRITE, 0 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_SET_OVERLAY_SPRITE, 4 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_STOP              , 0 }
		},
		{ /* 5 */
			{ ANIMATION_SET_OVERLAY_SPRITE, 1 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_SET_OVERLAY_SPRITE, 5 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_STOP              , 0 }
		},
		{ /* 6 */
			{ ANIMATION_SET_OVERLAY_SPRITE, 2 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_SET_OVERLAY_SPRITE, 6 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_STOP              , 0 }
		},
		{ /* 7 */
			{ ANIMATION_SET_OVERLAY_SPRITE, 3 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_SET_OVERLAY_SPRITE, 7 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_STOP              , 0 }
		}
};

AnimationCommandStruct g_table_animation_unitScript1[4][8] = {
		{ /* 0 */
			{ ANIMATION_SET_OVERLAY_SPRITE, 0 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_SET_OVERLAY_SPRITE, 1 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_STOP              , 0 }
		},
		{ /* 1 */
			{ ANIMATION_SET_OVERLAY_SPRITE, 0 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_STOP              , 0 }
		},
		{ /* 2 */
			{ ANIMATION_SET_OVERLAY_SPRITE, 4 },
			{ ANIMATION_PLAY_VOICE        , 35 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_STOP              , 0 }
		},
		{ /* 3 */
			{ ANIMATION_SET_OVERLAY_SPRITE, 5 },
			{ ANIMATION_PLAY_VOICE        , 35 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_STOP              , 0 }
		}
};

AnimationCommandStruct g_table_animation_unitScript2[4][8] = {
		{ /* 0 */
			{ ANIMATION_SET_OVERLAY_SPRITE, 2 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_SET_OVERLAY_SPRITE, 3 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_STOP              , 0 }
		},
		{ /* 1 */
			{ ANIMATION_SET_OVERLAY_SPRITE, 2 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_STOP              , 0 }
		},
		{ /* 2 */
			{ ANIMATION_SET_OVERLAY_SPRITE, 4 },
			{ ANIMATION_PLAY_VOICE        , 35 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_STOP              , 0 }
		},
		{ /* 3 */
			{ ANIMATION_SET_OVERLAY_SPRITE, 5 },
			{ ANIMATION_PLAY_VOICE        , 35 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_STOP              , 0 }
		}
};

AnimationCommandStruct g_table_animation_map[16][8] = {
		{ /* 0 */
			{ ANIMATION_SET_OVERLAY_SPRITE, 1 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_SET_OVERLAY_SPRITE, 2 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_STOP              , 0 }
		},
		{ /* 1 */
			{ ANIMATION_SET_OVERLAY_SPRITE, 1 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_SET_OVERLAY_SPRITE, 2 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_STOP              , 0 }
		},
		{ /* 2 */
			{ ANIMATION_SET_OVERLAY_SPRITE, 0 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_STOP              , 0 }
		},
		{ /* 3 */
			{ ANIMATION_SET_OVERLAY_SPRITE, 0 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_STOP              , 0 }
		},
		{ /* 4 */
			{ ANIMATION_SET_OVERLAY_SPRITE, 4 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_SET_OVERLAY_SPRITE, 5 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_STOP              , 0 }
		},
		{ /* 5 */
			{ ANIMATION_SET_OVERLAY_SPRITE, 4 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_SET_OVERLAY_SPRITE, 5 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_STOP              , 0 }
		},
		{ /* 6 */
			{ ANIMATION_SET_OVERLAY_SPRITE, 3 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_STOP              , 0 }
		},
		{ /* 7 */
			{ ANIMATION_SET_OVERLAY_SPRITE, 3 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_STOP              , 0 }
		},
		{ /* 8 */
			{ ANIMATION_STOP              , 0 },
		},
		{ /* 9 */
			{ ANIMATION_STOP              , 0 },
		},
		{ /* 10 */
			{ ANIMATION_STOP              , 0 },
		},
		{ /* 11 */
			{ ANIMATION_STOP              , 0 },
		},
		{ /* 12 */
			{ ANIMATION_STOP              , 0 },
		},
		{ /* 13 */
			{ ANIMATION_STOP              , 0 },
		},
		{ /* 14 */
			{ ANIMATION_STOP              , 0 },
		},
		{ /* 15 */
			{ ANIMATION_STOP              , 0 },
		}
};

AnimationCommandStruct g_table_animation_structure[29][16] = {
		{ /* 0 */
			{ ANIMATION_SET_GROUND_SPRITE , 1 },
			{ ANIMATION_PAUSE             , 300 },
			{ ANIMATION_ABORT             , 0 }
		},
		{ /* 1 */
			{ ANIMATION_SET_GROUND_SPRITE , 0 },
			{ ANIMATION_ABORT             , 0 }
		},
		{ /* 2 */
			{ ANIMATION_SET_GROUND_SPRITE , 2 },
			{ ANIMATION_PAUSE             , 300 },
			{ ANIMATION_ABORT             , 0 }
		},
		{ /* 3 */
			{ ANIMATION_SET_GROUND_SPRITE , 2 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_SET_GROUND_SPRITE , 3 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_SET_GROUND_SPRITE , 4 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_SET_GROUND_SPRITE , 5 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_REWIND            , 0 }
		},
		{ /* 4 */
			{ ANIMATION_SET_GROUND_SPRITE , 2 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_SET_GROUND_SPRITE , 3 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_REWIND            , 0 }
		},
		{ /* 5 */
			{ ANIMATION_SET_GROUND_SPRITE , 2 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_SET_GROUND_SPRITE , 3 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_REWIND            , 0 }
		},
		{ /* 6 */
			{ ANIMATION_SET_GROUND_SPRITE , 2 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_SET_GROUND_SPRITE , 5 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_SET_GROUND_SPRITE , 6 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_SET_GROUND_SPRITE , 7 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_REWIND            , 0 }
		},
		{ /* 7 */
			{ ANIMATION_SET_GROUND_SPRITE , 8 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_SET_GROUND_SPRITE , 9 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_REWIND            , 0 }
		},
		{ /* 8 */
			{ ANIMATION_SET_GROUND_SPRITE , 2 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_SET_GROUND_SPRITE , 3 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_REWIND            , 0 }
		},
		{ /* 9 */
			{ ANIMATION_SET_GROUND_SPRITE , 7 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_SET_GROUND_SPRITE , 6 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_SET_GROUND_SPRITE , 5 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_SET_GROUND_SPRITE , 4 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_FORWARD           , -4 }
		},
		{ /* 10 */
			{ ANIMATION_SET_GROUND_SPRITE , 4 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_SET_GROUND_SPRITE , 5 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_SET_GROUND_SPRITE , 6 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_SET_GROUND_SPRITE , 7 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_FORWARD           , -4 }
		},
		{ /* 11 */
			{ ANIMATION_SET_GROUND_SPRITE , 2 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_SET_GROUND_SPRITE , 3 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_REWIND            , 0 }
		},
		{ /* 12 */
			{ ANIMATION_SET_GROUND_SPRITE , 2 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_SET_GROUND_SPRITE , 3 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_REWIND            , 0 }
		},
		{ /* 13 */
			{ ANIMATION_SET_GROUND_SPRITE , 4 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_SET_GROUND_SPRITE , 5 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_SET_GROUND_SPRITE , 6 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_SET_GROUND_SPRITE , 7 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_FORWARD           , -4 }
		},
		{ /* 14 */
			{ ANIMATION_SET_GROUND_SPRITE , 2 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_SET_GROUND_SPRITE , 3 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_REWIND            , 0 }
		},
		{ /* 15 */
			{ ANIMATION_SET_GROUND_SPRITE , 2 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_SET_GROUND_SPRITE , 3 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_REWIND            , 0 }
		},
		{ /* 16 */
			{ ANIMATION_SET_GROUND_SPRITE , 2 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_SET_GROUND_SPRITE , 5 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_SET_GROUND_SPRITE , 3 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_SET_GROUND_SPRITE , 4 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_SET_GROUND_SPRITE , 2 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_SET_GROUND_SPRITE , 5 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_SET_GROUND_SPRITE , 4 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_FORWARD           , -4 }
		},
		{ /* 17 */
			{ ANIMATION_SET_GROUND_SPRITE , 2 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_SET_GROUND_SPRITE , 3 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_REWIND            , 0 }
		},
		{ /* 18 */
			{ ANIMATION_SET_GROUND_SPRITE , 2 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_SET_GROUND_SPRITE , 5 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_SET_GROUND_SPRITE , 6 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_SET_GROUND_SPRITE , 7 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_REWIND            , 0 }
		},
		{ /* 19 */
			{ ANIMATION_SET_GROUND_SPRITE , 8 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_SET_GROUND_SPRITE , 9 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_REWIND            , 0 }
		},
		{ /* 20 */
			{ ANIMATION_SET_GROUND_SPRITE , 2 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_SET_GROUND_SPRITE , 3 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_REWIND            , 0 }
		},
		{ /* 21 */
			{ ANIMATION_SET_GROUND_SPRITE , 2 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_SET_GROUND_SPRITE , 3 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_REWIND            , 0 }
		},
		{ /* 22 */
			{ ANIMATION_SET_GROUND_SPRITE , 2 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_SET_GROUND_SPRITE , 3 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_REWIND            , 0 }
		},
		{ /* 23 */
			{ ANIMATION_SET_GROUND_SPRITE , 8 },
			{ ANIMATION_PAUSE             , 60 },
			{ ANIMATION_SET_GROUND_SPRITE , 9 },
			{ ANIMATION_PAUSE             , 60 },
			{ ANIMATION_SET_GROUND_SPRITE , 6 },
			{ ANIMATION_PAUSE             , 60 },
			{ ANIMATION_SET_GROUND_SPRITE , 5 },
			{ ANIMATION_PAUSE             , 60 },
			{ ANIMATION_SET_GROUND_SPRITE , 2 },
			{ ANIMATION_PAUSE             , 60 },
			{ ANIMATION_SET_GROUND_SPRITE , 3 },
			{ ANIMATION_PAUSE             , 60 },
			{ ANIMATION_FORWARD           , -4 }
		},
		{ /* 24 */
			{ ANIMATION_SET_GROUND_SPRITE , 2 },
			{ ANIMATION_PAUSE             , 60 },
			{ ANIMATION_SET_GROUND_SPRITE , 3 },
			{ ANIMATION_PAUSE             , 60 },
			{ ANIMATION_REWIND            , 0 }
		},
		{ /* 25 */
			{ ANIMATION_SET_GROUND_SPRITE , 2 },
			{ ANIMATION_PAUSE             , 60 },
			{ ANIMATION_SET_GROUND_SPRITE , 5 },
			{ ANIMATION_PAUSE             , 60 },
			{ ANIMATION_SET_GROUND_SPRITE , 6 },
			{ ANIMATION_PAUSE             , 60 },
			{ ANIMATION_SET_GROUND_SPRITE , 9 },
			{ ANIMATION_PAUSE             , 60 },
			{ ANIMATION_SET_GROUND_SPRITE , 8 },
			{ ANIMATION_PAUSE             , 60 },
			{ ANIMATION_FORWARD           , -4 }
		},
		{ /* 26 */
			{ ANIMATION_SET_GROUND_SPRITE , 2 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_SET_GROUND_SPRITE , 3 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_REWIND            , 0 }
		},
		{ /* 27 */
			{ ANIMATION_SET_GROUND_SPRITE , 2 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_SET_GROUND_SPRITE , 3 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_REWIND            , 0 }
		},
		{ /* 28 */
			{ ANIMATION_SET_GROUND_SPRITE , 2 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_SET_GROUND_SPRITE , 3 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_REWIND            , 0 }
		}
};
