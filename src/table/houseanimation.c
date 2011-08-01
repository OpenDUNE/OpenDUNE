/* $Id$ */

/** @file src/table/houseanimation.c House animation tables. */

#include <stdio.h>
#include "types.h"

#include "../house.h"

const HouseAnimation_Animation g_houseAnimation_animation[][32] = {
	{ /* 0 - intro */
		{ /* 0 */
			/* string        */ "",
			/* variable_0004 */ 20,
			/* variable_0005 */ 10,
			/* flags         */ 0x40
		},

		{ /* 1 */
			/* string        */ "INTRO1",
			/* variable_0004 */ 45,
			/* variable_0005 */ 0,
			/* flags         */ 0x62
		},

		{ /* 2 */
			/* string        */ "",
			/* variable_0004 */ 50,
			/* variable_0005 */ 10,
			/* flags         */ 0x48
		},

		{ /* 3 */
			/* string        */ "INTRO2",
			/* variable_0004 */ 80,
			/* variable_0005 */ 0,
			/* flags         */ 0x46
		},

		{ /* 4 */
			/* string        */ "",
			/* variable_0004 */ 20,
			/* variable_0005 */ 10,
			/* flags         */ 0x8
		},

		{ /* 5 */
			/* string        */ "INTRO3",
			/* variable_0004 */ 100,
			/* variable_0005 */ 0,
			/* flags         */ 0x46
		},

		{ /* 6 */
			/* string        */ "",
			/* variable_0004 */ 30,
			/* variable_0005 */ 10,
			/* flags         */ 0x0
		},

		{ /* 7 */
			/* string        */ "INTRO9",
			/* variable_0004 */ 200,
			/* variable_0005 */ 0,
			/* flags         */ 0x8A
		},

		{ /* 8 */
			/* string        */ "INTRO10",
			/* variable_0004 */ 75,
			/* variable_0005 */ 15,
			/* flags         */ 0x45
		},

		{ /* 9 */
			/* string        */ "EFINALA",
			/* variable_0004 */ 57,
			/* variable_0005 */ 0,
			/* flags         */ 0x42
		},

		{ /* 10 */
			/* string        */ "",
			/* variable_0004 */ 1,
			/* variable_0005 */ 2,
			/* flags         */ 0x0
		},

		{ /* 11 */
			/* string        */ "INTRO11",
			/* variable_0004 */ 63,
			/* variable_0005 */ 0,
			/* flags         */ 0x4A
		},

		{ /* 12 */
			/* string        */ "INTRO4",
			/* variable_0004 */ 130,
			/* variable_0005 */ 0,
			/* flags         */ 0x4E
		},

		{ /* 13 */
			/* string        */ "",
			/* variable_0004 */ 40,
			/* variable_0005 */ 10,
			/* flags         */ 0x0
		},

		{ /* 14 */
			/* string        */ "INTRO6",
			/* variable_0004 */ 90,
			/* variable_0005 */ 0,
			/* flags         */ 0x46
		},

		{ /* 15 */
			/* string        */ "INTRO7a",
			/* variable_0004 */ 55,
			/* variable_0005 */ 0,
			/* flags         */ 0x402
		},

		{ /* 16 */
			/* string        */ "INTRO7b",
			/* variable_0004 */ 45,
			/* variable_0005 */ 0,
			/* flags         */ 0x2
		},

		{ /* 17 */
			/* string        */ "INTRO8a",
			/* variable_0004 */ 30,
			/* variable_0005 */ 0,
			/* flags         */ 0x402
		},

		{ /* 18 */
			/* string        */ "INTRO8b",
			/* variable_0004 */ 30,
			/* variable_0005 */ 0,
			/* flags         */ 0x2
		},

		{ /* 19 */
			/* string        */ "INTRO8c",
			/* variable_0004 */ 50,
			/* variable_0005 */ 0,
			/* flags         */ 0x12
		},

		{ /* 20 */
			/* string        */ "INTRO5",
			/* variable_0004 */ 90,
			/* variable_0005 */ 40,
			/* flags         */ 0x4D
		},

		{ /* 21 */
			/* string        */ "",
			/* variable_0004 */ 100,
			/* variable_0005 */ 50,
			/* flags         */ 0x0
		},

		{ /* 22 */
			/* string        */ "",
			/* variable_0004 */ 0,
			/* variable_0005 */ 0,
			/* flags         */ 0x0
		}
	},

	{ /* 1 - Level 4: Harkonnen */
		{ /* 0 */
			/* string        */ "",
			/* variable_0004 */ 50,
			/* variable_0005 */ 10,
			/* flags         */ 0x0
		},

		{ /* 1 */
			/* string        */ "MEANWHIL",
			/* variable_0004 */ 70,
			/* variable_0005 */ 1,
			/* flags         */ 0x47
		},

		{ /* 2 */
			/* string        */ "EFINALA",
			/* variable_0004 */ 60,
			/* variable_0005 */ 0,
			/* flags         */ 0x42
		},

		{ /* 3 */
			/* string        */ "MEANWHIL",
			/* variable_0004 */ 70,
			/* variable_0005 */ 1,
			/* flags         */ 0x4B
		},

		{ /* 4 */
			/* string        */ "",
			/* variable_0004 */ 0,
			/* variable_0005 */ 0,
			/* flags         */ 0x0
		}
	},

	{ /* 2 - Level 4: Atreides */
		{ /* 0 */
			/* string        */ "",
			/* variable_0004 */ 50,
			/* variable_0005 */ 10,
			/* flags         */ 0x0
		},

		{ /* 1 */
			/* string        */ "MEANWHIL",
			/* variable_0004 */ 75,
			/* variable_0005 */ 2,
			/* flags         */ 0x47
		},

		{ /* 2 */
			/* string        */ "EFINALA",
			/* variable_0004 */ 60,
			/* variable_0005 */ 0,
			/* flags         */ 0x42
		},

		{ /* 3 */
			/* string        */ "MEANWHIL",
			/* variable_0004 */ 70,
			/* variable_0005 */ 2,
			/* flags         */ 0x4B
		},

		{ /* 4 */
			/* string        */ "",
			/* variable_0004 */ 0,
			/* variable_0005 */ 0,
			/* flags         */ 0x0
		}
	},

	{ /* 3 - Level 4: Ordos */
		{ /* 0 */
			/* string        */ "",
			/* variable_0004 */ 50,
			/* variable_0005 */ 10,
			/* flags         */ 0x0
		},

		{ /* 1 */
			/* string        */ "MEANWHIL",
			/* variable_0004 */ 70,
			/* variable_0005 */ 0,
			/* flags         */ 0x47
		},

		{ /* 2 */
			/* string        */ "EFINALA",
			/* variable_0004 */ 60,
			/* variable_0005 */ 0,
			/* flags         */ 0x42
		},

		{ /* 3 */
			/* string        */ "MEANWHIL",
			/* variable_0004 */ 70,
			/* variable_0005 */ 0,
			/* flags         */ 0x4B
		},

		{ /* 4 */
			/* string        */ "",
			/* variable_0004 */ 0,
			/* variable_0005 */ 0,
			/* flags         */ 0x0
		}
	},

	{ /* 4 - Level 8: Harkonnen */
		{ /* 0 */
			/* string        */ "",
			/* variable_0004 */ 50,
			/* variable_0005 */ 10,
			/* flags         */ 0x0
		},

		{ /* 1 */
			/* string        */ "MEANWHIL",
			/* variable_0004 */ 70,
			/* variable_0005 */ 3,
			/* flags         */ 0x47
		},

		{ /* 2 */
			/* string        */ "EFINALA",
			/* variable_0004 */ 85,
			/* variable_0005 */ 0,
			/* flags         */ 0x42
		},

		{ /* 3 */
			/* string        */ "",
			/* variable_0004 */ 0,
			/* variable_0005 */ 0,
			/* flags         */ 0x0
		}
	},

	{ /* 5 - Level 8: Atreides */
		{ /* 0 */
			/* string        */ "",
			/* variable_0004 */ 50,
			/* variable_0005 */ 10,
			/* flags         */ 0x0
		},

		{ /* 1 */
			/* string        */ "MEANWHIL",
			/* variable_0004 */ 90,
			/* variable_0005 */ 5,
			/* flags         */ 0x47
		},

		{ /* 2 */
			/* string        */ "EFINALA",
			/* variable_0004 */ 60,
			/* variable_0005 */ 0,
			/* flags         */ 0x42
		},

		{ /* 3 */
			/* string        */ "",
			/* variable_0004 */ 0,
			/* variable_0005 */ 0,
			/* flags         */ 0x0
		}
	},

	{ /* 6 - Level 8: Ordos */
		{ /* 0 */
			/* string        */ "",
			/* variable_0004 */ 50,
			/* variable_0005 */ 10,
			/* flags         */ 0x0
		},

		{ /* 1 */
			/* string        */ "MEANWHIL",
			/* variable_0004 */ 70,
			/* variable_0005 */ 4,
			/* flags         */ 0x47
		},

		{ /* 2 */
			/* string        */ "EFINALA",
			/* variable_0004 */ 75,
			/* variable_0005 */ 0,
			/* flags         */ 0x42
		},

		{ /* 3 */
			/* string        */ "",
			/* variable_0004 */ 0,
			/* variable_0005 */ 0,
			/* flags         */ 0x0
		}
	},

	{ /* 7 - Level 9: Harkonnen */
		{ /* 0 */
			/* string        */ "HFINALA",
			/* variable_0004 */ 40,
			/* variable_0005 */ 0,
			/* flags         */ 0x46
		},

		{ /* 1 */
			/* string        */ "HFINALA",
			/* variable_0004 */ 40,
			/* variable_0005 */ 0,
			/* flags         */ 0x42
		},

		{ /* 2 */
			/* string        */ "",
			/* variable_0004 */ 20,
			/* variable_0005 */ 10,
			/* flags         */ 0x0
		},

		{ /* 3 */
			/* string        */ "EFINALA",
			/* variable_0004 */ 60,
			/* variable_0005 */ 0,
			/* flags         */ 0x42
		},

		{ /* 4 */
			/* string        */ "HFINALB",
			/* variable_0004 */ 45,
			/* variable_0005 */ 0,
			/* flags         */ 0x3
		},

		{ /* 5 */
			/* string        */ "EFINALB",
			/* variable_0004 */ 40,
			/* variable_0005 */ 0,
			/* flags         */ 0x3
		},

		{ /* 6 */
			/* string        */ "EFINALB",
			/* variable_0004 */ 10,
			/* variable_0005 */ 1,
			/* flags         */ 0x43
		},

		{ /* 7 */
			/* string        */ "HFINALB",
			/* variable_0004 */ 20,
			/* variable_0005 */ 0,
			/* flags         */ 0x3
		},

		{ /* 8 */
			/* string        */ "HFINALB",
			/* variable_0004 */ 45,
			/* variable_0005 */ 0,
			/* flags         */ 0x42
		},

		{ /* 9 */
			/* string        */ "HFINALC",
			/* variable_0004 */ 45,
			/* variable_0005 */ 0,
			/* flags         */ 0x2
		},

		{ /* 10 */
			/* string        */ "",
			/* variable_0004 */ 10,
			/* variable_0005 */ 10,
			/* flags         */ 0x8
		},

		{ /* 11 */
			/* string        */ "",
			/* variable_0004 */ 0,
			/* variable_0005 */ 0,
			/* flags         */ 0x0
		}
	},

	{ /* 8 - Level 9: Atreides */
		{ /* 0 */
			/* string        */ "AFINALA",
			/* variable_0004 */ 35,
			/* variable_0005 */ 0,
			/* flags         */ 0x7
		},

		{ /* 1 */
			/* string        */ "EFINALA",
			/* variable_0004 */ 60,
			/* variable_0005 */ 0,
			/* flags         */ 0x42
		},

		{ /* 2 */
			/* string        */ "AFINALA",
			/* variable_0004 */ 40,
			/* variable_0005 */ 0,
			/* flags         */ 0x42
		},

		{ /* 3 */
			/* string        */ "",
			/* variable_0004 */ 16,
			/* variable_0005 */ 10,
			/* flags         */ 0x0
		},

		{ /* 4 */
			/* string        */ "EFINALB",
			/* variable_0004 */ 55,
			/* variable_0005 */ 0,
			/* flags         */ 0x3
		},

		{ /* 5 */
			/* string        */ "EFINALB",
			/* variable_0004 */ 20,
			/* variable_0005 */ 1,
			/* flags         */ 0x43
		},

		{ /* 6 */
			/* string        */ "AFINALB",
			/* variable_0004 */ 20,
			/* variable_0005 */ 0,
			/* flags         */ 0x42
		},

		{ /* 7 */
			/* string        */ "",
			/* variable_0004 */ 35,
			/* variable_0005 */ 10,
			/* flags         */ 0x8
		},

		{ /* 8 */
			/* string        */ "",
			/* variable_0004 */ 0,
			/* variable_0005 */ 0,
			/* flags         */ 0x0
		}
	},

	{ /* 9 - Level 9: Ordos */
		{ /* 0 */
			/* string        */ "OFINALA",
			/* variable_0004 */ 65,
			/* variable_0005 */ 0,
			/* flags         */ 0x7
		},

		{ /* 1 */
			/* string        */ "EFINALA",
			/* variable_0004 */ 60,
			/* variable_0005 */ 0,
			/* flags         */ 0x42
		},

		{ /* 2 */
			/* string        */ "OFINALA",
			/* variable_0004 */ 20,
			/* variable_0005 */ 0,
			/* flags         */ 0x42
		},

		{ /* 3 */
			/* string        */ "",
			/* variable_0004 */ 19,
			/* variable_0005 */ 10,
			/* flags         */ 0x0
		},

		{ /* 4 */
			/* string        */ "OFINALB",
			/* variable_0004 */ 20,
			/* variable_0005 */ 0,
			/* flags         */ 0x2
		},

		{ /* 5 */
			/* string        */ "",
			/* variable_0004 */ 15,
			/* variable_0005 */ 10,
			/* flags         */ 0x0
		},

		{ /* 6 */
			/* string        */ "OFINALC",
			/* variable_0004 */ 20,
			/* variable_0005 */ 0,
			/* flags         */ 0x2
		},

		{ /* 7 */
			/* string        */ "",
			/* variable_0004 */ 22,
			/* variable_0005 */ 10,
			/* flags         */ 0x0
		},

		{ /* 8 */
			/* string        */ "EFINALB",
			/* variable_0004 */ 25,
			/* variable_0005 */ 0,
			/* flags         */ 0x3
		},

		{ /* 9 */
			/* string        */ "EFINALB",
			/* variable_0004 */ 15,
			/* variable_0005 */ 1,
			/* flags         */ 0x43
		},

		{ /* 10 */
			/* string        */ "OFINALD",
			/* variable_0004 */ 10,
			/* variable_0005 */ 0,
			/* flags         */ 0x3
		},

		{ /* 11 */
			/* string        */ "OFINALD",
			/* variable_0004 */ 16,
			/* variable_0005 */ 0,
			/* flags         */ 0x42
		},

		{ /* 12 */
			/* string        */ "",
			/* variable_0004 */ 20,
			/* variable_0005 */ 10,
			/* flags         */ 0x8
		},

		{ /* 13 */
			/* string        */ "",
			/* variable_0004 */ 0,
			/* variable_0005 */ 0,
			/* flags         */ 0x0
		}
	}
};

const HouseAnimation_Subtitle g_houseAnimation_subtitle[][32] = {
	{ /* 0 - intro */
		{ /* 0 */
			/* stringID      */ 1,
			/* variable_0002 */ 0,
			/* variable_0004 */ 0,
			/* top           */ 94,
			/* variable_0006 */ 1,
			/* variable_0007 */ 2,
			/* variable_0008 */ 7,
			/* variable_0009 */ 2
		},

		{ /* 1 */
			/* stringID      */ 0,
			/* variable_0002 */ 0,
			/* variable_0004 */ 1,
			/* top           */ 154,
			/* variable_0006 */ 45,
			/* variable_0007 */ 1,
			/* variable_0008 */ 1,
			/* variable_0009 */ 1
		},

		{ /* 2 */
			/* stringID      */ 2,
			/* variable_0002 */ 0,
			/* variable_0004 */ 2,
			/* top           */ 104,
			/* variable_0006 */ 1,
			/* variable_0007 */ 5,
			/* variable_0008 */ 7,
			/* variable_0009 */ 64
		},

		{ /* 3 */
			/* stringID      */ 3,
			/* variable_0002 */ 0,
			/* variable_0004 */ 3,
			/* top           */ 154,
			/* variable_0006 */ 3,
			/* variable_0007 */ 5,
			/* variable_0008 */ 35,
			/* variable_0009 */ 5
		},

		{ /* 4 */
			/* stringID      */ 4,
			/* variable_0002 */ 0,
			/* variable_0004 */ 5,
			/* top           */ 154,
			/* variable_0006 */ 1,
			/* variable_0007 */ 4,
			/* variable_0008 */ 16,
			/* variable_0009 */ 4
		},

		{ /* 5 */
			/* stringID      */ 5,
			/* variable_0002 */ 0,
			/* variable_0004 */ 5,
			/* top           */ 154,
			/* variable_0006 */ 3,
			/* variable_0007 */ 4,
			/* variable_0008 */ 16,
			/* variable_0009 */ 4
		},

		{ /* 6 */
			/* stringID      */ 6,
			/* variable_0002 */ 0,
			/* variable_0004 */ 7,
			/* top           */ 154,
			/* variable_0006 */ 1,
			/* variable_0007 */ 5,
			/* variable_0008 */ 25,
			/* variable_0009 */ 5
		},

		{ /* 7 */
			/* stringID      */ 7,
			/* variable_0002 */ 0,
			/* variable_0004 */ 7,
			/* top           */ 154,
			/* variable_0006 */ 2,
			/* variable_0007 */ 5,
			/* variable_0008 */ 27,
			/* variable_0009 */ 9
		},

		{ /* 8 */
			/* stringID      */ 8,
			/* variable_0002 */ 0,
			/* variable_0004 */ 8,
			/* top           */ 154,
			/* variable_0006 */ 1,
			/* variable_0007 */ 5,
			/* variable_0008 */ 10,
			/* variable_0009 */ 5
		},

		{ /* 9 */
			/* stringID      */ 9,
			/* variable_0002 */ 4,
			/* variable_0004 */ 9,
			/* top           */ 154,
			/* variable_0006 */ 1,
			/* variable_0007 */ 4,
			/* variable_0008 */ 24,
			/* variable_0009 */ 4
		},

		{ /* 10 */
			/* stringID      */ 10,
			/* variable_0002 */ 4,
			/* variable_0004 */ 11,
			/* top           */ 154,
			/* variable_0006 */ 1,
			/* variable_0007 */ 4,
			/* variable_0008 */ 20,
			/* variable_0009 */ 3
		},

		{ /* 11 */
			/* stringID      */ 11,
			/* variable_0002 */ 4,
			/* variable_0004 */ 11,
			/* top           */ 154,
			/* variable_0006 */ 1,
			/* variable_0007 */ 3,
			/* variable_0008 */ 20,
			/* variable_0009 */ 4
		},

		{ /* 12 */
			/* stringID      */ 12,
			/* variable_0002 */ 0,
			/* variable_0004 */ 12,
			/* top           */ 154,
			/* variable_0006 */ 10,
			/* variable_0007 */ 3,
			/* variable_0008 */ 30,
			/* variable_0009 */ 4
		},

		{ /* 13 */
			/* stringID      */ 13,
			/* variable_0002 */ 0,
			/* variable_0004 */ 13,
			/* top           */ 85,
			/* variable_0006 */ 0,
			/* variable_0007 */ 2,
			/* variable_0008 */ 10,
			/* variable_0009 */ 1
		},

		{ /* 14 */
			/* stringID      */ 14,
			/* variable_0002 */ 0,
			/* variable_0004 */ 14,
			/* top           */ 154,
			/* variable_0006 */ 32,
			/* variable_0007 */ 2,
			/* variable_0008 */ 35,
			/* variable_0009 */ 7
		},

		{ /* 15 */
			/* stringID      */ 15,
			/* variable_0002 */ 0,
			/* variable_0004 */ 15,
			/* top           */ 154,
			/* variable_0006 */ 5,
			/* variable_0007 */ 2,
			/* variable_0008 */ 26,
			/* variable_0009 */ 7
		},

		{ /* 16 */
			/* stringID      */ 16,
			/* variable_0002 */ 0,
			/* variable_0004 */ 17,
			/* top           */ 154,
			/* variable_0006 */ 1,
			/* variable_0007 */ 2,
			/* variable_0008 */ 34,
			/* variable_0009 */ 7
		},

		{ /* 17 */
			/* stringID      */ 17,
			/* variable_0002 */ 0,
			/* variable_0004 */ 20,
			/* top           */ 154,
			/* variable_0006 */ 1,
			/* variable_0007 */ 4,
			/* variable_0008 */ 29,
			/* variable_0009 */ 5
		},

		{ /* 18 */
			/* stringID      */ 18,
			/* variable_0002 */ 0,
			/* variable_0004 */ 21,
			/* top           */ 85,
			/* variable_0006 */ 0,
			/* variable_0007 */ 3,
			/* variable_0008 */ 20,
			/* variable_0009 */ 0
		},

		{ /* 19 */
			/* stringID      */ 19,
			/* variable_0002 */ 0,
			/* variable_0004 */ 21,
			/* top           */ 85,
			/* variable_0006 */ 0,
			/* variable_0007 */ 0,
			/* variable_0008 */ 3,
			/* variable_0009 */ 15
		},

		{ /* 20 */
			/* stringID      */ 65535,
			/* variable_0002 */ 65535,
			/* variable_0004 */ 0,
			/* top           */ 0,
			/* variable_0006 */ 0,
			/* variable_0007 */ 0,
			/* variable_0008 */ 0,
			/* variable_0009 */ 0
		}
	},

	{ /* 1 - Level 4: Harkonnen */
		{ /* 0 */
			/* stringID      */ 309,
			/* variable_0002 */ 0,
			/* variable_0004 */ 0,
			/* top           */ 85,
			/* variable_0006 */ 1,
			/* variable_0007 */ 3,
			/* variable_0008 */ 6,
			/* variable_0009 */ 3
		},

		{ /* 1 */
			/* stringID      */ 310,
			/* variable_0002 */ 4,
			/* variable_0004 */ 1,
			/* top           */ 154,
			/* variable_0006 */ 1,
			/* variable_0007 */ 3,
			/* variable_0008 */ 11,
			/* variable_0009 */ 2
		},

		{ /* 2 */
			/* stringID      */ 311,
			/* variable_0002 */ 2,
			/* variable_0004 */ 1,
			/* top           */ 154,
			/* variable_0006 */ 1,
			/* variable_0007 */ 3,
			/* variable_0008 */ 7,
			/* variable_0009 */ 0
		},

		{ /* 3 */
			/* stringID      */ 312,
			/* variable_0002 */ 4,
			/* variable_0004 */ 2,
			/* top           */ 154,
			/* variable_0006 */ 0,
			/* variable_0007 */ 0,
			/* variable_0008 */ 22,
			/* variable_0009 */ 3
		},

		{ /* 4 */
			/* stringID      */ 313,
			/* variable_0002 */ 2,
			/* variable_0004 */ 3,
			/* top           */ 154,
			/* variable_0006 */ 1,
			/* variable_0007 */ 3,
			/* variable_0008 */ 4,
			/* variable_0009 */ 0
		},

		{ /* 5 */
			/* stringID      */ 314,
			/* variable_0002 */ 4,
			/* variable_0004 */ 3,
			/* top           */ 154,
			/* variable_0006 */ 0,
			/* variable_0007 */ 0,
			/* variable_0008 */ 99,
			/* variable_0009 */ 99
		},

		{ /* 6 */
			/* stringID      */ 65535,
			/* variable_0002 */ 65535,
			/* variable_0004 */ 0,
			/* top           */ 0,
			/* variable_0006 */ 0,
			/* variable_0007 */ 0,
			/* variable_0008 */ 0,
			/* variable_0009 */ 0
		}
	},

	{ /* 2 - Level 4: Atreides */
		{ /* 0 */
			/* stringID      */ 287,
			/* variable_0002 */ 1,
			/* variable_0004 */ 0,
			/* top           */ 85,
			/* variable_0006 */ 1,
			/* variable_0007 */ 3,
			/* variable_0008 */ 6,
			/* variable_0009 */ 3
		},

		{ /* 1 */
			/* stringID      */ 288,
			/* variable_0002 */ 4,
			/* variable_0004 */ 1,
			/* top           */ 154,
			/* variable_0006 */ 1,
			/* variable_0007 */ 3,
			/* variable_0008 */ 11,
			/* variable_0009 */ 2
		},

		{ /* 2 */
			/* stringID      */ 289,
			/* variable_0002 */ 0,
			/* variable_0004 */ 1,
			/* top           */ 154,
			/* variable_0006 */ 1,
			/* variable_0007 */ 3,
			/* variable_0008 */ 7,
			/* variable_0009 */ 0
		},

		{ /* 3 */
			/* stringID      */ 290,
			/* variable_0002 */ 4,
			/* variable_0004 */ 2,
			/* top           */ 154,
			/* variable_0006 */ 0,
			/* variable_0007 */ 0,
			/* variable_0008 */ 22,
			/* variable_0009 */ 3
		},

		{ /* 4 */
			/* stringID      */ 291,
			/* variable_0002 */ 0,
			/* variable_0004 */ 3,
			/* top           */ 154,
			/* variable_0006 */ 1,
			/* variable_0007 */ 3,
			/* variable_0008 */ 4,
			/* variable_0009 */ 0
		},

		{ /* 5 */
			/* stringID      */ 292,
			/* variable_0002 */ 4,
			/* variable_0004 */ 3,
			/* top           */ 154,
			/* variable_0006 */ 0,
			/* variable_0007 */ 0,
			/* variable_0008 */ 99,
			/* variable_0009 */ 99
		},

		{ /* 6 */
			/* stringID      */ 65535,
			/* variable_0002 */ 65535,
			/* variable_0004 */ 0,
			/* top           */ 0,
			/* variable_0006 */ 0,
			/* variable_0007 */ 0,
			/* variable_0008 */ 0,
			/* variable_0009 */ 0
		}
	},

	{ /* 3 - Level 4: Ordos */
		{ /* 0 */
			/* stringID      */ 298,
			/* variable_0002 */ 2,
			/* variable_0004 */ 0,
			/* top           */ 85,
			/* variable_0006 */ 1,
			/* variable_0007 */ 3,
			/* variable_0008 */ 6,
			/* variable_0009 */ 3
		},

		{ /* 1 */
			/* stringID      */ 299,
			/* variable_0002 */ 4,
			/* variable_0004 */ 1,
			/* top           */ 154,
			/* variable_0006 */ 1,
			/* variable_0007 */ 3,
			/* variable_0008 */ 11,
			/* variable_0009 */ 2
		},

		{ /* 2 */
			/* stringID      */ 300,
			/* variable_0002 */ 1,
			/* variable_0004 */ 1,
			/* top           */ 154,
			/* variable_0006 */ 1,
			/* variable_0007 */ 3,
			/* variable_0008 */ 7,
			/* variable_0009 */ 0
		},

		{ /* 3 */
			/* stringID      */ 301,
			/* variable_0002 */ 4,
			/* variable_0004 */ 2,
			/* top           */ 154,
			/* variable_0006 */ 0,
			/* variable_0007 */ 0,
			/* variable_0008 */ 22,
			/* variable_0009 */ 3
		},

		{ /* 4 */
			/* stringID      */ 302,
			/* variable_0002 */ 1,
			/* variable_0004 */ 3,
			/* top           */ 154,
			/* variable_0006 */ 1,
			/* variable_0007 */ 1,
			/* variable_0008 */ 3,
			/* variable_0009 */ 0
		},

		{ /* 5 */
			/* stringID      */ 303,
			/* variable_0002 */ 4,
			/* variable_0004 */ 3,
			/* top           */ 154,
			/* variable_0006 */ 0,
			/* variable_0007 */ 0,
			/* variable_0008 */ 99,
			/* variable_0009 */ 99
		},

		{ /* 6 */
			/* stringID      */ 65535,
			/* variable_0002 */ 65535,
			/* variable_0004 */ 0,
			/* top           */ 0,
			/* variable_0006 */ 0,
			/* variable_0007 */ 0,
			/* variable_0008 */ 0,
			/* variable_0009 */ 0
		}
	},

	{ /* 4 - Level 8: Harkonnen */
		{ /* 0 */
			/* stringID      */ 315,
			/* variable_0002 */ 0,
			/* variable_0004 */ 0,
			/* top           */ 85,
			/* variable_0006 */ 1,
			/* variable_0007 */ 3,
			/* variable_0008 */ 6,
			/* variable_0009 */ 3
		},

		{ /* 1 */
			/* stringID      */ 316,
			/* variable_0002 */ 4,
			/* variable_0004 */ 1,
			/* top           */ 154,
			/* variable_0006 */ 1,
			/* variable_0007 */ 2,
			/* variable_0008 */ 12,
			/* variable_0009 */ 1
		},

		{ /* 2 */
			/* stringID      */ 317,
			/* variable_0002 */ 2,
			/* variable_0004 */ 1,
			/* top           */ 154,
			/* variable_0006 */ 0,
			/* variable_0007 */ 1,
			/* variable_0008 */ 6,
			/* variable_0009 */ 0
		},

		{ /* 3 */
			/* stringID      */ 318,
			/* variable_0002 */ 4,
			/* variable_0004 */ 1,
			/* top           */ 154,
			/* variable_0006 */ 0,
			/* variable_0007 */ 0,
			/* variable_0008 */ 4,
			/* variable_0009 */ 0
		},

		{ /* 4 */
			/* stringID      */ 319,
			/* variable_0002 */ 4,
			/* variable_0004 */ 2,
			/* top           */ 154,
			/* variable_0006 */ 0,
			/* variable_0007 */ 0,
			/* variable_0008 */ 22,
			/* variable_0009 */ 0
		},

		{ /* 5 */
			/* stringID      */ 320,
			/* variable_0002 */ 4,
			/* variable_0004 */ 2,
			/* top           */ 154,
			/* variable_0006 */ 0,
			/* variable_0007 */ 0,
			/* variable_0008 */ 99,
			/* variable_0009 */ 99
		},

		{ /* 6 */
			/* stringID      */ 65535,
			/* variable_0002 */ 65535,
			/* variable_0004 */ 0,
			/* top           */ 0,
			/* variable_0006 */ 0,
			/* variable_0007 */ 0,
			/* variable_0008 */ 0,
			/* variable_0009 */ 0
		}
	},

	{ /* 5 - Level 8: Atreides */
		{ /* 0 */
			/* stringID      */ 293,
			/* variable_0002 */ 1,
			/* variable_0004 */ 0,
			/* top           */ 85,
			/* variable_0006 */ 1,
			/* variable_0007 */ 3,
			/* variable_0008 */ 6,
			/* variable_0009 */ 3
		},

		{ /* 1 */
			/* stringID      */ 294,
			/* variable_0002 */ 4,
			/* variable_0004 */ 1,
			/* top           */ 154,
			/* variable_0006 */ 1,
			/* variable_0007 */ 2,
			/* variable_0008 */ 7,
			/* variable_0009 */ 1
		},

		{ /* 2 */
			/* stringID      */ 295,
			/* variable_0002 */ 4,
			/* variable_0004 */ 1,
			/* top           */ 154,
			/* variable_0006 */ 0,
			/* variable_0007 */ 1,
			/* variable_0008 */ 8,
			/* variable_0009 */ 1
		},

		{ /* 3 */
			/* stringID      */ 296,
			/* variable_0002 */ 0,
			/* variable_0004 */ 1,
			/* top           */ 154,
			/* variable_0006 */ 0,
			/* variable_0007 */ 3,
			/* variable_0008 */ 4,
			/* variable_0009 */ 0
		},

		{ /* 4 */
			/* stringID      */ 297,
			/* variable_0002 */ 4,
			/* variable_0004 */ 2,
			/* top           */ 154,
			/* variable_0006 */ 0,
			/* variable_0007 */ 0,
			/* variable_0008 */ 99,
			/* variable_0009 */ 99
		},

		{ /* 5 */
			/* stringID      */ 65535,
			/* variable_0002 */ 65535,
			/* variable_0004 */ 0,
			/* top           */ 0,
			/* variable_0006 */ 0,
			/* variable_0007 */ 0,
			/* variable_0008 */ 0,
			/* variable_0009 */ 0
		}
	},

	{ /* 6 - Level 8: Ordos */
		{ /* 0 */
			/* stringID      */ 304,
			/* variable_0002 */ 2,
			/* variable_0004 */ 0,
			/* top           */ 85,
			/* variable_0006 */ 1,
			/* variable_0007 */ 3,
			/* variable_0008 */ 6,
			/* variable_0009 */ 3
		},

		{ /* 1 */
			/* stringID      */ 305,
			/* variable_0002 */ 4,
			/* variable_0004 */ 1,
			/* top           */ 154,
			/* variable_0006 */ 1,
			/* variable_0007 */ 3,
			/* variable_0008 */ 11,
			/* variable_0009 */ 3
		},

		{ /* 2 */
			/* stringID      */ 306,
			/* variable_0002 */ 1,
			/* variable_0004 */ 1,
			/* top           */ 154,
			/* variable_0006 */ 1,
			/* variable_0007 */ 2,
			/* variable_0008 */ 8,
			/* variable_0009 */ 0
		},

		{ /* 3 */
			/* stringID      */ 307,
			/* variable_0002 */ 4,
			/* variable_0004 */ 2,
			/* top           */ 154,
			/* variable_0006 */ 0,
			/* variable_0007 */ 0,
			/* variable_0008 */ 23,
			/* variable_0009 */ 0
		},

		{ /* 4 */
			/* stringID      */ 308,
			/* variable_0002 */ 4,
			/* variable_0004 */ 2,
			/* top           */ 154,
			/* variable_0006 */ 0,
			/* variable_0007 */ 0,
			/* variable_0008 */ 99,
			/* variable_0009 */ 99
		},

		{ /* 5 */
			/* stringID      */ 65535,
			/* variable_0002 */ 65535,
			/* variable_0004 */ 0,
			/* top           */ 0,
			/* variable_0006 */ 0,
			/* variable_0007 */ 0,
			/* variable_0008 */ 0,
			/* variable_0009 */ 0
		}
	},

	{ /* 7 - Level 9: Harkonnen */
		{ /* 0 */
			/* stringID      */ 25,
			/* variable_0002 */ 0,
			/* variable_0004 */ 0,
			/* top           */ 154,
			/* variable_0006 */ 1,
			/* variable_0007 */ 3,
			/* variable_0008 */ 9,
			/* variable_0009 */ 3
		},

		{ /* 1 */
			/* stringID      */ 26,
			/* variable_0002 */ 0,
			/* variable_0004 */ 1,
			/* top           */ 154,
			/* variable_0006 */ 1,
			/* variable_0007 */ 3,
			/* variable_0008 */ 14,
			/* variable_0009 */ 3
		},

		{ /* 2 */
			/* stringID      */ 27,
			/* variable_0002 */ 4,
			/* variable_0004 */ 3,
			/* top           */ 154,
			/* variable_0006 */ 2,
			/* variable_0007 */ 3,
			/* variable_0008 */ 22,
			/* variable_0009 */ 3
		},

		{ /* 3 */
			/* stringID      */ 28,
			/* variable_0002 */ 0,
			/* variable_0004 */ 4,
			/* top           */ 154,
			/* variable_0006 */ 1,
			/* variable_0007 */ 3,
			/* variable_0008 */ 17,
			/* variable_0009 */ 3
		},

		{ /* 4 */
			/* stringID      */ 29,
			/* variable_0002 */ 0,
			/* variable_0004 */ 5,
			/* top           */ 154,
			/* variable_0006 */ 1,
			/* variable_0007 */ 3,
			/* variable_0008 */ 17,
			/* variable_0009 */ 1
		},

		{ /* 5 */
			/* stringID      */ 30,
			/* variable_0002 */ 0,
			/* variable_0004 */ 5,
			/* top           */ 154,
			/* variable_0006 */ 1,
			/* variable_0007 */ 1,
			/* variable_0008 */ 26,
			/* variable_0009 */ 3
		},

		{ /* 6 */
			/* stringID      */ 31,
			/* variable_0002 */ 4,
			/* variable_0004 */ 8,
			/* top           */ 154,
			/* variable_0006 */ 2,
			/* variable_0007 */ 2,
			/* variable_0008 */ 10,
			/* variable_0009 */ 3
		},

		{ /* 7 */
			/* stringID      */ 65535,
			/* variable_0002 */ 65535,
			/* variable_0004 */ 0,
			/* top           */ 0,
			/* variable_0006 */ 0,
			/* variable_0007 */ 0,
			/* variable_0008 */ 0,
			/* variable_0009 */ 0
		}
	},

	{ /* 8 - Level 9: Atreides */
		{ /* 0 */
			/* stringID      */ 20,
			/* variable_0002 */ 1,
			/* variable_0004 */ 0,
			/* top           */ 154,
			/* variable_0006 */ 1,
			/* variable_0007 */ 3,
			/* variable_0008 */ 14,
			/* variable_0009 */ 3
		},

		{ /* 1 */
			/* stringID      */ 21,
			/* variable_0002 */ 4,
			/* variable_0004 */ 1,
			/* top           */ 154,
			/* variable_0006 */ 2,
			/* variable_0007 */ 3,
			/* variable_0008 */ 39,
			/* variable_0009 */ 2
		},

		{ /* 2 */
			/* stringID      */ 22,
			/* variable_0002 */ 1,
			/* variable_0004 */ 2,
			/* top           */ 154,
			/* variable_0006 */ 1,
			/* variable_0007 */ 3,
			/* variable_0008 */ 32,
			/* variable_0009 */ 3
		},

		{ /* 3 */
			/* stringID      */ 23,
			/* variable_0002 */ 1,
			/* variable_0004 */ 4,
			/* top           */ 154,
			/* variable_0006 */ 1,
			/* variable_0007 */ 3,
			/* variable_0008 */ 14,
			/* variable_0009 */ 3
		},

		{ /* 4 */
			/* stringID      */ 24,
			/* variable_0002 */ 1,
			/* variable_0004 */ 4,
			/* top           */ 154,
			/* variable_0006 */ 1,
			/* variable_0007 */ 3,
			/* variable_0008 */ 32,
			/* variable_0009 */ 3
		},

		{ /* 5 */
			/* stringID      */ 65535,
			/* variable_0002 */ 65535,
			/* variable_0004 */ 0,
			/* top           */ 0,
			/* variable_0006 */ 0,
			/* variable_0007 */ 0,
			/* variable_0008 */ 0,
			/* variable_0009 */ 0
		}
	},

	{ /* 9 - Level 9: Ordos */
		{ /* 0 */
			/* stringID      */ 32,
			/* variable_0002 */ 2,
			/* variable_0004 */ 0,
			/* top           */ 154,
			/* variable_0006 */ 1,
			/* variable_0007 */ 3,
			/* variable_0008 */ 18,
			/* variable_0009 */ 3
		},

		{ /* 1 */
			/* stringID      */ 33,
			/* variable_0002 */ 4,
			/* variable_0004 */ 1,
			/* top           */ 154,
			/* variable_0006 */ 2,
			/* variable_0007 */ 3,
			/* variable_0008 */ 22,
			/* variable_0009 */ 3
		},

		{ /* 2 */
			/* stringID      */ 34,
			/* variable_0002 */ 2,
			/* variable_0004 */ 2,
			/* top           */ 154,
			/* variable_0006 */ 1,
			/* variable_0007 */ 3,
			/* variable_0008 */ 15,
			/* variable_0009 */ 3
		},

		{ /* 3 */
			/* stringID      */ 35,
			/* variable_0002 */ 2,
			/* variable_0004 */ 4,
			/* top           */ 154,
			/* variable_0006 */ 1,
			/* variable_0007 */ 3,
			/* variable_0008 */ 25,
			/* variable_0009 */ 3
		},

		{ /* 4 */
			/* stringID      */ 36,
			/* variable_0002 */ 2,
			/* variable_0004 */ 6,
			/* top           */ 154,
			/* variable_0006 */ 1,
			/* variable_0007 */ 3,
			/* variable_0008 */ 22,
			/* variable_0009 */ 3
		},

		{ /* 5 */
			/* stringID      */ 37,
			/* variable_0002 */ 2,
			/* variable_0004 */ 8,
			/* top           */ 154,
			/* variable_0006 */ 3,
			/* variable_0007 */ 3,
			/* variable_0008 */ 40,
			/* variable_0009 */ 3
		},

		{ /* 6 */
			/* stringID      */ 65535,
			/* variable_0002 */ 65535,
			/* variable_0004 */ 0,
			/* top           */ 0,
			/* variable_0006 */ 0,
			/* variable_0007 */ 0,
			/* variable_0008 */ 0,
			/* variable_0009 */ 0
		}
	}
};

const HouseAnimation_Voice g_houseAnimation_voice[][90] = {
	{ /* 0 - intro */
		{ /* 0 */
			/* variable_0000 */ 5,
			/* voiceID       */ 108,
			/* variable_0002 */ 12,
		},

		{ /* 1 */
			/* variable_0000 */ 7,
			/* voiceID       */ 117,
			/* variable_0002 */ 19,
		},

		{ /* 2 */
			/* variable_0000 */ 7,
			/* voiceID       */ 109,
			/* variable_0002 */ 33,
		},

		{ /* 3 */
			/* variable_0000 */ 7,
			/* voiceID       */ 110,
			/* variable_0002 */ 52,
		},

		{ /* 4 */
			/* variable_0000 */ 12,
			/* voiceID       */ 105,
			/* variable_0002 */ 2,
		},

		{ /* 5 */
			/* variable_0000 */ 12,
			/* voiceID       */ 106,
			/* variable_0002 */ 4,
		},

		{ /* 6 */
			/* variable_0000 */ 12,
			/* voiceID       */ 106,
			/* variable_0002 */ 20,
		},

		{ /* 7 */
			/* variable_0000 */ 12,
			/* voiceID       */ 111,
			/* variable_0002 */ 22,
		},

		{ /* 8 */
			/* variable_0000 */ 12,
			/* voiceID       */ 106,
			/* variable_0002 */ 37,
		},

		{ /* 9 */
			/* variable_0000 */ 12,
			/* voiceID       */ 117,
			/* variable_0002 */ 38,
		},

		{ /* 10 */
			/* variable_0000 */ 14,
			/* voiceID       */ 112,
			/* variable_0002 */ 21,
		},

		{ /* 11 */
			/* variable_0000 */ 14,
			/* voiceID       */ 112,
			/* variable_0002 */ 22,
		},

		{ /* 12 */
			/* variable_0000 */ 14,
			/* voiceID       */ 112,
			/* variable_0002 */ 23,
		},

		{ /* 13 */
			/* variable_0000 */ 14,
			/* voiceID       */ 112,
			/* variable_0002 */ 24,
		},

		{ /* 14 */
			/* variable_0000 */ 14,
			/* voiceID       */ 112,
			/* variable_0002 */ 25,
		},

		{ /* 15 */
			/* variable_0000 */ 14,
			/* voiceID       */ 112,
			/* variable_0002 */ 26,
		},

		{ /* 16 */
			/* variable_0000 */ 14,
			/* voiceID       */ 112,
			/* variable_0002 */ 27,
		},

		{ /* 17 */
			/* variable_0000 */ 14,
			/* voiceID       */ 112,
			/* variable_0002 */ 28,
		},

		{ /* 18 */
			/* variable_0000 */ 14,
			/* voiceID       */ 112,
			/* variable_0002 */ 29,
		},

		{ /* 19 */
			/* variable_0000 */ 14,
			/* voiceID       */ 112,
			/* variable_0002 */ 30,
		},

		{ /* 20 */
			/* variable_0000 */ 14,
			/* voiceID       */ 112,
			/* variable_0002 */ 31,
		},

		{ /* 21 */
			/* variable_0000 */ 14,
			/* voiceID       */ 113,
			/* variable_0002 */ 32,
		},

		{ /* 22 */
			/* variable_0000 */ 14,
			/* voiceID       */ 113,
			/* variable_0002 */ 33,
		},

		{ /* 23 */
			/* variable_0000 */ 14,
			/* voiceID       */ 113,
			/* variable_0002 */ 34,
		},

		{ /* 24 */
			/* variable_0000 */ 14,
			/* voiceID       */ 112,
			/* variable_0002 */ 51,
		},

		{ /* 25 */
			/* variable_0000 */ 14,
			/* voiceID       */ 112,
			/* variable_0002 */ 52,
		},

		{ /* 26 */
			/* variable_0000 */ 14,
			/* voiceID       */ 112,
			/* variable_0002 */ 53,
		},

		{ /* 27 */
			/* variable_0000 */ 14,
			/* voiceID       */ 112,
			/* variable_0002 */ 54,
		},

		{ /* 28 */
			/* variable_0000 */ 14,
			/* voiceID       */ 112,
			/* variable_0002 */ 55,
		},

		{ /* 29 */
			/* variable_0000 */ 14,
			/* voiceID       */ 112,
			/* variable_0002 */ 56,
		},

		{ /* 30 */
			/* variable_0000 */ 14,
			/* voiceID       */ 112,
			/* variable_0002 */ 57,
		},

		{ /* 31 */
			/* variable_0000 */ 14,
			/* voiceID       */ 112,
			/* variable_0002 */ 58,
		},

		{ /* 32 */
			/* variable_0000 */ 14,
			/* voiceID       */ 112,
			/* variable_0002 */ 59,
		},

		{ /* 33 */
			/* variable_0000 */ 14,
			/* voiceID       */ 112,
			/* variable_0002 */ 60,
		},

		{ /* 34 */
			/* variable_0000 */ 14,
			/* voiceID       */ 112,
			/* variable_0002 */ 61,
		},

		{ /* 35 */
			/* variable_0000 */ 14,
			/* voiceID       */ 113,
			/* variable_0002 */ 62,
		},

		{ /* 36 */
			/* variable_0000 */ 14,
			/* voiceID       */ 113,
			/* variable_0002 */ 63,
		},

		{ /* 37 */
			/* variable_0000 */ 15,
			/* voiceID       */ 114,
			/* variable_0002 */ 5,
		},

		{ /* 38 */
			/* variable_0000 */ 15,
			/* voiceID       */ 114,
			/* variable_0002 */ 9,
		},

		{ /* 39 */
			/* variable_0000 */ 15,
			/* voiceID       */ 116,
			/* variable_0002 */ 19,
		},

		{ /* 40 */
			/* variable_0000 */ 16,
			/* voiceID       */ 114,
			/* variable_0002 */ 3,
		},

		{ /* 41 */
			/* variable_0000 */ 16,
			/* voiceID       */ 114,
			/* variable_0002 */ 13,
		},

		{ /* 42 */
			/* variable_0000 */ 17,
			/* voiceID       */ 112,
			/* variable_0002 */ 2,
		},

		{ /* 43 */
			/* variable_0000 */ 17,
			/* voiceID       */ 112,
			/* variable_0002 */ 3,
		},

		{ /* 44 */
			/* variable_0000 */ 17,
			/* voiceID       */ 112,
			/* variable_0002 */ 4,
		},

		{ /* 45 */
			/* variable_0000 */ 17,
			/* voiceID       */ 115,
			/* variable_0002 */ 5,
		},

		{ /* 46 */
			/* variable_0000 */ 17,
			/* voiceID       */ 112,
			/* variable_0002 */ 7,
		},

		{ /* 47 */
			/* variable_0000 */ 17,
			/* voiceID       */ 115,
			/* variable_0002 */ 8,
		},

		{ /* 48 */
			/* variable_0000 */ 17,
			/* voiceID       */ 112,
			/* variable_0002 */ 9,
		},

		{ /* 49 */
			/* variable_0000 */ 17,
			/* voiceID       */ 112,
			/* variable_0002 */ 10,
		},

		{ /* 50 */
			/* variable_0000 */ 17,
			/* voiceID       */ 112,
			/* variable_0002 */ 11,
		},

		{ /* 51 */
			/* variable_0000 */ 17,
			/* voiceID       */ 112,
			/* variable_0002 */ 12,
		},

		{ /* 52 */
			/* variable_0000 */ 17,
			/* voiceID       */ 112,
			/* variable_0002 */ 13,
		},

		{ /* 53 */
			/* variable_0000 */ 17,
			/* voiceID       */ 112,
			/* variable_0002 */ 14,
		},

		{ /* 54 */
			/* variable_0000 */ 18,
			/* voiceID       */ 112,
			/* variable_0002 */ 3,
		},

		{ /* 55 */
			/* variable_0000 */ 18,
			/* voiceID       */ 112,
			/* variable_0002 */ 4,
		},

		{ /* 56 */
			/* variable_0000 */ 18,
			/* voiceID       */ 112,
			/* variable_0002 */ 5,
		},

		{ /* 57 */
			/* variable_0000 */ 18,
			/* voiceID       */ 115,
			/* variable_0002 */ 6,
		},

		{ /* 58 */
			/* variable_0000 */ 18,
			/* voiceID       */ 112,
			/* variable_0002 */ 7,
		},

		{ /* 59 */
			/* variable_0000 */ 18,
			/* voiceID       */ 112,
			/* variable_0002 */ 8,
		},

		{ /* 60 */
			/* variable_0000 */ 18,
			/* voiceID       */ 112,
			/* variable_0002 */ 9,
		},

		{ /* 61 */
			/* variable_0000 */ 18,
			/* voiceID       */ 112,
			/* variable_0002 */ 10,
		},

		{ /* 62 */
			/* variable_0000 */ 18,
			/* voiceID       */ 112,
			/* variable_0002 */ 11,
		},

		{ /* 63 */
			/* variable_0000 */ 18,
			/* voiceID       */ 112,
			/* variable_0002 */ 12,
		},

		{ /* 64 */
			/* variable_0000 */ 18,
			/* voiceID       */ 112,
			/* variable_0002 */ 13,
		},

		{ /* 65 */
			/* variable_0000 */ 18,
			/* voiceID       */ 112,
			/* variable_0002 */ 14,
		},

		{ /* 66 */
			/* variable_0000 */ 18,
			/* voiceID       */ 112,
			/* variable_0002 */ 15,
		},

		{ /* 67 */
			/* variable_0000 */ 19,
			/* voiceID       */ 112,
			/* variable_0002 */ 2,
		},

		{ /* 68 */
			/* variable_0000 */ 19,
			/* voiceID       */ 112,
			/* variable_0002 */ 3,
		},

		{ /* 69 */
			/* variable_0000 */ 19,
			/* voiceID       */ 112,
			/* variable_0002 */ 4,
		},

		{ /* 70 */
			/* variable_0000 */ 19,
			/* voiceID       */ 112,
			/* variable_0002 */ 5,
		},

		{ /* 71 */
			/* variable_0000 */ 19,
			/* voiceID       */ 112,
			/* variable_0002 */ 6,
		},

		{ /* 72 */
			/* variable_0000 */ 19,
			/* voiceID       */ 112,
			/* variable_0002 */ 7,
		},

		{ /* 73 */
			/* variable_0000 */ 19,
			/* voiceID       */ 112,
			/* variable_0002 */ 8,
		},

		{ /* 74 */
			/* variable_0000 */ 19,
			/* voiceID       */ 112,
			/* variable_0002 */ 9,
		},

		{ /* 75 */
			/* variable_0000 */ 19,
			/* voiceID       */ 112,
			/* variable_0002 */ 10,
		},

		{ /* 76 */
			/* variable_0000 */ 19,
			/* voiceID       */ 112,
			/* variable_0002 */ 11,
		},

		{ /* 77 */
			/* variable_0000 */ 19,
			/* voiceID       */ 112,
			/* variable_0002 */ 12,
		},

		{ /* 78 */
			/* variable_0000 */ 19,
			/* voiceID       */ 112,
			/* variable_0002 */ 13,
		},

		{ /* 79 */
			/* variable_0000 */ 19,
			/* voiceID       */ 112,
			/* variable_0002 */ 14,
		},

		{ /* 80 */
			/* variable_0000 */ 19,
			/* voiceID       */ 112,
			/* variable_0002 */ 15,
		},

		{ /* 81 */
			/* variable_0000 */ 19,
			/* voiceID       */ 118,
			/* variable_0002 */ 18,
		},

		{ /* 82 */
			/* variable_0000 */ 19,
			/* voiceID       */ 119,
			/* variable_0002 */ 28,
		},

		{ /* 83 */
			/* variable_0000 */ 22,
			/* voiceID       */ 255,
			/* variable_0002 */ 0,
		}
	},

	{ /* 1 - Level 4: Harkonnen */
		{ /* 0 */
			/* variable_0000 */ 4,
			/* voiceID       */ 255,
			/* variable_0002 */ 0,
		}
	},

	{ /* 2 - Level 4: Atreides */
		{ /* 0 */
			/* variable_0000 */ 4,
			/* voiceID       */ 255,
			/* variable_0002 */ 0,
		}
	},

	{ /* 3 - Level 4: Ordos */
		{ /* 0 */
			/* variable_0000 */ 4,
			/* voiceID       */ 255,
			/* variable_0002 */ 0,
		}
	},

	{ /* 4 - Level 8: Harkonnen */
		{ /* 0 */
			/* variable_0000 */ 4,
			/* voiceID       */ 255,
			/* variable_0002 */ 0,
		}
	},

	{ /* 5 - Level 8: Atreides */
		{ /* 0 */
			/* variable_0000 */ 4,
			/* voiceID       */ 255,
			/* variable_0002 */ 0,
		}
	},

	{ /* 6 - Level 8: Ordos */
		{ /* 0 */
			/* variable_0000 */ 4,
			/* voiceID       */ 255,
			/* variable_0002 */ 0,
		}
	},

	{ /* 7 - Level 9: Harkonnen */
		{ /* 0 */
			/* variable_0000 */ 8,
			/* voiceID       */ 69,
			/* variable_0002 */ 2,
		},

		{ /* 1 */
			/* variable_0000 */ 8,
			/* voiceID       */ 65,
			/* variable_0002 */ 10,
		},

		{ /* 2 */
			/* variable_0000 */ 8,
			/* voiceID       */ 68,
			/* variable_0002 */ 12,
		},

		{ /* 3 */
			/* variable_0000 */ 8,
			/* voiceID       */ 69,
			/* variable_0002 */ 36,
		},

		{ /* 4 */
			/* variable_0000 */ 9,
			/* voiceID       */ 65,
			/* variable_0002 */ 0,
		},

		{ /* 5 */
			/* variable_0000 */ 9,
			/* voiceID       */ 68,
			/* variable_0002 */ 2,
		},

		{ /* 6 */
			/* variable_0000 */ 9,
			/* voiceID       */ 66,
			/* variable_0002 */ 25,
		},

		{ /* 7 */
			/* variable_0000 */ 11,
			/* voiceID       */ 255,
			/* variable_0002 */ 0,
		}
	},

	{ /* 8 - Level 9: Atreides */
		{ /* 0 */
			/* variable_0000 */ 2,
			/* voiceID       */ 67,
			/* variable_0002 */ 2,
		},

		{ /* 1 */
			/* variable_0000 */ 6,
			/* voiceID       */ 67,
			/* variable_0002 */ 1,
		},

		{ /* 2 */
			/* variable_0000 */ 13,
			/* voiceID       */ 255,
			/* variable_0002 */ 0,
		}
	},

	{ /* 9 - Level 9: Ordos */
		{ /* 0 */
			/* variable_0000 */ 8,
			/* voiceID       */ 255,
			/* variable_0002 */ 0,
		}
	}
};
