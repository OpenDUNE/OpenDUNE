/* $Id$ */

/** @file src/table/houseanimation.c House animation tables. */

#include "types.h"

#include "../house.h"
#include "strings.h"

const HouseAnimation_Animation g_table_houseAnimation_animation[][32] = {
	{ /* 0 - intro */
		{ /* 0 */
			/* string     */ "",
			/* duration   */ 20,
			/* frameCount */ 10,
			/* flags      */ 0x40
		},

		{ /* 1 */
			/* string     */ "INTRO1",
			/* duration   */ 45,
			/* frameCount */ 0,
			/* flags      */ 0x62
		},

		{ /* 2 */
			/* string     */ "",
			/* duration   */ 50,
			/* frameCount */ 10,
			/* flags      */ 0x48
		},

		{ /* 3 */
			/* string     */ "INTRO2",
			/* duration   */ 80,
			/* frameCount */ 0,
			/* flags      */ 0x46
		},

		{ /* 4 */
			/* string     */ "",
			/* duration   */ 20,
			/* frameCount */ 10,
			/* flags      */ 0x8
		},

		{ /* 5 */
			/* string     */ "INTRO3",
			/* duration   */ 100,
			/* frameCount */ 0,
			/* flags      */ 0x46
		},

		{ /* 6 */
			/* string     */ "",
			/* duration   */ 30,
			/* frameCount */ 10,
			/* flags      */ 0x0
		},

		{ /* 7 */
			/* string     */ "INTRO9",
			/* duration   */ 200,
			/* frameCount */ 0,
			/* flags      */ 0x8A
		},

		{ /* 8 */
			/* string     */ "INTRO10",
			/* duration   */ 75,
			/* frameCount */ 15,
			/* flags      */ 0x45
		},

		{ /* 9 */
			/* string     */ "EFINALA",
			/* duration   */ 57,
			/* frameCount */ 0,
			/* flags      */ 0x42
		},

		{ /* 10 */
			/* string     */ "",
			/* duration   */ 1,
			/* frameCount */ 2,
			/* flags      */ 0x0
		},

		{ /* 11 */
			/* string     */ "INTRO11",
			/* duration   */ 63,
			/* frameCount */ 0,
			/* flags      */ 0x4A
		},

		{ /* 12 */
			/* string     */ "INTRO4",
			/* duration   */ 130,
			/* frameCount */ 0,
			/* flags      */ 0x4E
		},

		{ /* 13 */
			/* string     */ "",
			/* duration   */ 40,
			/* frameCount */ 10,
			/* flags      */ 0x0
		},

		{ /* 14 */
			/* string     */ "INTRO6",
			/* duration   */ 90,
			/* frameCount */ 0,
			/* flags      */ 0x46
		},

		{ /* 15 */
			/* string     */ "INTRO7a",
			/* duration   */ 55,
			/* frameCount */ 0,
			/* flags      */ 0x402
		},

		{ /* 16 */
			/* string     */ "INTRO7b",
			/* duration   */ 45,
			/* frameCount */ 0,
			/* flags      */ 0x2
		},

		{ /* 17 */
			/* string     */ "INTRO8a",
			/* duration   */ 30,
			/* frameCount */ 0,
			/* flags      */ 0x402
		},

		{ /* 18 */
			/* string     */ "INTRO8b",
			/* duration   */ 30,
			/* frameCount */ 0,
			/* flags      */ 0x2
		},

		{ /* 19 */
			/* string     */ "INTRO8c",
			/* duration   */ 50,
			/* frameCount */ 0,
			/* flags      */ 0x12
		},

		{ /* 20 */
			/* string     */ "INTRO5",
			/* duration   */ 90,
			/* frameCount */ 40,
			/* flags      */ 0x4D
		},

		{ /* 21 */
			/* string     */ "",
			/* duration   */ 100,
			/* frameCount */ 50,
			/* flags      */ 0x0
		},

		{ /* 22 */
			/* string     */ "",
			/* duration   */ 0,
			/* frameCount */ 0,
			/* flags      */ 0x0
		}
	},

	{ /* 1 - Level 4: Harkonnen */
		{ /* 0 */
			/* string     */ "",
			/* duration   */ 50,
			/* frameCount */ 10,
			/* flags      */ 0x0
		},

		{ /* 1 */
			/* string     */ "MEANWHIL",
			/* duration   */ 70,
			/* frameCount */ 1,
			/* flags      */ 0x47
		},

		{ /* 2 */
			/* string     */ "EFINALA",
			/* duration   */ 60,
			/* frameCount */ 0,
			/* flags      */ 0x42
		},

		{ /* 3 */
			/* string     */ "MEANWHIL",
			/* duration   */ 70,
			/* frameCount */ 1,
			/* flags      */ 0x4B
		},

		{ /* 4 */
			/* string     */ "",
			/* duration   */ 0,
			/* frameCount */ 0,
			/* flags      */ 0x0
		}
	},

	{ /* 2 - Level 4: Atreides */
		{ /* 0 */
			/* string     */ "",
			/* duration   */ 50,
			/* frameCount */ 10,
			/* flags      */ 0x0
		},

		{ /* 1 */
			/* string     */ "MEANWHIL",
			/* duration   */ 75,
			/* frameCount */ 2,
			/* flags      */ 0x47
		},

		{ /* 2 */
			/* string     */ "EFINALA",
			/* duration   */ 60,
			/* frameCount */ 0,
			/* flags      */ 0x42
		},

		{ /* 3 */
			/* string     */ "MEANWHIL",
			/* duration   */ 70,
			/* frameCount */ 2,
			/* flags      */ 0x4B
		},

		{ /* 4 */
			/* string     */ "",
			/* duration   */ 0,
			/* frameCount */ 0,
			/* flags      */ 0x0
		}
	},

	{ /* 3 - Level 4: Ordos */
		{ /* 0 */
			/* string     */ "",
			/* duration   */ 50,
			/* frameCount */ 10,
			/* flags      */ 0x0
		},

		{ /* 1 */
			/* string     */ "MEANWHIL",
			/* duration   */ 70,
			/* frameCount */ 0,
			/* flags      */ 0x47
		},

		{ /* 2 */
			/* string     */ "EFINALA",
			/* duration   */ 60,
			/* frameCount */ 0,
			/* flags      */ 0x42
		},

		{ /* 3 */
			/* string     */ "MEANWHIL",
			/* duration   */ 70,
			/* frameCount */ 0,
			/* flags      */ 0x4B
		},

		{ /* 4 */
			/* string     */ "",
			/* duration   */ 0,
			/* frameCount */ 0,
			/* flags      */ 0x0
		}
	},

	{ /* 4 - Level 8: Harkonnen */
		{ /* 0 */
			/* string     */ "",
			/* duration   */ 50,
			/* frameCount */ 10,
			/* flags      */ 0x0
		},

		{ /* 1 */
			/* string     */ "MEANWHIL",
			/* duration   */ 70,
			/* frameCount */ 3,
			/* flags      */ 0x47
		},

		{ /* 2 */
			/* string     */ "EFINALA",
			/* duration   */ 85,
			/* frameCount */ 0,
			/* flags      */ 0x42
		},

		{ /* 3 */
			/* string     */ "",
			/* duration   */ 0,
			/* frameCount */ 0,
			/* flags      */ 0x0
		}
	},

	{ /* 5 - Level 8: Atreides */
		{ /* 0 */
			/* string     */ "",
			/* duration   */ 50,
			/* frameCount */ 10,
			/* flags      */ 0x0
		},

		{ /* 1 */
			/* string     */ "MEANWHIL",
			/* duration   */ 90,
			/* frameCount */ 5,
			/* flags      */ 0x47
		},

		{ /* 2 */
			/* string     */ "EFINALA",
			/* duration   */ 60,
			/* frameCount */ 0,
			/* flags      */ 0x42
		},

		{ /* 3 */
			/* string     */ "",
			/* duration   */ 0,
			/* frameCount */ 0,
			/* flags      */ 0x0
		}
	},

	{ /* 6 - Level 8: Ordos */
		{ /* 0 */
			/* string     */ "",
			/* duration   */ 50,
			/* frameCount */ 10,
			/* flags      */ 0x0
		},

		{ /* 1 */
			/* string     */ "MEANWHIL",
			/* duration   */ 70,
			/* frameCount */ 4,
			/* flags      */ 0x47
		},

		{ /* 2 */
			/* string     */ "EFINALA",
			/* duration   */ 75,
			/* frameCount */ 0,
			/* flags      */ 0x42
		},

		{ /* 3 */
			/* string     */ "",
			/* duration   */ 0,
			/* frameCount */ 0,
			/* flags      */ 0x0
		}
	},

	{ /* 7 - Level 9: Harkonnen */
		{ /* 0 */
			/* string     */ "HFINALA",
			/* duration   */ 40,
			/* frameCount */ 0,
			/* flags      */ 0x46
		},

		{ /* 1 */
			/* string     */ "HFINALA",
			/* duration   */ 40,
			/* frameCount */ 0,
			/* flags      */ 0x42
		},

		{ /* 2 */
			/* string     */ "",
			/* duration   */ 20,
			/* frameCount */ 10,
			/* flags      */ 0x0
		},

		{ /* 3 */
			/* string     */ "EFINALA",
			/* duration   */ 60,
			/* frameCount */ 0,
			/* flags      */ 0x42
		},

		{ /* 4 */
			/* string     */ "HFINALB",
			/* duration   */ 45,
			/* frameCount */ 0,
			/* flags      */ 0x3
		},

		{ /* 5 */
			/* string     */ "EFINALB",
			/* duration   */ 40,
			/* frameCount */ 0,
			/* flags      */ 0x3
		},

		{ /* 6 */
			/* string     */ "EFINALB",
			/* duration   */ 10,
			/* frameCount */ 1,
			/* flags      */ 0x43
		},

		{ /* 7 */
			/* string     */ "HFINALB",
			/* duration   */ 20,
			/* frameCount */ 0,
			/* flags      */ 0x3
		},

		{ /* 8 */
			/* string     */ "HFINALB",
			/* duration   */ 45,
			/* frameCount */ 0,
			/* flags      */ 0x42
		},

		{ /* 9 */
			/* string     */ "HFINALC",
			/* duration   */ 45,
			/* frameCount */ 0,
			/* flags      */ 0x2
		},

		{ /* 10 */
			/* string     */ "",
			/* duration   */ 10,
			/* frameCount */ 10,
			/* flags      */ 0x8
		},

		{ /* 11 */
			/* string     */ "",
			/* duration   */ 0,
			/* frameCount */ 0,
			/* flags      */ 0x0
		}
	},

	{ /* 8 - Level 9: Atreides */
		{ /* 0 */
			/* string     */ "AFINALA",
			/* duration   */ 35,
			/* frameCount */ 0,
			/* flags      */ 0x7
		},

		{ /* 1 */
			/* string     */ "EFINALA",
			/* duration   */ 60,
			/* frameCount */ 0,
			/* flags      */ 0x42
		},

		{ /* 2 */
			/* string     */ "AFINALA",
			/* duration   */ 40,
			/* frameCount */ 0,
			/* flags      */ 0x42
		},

		{ /* 3 */
			/* string     */ "",
			/* duration   */ 16,
			/* frameCount */ 10,
			/* flags      */ 0x0
		},

		{ /* 4 */
			/* string     */ "EFINALB",
			/* duration   */ 55,
			/* frameCount */ 0,
			/* flags      */ 0x3
		},

		{ /* 5 */
			/* string     */ "EFINALB",
			/* duration   */ 20,
			/* frameCount */ 1,
			/* flags      */ 0x43
		},

		{ /* 6 */
			/* string     */ "AFINALB",
			/* duration   */ 20,
			/* frameCount */ 0,
			/* flags      */ 0x42
		},

		{ /* 7 */
			/* string     */ "",
			/* duration   */ 35,
			/* frameCount */ 10,
			/* flags      */ 0x8
		},

		{ /* 8 */
			/* string     */ "",
			/* duration   */ 0,
			/* frameCount */ 0,
			/* flags      */ 0x0
		}
	},

	{ /* 9 - Level 9: Ordos */
		{ /* 0 */
			/* string     */ "OFINALA",
			/* duration   */ 65,
			/* frameCount */ 0,
			/* flags      */ 0x7
		},

		{ /* 1 */
			/* string     */ "EFINALA",
			/* duration   */ 60,
			/* frameCount */ 0,
			/* flags      */ 0x42
		},

		{ /* 2 */
			/* string     */ "OFINALA",
			/* duration   */ 20,
			/* frameCount */ 0,
			/* flags      */ 0x42
		},

		{ /* 3 */
			/* string     */ "",
			/* duration   */ 19,
			/* frameCount */ 10,
			/* flags      */ 0x0
		},

		{ /* 4 */
			/* string     */ "OFINALB",
			/* duration   */ 20,
			/* frameCount */ 0,
			/* flags      */ 0x2
		},

		{ /* 5 */
			/* string     */ "",
			/* duration   */ 15,
			/* frameCount */ 10,
			/* flags      */ 0x0
		},

		{ /* 6 */
			/* string     */ "OFINALC",
			/* duration   */ 20,
			/* frameCount */ 0,
			/* flags      */ 0x2
		},

		{ /* 7 */
			/* string     */ "",
			/* duration   */ 22,
			/* frameCount */ 10,
			/* flags      */ 0x0
		},

		{ /* 8 */
			/* string     */ "EFINALB",
			/* duration   */ 25,
			/* frameCount */ 0,
			/* flags      */ 0x3
		},

		{ /* 9 */
			/* string     */ "EFINALB",
			/* duration   */ 15,
			/* frameCount */ 1,
			/* flags      */ 0x43
		},

		{ /* 10 */
			/* string     */ "OFINALD",
			/* duration   */ 10,
			/* frameCount */ 0,
			/* flags      */ 0x3
		},

		{ /* 11 */
			/* string     */ "OFINALD",
			/* duration   */ 16,
			/* frameCount */ 0,
			/* flags      */ 0x42
		},

		{ /* 12 */
			/* string     */ "",
			/* duration   */ 20,
			/* frameCount */ 10,
			/* flags      */ 0x8
		},

		{ /* 13 */
			/* string     */ "",
			/* duration   */ 0,
			/* frameCount */ 0,
			/* flags      */ 0x0
		}
	}
};

const HouseAnimation_Subtitle g_table_houseAnimation_subtitle[][32] = {
	{ /* 0 - intro */
		{ /* 0 */
			/* stringID       */ STR_PRESENT,
			/* colour         */ 0,
			/* animationID    */ 0,
			/* top            */ 94,
			/* waitFadein     */ 1,
			/* paletteFadein  */ 2,
			/* waitFadeout    */ 7,
			/* paletteFadeout */ 2
		},

		{ /* 1 */
			/* stringID       */ STR_NULL,
			/* colour         */ 0,
			/* animationID    */ 1,
			/* top            */ 154,
			/* waitFadein     */ 45,
			/* paletteFadein  */ 1,
			/* waitFadeout    */ 1,
			/* paletteFadeout */ 1
		},

		{ /* 2 */
			/* stringID       */ STR_THE_BATTLE_FOR_ARRAKIS,
			/* colour         */ 0,
			/* animationID    */ 2,
			/* top            */ 104,
			/* waitFadein     */ 1,
			/* paletteFadein  */ 5,
			/* waitFadeout    */ 7,
			/* paletteFadeout */ 64
		},

		{ /* 3 */
			/* stringID       */ STR_THE_PLANET_ARRAKIS_KNOWN_AS_DUNE,
			/* colour         */ 0,
			/* animationID    */ 3,
			/* top            */ 154,
			/* waitFadein     */ 3,
			/* paletteFadein  */ 5,
			/* waitFadeout    */ 35,
			/* paletteFadeout */ 5
		},

		{ /* 4 */
			/* stringID       */ STR_LAND_OF_SAND,
			/* colour         */ 0,
			/* animationID    */ 5,
			/* top            */ 154,
			/* waitFadein     */ 1,
			/* paletteFadein  */ 4,
			/* waitFadeout    */ 16,
			/* paletteFadeout */ 4
		},

		{ /* 5 */
			/* stringID       */ STR_HOME_OF_THE_SPICE_MELANGE,
			/* colour         */ 0,
			/* animationID    */ 5,
			/* top            */ 154,
			/* waitFadein     */ 3,
			/* paletteFadein  */ 4,
			/* waitFadeout    */ 16,
			/* paletteFadeout */ 4
		},

		{ /* 6 */
			/* stringID       */ STR_THE_SPICE_CONTROLS_THE_EMPIRE,
			/* colour         */ 0,
			/* animationID    */ 7,
			/* top            */ 154,
			/* waitFadein     */ 1,
			/* paletteFadein  */ 5,
			/* waitFadeout    */ 25,
			/* paletteFadeout */ 5
		},

		{ /* 7 */
			/* stringID       */ STR_WHOEVER_CONTROLS_DUNECONTROLS_THE_SPICE,
			/* colour         */ 0,
			/* animationID    */ 7,
			/* top            */ 154,
			/* waitFadein     */ 2,
			/* paletteFadein  */ 5,
			/* waitFadeout    */ 27,
			/* paletteFadeout */ 9
		},

		{ /* 8 */
			/* stringID       */ STR_THE_EMPEROR_HAS_PROPOSED_ACHALLENGE_TO_EACH_OF_THE_HOUSES,
			/* colour         */ 0,
			/* animationID    */ 8,
			/* top            */ 154,
			/* waitFadein     */ 1,
			/* paletteFadein  */ 5,
			/* waitFadeout    */ 10,
			/* paletteFadeout */ 5
		},

		{ /* 9 */
			/* stringID       */ STR_THE_HOUSE_THAT_PRODUCES_THEMOST_SPICE_WILL_CONTROL_DUNE,
			/* colour         */ 4,
			/* animationID    */ 9,
			/* top            */ 154,
			/* waitFadein     */ 1,
			/* paletteFadein  */ 4,
			/* waitFadeout    */ 24,
			/* paletteFadeout */ 4
		},

		{ /* 10 */
			/* stringID       */ STR_THERE_ARE_NO_SET_TERRITORIES,
			/* colour         */ 4,
			/* animationID    */ 11,
			/* top            */ 154,
			/* waitFadein     */ 1,
			/* paletteFadein  */ 4,
			/* waitFadeout    */ 20,
			/* paletteFadeout */ 3
		},

		{ /* 11 */
			/* stringID       */ STR_AND_NO_RULES_OF_ENGAGEMENT,
			/* colour         */ 4,
			/* animationID    */ 11,
			/* top            */ 154,
			/* waitFadein     */ 1,
			/* paletteFadein  */ 3,
			/* waitFadeout    */ 20,
			/* paletteFadeout */ 4
		},

		{ /* 12 */
			/* stringID       */ STR_VAST_ARMIES_HAVE_ARRIVED,
			/* colour         */ 0,
			/* animationID    */ 12,
			/* top            */ 154,
			/* waitFadein     */ 10,
			/* paletteFadein  */ 3,
			/* waitFadeout    */ 30,
			/* paletteFadeout */ 4
		},

		{ /* 13 */
			/* stringID       */ STR_NOW_THREE_HOUSES_FIGHTFOR_CONTROL_OF_DUNE,
			/* colour         */ 0,
			/* animationID    */ 13,
			/* top            */ 85,
			/* waitFadein     */ 0,
			/* paletteFadein  */ 2,
			/* waitFadeout    */ 10,
			/* paletteFadeout */ 1
		},

		{ /* 14 */
			/* stringID       */ STR_THE_NOBLE_ATREIDES,
			/* colour         */ 0,
			/* animationID    */ 14,
			/* top            */ 154,
			/* waitFadein     */ 32,
			/* paletteFadein  */ 2,
			/* waitFadeout    */ 35,
			/* paletteFadeout */ 7
		},

		{ /* 15 */
			/* stringID       */ STR_THE_INSIDIOUS_ORDOS,
			/* colour         */ 0,
			/* animationID    */ 15,
			/* top            */ 154,
			/* waitFadein     */ 5,
			/* paletteFadein  */ 2,
			/* waitFadeout    */ 26,
			/* paletteFadeout */ 7
		},

		{ /* 16 */
			/* stringID       */ STR_AND_THE_EVIL_HARKONNEN,
			/* colour         */ 0,
			/* animationID    */ 17,
			/* top            */ 154,
			/* waitFadein     */ 1,
			/* paletteFadein  */ 2,
			/* waitFadeout    */ 34,
			/* paletteFadeout */ 7
		},

		{ /* 17 */
			/* stringID       */ STR_ONLY_ONE_HOUSE_WILL_PREVAIL,
			/* colour         */ 0,
			/* animationID    */ 20,
			/* top            */ 154,
			/* waitFadein     */ 1,
			/* paletteFadein  */ 4,
			/* waitFadeout    */ 29,
			/* paletteFadeout */ 5
		},

		{ /* 18 */
			/* stringID       */ STR_YOUR_BATTLE_FOR_DUNE_BEGINS,
			/* colour         */ 0,
			/* animationID    */ 21,
			/* top            */ 85,
			/* waitFadein     */ 0,
			/* paletteFadein  */ 3,
			/* waitFadeout    */ 20,
			/* paletteFadeout */ 0
		},

		{ /* 19 */
			/* stringID       */ STR_NOW,
			/* colour         */ 0,
			/* animationID    */ 21,
			/* top            */ 85,
			/* waitFadein     */ 0,
			/* paletteFadein  */ 0,
			/* waitFadeout    */ 3,
			/* paletteFadeout */ 15
		},

		{ /* 20 */
			/* stringID       */ 65535,
			/* colour         */ 65535,
			/* animationID    */ 0,
			/* top            */ 0,
			/* waitFadein     */ 0,
			/* paletteFadein  */ 0,
			/* waitFadeout    */ 0,
			/* paletteFadeout */ 0
		}
	},

	{ /* 1 - Level 4: Harkonnen */
		{ /* 0 */
			/* stringID       */ STR_AT_THE_EMPERORS_PALACE3,
			/* colour         */ 0,
			/* animationID    */ 0,
			/* top            */ 85,
			/* waitFadein     */ 1,
			/* paletteFadein  */ 3,
			/* waitFadeout    */ 6,
			/* paletteFadeout */ 3
		},

		{ /* 1 */
			/* stringID       */ STR_YOU_RECEIVE_THE_ASSISTANCEYOU_REQUIRE_AND_THEN_FAIL_ME,
			/* colour         */ 4,
			/* animationID    */ 1,
			/* top            */ 154,
			/* waitFadein     */ 1,
			/* paletteFadein  */ 3,
			/* waitFadeout    */ 11,
			/* paletteFadeout */ 2
		},

		{ /* 2 */
			/* stringID       */ STR_NO_YOUR,
			/* colour         */ 2,
			/* animationID    */ 1,
			/* top            */ 154,
			/* waitFadein     */ 1,
			/* paletteFadein  */ 3,
			/* waitFadeout    */ 7,
			/* paletteFadeout */ 0
		},

		{ /* 3 */
			/* stringID       */ STR_MY_SARDAUKAR_COULD_HELP_DEFEAT_THEHARKONNEN_BUT_YOU_WASTED_THEM,
			/* colour         */ 4,
			/* animationID    */ 2,
			/* top            */ 154,
			/* waitFadein     */ 0,
			/* paletteFadein  */ 0,
			/* waitFadeout    */ 22,
			/* paletteFadeout */ 3
		},

		{ /* 4 */
			/* stringID       */ STR_WE_DIDNT_HAVE,
			/* colour         */ 2,
			/* animationID    */ 3,
			/* top            */ 154,
			/* waitFadein     */ 1,
			/* paletteFadein  */ 3,
			/* waitFadeout    */ 4,
			/* paletteFadeout */ 0
		},

		{ /* 5 */
			/* stringID       */ STR_I_WANT_NO_EXCUSESDO_NOT_FAIL_ME_AGAIN,
			/* colour         */ 4,
			/* animationID    */ 3,
			/* top            */ 154,
			/* waitFadein     */ 0,
			/* paletteFadein  */ 0,
			/* waitFadeout    */ 99,
			/* paletteFadeout */ 99
		},

		{ /* 6 */
			/* stringID       */ 65535,
			/* colour         */ 65535,
			/* animationID    */ 0,
			/* top            */ 0,
			/* waitFadein     */ 0,
			/* paletteFadein  */ 0,
			/* waitFadeout    */ 0,
			/* paletteFadeout */ 0
		}
	},

	{ /* 2 - Level 4: Atreides */
		{ /* 0 */
			/* stringID       */ STR_AT_THE_EMPERORS_PALACE,
			/* colour         */ 1,
			/* animationID    */ 0,
			/* top            */ 85,
			/* waitFadein     */ 1,
			/* paletteFadein  */ 3,
			/* waitFadeout    */ 6,
			/* paletteFadeout */ 3
		},

		{ /* 1 */
			/* stringID       */ STR_YOU_OF_ALL_PEOPLE_SHOULDUNDERSTAND_THE_IMPORTANCE_OF_VICTORY,
			/* colour         */ 4,
			/* animationID    */ 1,
			/* top            */ 154,
			/* waitFadein     */ 1,
			/* paletteFadein  */ 3,
			/* waitFadeout    */ 11,
			/* paletteFadeout */ 2
		},

		{ /* 2 */
			/* stringID       */ STR_YES_YOUR_EXCELLENCY_I,
			/* colour         */ 0,
			/* animationID    */ 1,
			/* top            */ 154,
			/* waitFadein     */ 1,
			/* paletteFadein  */ 3,
			/* waitFadeout    */ 7,
			/* paletteFadeout */ 0
		},

		{ /* 3 */
			/* stringID       */ STR_YOU_LET_THE_ATREIDES_DEFEATYOU_AND_MY_SARDAUKAR,
			/* colour         */ 4,
			/* animationID    */ 2,
			/* top            */ 154,
			/* waitFadein     */ 0,
			/* paletteFadein  */ 0,
			/* waitFadeout    */ 22,
			/* paletteFadeout */ 3
		},

		{ /* 4 */
			/* stringID       */ STR_I_DID_NOT_LET,
			/* colour         */ 0,
			/* animationID    */ 3,
			/* top            */ 154,
			/* waitFadein     */ 1,
			/* paletteFadein  */ 3,
			/* waitFadeout    */ 4,
			/* paletteFadeout */ 0
		},

		{ /* 5 */
			/* stringID       */ STR_I_WILL_NOT_ALLOW_IT_TO_HAPPEN_AGAIN,
			/* colour         */ 4,
			/* animationID    */ 3,
			/* top            */ 154,
			/* waitFadein     */ 0,
			/* paletteFadein  */ 0,
			/* waitFadeout    */ 99,
			/* paletteFadeout */ 99
		},

		{ /* 6 */
			/* stringID       */ 65535,
			/* colour         */ 65535,
			/* animationID    */ 0,
			/* top            */ 0,
			/* waitFadein     */ 0,
			/* paletteFadein  */ 0,
			/* waitFadeout    */ 0,
			/* paletteFadeout */ 0
		}
	},

	{ /* 3 - Level 4: Ordos */
		{ /* 0 */
			/* stringID       */ STR_AT_THE_EMPERORS_PALACE2,
			/* colour         */ 2,
			/* animationID    */ 0,
			/* top            */ 85,
			/* waitFadein     */ 1,
			/* paletteFadein  */ 3,
			/* waitFadeout    */ 6,
			/* paletteFadeout */ 3
		},

		{ /* 1 */
			/* stringID       */ STR_I_CANNOT_BELIEVE_THEINCOMPETENCE_I_SEE_BEFORE_ME,
			/* colour         */ 4,
			/* animationID    */ 1,
			/* top            */ 154,
			/* waitFadein     */ 1,
			/* paletteFadein  */ 3,
			/* waitFadeout    */ 11,
			/* paletteFadeout */ 2
		},

		{ /* 2 */
			/* stringID       */ STR_YOUR_HIGHNESS,
			/* colour         */ 1,
			/* animationID    */ 1,
			/* top            */ 154,
			/* waitFadein     */ 1,
			/* paletteFadein  */ 3,
			/* waitFadeout    */ 7,
			/* paletteFadeout */ 0
		},

		{ /* 3 */
			/* stringID       */ STR_I_GIVE_YOU_MY_SARDAUKAR_TO_ASSISTAGAINST_THE_ORDOS_AND_YOU_FAILED_ME,
			/* colour         */ 4,
			/* animationID    */ 2,
			/* top            */ 154,
			/* waitFadein     */ 0,
			/* paletteFadein  */ 0,
			/* waitFadeout    */ 22,
			/* paletteFadeout */ 3
		},

		{ /* 4 */
			/* stringID       */ STR_WE,
			/* colour         */ 1,
			/* animationID    */ 3,
			/* top            */ 154,
			/* waitFadein     */ 1,
			/* paletteFadein  */ 1,
			/* waitFadeout    */ 3,
			/* paletteFadeout */ 0
		},

		{ /* 5 */
			/* stringID       */ STR_DO_NOT_FAIL_ME_AGAINYOU_ARE_DISMISSED,
			/* colour         */ 4,
			/* animationID    */ 3,
			/* top            */ 154,
			/* waitFadein     */ 0,
			/* paletteFadein  */ 0,
			/* waitFadeout    */ 99,
			/* paletteFadeout */ 99
		},

		{ /* 6 */
			/* stringID       */ 65535,
			/* colour         */ 65535,
			/* animationID    */ 0,
			/* top            */ 0,
			/* waitFadein     */ 0,
			/* paletteFadein  */ 0,
			/* waitFadeout    */ 0,
			/* paletteFadeout */ 0
		}
	},

	{ /* 4 - Level 8: Harkonnen */
		{ /* 0 */
			/* stringID       */ STR_AT_THE_EMPERORS_PALACEON_DUNE3,
			/* colour         */ 0,
			/* animationID    */ 0,
			/* top            */ 85,
			/* waitFadein     */ 1,
			/* paletteFadein  */ 3,
			/* waitFadeout    */ 6,
			/* paletteFadeout */ 3
		},

		{ /* 1 */
			/* stringID       */ STR_I_SHOULD_HAVE_KNOWN_YOUR_HOUSESCOULDNT_STAND_UP_TO_THE_HARKONNEN,
			/* colour         */ 4,
			/* animationID    */ 1,
			/* top            */ 154,
			/* waitFadein     */ 1,
			/* paletteFadein  */ 2,
			/* waitFadeout    */ 12,
			/* paletteFadeout */ 1
		},

		{ /* 2 */
			/* stringID       */ STR_EXCELLENCY_THEY_ARE,
			/* colour         */ 2,
			/* animationID    */ 1,
			/* top            */ 154,
			/* waitFadein     */ 0,
			/* paletteFadein  */ 1,
			/* waitFadeout    */ 6,
			/* paletteFadeout */ 0
		},

		{ /* 3 */
			/* stringID       */ STR_SILENCE,
			/* colour         */ 4,
			/* animationID    */ 1,
			/* top            */ 154,
			/* waitFadein     */ 0,
			/* paletteFadein  */ 0,
			/* waitFadeout    */ 4,
			/* paletteFadeout */ 0
		},

		{ /* 4 */
			/* stringID       */ STR_YOU_ARE_TO_DEFEND_MY_PALACE,
			/* colour         */ 4,
			/* animationID    */ 2,
			/* top            */ 154,
			/* waitFadein     */ 0,
			/* paletteFadein  */ 0,
			/* waitFadeout    */ 22,
			/* paletteFadeout */ 0
		},

		{ /* 5 */
			/* stringID       */ STR_I_WILL_SHOW_YOU_HOWTO_CRUSH_THE_HARKONNEN,
			/* colour         */ 4,
			/* animationID    */ 2,
			/* top            */ 154,
			/* waitFadein     */ 0,
			/* paletteFadein  */ 0,
			/* waitFadeout    */ 99,
			/* paletteFadeout */ 99
		},

		{ /* 6 */
			/* stringID       */ 65535,
			/* colour         */ 65535,
			/* animationID    */ 0,
			/* top            */ 0,
			/* waitFadein     */ 0,
			/* paletteFadein  */ 0,
			/* waitFadeout    */ 0,
			/* paletteFadeout */ 0
		}
	},

	{ /* 5 - Level 8: Atreides */
		{ /* 0 */
			/* stringID       */ STR_AT_THE_EMPERORS_PALACEON_DUNE,
			/* colour         */ 1,
			/* animationID    */ 0,
			/* top            */ 85,
			/* waitFadein     */ 1,
			/* paletteFadein  */ 3,
			/* waitFadeout    */ 6,
			/* paletteFadeout */ 3
		},

		{ /* 1 */
			/* stringID       */ STR_FOOLSI_GAVE_YOU_WEAPONS_AND_TROOPS,
			/* colour         */ 4,
			/* animationID    */ 1,
			/* top            */ 154,
			/* waitFadein     */ 1,
			/* paletteFadein  */ 2,
			/* waitFadeout    */ 7,
			/* paletteFadeout */ 1
		},

		{ /* 2 */
			/* stringID       */ STR_AND_STILL_YOU_FAILTO_DEFEAT_THE_ATREIDES,
			/* colour         */ 4,
			/* animationID    */ 1,
			/* top            */ 154,
			/* waitFadein     */ 0,
			/* paletteFadein  */ 1,
			/* waitFadeout    */ 8,
			/* paletteFadeout */ 1
		},

		{ /* 3 */
			/* stringID       */ STR_BUT_EXCELL,
			/* colour         */ 0,
			/* animationID    */ 1,
			/* top            */ 154,
			/* waitFadein     */ 0,
			/* paletteFadein  */ 3,
			/* waitFadeout    */ 4,
			/* paletteFadeout */ 0
		},

		{ /* 4 */
			/* stringID       */ STR_ENOUGH_TOGETHER_WE_MUST_MAKESURE_THE_ATREIDES_DO_NOT_SUCCEED,
			/* colour         */ 4,
			/* animationID    */ 2,
			/* top            */ 154,
			/* waitFadein     */ 0,
			/* paletteFadein  */ 0,
			/* waitFadeout    */ 99,
			/* paletteFadeout */ 99
		},

		{ /* 5 */
			/* stringID       */ 65535,
			/* colour         */ 65535,
			/* animationID    */ 0,
			/* top            */ 0,
			/* waitFadein     */ 0,
			/* paletteFadein  */ 0,
			/* waitFadeout    */ 0,
			/* paletteFadeout */ 0
		}
	},

	{ /* 6 - Level 8: Ordos */
		{ /* 0 */
			/* stringID       */ STR_AT_THE_EMPERORS_PALACEON_DUNE2,
			/* colour         */ 2,
			/* animationID    */ 0,
			/* top            */ 85,
			/* waitFadein     */ 1,
			/* paletteFadein  */ 3,
			/* waitFadeout    */ 6,
			/* paletteFadeout */ 3
		},

		{ /* 1 */
			/* stringID       */ STR_THE_ORDOS_WERE_NOTSUPPOSED_TO_GET_THIS_FAR,
			/* colour         */ 4,
			/* animationID    */ 1,
			/* top            */ 154,
			/* waitFadein     */ 1,
			/* paletteFadein  */ 3,
			/* waitFadeout    */ 11,
			/* paletteFadeout */ 3
		},

		{ /* 2 */
			/* stringID       */ STR_YOUR_HIGHNESS_LET_US_EXPLAIN,
			/* colour         */ 1,
			/* animationID    */ 1,
			/* top            */ 154,
			/* waitFadein     */ 1,
			/* paletteFadein  */ 2,
			/* waitFadeout    */ 8,
			/* paletteFadeout */ 0
		},

		{ /* 3 */
			/* stringID       */ STR_NO_MORE_EXPLANATIONSYOU_ARE_TO_DEFEND_MY_PALACE,
			/* colour         */ 4,
			/* animationID    */ 2,
			/* top            */ 154,
			/* waitFadein     */ 0,
			/* paletteFadein  */ 0,
			/* waitFadeout    */ 23,
			/* paletteFadeout */ 0
		},

		{ /* 4 */
			/* stringID       */ STR_ONLY_TOGETHER_WILLWE_DEFEAT_THE_ORDOS,
			/* colour         */ 4,
			/* animationID    */ 2,
			/* top            */ 154,
			/* waitFadein     */ 0,
			/* paletteFadein  */ 0,
			/* waitFadeout    */ 99,
			/* paletteFadeout */ 99
		},

		{ /* 5 */
			/* stringID       */ 65535,
			/* colour         */ 65535,
			/* animationID    */ 0,
			/* top            */ 0,
			/* waitFadein     */ 0,
			/* paletteFadein  */ 0,
			/* waitFadeout    */ 0,
			/* paletteFadeout */ 0
		}
	},

	{ /* 7 - Level 9: Harkonnen */
		{ /* 0 */
			/* stringID       */ STR_YOU_ARE_INDEED_NOT_ENTIRELYTRUE_TO_YOUR_WORD_EMPEROR,
			/* colour         */ 0,
			/* animationID    */ 0,
			/* top            */ 154,
			/* waitFadein     */ 1,
			/* paletteFadein  */ 3,
			/* waitFadeout    */ 9,
			/* paletteFadeout */ 3
		},

		{ /* 1 */
			/* stringID       */ STR_YOU_HAVE_LIED_TO_US,
			/* colour         */ 0,
			/* animationID    */ 1,
			/* top            */ 154,
			/* waitFadein     */ 1,
			/* paletteFadein  */ 3,
			/* waitFadeout    */ 14,
			/* paletteFadeout */ 3
		},

		{ /* 2 */
			/* stringID       */ STR_WHAT_LIES_WHAT_AREYOU_TALKING_ABOUT,
			/* colour         */ 4,
			/* animationID    */ 3,
			/* top            */ 154,
			/* waitFadein     */ 2,
			/* paletteFadein  */ 3,
			/* waitFadeout    */ 22,
			/* paletteFadeout */ 3
		},

		{ /* 3 */
			/* stringID       */ STR_YOUR_LIES_OF_LOYALTYYOUR_DECEIT,
			/* colour         */ 0,
			/* animationID    */ 4,
			/* top            */ 154,
			/* waitFadein     */ 1,
			/* paletteFadein  */ 3,
			/* waitFadeout    */ 17,
			/* paletteFadeout */ 3
		},

		{ /* 4 */
			/* stringID       */ STR_A_CRIME_FOR_WHICH_YOU_WILLINDEED_PAY_DEARLY,
			/* colour         */ 0,
			/* animationID    */ 5,
			/* top            */ 154,
			/* waitFadein     */ 1,
			/* paletteFadein  */ 3,
			/* waitFadeout    */ 17,
			/* paletteFadeout */ 1
		},

		{ /* 5 */
			/* stringID       */ STR_WITH_YOUR_LIFE,
			/* colour         */ 0,
			/* animationID    */ 5,
			/* top            */ 154,
			/* waitFadein     */ 1,
			/* paletteFadein  */ 1,
			/* waitFadeout    */ 26,
			/* paletteFadeout */ 3
		},

		{ /* 6 */
			/* stringID       */ STR_NO_NO_NOOO,
			/* colour         */ 4,
			/* animationID    */ 8,
			/* top            */ 154,
			/* waitFadein     */ 2,
			/* paletteFadein  */ 2,
			/* waitFadeout    */ 10,
			/* paletteFadeout */ 3
		},

		{ /* 7 */
			/* stringID       */ 65535,
			/* colour         */ 65535,
			/* animationID    */ 0,
			/* top            */ 0,
			/* waitFadein     */ 0,
			/* paletteFadein  */ 0,
			/* waitFadeout    */ 0,
			/* paletteFadeout */ 0
		}
	},

	{ /* 8 - Level 9: Atreides */
		{ /* 0 */
			/* stringID       */ STR_GREETINGS_EMPEROR,
			/* colour         */ 1,
			/* animationID    */ 0,
			/* top            */ 154,
			/* waitFadein     */ 1,
			/* paletteFadein  */ 3,
			/* waitFadeout    */ 14,
			/* paletteFadeout */ 3
		},

		{ /* 1 */
			/* stringID       */ STR_WHAT_IS_THE_MEANINGOF_THIS_INTRUSION,
			/* colour         */ 4,
			/* animationID    */ 1,
			/* top            */ 154,
			/* waitFadein     */ 2,
			/* paletteFadein  */ 3,
			/* waitFadeout    */ 39,
			/* paletteFadeout */ 2
		},

		{ /* 2 */
			/* stringID       */ STR_YOU_ARE_FORMALLY_CHARGED_WITH_CRIMESOF_TREASON_AGAINST_HOUSE_ATREIDES,
			/* colour         */ 1,
			/* animationID    */ 2,
			/* top            */ 154,
			/* waitFadein     */ 1,
			/* paletteFadein  */ 3,
			/* waitFadeout    */ 32,
			/* paletteFadeout */ 3
		},

		{ /* 3 */
			/* stringID       */ STR_THE_HOUSE_SHALL_DETERMINEYOUR_GUILT_OR_INNOCENCE,
			/* colour         */ 1,
			/* animationID    */ 4,
			/* top            */ 154,
			/* waitFadein     */ 1,
			/* paletteFadein  */ 3,
			/* waitFadeout    */ 14,
			/* paletteFadeout */ 3
		},

		{ /* 4 */
			/* stringID       */ STR_UNTIL_THEN_YOU_SHALL_NOLONGER_REIGN_AS_EMPEROR,
			/* colour         */ 1,
			/* animationID    */ 4,
			/* top            */ 154,
			/* waitFadein     */ 1,
			/* paletteFadein  */ 3,
			/* waitFadeout    */ 32,
			/* paletteFadeout */ 3
		},

		{ /* 5 */
			/* stringID       */ 65535,
			/* colour         */ 65535,
			/* animationID    */ 0,
			/* top            */ 0,
			/* waitFadein     */ 0,
			/* paletteFadein  */ 0,
			/* waitFadeout    */ 0,
			/* paletteFadeout */ 0
		}
	},

	{ /* 9 - Level 9: Ordos */
		{ /* 0 */
			/* stringID       */ STR_YOU_ARE_AWARE_EMPEROR_THAT_WEHAVE_GROWN_WEARY_OF_YOUR_GAMES,
			/* colour         */ 2,
			/* animationID    */ 0,
			/* top            */ 154,
			/* waitFadein     */ 1,
			/* paletteFadein  */ 3,
			/* waitFadeout    */ 18,
			/* paletteFadeout */ 3
		},

		{ /* 1 */
			/* stringID       */ STR_WHAT_GAMES_WHAT_AREYOU_TALKING_ABOUT,
			/* colour         */ 4,
			/* animationID    */ 1,
			/* top            */ 154,
			/* waitFadein     */ 2,
			/* paletteFadein  */ 3,
			/* waitFadeout    */ 22,
			/* paletteFadeout */ 3
		},

		{ /* 2 */
			/* stringID       */ STR_I_AM_REFERRING_TOYOUR_GAME_OF_CHESS,
			/* colour         */ 2,
			/* animationID    */ 2,
			/* top            */ 154,
			/* waitFadein     */ 1,
			/* paletteFadein  */ 3,
			/* waitFadeout    */ 15,
			/* paletteFadeout */ 3
		},

		{ /* 3 */
			/* stringID       */ STR_WE_WERE_YOUR_PAWNS_ANDDUNE_WAS_YOUR_BOARD,
			/* colour         */ 2,
			/* animationID    */ 4,
			/* top            */ 154,
			/* waitFadein     */ 1,
			/* paletteFadein  */ 3,
			/* waitFadeout    */ 25,
			/* paletteFadeout */ 3
		},

		{ /* 4 */
			/* stringID       */ STR_WE_HAVE_DECIDED_TO_TAKE_MATTERSINTO_OUR_OWN_HANDS,
			/* colour         */ 2,
			/* animationID    */ 6,
			/* top            */ 154,
			/* waitFadein     */ 1,
			/* paletteFadein  */ 3,
			/* waitFadeout    */ 22,
			/* paletteFadeout */ 3
		},

		{ /* 5 */
			/* stringID       */ STR_YOU_ARE_TO_BE_OUR_PAWNIN_OUR_GAME,
			/* colour         */ 2,
			/* animationID    */ 8,
			/* top            */ 154,
			/* waitFadein     */ 3,
			/* paletteFadein  */ 3,
			/* waitFadeout    */ 40,
			/* paletteFadeout */ 3
		},

		{ /* 6 */
			/* stringID       */ 65535,
			/* colour         */ 65535,
			/* animationID    */ 0,
			/* top            */ 0,
			/* waitFadein     */ 0,
			/* paletteFadein  */ 0,
			/* waitFadeout    */ 0,
			/* paletteFadeout */ 0
		}
	}
};

const HouseAnimation_SoundEffect g_table_houseAnimation_soundEffect[][90] = {
	{ /* 0 - intro */
		{ /* 0 */
			/* animationID   */ 5,
			/* voiceID       */ 108,
			/* wait          */ 12,
		},

		{ /* 1 */
			/* animationID   */ 7,
			/* voiceID       */ 117,
			/* wait          */ 19,
		},

		{ /* 2 */
			/* animationID   */ 7,
			/* voiceID       */ 109,
			/* wait          */ 33,
		},

		{ /* 3 */
			/* animationID   */ 7,
			/* voiceID       */ 110,
			/* wait          */ 52,
		},

		{ /* 4 */
			/* animationID   */ 12,
			/* voiceID       */ 105,
			/* wait          */ 2,
		},

		{ /* 5 */
			/* animationID   */ 12,
			/* voiceID       */ 106,
			/* wait          */ 4,
		},

		{ /* 6 */
			/* animationID   */ 12,
			/* voiceID       */ 106,
			/* wait          */ 20,
		},

		{ /* 7 */
			/* animationID   */ 12,
			/* voiceID       */ 111,
			/* wait          */ 22,
		},

		{ /* 8 */
			/* animationID   */ 12,
			/* voiceID       */ 106,
			/* wait          */ 37,
		},

		{ /* 9 */
			/* animationID   */ 12,
			/* voiceID       */ 117,
			/* wait          */ 38,
		},

		{ /* 10 */
			/* animationID   */ 14,
			/* voiceID       */ 112,
			/* wait          */ 21,
		},

		{ /* 11 */
			/* animationID   */ 14,
			/* voiceID       */ 112,
			/* wait          */ 22,
		},

		{ /* 12 */
			/* animationID   */ 14,
			/* voiceID       */ 112,
			/* wait          */ 23,
		},

		{ /* 13 */
			/* animationID   */ 14,
			/* voiceID       */ 112,
			/* wait          */ 24,
		},

		{ /* 14 */
			/* animationID   */ 14,
			/* voiceID       */ 112,
			/* wait          */ 25,
		},

		{ /* 15 */
			/* animationID   */ 14,
			/* voiceID       */ 112,
			/* wait          */ 26,
		},

		{ /* 16 */
			/* animationID   */ 14,
			/* voiceID       */ 112,
			/* wait          */ 27,
		},

		{ /* 17 */
			/* animationID   */ 14,
			/* voiceID       */ 112,
			/* wait          */ 28,
		},

		{ /* 18 */
			/* animationID   */ 14,
			/* voiceID       */ 112,
			/* wait          */ 29,
		},

		{ /* 19 */
			/* animationID   */ 14,
			/* voiceID       */ 112,
			/* wait          */ 30,
		},

		{ /* 20 */
			/* animationID   */ 14,
			/* voiceID       */ 112,
			/* wait          */ 31,
		},

		{ /* 21 */
			/* animationID   */ 14,
			/* voiceID       */ 113,
			/* wait          */ 32,
		},

		{ /* 22 */
			/* animationID   */ 14,
			/* voiceID       */ 113,
			/* wait          */ 33,
		},

		{ /* 23 */
			/* animationID   */ 14,
			/* voiceID       */ 113,
			/* wait          */ 34,
		},

		{ /* 24 */
			/* animationID   */ 14,
			/* voiceID       */ 112,
			/* wait          */ 51,
		},

		{ /* 25 */
			/* animationID   */ 14,
			/* voiceID       */ 112,
			/* wait          */ 52,
		},

		{ /* 26 */
			/* animationID   */ 14,
			/* voiceID       */ 112,
			/* wait          */ 53,
		},

		{ /* 27 */
			/* animationID   */ 14,
			/* voiceID       */ 112,
			/* wait          */ 54,
		},

		{ /* 28 */
			/* animationID   */ 14,
			/* voiceID       */ 112,
			/* wait          */ 55,
		},

		{ /* 29 */
			/* animationID   */ 14,
			/* voiceID       */ 112,
			/* wait          */ 56,
		},

		{ /* 30 */
			/* animationID   */ 14,
			/* voiceID       */ 112,
			/* wait          */ 57,
		},

		{ /* 31 */
			/* animationID   */ 14,
			/* voiceID       */ 112,
			/* wait          */ 58,
		},

		{ /* 32 */
			/* animationID   */ 14,
			/* voiceID       */ 112,
			/* wait          */ 59,
		},

		{ /* 33 */
			/* animationID   */ 14,
			/* voiceID       */ 112,
			/* wait          */ 60,
		},

		{ /* 34 */
			/* animationID   */ 14,
			/* voiceID       */ 112,
			/* wait          */ 61,
		},

		{ /* 35 */
			/* animationID   */ 14,
			/* voiceID       */ 113,
			/* wait          */ 62,
		},

		{ /* 36 */
			/* animationID   */ 14,
			/* voiceID       */ 113,
			/* wait          */ 63,
		},

		{ /* 37 */
			/* animationID   */ 15,
			/* voiceID       */ 114,
			/* wait          */ 5,
		},

		{ /* 38 */
			/* animationID   */ 15,
			/* voiceID       */ 114,
			/* wait          */ 9,
		},

		{ /* 39 */
			/* animationID   */ 15,
			/* voiceID       */ 116,
			/* wait          */ 19,
		},

		{ /* 40 */
			/* animationID   */ 16,
			/* voiceID       */ 114,
			/* wait          */ 3,
		},

		{ /* 41 */
			/* animationID   */ 16,
			/* voiceID       */ 114,
			/* wait          */ 13,
		},

		{ /* 42 */
			/* animationID   */ 17,
			/* voiceID       */ 112,
			/* wait          */ 2,
		},

		{ /* 43 */
			/* animationID   */ 17,
			/* voiceID       */ 112,
			/* wait          */ 3,
		},

		{ /* 44 */
			/* animationID   */ 17,
			/* voiceID       */ 112,
			/* wait          */ 4,
		},

		{ /* 45 */
			/* animationID   */ 17,
			/* voiceID       */ 115,
			/* wait          */ 5,
		},

		{ /* 46 */
			/* animationID   */ 17,
			/* voiceID       */ 112,
			/* wait          */ 7,
		},

		{ /* 47 */
			/* animationID   */ 17,
			/* voiceID       */ 115,
			/* wait          */ 8,
		},

		{ /* 48 */
			/* animationID   */ 17,
			/* voiceID       */ 112,
			/* wait          */ 9,
		},

		{ /* 49 */
			/* animationID   */ 17,
			/* voiceID       */ 112,
			/* wait          */ 10,
		},

		{ /* 50 */
			/* animationID   */ 17,
			/* voiceID       */ 112,
			/* wait          */ 11,
		},

		{ /* 51 */
			/* animationID   */ 17,
			/* voiceID       */ 112,
			/* wait          */ 12,
		},

		{ /* 52 */
			/* animationID   */ 17,
			/* voiceID       */ 112,
			/* wait          */ 13,
		},

		{ /* 53 */
			/* animationID   */ 17,
			/* voiceID       */ 112,
			/* wait          */ 14,
		},

		{ /* 54 */
			/* animationID   */ 18,
			/* voiceID       */ 112,
			/* wait          */ 3,
		},

		{ /* 55 */
			/* animationID   */ 18,
			/* voiceID       */ 112,
			/* wait          */ 4,
		},

		{ /* 56 */
			/* animationID   */ 18,
			/* voiceID       */ 112,
			/* wait          */ 5,
		},

		{ /* 57 */
			/* animationID   */ 18,
			/* voiceID       */ 115,
			/* wait          */ 6,
		},

		{ /* 58 */
			/* animationID   */ 18,
			/* voiceID       */ 112,
			/* wait          */ 7,
		},

		{ /* 59 */
			/* animationID   */ 18,
			/* voiceID       */ 112,
			/* wait          */ 8,
		},

		{ /* 60 */
			/* animationID   */ 18,
			/* voiceID       */ 112,
			/* wait          */ 9,
		},

		{ /* 61 */
			/* animationID   */ 18,
			/* voiceID       */ 112,
			/* wait          */ 10,
		},

		{ /* 62 */
			/* animationID   */ 18,
			/* voiceID       */ 112,
			/* wait          */ 11,
		},

		{ /* 63 */
			/* animationID   */ 18,
			/* voiceID       */ 112,
			/* wait          */ 12,
		},

		{ /* 64 */
			/* animationID   */ 18,
			/* voiceID       */ 112,
			/* wait          */ 13,
		},

		{ /* 65 */
			/* animationID   */ 18,
			/* voiceID       */ 112,
			/* wait          */ 14,
		},

		{ /* 66 */
			/* animationID   */ 18,
			/* voiceID       */ 112,
			/* wait          */ 15,
		},

		{ /* 67 */
			/* animationID   */ 19,
			/* voiceID       */ 112,
			/* wait          */ 2,
		},

		{ /* 68 */
			/* animationID   */ 19,
			/* voiceID       */ 112,
			/* wait          */ 3,
		},

		{ /* 69 */
			/* animationID   */ 19,
			/* voiceID       */ 112,
			/* wait          */ 4,
		},

		{ /* 70 */
			/* animationID   */ 19,
			/* voiceID       */ 112,
			/* wait          */ 5,
		},

		{ /* 71 */
			/* animationID   */ 19,
			/* voiceID       */ 112,
			/* wait          */ 6,
		},

		{ /* 72 */
			/* animationID   */ 19,
			/* voiceID       */ 112,
			/* wait          */ 7,
		},

		{ /* 73 */
			/* animationID   */ 19,
			/* voiceID       */ 112,
			/* wait          */ 8,
		},

		{ /* 74 */
			/* animationID   */ 19,
			/* voiceID       */ 112,
			/* wait          */ 9,
		},

		{ /* 75 */
			/* animationID   */ 19,
			/* voiceID       */ 112,
			/* wait          */ 10,
		},

		{ /* 76 */
			/* animationID   */ 19,
			/* voiceID       */ 112,
			/* wait          */ 11,
		},

		{ /* 77 */
			/* animationID   */ 19,
			/* voiceID       */ 112,
			/* wait          */ 12,
		},

		{ /* 78 */
			/* animationID   */ 19,
			/* voiceID       */ 112,
			/* wait          */ 13,
		},

		{ /* 79 */
			/* animationID   */ 19,
			/* voiceID       */ 112,
			/* wait          */ 14,
		},

		{ /* 80 */
			/* animationID   */ 19,
			/* voiceID       */ 112,
			/* wait          */ 15,
		},

		{ /* 81 */
			/* animationID   */ 19,
			/* voiceID       */ 118,
			/* wait          */ 18,
		},

		{ /* 82 */
			/* animationID   */ 19,
			/* voiceID       */ 119,
			/* wait          */ 28,
		},

		{ /* 83 */
			/* animationID   */ 22,
			/* voiceID       */ 255,
			/* wait          */ 0,
		}
	},

	{ /* 1 - Level 4: Harkonnen */
		{ /* 0 */
			/* animationID   */ 4,
			/* voiceID       */ 255,
			/* wait          */ 0,
		}
	},

	{ /* 2 - Level 4: Atreides */
		{ /* 0 */
			/* animationID   */ 4,
			/* voiceID       */ 255,
			/* wait          */ 0,
		}
	},

	{ /* 3 - Level 4: Ordos */
		{ /* 0 */
			/* animationID   */ 4,
			/* voiceID       */ 255,
			/* wait          */ 0,
		}
	},

	{ /* 4 - Level 8: Harkonnen */
		{ /* 0 */
			/* animationID   */ 4,
			/* voiceID       */ 255,
			/* wait          */ 0,
		}
	},

	{ /* 5 - Level 8: Atreides */
		{ /* 0 */
			/* animationID   */ 4,
			/* voiceID       */ 255,
			/* wait          */ 0,
		}
	},

	{ /* 6 - Level 8: Ordos */
		{ /* 0 */
			/* animationID   */ 4,
			/* voiceID       */ 255,
			/* wait          */ 0,
		}
	},

	{ /* 7 - Level 9: Harkonnen */
		{ /* 0 */
			/* animationID   */ 8,
			/* voiceID       */ 69,
			/* wait          */ 2,
		},

		{ /* 1 */
			/* animationID   */ 8,
			/* voiceID       */ 65,
			/* wait          */ 10,
		},

		{ /* 2 */
			/* animationID   */ 8,
			/* voiceID       */ 68,
			/* wait          */ 12,
		},

		{ /* 3 */
			/* animationID   */ 8,
			/* voiceID       */ 69,
			/* wait          */ 36,
		},

		{ /* 4 */
			/* animationID   */ 9,
			/* voiceID       */ 65,
			/* wait          */ 0,
		},

		{ /* 5 */
			/* animationID   */ 9,
			/* voiceID       */ 68,
			/* wait          */ 2,
		},

		{ /* 6 */
			/* animationID   */ 9,
			/* voiceID       */ 66,
			/* wait          */ 25,
		},

		{ /* 7 */
			/* animationID   */ 11,
			/* voiceID       */ 255,
			/* wait          */ 0,
		}
	},

	{ /* 8 - Level 9: Atreides */
		{ /* 0 */
			/* animationID   */ 8,
			/* voiceID       */ 255,
			/* wait          */ 0,
		}
	},

	{ /* 9 - Level 9: Ordos */
		{ /* 0 */
			/* animationID   */ 2,
			/* voiceID       */ 67,
			/* wait          */ 2,
		},

		{ /* 1 */
			/* animationID   */ 6,
			/* voiceID       */ 67,
			/* wait          */ 1,
		},

		{ /* 2 */
			/* animationID   */ 13,
			/* voiceID       */ 255,
			/* wait          */ 0,
		}
	}
};
