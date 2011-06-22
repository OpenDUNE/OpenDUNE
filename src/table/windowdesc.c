/* $Id$ */

/** @file src/table/windowdesc.c WindowDesc file table. */

#include <stdio.h>
#include "types.h"

#include "../gui/widget.h"

WindowDesc g_optionsWindowDesc = {
	/* index       */ 16,
	/* stringID    */ 91,
	/* addArrows   */ false,
	/* widgetCount */ 7,
	{ /* widgets */
		{ /* 0 */
		/* stringID      */ 92,
		/* offsetX       */ 16,
		/* offsetY       */ 23,
		/* width         */ 208,
		/* height        */ 15,
		/* labelStringID */ 0,
		/* shortcut2     */ 0,
		},
		{ /* 1 */
		/* stringID      */ 93,
		/* offsetX       */ 16,
		/* offsetY       */ 40,
		/* width         */ 208,
		/* height        */ 15,
		/* labelStringID */ 0,
		/* shortcut2     */ 0,
		},
		{ /* 2 */
		/* stringID      */ 94,
		/* offsetX       */ 16,
		/* offsetY       */ 57,
		/* width         */ 208,
		/* height        */ 15,
		/* labelStringID */ 0,
		/* shortcut2     */ 0,
		},
		{ /* 3 */
		/* stringID      */ 103,
		/* offsetX       */ 16,
		/* offsetY       */ 74,
		/* width         */ 208,
		/* height        */ 15,
		/* labelStringID */ 0,
		/* shortcut2     */ 0,
		},
		{ /* 4 */
		/* stringID      */ 104,
		/* offsetX       */ 16,
		/* offsetY       */ 91,
		/* width         */ 208,
		/* height        */ 15,
		/* labelStringID */ 0,
		/* shortcut2     */ 0,
		},
		{ /* 5 */
		/* stringID      */ 96,
		/* offsetX       */ 120,
		/* offsetY       */ 110,
		/* width         */ 104,
		/* height        */ 15,
		/* labelStringID */ 0,
		/* shortcut2     */ 110,
		},
		{ /* 6 */
		/* stringID      */ 95,
		/* offsetX       */ 16,
		/* offsetY       */ 110,
		/* width         */ 104,
		/* height        */ 15,
		/* labelStringID */ 0,
		/* shortcut2     */ 0,
		}
	}
};

WindowDesc g_gameControlWindowDesc = {
	/* index       */ 16,
	/* stringID    */ 94,
	/* addArrows   */ false,
	/* widgetCount */ 6,
	{ /* widgets */
		{ /* 0 */
		/* stringID      */ 65526,
		/* offsetX       */ 152,
		/* offsetY       */ 22,
		/* width         */ 80,
		/* height        */ 15,
		/* labelStringID */ 111,
		/* shortcut2     */ 0,
		},
		{ /* 1 */
		/* stringID      */ 65525,
		/* offsetX       */ 152,
		/* offsetY       */ 39,
		/* width         */ 80,
		/* height        */ 15,
		/* labelStringID */ 112,
		/* shortcut2     */ 0,
		},
		{ /* 2 */
		/* stringID      */ 65524,
		/* offsetX       */ 152,
		/* offsetY       */ 56,
		/* width         */ 80,
		/* height        */ 15,
		/* labelStringID */ 110,
		/* shortcut2     */ 0,
		},
		{ /* 3 */
		/* stringID      */ 65523,
		/* offsetX       */ 152,
		/* offsetY       */ 73,
		/* width         */ 80,
		/* height        */ 15,
		/* labelStringID */ 109,
		/* shortcut2     */ 0,
		},
		{ /* 4 */
		/* stringID      */ 65522,
		/* offsetX       */ 152,
		/* offsetY       */ 90,
		/* width         */ 80,
		/* height        */ 15,
		/* labelStringID */ 120,
		/* shortcut2     */ 0,
		},
		{ /* 5 */
		/* stringID      */ 102,
		/* offsetX       */ 96,
		/* offsetY       */ 110,
		/* width         */ 136,
		/* height        */ 15,
		/* labelStringID */ 0,
		/* shortcut2     */ 110,
		},
		{ /* 6 */
		/* stringID      */ 0,
		/* offsetX       */ 0,
		/* offsetY       */ 0,
		/* width         */ 0,
		/* height        */ 0,
		/* labelStringID */ 0,
		/* shortcut2     */ 0,
		}
	}
};

WindowDesc g_yesNoWindowDesc = {
	/* index       */ 18,
	/* stringID    */ 101,
	/* addArrows   */ false,
	/* widgetCount */ 2,
	{ /* widgets */
		{ /* 0 */
		/* stringID      */ 107,
		/* offsetX       */ 8,
		/* offsetY       */ 30,
		/* width         */ 72,
		/* height        */ 15,
		/* labelStringID */ 0,
		/* shortcut2     */ 0,
		},
		{ /* 1 */
		/* stringID      */ 108,
		/* offsetX       */ 224,
		/* offsetY       */ 30,
		/* width         */ 72,
		/* height        */ 15,
		/* labelStringID */ 0,
		/* shortcut2     */ 0,
		},
		{ /* 2 */
		/* stringID      */ 0,
		/* offsetX       */ 0,
		/* offsetY       */ 0,
		/* width         */ 0,
		/* height        */ 0,
		/* labelStringID */ 0,
		/* shortcut2     */ 0,
		},
		{ /* 3 */
		/* stringID      */ 0,
		/* offsetX       */ 0,
		/* offsetY       */ 0,
		/* width         */ 0,
		/* height        */ 0,
		/* labelStringID */ 0,
		/* shortcut2     */ 0,
		},
		{ /* 4 */
		/* stringID      */ 0,
		/* offsetX       */ 0,
		/* offsetY       */ 0,
		/* width         */ 0,
		/* height        */ 0,
		/* labelStringID */ 0,
		/* shortcut2     */ 0,
		},
		{ /* 5 */
		/* stringID      */ 0,
		/* offsetX       */ 0,
		/* offsetY       */ 0,
		/* width         */ 0,
		/* height        */ 0,
		/* labelStringID */ 0,
		/* shortcut2     */ 0,
		},
		{ /* 6 */
		/* stringID      */ 0,
		/* offsetX       */ 0,
		/* offsetY       */ 0,
		/* width         */ 0,
		/* height        */ 0,
		/* labelStringID */ 0,
		/* shortcut2     */ 0,
		}
	}
};

WindowDesc g_saveLoadWindowDesc = {
	/* index       */ 17,
	/* stringID    */ 97,
	/* addArrows   */ true,
	/* widgetCount */ 6,
	{ /* widgets */
		{ /* 0 */
		/* stringID      */ 65535,
		/* offsetX       */ 16,
		/* offsetY       */ 39,
		/* width         */ 256,
		/* height        */ 15,
		/* labelStringID */ 0,
		/* shortcut2     */ 0,
		},
		{ /* 1 */
		/* stringID      */ 65534,
		/* offsetX       */ 16,
		/* offsetY       */ 56,
		/* width         */ 256,
		/* height        */ 15,
		/* labelStringID */ 0,
		/* shortcut2     */ 0,
		},
		{ /* 2 */
		/* stringID      */ 65533,
		/* offsetX       */ 16,
		/* offsetY       */ 73,
		/* width         */ 256,
		/* height        */ 15,
		/* labelStringID */ 0,
		/* shortcut2     */ 0,
		},
		{ /* 3 */
		/* stringID      */ 65532,
		/* offsetX       */ 16,
		/* offsetY       */ 90,
		/* width         */ 256,
		/* height        */ 15,
		/* labelStringID */ 0,
		/* shortcut2     */ 0,
		},
		{ /* 4 */
		/* stringID      */ 65531,
		/* offsetX       */ 16,
		/* offsetY       */ 107,
		/* width         */ 256,
		/* height        */ 15,
		/* labelStringID */ 0,
		/* shortcut2     */ 0,
		},
		{ /* 5 */
		/* stringID      */ 30,
		/* offsetX       */ 176,
		/* offsetY       */ 126,
		/* width         */ 96,
		/* height        */ 15,
		/* labelStringID */ 0,
		/* shortcut2     */ 110,
		},
		{ /* 6 */
		/* stringID      */ 0,
		/* offsetX       */ 0,
		/* offsetY       */ 0,
		/* width         */ 0,
		/* height        */ 0,
		/* labelStringID */ 0,
		/* shortcut2     */ 0,
		}
	}
};

WindowDesc g_savegameNameWindowDesc = {
	/* index       */ 14,
	/* stringID    */ 100,
	/* addArrows   */ false,
	/* widgetCount */ 2,
	{ /* widgets */
		{ /* 0 */
		/* stringID      */ 36,
		/* offsetX       */ 8,
		/* offsetY       */ 38,
		/* width         */ 72,
		/* height        */ 15,
		/* labelStringID */ 0,
		/* shortcut2     */ 43,
		},
		{ /* 1 */
		/* stringID      */ 30,
		/* offsetX       */ 208,
		/* offsetY       */ 38,
		/* width         */ 72,
		/* height        */ 15,
		/* labelStringID */ 0,
		/* shortcut2     */ 110,
		},
		{ /* 2 */
		/* stringID      */ 0,
		/* offsetX       */ 0,
		/* offsetY       */ 0,
		/* width         */ 0,
		/* height        */ 0,
		/* labelStringID */ 0,
		/* shortcut2     */ 0,
		},
		{ /* 3 */
		/* stringID      */ 0,
		/* offsetX       */ 0,
		/* offsetY       */ 0,
		/* width         */ 0,
		/* height        */ 0,
		/* labelStringID */ 0,
		/* shortcut2     */ 0,
		},
		{ /* 4 */
		/* stringID      */ 0,
		/* offsetX       */ 0,
		/* offsetY       */ 0,
		/* width         */ 0,
		/* height        */ 0,
		/* labelStringID */ 0,
		/* shortcut2     */ 0,
		},
		{ /* 5 */
		/* stringID      */ 0,
		/* offsetX       */ 0,
		/* offsetY       */ 0,
		/* width         */ 0,
		/* height        */ 0,
		/* labelStringID */ 0,
		/* shortcut2     */ 0,
		},
		{ /* 6 */
		/* stringID      */ 0,
		/* offsetX       */ 0,
		/* offsetY       */ 0,
		/* width         */ 0,
		/* height        */ 0,
		/* labelStringID */ 0,
		/* shortcut2     */ 0,
		}
	}
};
