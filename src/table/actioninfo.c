/* $Id$ */

/** @file src/table/actioninfo.c ActionInfo file table. */

#include <stdio.h>
#include "types.h"

#include "../gui/gui.h"
#include "../unit.h"
#include "strings.h"

const ActionInfo g_table_actionInfo[] = {
	{ /* 0 */
		/* stringID      */ STR_ATTACK,
		/* name          */ "Attack",
		/* switchType    */ 0,
		/* selectionType */ SELECTIONTYPE_TARGET,
		/* soundID       */ 21
	},

	{ /* 1 */
		/* stringID      */ STR_MOVE,
		/* name          */ "Move",
		/* switchType    */ 0,
		/* selectionType */ SELECTIONTYPE_TARGET,
		/* soundID       */ 22
	},

	{ /* 2 */
		/* stringID      */ STR_RETREAT,
		/* name          */ "Retreat",
		/* switchType    */ 0,
		/* selectionType */ SELECTIONTYPE_UNIT,
		/* soundID       */ 21
	},

	{ /* 3 */
		/* stringID      */ STR_GUARD,
		/* name          */ "Guard",
		/* switchType    */ 0,
		/* selectionType */ SELECTIONTYPE_UNIT,
		/* soundID       */ 21
	},

	{ /* 4 */
		/* stringID      */ STR_AREA_GUARD,
		/* name          */ "Area Guard",
		/* switchType    */ 0,
		/* selectionType */ SELECTIONTYPE_UNIT,
		/* soundID       */ 20
	},

	{ /* 5 */
		/* stringID      */ STR_HARVEST,
		/* name          */ "Harvest",
		/* switchType    */ 0,
		/* selectionType */ SELECTIONTYPE_TARGET,
		/* soundID       */ 20
	},

	{ /* 6 */
		/* stringID      */ STR_RETURN,
		/* name          */ "Return",
		/* switchType    */ 0,
		/* selectionType */ SELECTIONTYPE_UNIT,
		/* soundID       */ 21
	},

	{ /* 7 */
		/* stringID      */ STR_STOP2,
		/* name          */ "Stop",
		/* switchType    */ 0,
		/* selectionType */ SELECTIONTYPE_UNIT,
		/* soundID       */ 21
	},

	{ /* 8 */
		/* stringID      */ STR_AMBUSH,
		/* name          */ "Ambush",
		/* switchType    */ 0,
		/* selectionType */ SELECTIONTYPE_UNIT,
		/* soundID       */ 20
	},

	{ /* 9 */
		/* stringID      */ STR_SABOTAGE,
		/* name          */ "Sabotage",
		/* switchType    */ 0,
		/* selectionType */ SELECTIONTYPE_UNIT,
		/* soundID       */ 20
	},

	{ /* 10 */
		/* stringID      */ STR_DIE,
		/* name          */ "Die",
		/* switchType    */ 1,
		/* selectionType */ SELECTIONTYPE_UNIT,
		/* soundID       */ 0xFFFF
	},

	{ /* 11 */
		/* stringID      */ STR_HUNT,
		/* name          */ "Hunt",
		/* switchType    */ 0,
		/* selectionType */ SELECTIONTYPE_UNIT,
		/* soundID       */ 20
	},

	{ /* 12 */
		/* stringID      */ STR_DEPLOY,
		/* name          */ "Deploy",
		/* switchType    */ 0,
		/* selectionType */ SELECTIONTYPE_UNIT,
		/* soundID       */ 20
	},

	{ /* 13 */
		/* stringID      */ STR_DESTRUCT,
		/* name          */ "Destruct",
		/* switchType    */ 1,
		/* selectionType */ SELECTIONTYPE_UNIT,
		/* soundID       */ 20
	}
};
