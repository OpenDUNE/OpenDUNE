/* $Id$ */

/** @file src/table/windowdesc.c WindowDesc file table. */

#include <stdio.h>
#include "types.h"

#include "../gui/widget.h"

WindowDesc g_optionsWindowDesc = {
	/* index       */ 16,
	/* stringID    */ 91, /* "Dune II: The Battle for Arrakis" */
	/* addArrows   */ false,
	/* widgetCount */ 7,
	{ /* widgets */
		{ /* 0 */
		/* stringID      */ 92, /* "Load a game" */
		/* offsetX       */ 16,
		/* offsetY       */ 23,
		/* width         */ 208,
		/* height        */ 15,
		/* labelStringID */ 0,
		/* shortcut2     */ 0,
		},
		{ /* 1 */
		/* stringID      */ 93, /* "Save this game" */
		/* offsetX       */ 16,
		/* offsetY       */ 40,
		/* width         */ 208,
		/* height        */ 15,
		/* labelStringID */ 0,
		/* shortcut2     */ 0,
		},
		{ /* 2 */
		/* stringID      */ 94, /* "Game controls" */
		/* offsetX       */ 16,
		/* offsetY       */ 57,
		/* width         */ 208,
		/* height        */ 15,
		/* labelStringID */ 0,
		/* shortcut2     */ 0,
		},
		{ /* 3 */
		/* stringID      */ 103, /* "Restart scenario" */
		/* offsetX       */ 16,
		/* offsetY       */ 74,
		/* width         */ 208,
		/* height        */ 15,
		/* labelStringID */ 0,
		/* shortcut2     */ 0,
		},
		{ /* 4 */
		/* stringID      */ 104, /* "Pick another house" */
		/* offsetX       */ 16,
		/* offsetY       */ 91,
		/* width         */ 208,
		/* height        */ 15,
		/* labelStringID */ 0,
		/* shortcut2     */ 0,
		},
		{ /* 5 */
		/* stringID      */ 96, /* "Continue game" */
		/* offsetX       */ 120,
		/* offsetY       */ 110,
		/* width         */ 104,
		/* height        */ 15,
		/* labelStringID */ 0,
		/* shortcut2     */ 110,
		},
		{ /* 6 */
		/* stringID      */ 95, /* "Quit playing" */
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
	/* stringID    */ 94, /* "Game controls" */
	/* addArrows   */ false,
	/* widgetCount */ 6,
	{ /* widgets */
		{ /* 0 */
		/* stringID      */ -10, /* Music state. */
		/* offsetX       */ 152,
		/* offsetY       */ 22,
		/* width         */ 80,
		/* height        */ 15,
		/* labelStringID */ 111, /* "Music is" */
		/* shortcut2     */ 0,
		},
		{ /* 1 */
		/* stringID      */ -11, /* Sound state. */
		/* offsetX       */ 152,
		/* offsetY       */ 39,
		/* width         */ 80,
		/* height        */ 15,
		/* labelStringID */ 112, /* "Sounds are" */
		/* shortcut2     */ 0,
		},
		{ /* 2 */
		/* stringID      */ -12, /* Game speed. */
		/* offsetX       */ 152,
		/* offsetY       */ 56,
		/* width         */ 80,
		/* height        */ 15,
		/* labelStringID */ 110, /* "Game speed" */
		/* shortcut2     */ 0,
		},
		{ /* 3 */
		/* stringID      */ -13, /* Hints state */
		/* offsetX       */ 152,
		/* offsetY       */ 73,
		/* width         */ 80,
		/* height        */ 15,
		/* labelStringID */ 109, /* "Hints are" */
		/* shortcut2     */ 0,
		},
		{ /* 4 */
		/* stringID      */ -14, /* Autoscroll state */
		/* offsetX       */ 152,
		/* offsetY       */ 90,
		/* width         */ 80,
		/* height        */ 15,
		/* labelStringID */ 120, /* "Auto scroll is" */
		/* shortcut2     */ 0,
		},
		{ /* 5 */
		/* stringID      */ 102, /* "Previous" */
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
	/* stringID    */ 101, /* "Are you sure you want to quit playing?" */
	/* addArrows   */ false,
	/* widgetCount */ 2,
	{ /* widgets */
		{ /* 0 */
		/* stringID      */ 107, /* "Yes" */
		/* offsetX       */ 8,
		/* offsetY       */ 30,
		/* width         */ 72,
		/* height        */ 15,
		/* labelStringID */ 0,
		/* shortcut2     */ 0,
		},
		{ /* 1 */
		/* stringID      */ 108, /* "No" */
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
		/* stringID      */ -1, /* First savegame name. */
		/* offsetX       */ 16,
		/* offsetY       */ 39,
		/* width         */ 256,
		/* height        */ 15,
		/* labelStringID */ 0,
		/* shortcut2     */ 0,
		},
		{ /* 1 */
		/* stringID      */ -2, /* Second savegame name. */
		/* offsetX       */ 16,
		/* offsetY       */ 56,
		/* width         */ 256,
		/* height        */ 15,
		/* labelStringID */ 0,
		/* shortcut2     */ 0,
		},
		{ /* 2 */
		/* stringID      */ -3, /* Third savegame name. */
		/* offsetX       */ 16,
		/* offsetY       */ 73,
		/* width         */ 256,
		/* height        */ 15,
		/* labelStringID */ 0,
		/* shortcut2     */ 0,
		},
		{ /* 3 */
		/* stringID      */ -4, /* Fourth savegame name. */
		/* offsetX       */ 16,
		/* offsetY       */ 90,
		/* width         */ 256,
		/* height        */ 15,
		/* labelStringID */ 0,
		/* shortcut2     */ 0,
		},
		{ /* 4 */
		/* stringID      */ -5, /* Fifth savegame name. */
		/* offsetX       */ 16,
		/* offsetY       */ 107,
		/* width         */ 256,
		/* height        */ 15,
		/* labelStringID */ 0,
		/* shortcut2     */ 0,
		},
		{ /* 5 */
		/* stringID      */ 30, /* "Cancel" */
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
	/* stringID    */ 100, /* "Enter a description of your saved game:" */
	/* addArrows   */ false,
	/* widgetCount */ 2,
	{ /* widgets */
		{ /* 0 */
		/* stringID      */ 36, /* "Save" */
		/* offsetX       */ 8,
		/* offsetY       */ 38,
		/* width         */ 72,
		/* height        */ 15,
		/* labelStringID */ 0,
		/* shortcut2     */ 43,
		},
		{ /* 1 */
		/* stringID      */ 30, /* "Cancel" */
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
