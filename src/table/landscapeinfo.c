/** @file src/table/landscapeinfo.c LandscapeInfo file table. */

#include <stdio.h>
#include "types.h"

#include "../map.h"

const LandscapeInfo g_table_landscapeInfo[LST_MAX] = {
	{ /* 0 / LST_NORMAL_SAND */
		/* movementSpeed        */ { 112, 112, 112, 160, 255, 192 },
		/* letUnitWobble        */ false,
		/* isValidForStructure  */ false,
		/* isSand               */ true,
		/* isValidForStructure2 */ false,
		/* canBecomeSpice       */ true,
		/* craterType           */ 1,
		/* radarColour          */ 88,
		/* spriteID             */ 37,
	},

	{ /* 1 / LST_PARTIAL_ROCK */
		/* movementSpeed        */ { 160, 112, 112, 64, 255, 0 },
		/* letUnitWobble        */ true,
		/* isValidForStructure  */ false,
		/* isSand               */ false,
		/* isValidForStructure2 */ false,
		/* canBecomeSpice       */ false,
		/* craterType           */ 1,
		/* radarColour          */ 28,
		/* spriteID             */ 39,
	},

	{ /* 2 / LST_ENTIRELY_DUNE */
		/* movementSpeed        */ { 112, 160, 160, 160, 255, 192 },
		/* letUnitWobble        */ false,
		/* isValidForStructure  */ false,
		/* isSand               */ true,
		/* isValidForStructure2 */ false,
		/* canBecomeSpice       */ true,
		/* craterType           */ 1,
		/* radarColour          */ 92,
		/* spriteID             */ 41,
	},

	{ /* 3 / LST_PARTIAL_DUNE */
		/* movementSpeed        */ { 112, 160, 160, 160, 255, 192 },
		/* letUnitWobble        */ false,
		/* isValidForStructure  */ false,
		/* isSand               */ true,
		/* isValidForStructure2 */ false,
		/* canBecomeSpice       */ true,
		/* craterType           */ 1,
		/* radarColour          */ 89,
		/* spriteID             */ 43,
	},

	{ /* 4 / LST_ENTIRELY_ROCK */
		/* movementSpeed        */ { 112, 160, 160, 112, 255, 0 },
		/* letUnitWobble        */ true,
		/* isValidForStructure  */ true,
		/* isSand               */ false,
		/* isValidForStructure2 */ true,
		/* canBecomeSpice       */ false,
		/* craterType           */ 2,
		/* radarColour          */ 30,
		/* spriteID             */ 45,
	},

	{ /* 5 / LST_MOSTLY_ROCK */
		/* movementSpeed        */ { 160, 160, 160, 160, 255, 0 },
		/* letUnitWobble        */ true,
		/* isValidForStructure  */ true,
		/* isSand               */ false,
		/* isValidForStructure2 */ true,
		/* canBecomeSpice       */ false,
		/* craterType           */ 2,
		/* radarColour          */ 29,
		/* spriteID             */ 47,
	},

	{ /* 6 / LST_ENTIRELY_MOUNTAIN */
		/* movementSpeed        */ { 64, 0, 0, 0, 255, 0 },
		/* letUnitWobble        */ true,
		/* isValidForStructure  */ false,
		/* isSand               */ false,
		/* isValidForStructure2 */ false,
		/* canBecomeSpice       */ false,
		/* craterType           */ 0,
		/* radarColour          */ 12,
		/* spriteID             */ 49,
	},

	{ /* 7 / LST_PARTIAL_MOUNTAIN */
		/* movementSpeed        */ { 64, 0, 0, 0, 255, 0 },
		/* letUnitWobble        */ true,
		/* isValidForStructure  */ false,
		/* isSand               */ false,
		/* isValidForStructure2 */ false,
		/* canBecomeSpice       */ false,
		/* craterType           */ 0,
		/* radarColour          */ 133,
		/* spriteID             */ 51,
	},

	{ /* 8 / LST_SPICE */
		/* movementSpeed        */ { 112, 160, 160, 160, 255, 192 },
		/* letUnitWobble        */ false,
		/* isValidForStructure  */ false,
		/* isSand               */ true,
		/* isValidForStructure2 */ false,
		/* canBecomeSpice       */ true,
		/* craterType           */ 1,
		/* radarColour          */ 215, /* was 88, but is changed on startup */
		/* spriteID             */ 53,  /* was 37, but is changed on startup */
	},

	{ /* 9 / LST_THICK_SPICE */
		/* movementSpeed        */ { 112, 160, 160, 160, 255, 192 },
		/* letUnitWobble        */ true,
		/* isValidForStructure  */ false,
		/* isSand               */ true,
		/* isValidForStructure2 */ false,
		/* canBecomeSpice       */ true,
		/* craterType           */ 1,
		/* radarColour          */ 216, /* was 88, but is changed on startup */
		/* spriteID             */ 53,  /* was 37, but is changed on startup */
	},

	{ /* 10 / LST_CONCRETE_SLAB */
		/* movementSpeed        */ { 255, 255, 255, 255, 255, 0 },
		/* letUnitWobble        */ false,
		/* isValidForStructure  */ true,
		/* isSand               */ false,
		/* isValidForStructure2 */ false,
		/* canBecomeSpice       */ false,
		/* craterType           */ 2,
		/* radarColour          */ 133,
		/* spriteID             */ 51,
	},

	{ /* 11 / LST_WALL */
		/* movementSpeed        */ { 0, 0, 0, 0, 255, 0 },
		/* letUnitWobble        */ false,
		/* isValidForStructure  */ false,
		/* isSand               */ false,
		/* isValidForStructure2 */ false,
		/* canBecomeSpice       */ false,
		/* craterType           */ 0,
		/* radarColour          */ 65535,
		/* spriteID             */ 31,
	},

	{ /* 12 / LST_STRUCTURE */
		/* movementSpeed        */ { 0, 0, 0, 0, 255, 0 },
		/* letUnitWobble        */ false,
		/* isValidForStructure  */ false,
		/* isSand               */ false,
		/* isValidForStructure2 */ false,
		/* canBecomeSpice       */ false,
		/* craterType           */ 0,
		/* radarColour          */ 65535,
		/* spriteID             */ 31,
	},

	{ /* 13 / LST_DESTROYED_WALL */
		/* movementSpeed        */ { 160, 160, 160, 160, 255, 0 },
		/* letUnitWobble        */ true,
		/* isValidForStructure  */ true,
		/* isSand               */ false,
		/* isValidForStructure2 */ true,
		/* canBecomeSpice       */ false,
		/* craterType           */ 2,
		/* radarColour          */ 29,
		/* spriteID             */ 47,
	},

	{ /* 14 / LST_BLOOM_FIELD */
		/* movementSpeed        */ { 112, 112, 112, 160, 255, 192 },
		/* letUnitWobble        */ false,
		/* isValidForStructure  */ false,
		/* isSand               */ true,
		/* isValidForStructure2 */ false,
		/* canBecomeSpice       */ true,
		/* craterType           */ 1,
		/* radarColour          */ 50,
		/* spriteID             */ 57,
	}
};
