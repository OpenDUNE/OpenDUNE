/* $Id$ */

/** @file src/table/actioninfo.c ActionInfo file table. */

#include <stdio.h>
#include "types.h"

#include "../unit.h"

const ActionInfo g_table_actionInfo[] = {
	{ /* 0 */
		/* stringID    */ 1, /* "Attack" */
		/* name        */ "Attack",
		/* variable_06 */ 0,
		/* variable_08 */ 1,
		/* variable_0A */ 21
	},

	{ /* 1 */
		/* stringID    */ 2, /* "Move" */
		/* name        */ "Move",
		/* variable_06 */ 0,
		/* variable_08 */ 1,
		/* variable_0A */ 22
	},

	{ /* 2 */
		/* stringID    */ 3, /* "Retreat" */
		/* name        */ "Retreat",
		/* variable_06 */ 0,
		/* variable_08 */ 3,
		/* variable_0A */ 21
	},

	{ /* 3 */
		/* stringID    */ 4, /* "Guard" */
		/* name        */ "Guard",
		/* variable_06 */ 0,
		/* variable_08 */ 3,
		/* variable_0A */ 21
	},

	{ /* 4 */
		/* stringID    */ 5, /* "Area Guard" */
		/* name        */ "Area Guard",
		/* variable_06 */ 0,
		/* variable_08 */ 3,
		/* variable_0A */ 20
	},

	{ /* 5 */
		/* stringID    */ 6, /* "Harvest" */
		/* name        */ "Harvest",
		/* variable_06 */ 0,
		/* variable_08 */ 1,
		/* variable_0A */ 20
	},

	{ /* 6 */
		/* stringID    */ 7, /* "Return" */
		/* name        */ "Return",
		/* variable_06 */ 0,
		/* variable_08 */ 3,
		/* variable_0A */ 21
	},

	{ /* 7 */
		/* stringID    */ 37, /* "Stop" */
		/* name        */ "Stop",
		/* variable_06 */ 0,
		/* variable_08 */ 3,
		/* variable_0A */ 21
	},

	{ /* 8 */
		/* stringID    */ 9, /* "Ambush" */
		/* name        */ "Ambush",
		/* variable_06 */ 0,
		/* variable_08 */ 3,
		/* variable_0A */ 20
	},

	{ /* 9 */
		/* stringID    */ 10, /* "Sabotage" */
		/* name        */ "Sabotage",
		/* variable_06 */ 0,
		/* variable_08 */ 3,
		/* variable_0A */ 20
	},

	{ /* 10 */
		/* stringID    */ 11, /* "Die" */
		/* name        */ "Die",
		/* variable_06 */ 1,
		/* variable_08 */ 3,
		/* variable_0A */ 0xFFFF
	},

	{ /* 11 */
		/* stringID    */ 12, /* "Hunt" */
		/* name        */ "Hunt",
		/* variable_06 */ 0,
		/* variable_08 */ 3,
		/* variable_0A */ 20
	},

	{ /* 12 */
		/* stringID    */ 31, /* "Deploy" */
		/* name        */ "Deploy",
		/* variable_06 */ 0,
		/* variable_08 */ 3,
		/* variable_0A */ 20
	},

	{ /* 13 */
		/* stringID    */ 153, /* "Destruct" */
		/* name        */ "Destruct",
		/* variable_06 */ 1,
		/* variable_08 */ 3,
		/* variable_0A */ 20
	}
};
