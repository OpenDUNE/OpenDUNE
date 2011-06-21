/* $Id$ */

/** @file src/table/actioninfo.c ActionInfo file table. */

#include <stdio.h>
#include "types.h"

#include "../unit.h"

const ActionInfo g_table_actionInfo[] = {
	{ /* 0 */
		/* stringID    */ 1,
		/* name        */ "Attack",
		/* variable_06 */ 0,
		/* variable_08 */ 1,
		/* variable_0A */ 21
	},

	{ /* 1 */
		/* stringID    */ 2,
		/* name        */ "Move",
		/* variable_06 */ 0,
		/* variable_08 */ 1,
		/* variable_0A */ 22
	},

	{ /* 2 */
		/* stringID    */ 3,
		/* name        */ "Retreat",
		/* variable_06 */ 0,
		/* variable_08 */ 3,
		/* variable_0A */ 21
	},

	{ /* 3 */
		/* stringID    */ 4,
		/* name        */ "Guard",
		/* variable_06 */ 0,
		/* variable_08 */ 3,
		/* variable_0A */ 21
	},

	{ /* 4 */
		/* stringID    */ 5,
		/* name        */ "Area Guard",
		/* variable_06 */ 0,
		/* variable_08 */ 3,
		/* variable_0A */ 20
	},

	{ /* 5 */
		/* stringID    */ 6,
		/* name        */ "Harvest",
		/* variable_06 */ 0,
		/* variable_08 */ 1,
		/* variable_0A */ 20
	},

	{ /* 6 */
		/* stringID    */ 7,
		/* name        */ "Return",
		/* variable_06 */ 0,
		/* variable_08 */ 3,
		/* variable_0A */ 21
	},

	{ /* 7 */
		/* stringID    */ 37,
		/* name        */ "Stop",
		/* variable_06 */ 0,
		/* variable_08 */ 3,
		/* variable_0A */ 21
	},

	{ /* 8 */
		/* stringID    */ 9,
		/* name        */ "Ambush",
		/* variable_06 */ 0,
		/* variable_08 */ 3,
		/* variable_0A */ 20
	},

	{ /* 9 */
		/* stringID    */ 10,
		/* name        */ "Sabotage",
		/* variable_06 */ 0,
		/* variable_08 */ 3,
		/* variable_0A */ 20
	},

	{ /* 10 */
		/* stringID    */ 11,
		/* name        */ "Die",
		/* variable_06 */ 1,
		/* variable_08 */ 3,
		/* variable_0A */ 0xFFFF
	},

	{ /* 11 */
		/* stringID    */ 12,
		/* name        */ "Hunt",
		/* variable_06 */ 0,
		/* variable_08 */ 3,
		/* variable_0A */ 20
	},

	{ /* 12 */
		/* stringID    */ 31,
		/* name        */ "Deploy",
		/* variable_06 */ 0,
		/* variable_08 */ 3,
		/* variable_0A */ 20
	},

	{ /* 13 */
		/* stringID    */ 153,
		/* name        */ "Destruct",
		/* variable_06 */ 1,
		/* variable_08 */ 3,
		/* variable_0A */ 20
	}
};
