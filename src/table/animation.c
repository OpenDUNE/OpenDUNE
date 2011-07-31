/* $Id$ */

/** @file src/table/animation.c Animation file table. */

#include <stdio.h>
#include "types.h"

#include "../animation.h"

AnimationCommandStruct g_table_animation_unitMove[8][8] = {
		{ /* 33C8 / 0 */
			{ ANIMATION_SET_OVERLAY_SPRITE, 0 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_SET_OVERLAY_SPRITE, 4 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_STOP              , 0 }
		},
		{ /* 33C8 / 1 */
			{ ANIMATION_SET_OVERLAY_SPRITE, 1 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_SET_OVERLAY_SPRITE, 5 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_STOP              , 0 }
		},
		{ /* 33C8 / 2 */
			{ ANIMATION_SET_OVERLAY_SPRITE, 2 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_SET_OVERLAY_SPRITE, 6 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_STOP              , 0 }
		},
		{ /* 33C8 / 3 */
			{ ANIMATION_SET_OVERLAY_SPRITE, 3 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_SET_OVERLAY_SPRITE, 7 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_STOP              , 0 }
		},
		{ /* 33C8 / 4 */
			{ ANIMATION_SET_OVERLAY_SPRITE, 0 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_SET_OVERLAY_SPRITE, 4 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_STOP              , 0 }
		},
		{ /* 33C8 / 5 */
			{ ANIMATION_SET_OVERLAY_SPRITE, 1 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_SET_OVERLAY_SPRITE, 5 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_STOP              , 0 }
		},
		{ /* 33C8 / 6 */
			{ ANIMATION_SET_OVERLAY_SPRITE, 2 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_SET_OVERLAY_SPRITE, 6 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_STOP              , 0 }
		},
		{ /* 33C8 / 7 */
			{ ANIMATION_SET_OVERLAY_SPRITE, 3 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_SET_OVERLAY_SPRITE, 7 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_STOP              , 0 }
		}
};

AnimationCommandStruct g_table_animation_unitScript1[4][8] = {
		{ /* 33C8 / 8 */
			{ ANIMATION_SET_OVERLAY_SPRITE, 0 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_SET_OVERLAY_SPRITE, 1 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_STOP              , 0 }
		},
		{ /* 33C8 / 9 */
			{ ANIMATION_SET_OVERLAY_SPRITE, 0 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_STOP              , 0 }
		},
		{ /* 33C8 / 10 */
			{ ANIMATION_SET_OVERLAY_SPRITE, 4 },
			{ ANIMATION_PLAY_VOICE        , 35 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_STOP              , 0 }
		},
		{ /* 33C8 / 11 */
			{ ANIMATION_SET_OVERLAY_SPRITE, 5 },
			{ ANIMATION_PLAY_VOICE        , 35 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_STOP              , 0 }
		}
};

AnimationCommandStruct g_table_animation_unitScript2[4][8] = {
		{ /* 33C8 / 12 */
			{ ANIMATION_SET_OVERLAY_SPRITE, 2 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_SET_OVERLAY_SPRITE, 3 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_STOP              , 0 }
		},
		{ /* 33C8 / 13 */
			{ ANIMATION_SET_OVERLAY_SPRITE, 2 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_STOP              , 0 }
		},
		{ /* 33C8 / 14 */
			{ ANIMATION_SET_OVERLAY_SPRITE, 4 },
			{ ANIMATION_PLAY_VOICE        , 35 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_STOP              , 0 }
		},
		{ /* 33C8 / 15 */
			{ ANIMATION_SET_OVERLAY_SPRITE, 5 },
			{ ANIMATION_PLAY_VOICE        , 35 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_STOP              , 0 }
		}
};

AnimationCommandStruct g_table_animation_map[16][8] = {
		{ /* 33C8 / 16 */
			{ ANIMATION_SET_OVERLAY_SPRITE, 1 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_SET_OVERLAY_SPRITE, 2 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_STOP              , 0 }
		},
		{ /* 33C8 / 17 */
			{ ANIMATION_SET_OVERLAY_SPRITE, 1 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_SET_OVERLAY_SPRITE, 2 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_STOP              , 0 }
		},
		{ /* 33C8 / 18 */
			{ ANIMATION_SET_OVERLAY_SPRITE, 0 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_STOP              , 0 }
		},
		{ /* 33C8 / 19 */
			{ ANIMATION_SET_OVERLAY_SPRITE, 0 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_STOP              , 0 }
		},
		{ /* 33C8 / 20 */
			{ ANIMATION_SET_OVERLAY_SPRITE, 4 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_SET_OVERLAY_SPRITE, 5 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_STOP              , 0 }
		},
		{ /* 33C8 / 21 */
			{ ANIMATION_SET_OVERLAY_SPRITE, 4 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_SET_OVERLAY_SPRITE, 5 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_STOP              , 0 }
		},
		{ /* 33C8 / 22 */
			{ ANIMATION_SET_OVERLAY_SPRITE, 3 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_STOP              , 0 }
		},
		{ /* 33C8 / 23 */
			{ ANIMATION_SET_OVERLAY_SPRITE, 3 },
			{ ANIMATION_PAUSE             , 600 },
			{ ANIMATION_STOP              , 0 }
		},
		{ /* 33C8 / 24 */
			{ ANIMATION_STOP              , 0 },
		},
		{ /* 33C8 / 25 */
			{ ANIMATION_STOP              , 0 },
		},
		{ /* 33C8 / 26 */
			{ ANIMATION_STOP              , 0 },
		},
		{ /* 33C8 / 27 */
			{ ANIMATION_STOP              , 0 },
		},
		{ /* 33C8 / 28 */
			{ ANIMATION_STOP              , 0 },
		},
		{ /* 33C8 / 29 */
			{ ANIMATION_STOP              , 0 },
		},
		{ /* 33C8 / 30 */
			{ ANIMATION_STOP              , 0 },
		},
		{ /* 33C8 / 31 */
			{ ANIMATION_STOP              , 0 },
		}
};

AnimationCommandStruct g_table_animation_structure[29][16] = {
		{ /* 2C6F:0000 */
			{ ANIMATION_SET_GROUND_SPRITE , 1 },
			{ ANIMATION_PAUSE             , 300 },
			{ ANIMATION_ABORT             , 0 }
		},
		{ /* 2C70:0000 */
			{ ANIMATION_SET_GROUND_SPRITE , 0 },
			{ ANIMATION_ABORT             , 0 }
		},
		{ /* 2C71:0000 */
			{ ANIMATION_SET_GROUND_SPRITE , 2 },
			{ ANIMATION_PAUSE             , 300 },
			{ ANIMATION_ABORT             , 0 }
		},
		{ /* 2C72:0000 */
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
		{ /* 2C74:0000 */
			{ ANIMATION_SET_GROUND_SPRITE , 2 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_SET_GROUND_SPRITE , 3 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_REWIND            , 0 }
		},
		{ /* 2C75:0000 */
			{ ANIMATION_SET_GROUND_SPRITE , 2 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_SET_GROUND_SPRITE , 3 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_REWIND            , 0 }
		},
		{ /* 2C76:0000 */
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
		{ /* 2C78:0000 */
			{ ANIMATION_SET_GROUND_SPRITE , 8 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_SET_GROUND_SPRITE , 9 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_REWIND            , 0 }
		},
		{ /* 2C79:0000 */
			{ ANIMATION_SET_GROUND_SPRITE , 2 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_SET_GROUND_SPRITE , 3 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_REWIND            , 0 }
		},
		{ /* 2C7A:0000 */
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
		{ /* 2C7C:0000 */
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
		{ /* 2C7E:0000 */
			{ ANIMATION_SET_GROUND_SPRITE , 2 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_SET_GROUND_SPRITE , 3 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_REWIND            , 0 }
		},
		{ /* 2C7F:0000 */
			{ ANIMATION_SET_GROUND_SPRITE , 2 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_SET_GROUND_SPRITE , 3 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_REWIND            , 0 }
		},
		{ /* 2C80:0000 */
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
		{ /* 2C82:0000 */
			{ ANIMATION_SET_GROUND_SPRITE , 2 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_SET_GROUND_SPRITE , 3 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_REWIND            , 0 }
		},
		{ /* 2C83:0000 */
			{ ANIMATION_SET_GROUND_SPRITE , 2 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_SET_GROUND_SPRITE , 3 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_REWIND            , 0 }
		},
		{ /* 2C84:0000 */
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
		{ /* 2C86:0000 */
			{ ANIMATION_SET_GROUND_SPRITE , 2 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_SET_GROUND_SPRITE , 3 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_REWIND            , 0 }
		},
		{ /* 2C87:0000 */
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
		{ /* 2C89:0000 */
			{ ANIMATION_SET_GROUND_SPRITE , 8 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_SET_GROUND_SPRITE , 9 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_REWIND            , 0 }
		},
		{ /* 2C8A:0000 */
			{ ANIMATION_SET_GROUND_SPRITE , 2 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_SET_GROUND_SPRITE , 3 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_REWIND            , 0 }
		},
		{ /* 2C8B:0000 */
			{ ANIMATION_SET_GROUND_SPRITE , 2 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_SET_GROUND_SPRITE , 3 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_REWIND            , 0 }
		},
		{ /* 2C8C:0000 */
			{ ANIMATION_SET_GROUND_SPRITE , 2 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_SET_GROUND_SPRITE , 3 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_REWIND            , 0 }
		},
		{ /* 2C8D:0000 */
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
		{ /* 2C8F:0000 */
			{ ANIMATION_SET_GROUND_SPRITE , 2 },
			{ ANIMATION_PAUSE             , 60 },
			{ ANIMATION_SET_GROUND_SPRITE , 3 },
			{ ANIMATION_PAUSE             , 60 },
			{ ANIMATION_REWIND            , 0 }
		},
		{ /* 2C90:0000 */
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
		{ /* 2C92:0000 */
			{ ANIMATION_SET_GROUND_SPRITE , 2 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_SET_GROUND_SPRITE , 3 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_REWIND            , 0 }
		},
		{ /* 2C93:0000 */
			{ ANIMATION_SET_GROUND_SPRITE , 2 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_SET_GROUND_SPRITE , 3 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_REWIND            , 0 }
		},
		{ /* 2C94:0000 */
			{ ANIMATION_SET_GROUND_SPRITE , 2 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_SET_GROUND_SPRITE , 3 },
			{ ANIMATION_PAUSE             , 30 },
			{ ANIMATION_REWIND            , 0 }
		}
};
