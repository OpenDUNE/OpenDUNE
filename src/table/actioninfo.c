/* $Id$ */

/** @file src/table/actioninfo.c ActionInfo file table. */

#include <stdio.h>
#include "types.h"

#include "../unit.h"
#include "strings.h"

const ActionInfo g_table_actionInfo[] = {
	{ /* 0 */
		/* stringID    */ STR_ATTACK,
		/* name        */ "Attack",
		/* variable_06 */ 0,
		/* variable_08 */ 1,
		/* variable_0A */ 21
	},

	{ /* 1 */
		/* stringID    */ STR_MOVE,
		/* name        */ "Move",
		/* variable_06 */ 0,
		/* variable_08 */ 1,
		/* variable_0A */ 22
	},

	{ /* 2 */
		/* stringID    */ STR_RETREAT,
		/* name        */ "Retreat",
		/* variable_06 */ 0,
		/* variable_08 */ 3,
		/* variable_0A */ 21
	},

	{ /* 3 */
		/* stringID    */ STR_GUARD,
		/* name        */ "Guard",
		/* variable_06 */ 0,
		/* variable_08 */ 3,
		/* variable_0A */ 21
	},

	{ /* 4 */
		/* stringID    */ STR_AREA_GUARD,
		/* name        */ "Area Guard",
		/* variable_06 */ 0,
		/* variable_08 */ 3,
		/* variable_0A */ 20
	},

	{ /* 5 */
		/* stringID    */ STR_HARVEST,
		/* name        */ "Harvest",
		/* variable_06 */ 0,
		/* variable_08 */ 1,
		/* variable_0A */ 20
	},

	{ /* 6 */
		/* stringID    */ STR_RETURN,
		/* name        */ "Return",
		/* variable_06 */ 0,
		/* variable_08 */ 3,
		/* variable_0A */ 21
	},

	{ /* 7 */
		/* stringID    */ STR_STOP2,
		/* name        */ "Stop",
		/* variable_06 */ 0,
		/* variable_08 */ 3,
		/* variable_0A */ 21
	},

	{ /* 8 */
		/* stringID    */ STR_AMBUSH,
		/* name        */ "Ambush",
		/* variable_06 */ 0,
		/* variable_08 */ 3,
		/* variable_0A */ 20
	},

	{ /* 9 */
		/* stringID    */ STR_SABOTAGE,
		/* name        */ "Sabotage",
		/* variable_06 */ 0,
		/* variable_08 */ 3,
		/* variable_0A */ 20
	},

	{ /* 10 */
		/* stringID    */ STR_DIE,
		/* name        */ "Die",
		/* variable_06 */ 1,
		/* variable_08 */ 3,
		/* variable_0A */ 0xFFFF
	},

	{ /* 11 */
		/* stringID    */ STR_HUNT,
		/* name        */ "Hunt",
		/* variable_06 */ 0,
		/* variable_08 */ 3,
		/* variable_0A */ 20
	},

	{ /* 12 */
		/* stringID    */ STR_DEPLOY,
		/* name        */ "Deploy",
		/* variable_06 */ 0,
		/* variable_08 */ 3,
		/* variable_0A */ 20
	},

	{ /* 13 */
		/* stringID    */ STR_DESTRUCT,
		/* name        */ "Destruct",
		/* variable_06 */ 1,
		/* variable_08 */ 3,
		/* variable_0A */ 20
	}
};
