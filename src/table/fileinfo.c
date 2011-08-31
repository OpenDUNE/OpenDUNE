/* $Id$ */

/** @file src/table/fileinfo.c FileInfo file table. */

#include <stdio.h>
#include "types.h"

#include "../file.h"

FileInfo g_table_fileInfo[] = {
	{ /* 0 */
		/* filename             */ "DUNE.PAK",
		/* fileSize             */ 439833,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 0,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ false,
		},
	},

	{ /* 1 */
		/* filename             */ "MENTAT.PAK",
		/* fileSize             */ 573794,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 0,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ false,
		},
	},

	{ /* 2 */
		/* filename             */ "INTRO.PAK",
		/* fileSize             */ 1154074,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 0,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ false,
		},
	},

	{ /* 3 */
		/* filename             */ "SOUND.PAK",
		/* fileSize             */ 1201761,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 0,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ false,
		},
	},

	{ /* 4 */
		/* filename             */ "VOC.PAK",
		/* fileSize             */ 427826,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 0,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ false,
		},
	},

	{ /* 5 */
		/* filename             */ "SCENARIO.PAK",
		/* fileSize             */ 226797,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 0,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ false,
		},
	},

	{ /* 6 */
		/* filename             */ "FINALE.PAK",
		/* fileSize             */ 481314,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 0,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ false,
		},
	},

	{ /* 7 */
		/* filename             */ "ENGLISH.PAK",
		/* fileSize             */ 39066,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 0,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ false,
		},
	},

	{ /* 8 */
		/* filename             */ "INTROVOC.PAK",
		/* fileSize             */ 983052,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 0,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ false,
		},
	},

	{ /* 9 */
		/* filename             */ "HARK.PAK",
		/* fileSize             */ 407953,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 0,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ false,
		},
	},

	{ /* 10 */
		/* filename             */ "ATRE.PAK",
		/* fileSize             */ 391782,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 0,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ false,
		},
	},

	{ /* 11 */
		/* filename             */ "ORDOS.PAK",
		/* fileSize             */ 444719,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 0,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ false,
		},
	},

	{ /* 12 */
		/* filename             */ "MERC.PAK",
		/* fileSize             */ 100000,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 0,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ false,
		},
	},

	{ /* 13 */
		/* filename             */ "GERMAN.PAK",
		/* fileSize             */ 50000,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 0,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ false,
		},
	},

	{ /* 14 */
		/* filename             */ "FRENCH.PAK",
		/* fileSize             */ 50000,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 0,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ false,
		},
	},

	{ /* 15 */
		/* filename             */ "GRAYRMAP.TBL",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 0,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 16 */
		/* filename             */ "CHOAM.CPS",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 0,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 17 */
		/* filename             */ "WIN1.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 0,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 18 */
		/* filename             */ "WIN2.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 0,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 19 */
		/* filename             */ "MOUSE.SHP",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 0,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 20 */
		/* filename             */ "BUILD.EMC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 0,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 21 */
		/* filename             */ "IBM.PAL",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 0,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 22 */
		/* filename             */ "BENE.PAL",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 0,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 23 */
		/* filename             */ "ICON.ICN",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 0,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 24 */
		/* filename             */ "ICON.MAP",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 0,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 25 */
		/* filename             */ "FAME.CPS",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 0,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 26 */
		/* filename             */ "LOSTBILD.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 0,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 27 */
		/* filename             */ "LOSTVEHC.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 0,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 28 */
		/* filename             */ "MENTATM.CPS",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 0,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 29 */
		/* filename             */ "MENTATA.CPS",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 0,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 30 */
		/* filename             */ "MENTATH.CPS",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 0,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 31 */
		/* filename             */ "MENTATO.CPS",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 0,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 32 */
		/* filename             */ "MENSHPM.SHP",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 0,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 33 */
		/* filename             */ "MENSHPA.SHP",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 0,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 34 */
		/* filename             */ "MENSHPH.SHP",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 0,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 35 */
		/* filename             */ "MENSHPO.SHP",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 0,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 36 */
		/* filename             */ "NEW10P.FNT",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 0,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 37 */
		/* filename             */ "NEW6P.FNT",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 0,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 38 */
		/* filename             */ "NEW6PG.FNT",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 0,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 39 */
		/* filename             */ "NEW8P.FNT",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 0,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 40 */
		/* filename             */ "SCREEN.CPS",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 0,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 41 */
		/* filename             */ "STATIC.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 0,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 42 */
		/* filename             */ "STD3P.FNT",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 0,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 43 */
		/* filename             */ "TEAM.EMC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 0,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 44 */
		/* filename             */ "UNIT.EMC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 0,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 45 */
		/* filename             */ "SHAPES.SHP",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 0,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 46 */
		/* filename             */ "UNITS.SHP",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 0,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 47 */
		/* filename             */ "UNITS1.SHP",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 0,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 48 */
		/* filename             */ "UNITS2.SHP",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 0,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 49 */
		/* filename             */ "PIECES.SHP",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 0,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 50 */
		/* filename             */ "ARROWS.SHP",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 0,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 51 */
		/* filename             */ "DUNEMAP.CPS",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 0,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 52 */
		/* filename             */ "MAPMACH.CPS",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 0,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 53 */
		/* filename             */ "DUNERGN.CPS",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 0,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 54 */
		/* filename             */ "RGNCLK.CPS",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 0,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 55 */
		/* filename             */ "PLANET.CPS",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 0,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 56 */
		/* filename             */ "INTRO.FNT",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 2,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 57 */
		/* filename             */ "INTRO.PAL",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 2,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 58 */
		/* filename             */ "INTRO1.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 2,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 59 */
		/* filename             */ "INTRO10.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 2,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 60 */
		/* filename             */ "INTRO11.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 2,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 61 */
		/* filename             */ "INTRO2.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 2,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 62 */
		/* filename             */ "INTRO3.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 2,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 63 */
		/* filename             */ "INTRO4.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 2,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 64 */
		/* filename             */ "INTRO5.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 2,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 65 */
		/* filename             */ "INTRO6.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 2,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 66 */
		/* filename             */ "INTRO7A.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 2,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 67 */
		/* filename             */ "INTRO7B.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 2,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 68 */
		/* filename             */ "INTRO8a.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 2,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 69 */
		/* filename             */ "INTRO8b.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 2,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 70 */
		/* filename             */ "INTRO8c.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 2,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 71 */
		/* filename             */ "INTRO9.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 2,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 72 */
		/* filename             */ "VIRGIN.CPS",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 2,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 73 */
		/* filename             */ "WESTWOOD.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 2,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 74 */
		/* filename             */ "WESTWOOD.PAL",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 2,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 75 */
		/* filename             */ "SARDUKAR.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 1,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 76 */
		/* filename             */ "4SLAB.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 1,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 77 */
		/* filename             */ "BARRAC.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 1,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 78 */
		/* filename             */ "CARRYALL.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 1,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 79 */
		/* filename             */ "CONSTRUC.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 1,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 80 */
		/* filename             */ "FARTR.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 1,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 81 */
		/* filename             */ "FHARK.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 1,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 82 */
		/* filename             */ "FORDOS.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 1,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 83 */
		/* filename             */ "FREMEN.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 1,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 84 */
		/* filename             */ "FRIGATE.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 1,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 85 */
		/* filename             */ "GOLD-BB.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 1,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 86 */
		/* filename             */ "HARKTANK.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 1,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 87 */
		/* filename             */ "HARVEST.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 1,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 88 */
		/* filename             */ "HEADQRTS.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 1,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 89 */
		/* filename             */ "HITCFTRY.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 1,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 90 */
		/* filename             */ "HTANK.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 1,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 91 */
		/* filename             */ "HVYFTRY.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 1,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 92 */
		/* filename             */ "HYINFY.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 1,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 93 */
		/* filename             */ "INFANTRY.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 1,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 94 */
		/* filename             */ "IX.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 1,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 95 */
		/* filename             */ "LITEFTRY.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 1,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 96 */
		/* filename             */ "LTANK.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 1,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 97 */
		/* filename             */ "MCV.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 1,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 98 */
		/* filename             */ "ORDRTANK.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 1,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 99 */
		/* filename             */ "ORNI.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 1,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 100 */
		/* filename             */ "OTRIKE.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 1,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 101 */
		/* filename             */ "PALACE.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 1,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 102 */
		/* filename             */ "QUAD.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 1,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 103 */
		/* filename             */ "REFINERY.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 1,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 104 */
		/* filename             */ "REPAIR.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 1,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 105 */
		/* filename             */ "RTANK.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 1,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 106 */
		/* filename             */ "SABOTURE.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 1,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 107 */
		/* filename             */ "SLAB.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 1,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 108 */
		/* filename             */ "STANK.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 1,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 109 */
		/* filename             */ "STARPORT.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 1,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 110 */
		/* filename             */ "STORAGE.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 1,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 111 */
		/* filename             */ "TRIKE.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 1,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 112 */
		/* filename             */ "RTURRET.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 1,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 113 */
		/* filename             */ "TURRET.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 1,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 114 */
		/* filename             */ "WALL.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 1,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 115 */
		/* filename             */ "WINDTRAP.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 1,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 116 */
		/* filename             */ "WOR.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 1,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 117 */
		/* filename             */ "WORM.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 1,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 118 */
		/* filename             */ "algdig.adv",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 119 */
		/* filename             */ "pasdig.adv",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 120 */
		/* filename             */ "sbdig.adv",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 121 */
		/* filename             */ "sbpdig.adv",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 122 */
		/* filename             */ "tandy.adv",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 123 */
		/* filename             */ "mt32mpu.adv",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 124 */
		/* filename             */ "pcsound.drv",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 125 */
		/* filename             */ "pcspkr.adv",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 126 */
		/* filename             */ "alfx.drv",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 127 */
		/* filename             */ "DUNE0.ADL",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 128 */
		/* filename             */ "DUNE1.ADL",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 129 */
		/* filename             */ "DUNE2.ADL",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 130 */
		/* filename             */ "DUNE3.ADL",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 131 */
		/* filename             */ "DUNE4.ADL",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 132 */
		/* filename             */ "DUNE5.ADL",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 133 */
		/* filename             */ "DUNE6.ADL",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 134 */
		/* filename             */ "DUNE7.ADL",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 135 */
		/* filename             */ "DUNE8.ADL",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 136 */
		/* filename             */ "DUNE9.ADL",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 137 */
		/* filename             */ "DUNE10.ADL",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 138 */
		/* filename             */ "DUNE11.ADL",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 139 */
		/* filename             */ "DUNE12.ADL",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 140 */
		/* filename             */ "DUNE13.ADL",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 141 */
		/* filename             */ "DUNE14.ADL",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 142 */
		/* filename             */ "DUNE15.ADL",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 143 */
		/* filename             */ "DUNE16.ADL",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 144 */
		/* filename             */ "DUNE17.ADL",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 145 */
		/* filename             */ "DUNE18.ADL",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 146 */
		/* filename             */ "DUNE19.ADL",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 147 */
		/* filename             */ "DUNE20.ADL",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 148 */
		/* filename             */ "DUNEINIT.XMI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 149 */
		/* filename             */ "DUNE0.XMI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 150 */
		/* filename             */ "DUNE1.XMI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 151 */
		/* filename             */ "DUNE2.XMI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 152 */
		/* filename             */ "DUNE3.XMI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 153 */
		/* filename             */ "DUNE4.XMI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 154 */
		/* filename             */ "DUNE5.XMI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 155 */
		/* filename             */ "DUNE6.XMI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 156 */
		/* filename             */ "DUNE7.XMI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 157 */
		/* filename             */ "DUNE8.XMI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 158 */
		/* filename             */ "DUNE9.XMI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 159 */
		/* filename             */ "DUNE10.XMI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 160 */
		/* filename             */ "DUNE11.XMI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 161 */
		/* filename             */ "DUNE12.XMI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 162 */
		/* filename             */ "DUNE13.XMI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 163 */
		/* filename             */ "DUNE14.XMI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 164 */
		/* filename             */ "DUNE15.XMI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 165 */
		/* filename             */ "DUNE16.XMI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 166 */
		/* filename             */ "DUNE17.XMI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 167 */
		/* filename             */ "DUNE18.XMI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 168 */
		/* filename             */ "DUNE19.XMI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 169 */
		/* filename             */ "DUNE20.XMI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 170 */
		/* filename             */ "DUNE0.C55",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 171 */
		/* filename             */ "DUNE1.C55",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 172 */
		/* filename             */ "DUNE2.C55",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 173 */
		/* filename             */ "DUNE3.C55",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 174 */
		/* filename             */ "DUNE4.C55",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 175 */
		/* filename             */ "DUNE5.C55",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 176 */
		/* filename             */ "DUNE6.C55",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 177 */
		/* filename             */ "DUNE7.C55",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 178 */
		/* filename             */ "DUNE8.C55",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 179 */
		/* filename             */ "DUNE9.C55",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 180 */
		/* filename             */ "DUNE10.C55",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 181 */
		/* filename             */ "DUNE11.C55",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 182 */
		/* filename             */ "DUNE12.C55",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 183 */
		/* filename             */ "DUNE13.C55",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 184 */
		/* filename             */ "DUNE14.C55",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 185 */
		/* filename             */ "DUNE15.C55",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 186 */
		/* filename             */ "DUNE16.C55",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 187 */
		/* filename             */ "DUNE17.C55",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 188 */
		/* filename             */ "DUNE18.C55",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 189 */
		/* filename             */ "DUNE19.C55",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 190 */
		/* filename             */ "DUNE20.C55",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 191 */
		/* filename             */ "DUNE0.PCS",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 192 */
		/* filename             */ "DUNE1.PCS",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 193 */
		/* filename             */ "DUNE2.PCS",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 194 */
		/* filename             */ "DUNE3.PCS",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 195 */
		/* filename             */ "DUNE4.PCS",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 196 */
		/* filename             */ "DUNE5.PCS",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 197 */
		/* filename             */ "DUNE6.PCS",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 198 */
		/* filename             */ "DUNE7.PCS",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 199 */
		/* filename             */ "DUNE8.PCS",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 200 */
		/* filename             */ "DUNE9.PCS",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 201 */
		/* filename             */ "DUNE10.PCS",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 202 */
		/* filename             */ "DUNE11.PCS",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 203 */
		/* filename             */ "DUNE12.PCS",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 204 */
		/* filename             */ "DUNE13.PCS",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 205 */
		/* filename             */ "DUNE14.PCS",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 206 */
		/* filename             */ "DUNE15.PCS",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 207 */
		/* filename             */ "DUNE16.PCS",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 208 */
		/* filename             */ "DUNE17.PCS",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 209 */
		/* filename             */ "DUNE18.PCS",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 210 */
		/* filename             */ "DUNE19.PCS",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 211 */
		/* filename             */ "DUNE20.PCS",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 212 */
		/* filename             */ "DUNE0.TAN",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 213 */
		/* filename             */ "DUNE1.TAN",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 214 */
		/* filename             */ "DUNE2.TAN",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 215 */
		/* filename             */ "DUNE3.TAN",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 216 */
		/* filename             */ "DUNE4.TAN",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 217 */
		/* filename             */ "DUNE5.TAN",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 218 */
		/* filename             */ "DUNE6.TAN",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 219 */
		/* filename             */ "DUNE7.TAN",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 220 */
		/* filename             */ "DUNE8.TAN",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 221 */
		/* filename             */ "DUNE9.TAN",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 222 */
		/* filename             */ "DUNE10.TAN",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 223 */
		/* filename             */ "DUNE11.TAN",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 224 */
		/* filename             */ "DUNE12.TAN",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 225 */
		/* filename             */ "DUNE13.TAN",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 226 */
		/* filename             */ "DUNE14.TAN",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 227 */
		/* filename             */ "DUNE15.TAN",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 228 */
		/* filename             */ "DUNE16.TAN",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 229 */
		/* filename             */ "DUNE17.TAN",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 230 */
		/* filename             */ "DUNE18.TAN",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 231 */
		/* filename             */ "DUNE19.TAN",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 232 */
		/* filename             */ "DUNE20.TAN",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 3,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 233 */
		/* filename             */ "SQUISH2.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 4,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 234 */
		/* filename             */ "MISLTINP.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 4,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 235 */
		/* filename             */ "WORMET3P.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 4,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 236 */
		/* filename             */ "STATICP.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 4,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 237 */
		/* filename             */ "EXTINY.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 4,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 238 */
		/* filename             */ "DROPEQ2P.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 4,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 239 */
		/* filename             */ "BUTTON.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 4,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 240 */
		/* filename             */ "CRUMBLE.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 4,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 241 */
		/* filename             */ "EXCANNON.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 4,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 242 */
		/* filename             */ "EXDUD.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 4,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 243 */
		/* filename             */ "EXGAS.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 4,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 244 */
		/* filename             */ "EXLARGE.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 4,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 245 */
		/* filename             */ "EXMED.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 4,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 246 */
		/* filename             */ "EXSAND.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 4,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 247 */
		/* filename             */ "EXSMALL.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 4,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 248 */
		/* filename             */ "GUN.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 4,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 249 */
		/* filename             */ "GUNMULTI.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 4,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 250 */
		/* filename             */ "ROCKET.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 4,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 251 */
		/* filename             */ "VSCREAM1.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 4,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 252 */
		/* filename             */ "VSCREAM2.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 4,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 253 */
		/* filename             */ "VSCREAM3.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 4,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 254 */
		/* filename             */ "VSCREAM4.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 4,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 255 */
		/* filename             */ "VSCREAM5.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 4,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 256 */
		/* filename             */ "ZAFFIRM.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 4,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 257 */
		/* filename             */ "ZREPORT1.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 4,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 258 */
		/* filename             */ "ZREPORT2.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 4,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 259 */
		/* filename             */ "ZREPORT3.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 4,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 260 */
		/* filename             */ "ZOVEROUT.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 4,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 261 */
		/* filename             */ "ZMOVEOUT.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 4,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 262 */
		/* filename             */ "POPPA.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 4,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 263 */
		/* filename             */ "SANDBUG.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 4,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 264 */
		/* filename             */ "HATTACK.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 9,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 265 */
		/* filename             */ "HARRIVE.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 9,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 266 */
		/* filename             */ "HCONST.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 9,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 267 */
		/* filename             */ "HONE.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 9,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 268 */
		/* filename             */ "HTWO.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 9,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 269 */
		/* filename             */ "HTHREE.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 9,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 270 */
		/* filename             */ "HFOUR.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 9,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 271 */
		/* filename             */ "HFIVE.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 9,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 272 */
		/* filename             */ "HAPPRCH.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 9,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 273 */
		/* filename             */ "HENEMY.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 9,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 274 */
		/* filename             */ "HHARK.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 9,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 275 */
		/* filename             */ "HATRE.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 9,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 276 */
		/* filename             */ "HORDOS.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 9,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 277 */
		/* filename             */ "HFREMEN.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 9,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 278 */
		/* filename             */ "HSARD.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 9,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 279 */
		/* filename             */ "HMERC.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 9,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 280 */
		/* filename             */ "HUNIT.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 9,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 281 */
		/* filename             */ "HSTRUCT.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 9,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 282 */
		/* filename             */ "HBLOOM.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 9,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 283 */
		/* filename             */ "HDEPLOY.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 9,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 284 */
		/* filename             */ "HDESTROY.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 9,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 285 */
		/* filename             */ "HEAST.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 9,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 286 */
		/* filename             */ "HFRIGATE.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 9,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 287 */
		/* filename             */ "HLOCATED.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 9,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 288 */
		/* filename             */ "HLOSE.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 9,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 289 */
		/* filename             */ "HMISSILE.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 9,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 290 */
		/* filename             */ "HNORTH.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 9,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 291 */
		/* filename             */ "HRADAR.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 9,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 292 */
		/* filename             */ "HOFF.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 9,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 293 */
		/* filename             */ "HON.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 9,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 294 */
		/* filename             */ "HSABOT.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 9,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 295 */
		/* filename             */ "HSOUTH.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 9,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 296 */
		/* filename             */ "HWARNING.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 9,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 297 */
		/* filename             */ "HWEST.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 9,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 298 */
		/* filename             */ "HWIN.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 9,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 299 */
		/* filename             */ "HLAUNCH.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 9,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 300 */
		/* filename             */ "HVEHICLE.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 9,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 301 */
		/* filename             */ "HREPAIR.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 9,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 302 */
		/* filename             */ "HHARVEST.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 9,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 303 */
		/* filename             */ "HWORMY.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 9,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 304 */
		/* filename             */ "HCAPTURE.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 9,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 305 */
		/* filename             */ "AATTACK.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 10,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 306 */
		/* filename             */ "AATTACK.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 10,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 307 */
		/* filename             */ "AARRIVE.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 10,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 308 */
		/* filename             */ "ACONST.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 10,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 309 */
		/* filename             */ "AONE.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 10,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 310 */
		/* filename             */ "ATWO.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 10,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 311 */
		/* filename             */ "ATHREE.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 10,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 312 */
		/* filename             */ "AFOUR.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 10,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 313 */
		/* filename             */ "AFIVE.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 10,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 314 */
		/* filename             */ "AAPPRCH.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 10,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 315 */
		/* filename             */ "AENEMY.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 10,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 316 */
		/* filename             */ "AHARK.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 10,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 317 */
		/* filename             */ "AATRE.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 10,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 318 */
		/* filename             */ "AORDOS.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 10,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 319 */
		/* filename             */ "AFREMEN.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 10,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 320 */
		/* filename             */ "ASARD.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 10,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 321 */
		/* filename             */ "AMERC.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 10,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 322 */
		/* filename             */ "AUNIT.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 10,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 323 */
		/* filename             */ "ASTRUCT.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 10,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 324 */
		/* filename             */ "ABLOOM.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 10,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 325 */
		/* filename             */ "ADEPLOY.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 10,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 326 */
		/* filename             */ "ADESTROY.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 10,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 327 */
		/* filename             */ "AEAST.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 10,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 328 */
		/* filename             */ "AFRIGATE.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 10,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 329 */
		/* filename             */ "ALOCATED.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 10,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 330 */
		/* filename             */ "ALOSE.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 10,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 331 */
		/* filename             */ "AMISSILE.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 10,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 332 */
		/* filename             */ "ANORTH.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 10,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 333 */
		/* filename             */ "ARADAR.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 10,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 334 */
		/* filename             */ "AOFF.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 10,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 335 */
		/* filename             */ "AON.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 10,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 336 */
		/* filename             */ "ASABOT.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 10,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 337 */
		/* filename             */ "ASOUTH.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 10,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 338 */
		/* filename             */ "AWARNING.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 10,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 339 */
		/* filename             */ "AWEST.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 10,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 340 */
		/* filename             */ "AWIN.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 10,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 341 */
		/* filename             */ "ALAUNCH.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 10,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 342 */
		/* filename             */ "AVEHICLE.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 10,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 343 */
		/* filename             */ "AREPAIR.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 10,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 344 */
		/* filename             */ "AHARVEST.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 10,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 345 */
		/* filename             */ "AWORMY.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 10,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 346 */
		/* filename             */ "ACAPTURE.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 10,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 347 */
		/* filename             */ "OATTACK.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 11,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 348 */
		/* filename             */ "OARRIVE.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 11,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 349 */
		/* filename             */ "OCONST.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 11,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 350 */
		/* filename             */ "OONE.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 11,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 351 */
		/* filename             */ "OTWO.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 11,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 352 */
		/* filename             */ "OTHREE.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 11,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 353 */
		/* filename             */ "OFOUR.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 11,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 354 */
		/* filename             */ "OFIVE.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 11,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 355 */
		/* filename             */ "OAPPRCH.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 11,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 356 */
		/* filename             */ "OENEMY.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 11,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 357 */
		/* filename             */ "OHARK.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 11,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 358 */
		/* filename             */ "OATRE.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 11,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 359 */
		/* filename             */ "OORDOS.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 11,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 360 */
		/* filename             */ "OFREMEN.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 11,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 361 */
		/* filename             */ "OSARD.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 11,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 362 */
		/* filename             */ "OMERC.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 11,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 363 */
		/* filename             */ "OUNIT.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 11,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 364 */
		/* filename             */ "OSTRUCT.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 11,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 365 */
		/* filename             */ "OBLOOM.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 11,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 366 */
		/* filename             */ "ODEPLOY.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 11,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 367 */
		/* filename             */ "ODESTROY.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 11,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 368 */
		/* filename             */ "OEAST.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 11,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 369 */
		/* filename             */ "OFRIGATE.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 11,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 370 */
		/* filename             */ "OLOCATED.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 11,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 371 */
		/* filename             */ "OLOSE.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 11,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 372 */
		/* filename             */ "OMISSILE.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 11,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 373 */
		/* filename             */ "ONORTH.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 11,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 374 */
		/* filename             */ "ORADAR.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 11,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 375 */
		/* filename             */ "OOFF.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 11,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 376 */
		/* filename             */ "OON.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 11,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 377 */
		/* filename             */ "OSABOT.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 11,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 378 */
		/* filename             */ "OSOUTH.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 11,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 379 */
		/* filename             */ "OWARNING.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 11,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 380 */
		/* filename             */ "OWEST.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 11,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 381 */
		/* filename             */ "OWIN.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 11,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 382 */
		/* filename             */ "OLAUNCH.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 11,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 383 */
		/* filename             */ "OVEHICLE.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 11,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 384 */
		/* filename             */ "OREPAIR.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 11,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 385 */
		/* filename             */ "OHARVEST.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 11,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 386 */
		/* filename             */ "OWORMY.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 11,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 387 */
		/* filename             */ "OCAPTURE.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 11,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 388 */
		/* filename             */ "MSELECT1.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 12,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 389 */
		/* filename             */ "MSELECT2.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 12,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 390 */
		/* filename             */ "MATRE.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 12,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 391 */
		/* filename             */ "MHARK.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 12,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 392 */
		/* filename             */ "MORDOS.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 12,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 393 */
		/* filename             */ "HOUSE.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 394 */
		/* filename             */ "REGIONA.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 395 */
		/* filename             */ "REGIONH.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 396 */
		/* filename             */ "REGIONO.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 397 */
		/* filename             */ "SCENA001.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 398 */
		/* filename             */ "SCENA002.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 399 */
		/* filename             */ "SCENA003.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 400 */
		/* filename             */ "SCENA004.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 401 */
		/* filename             */ "SCENA005.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 402 */
		/* filename             */ "SCENA006.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 403 */
		/* filename             */ "SCENA007.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 404 */
		/* filename             */ "SCENA008.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 405 */
		/* filename             */ "SCENA009.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 406 */
		/* filename             */ "SCENA010.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 407 */
		/* filename             */ "SCENA011.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 408 */
		/* filename             */ "SCENA012.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 409 */
		/* filename             */ "SCENA013.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 410 */
		/* filename             */ "SCENA014.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 411 */
		/* filename             */ "SCENA015.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 412 */
		/* filename             */ "SCENA016.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 413 */
		/* filename             */ "SCENA017.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 414 */
		/* filename             */ "SCENA018.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 415 */
		/* filename             */ "SCENA019.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 416 */
		/* filename             */ "SCENA020.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 417 */
		/* filename             */ "SCENA021.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 418 */
		/* filename             */ "SCENA022.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 419 */
		/* filename             */ "SCENH001.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 420 */
		/* filename             */ "SCENH002.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 421 */
		/* filename             */ "SCENH003.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 422 */
		/* filename             */ "SCENH004.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 423 */
		/* filename             */ "SCENH005.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 424 */
		/* filename             */ "SCENH006.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 425 */
		/* filename             */ "SCENH007.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 426 */
		/* filename             */ "SCENH008.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 427 */
		/* filename             */ "SCENH009.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 428 */
		/* filename             */ "SCENH010.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 429 */
		/* filename             */ "SCENH011.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 430 */
		/* filename             */ "SCENH012.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 431 */
		/* filename             */ "SCENH013.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 432 */
		/* filename             */ "SCENH014.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 433 */
		/* filename             */ "SCENH015.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 434 */
		/* filename             */ "SCENH016.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 435 */
		/* filename             */ "SCENH017.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 436 */
		/* filename             */ "SCENH018.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 437 */
		/* filename             */ "SCENH019.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 438 */
		/* filename             */ "SCENH020.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 439 */
		/* filename             */ "SCENH021.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 440 */
		/* filename             */ "SCENH022.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 441 */
		/* filename             */ "SCENO001.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 442 */
		/* filename             */ "SCENO002.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 443 */
		/* filename             */ "SCENO003.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 444 */
		/* filename             */ "SCENO004.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 445 */
		/* filename             */ "SCENO005.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 446 */
		/* filename             */ "SCENO006.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 447 */
		/* filename             */ "SCENO007.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 448 */
		/* filename             */ "SCENO008.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 449 */
		/* filename             */ "SCENO009.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 450 */
		/* filename             */ "SCENO010.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 451 */
		/* filename             */ "SCENO011.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 452 */
		/* filename             */ "SCENO012.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 453 */
		/* filename             */ "SCENO013.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 454 */
		/* filename             */ "SCENO014.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 455 */
		/* filename             */ "SCENO015.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 456 */
		/* filename             */ "SCENO016.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 457 */
		/* filename             */ "SCENO017.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 458 */
		/* filename             */ "SCENO018.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 459 */
		/* filename             */ "SCENO019.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 460 */
		/* filename             */ "SCENO020.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 461 */
		/* filename             */ "SCENO021.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 462 */
		/* filename             */ "SCENO022.INI",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 5,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 463 */
		/* filename             */ "AFINALA.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 6,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 464 */
		/* filename             */ "AFINALB.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 6,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 465 */
		/* filename             */ "HFINALA.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 6,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 466 */
		/* filename             */ "HFINALB.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 6,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 467 */
		/* filename             */ "HFINALC.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 6,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 468 */
		/* filename             */ "OFINALA.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 6,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 469 */
		/* filename             */ "OFINALB.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 6,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 470 */
		/* filename             */ "OFINALC.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 6,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 471 */
		/* filename             */ "OFINALd.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 6,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 472 */
		/* filename             */ "EFINALA.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 6,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 473 */
		/* filename             */ "EFINALB.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 6,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 474 */
		/* filename             */ "MEANWHIL.WSA",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 6,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 475 */
		/* filename             */ "CREDIT1.SHP",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 6,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 476 */
		/* filename             */ "CREDIT2.SHP",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 6,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 477 */
		/* filename             */ "CREDIT3.SHP",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 6,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 478 */
		/* filename             */ "CREDIT4.SHP",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 6,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 479 */
		/* filename             */ "CREDIT5.SHP",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 6,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 480 */
		/* filename             */ "CREDIT6.SHP",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 6,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 481 */
		/* filename             */ "CREDIT7.SHP",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 6,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 482 */
		/* filename             */ "CREDIT8.SHP",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 6,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 483 */
		/* filename             */ "CREDIT9.SHP",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 6,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 484 */
		/* filename             */ "CREDIT10.SHP",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 6,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 485 */
		/* filename             */ "CREDIT11.SHP",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 6,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 486 */
		/* filename             */ "CREDIT12.SHP",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 6,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 487 */
		/* filename             */ "CREDIT13.SHP",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 6,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 488 */
		/* filename             */ "CREDIT14.SHP",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 6,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 489 */
		/* filename             */ "CREDIT15.SHP",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 6,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 490 */
		/* filename             */ "BIGPLAN.CPS",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 6,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 491 */
		/* filename             */ "MAPPLAN.CPS",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 6,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 492 */
		/* filename             */ "DUNE.ENG",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 7,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 493 */
		/* filename             */ "TEXTA.ENG",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 7,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 494 */
		/* filename             */ "TEXTH.ENG",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 7,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 495 */
		/* filename             */ "TEXTO.ENG",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 7,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 496 */
		/* filename             */ "MENTATA.ENG",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 7,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 497 */
		/* filename             */ "MENTATO.ENG",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 7,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 498 */
		/* filename             */ "MENTATH.ENG",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 7,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 499 */
		/* filename             */ "MESSAGE.ENG",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 7,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 500 */
		/* filename             */ "PROTECT.ENG",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 7,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 501 */
		/* filename             */ "INTRO.ENG",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 7,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 502 */
		/* filename             */ "CREDITS.ENG",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 7,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 503 */
		/* filename             */ "MENTAT.ENG",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 7,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 504 */
		/* filename             */ "CHOAM.ENG",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 7,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 505 */
		/* filename             */ "MISC.ENG",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 7,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 506 */
		/* filename             */ "BTTN.ENG",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 7,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 507 */
		/* filename             */ "AND.ENG",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 7,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 508 */
		/* filename             */ "TITLE.ENG",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 7,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 509 */
		/* filename             */ "HERALD.ENG",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 7,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 510 */
		/* filename             */ "WIND2BP.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 8,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 511 */
		/* filename             */ "ORNY2P.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 8,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 512 */
		/* filename             */ "BRAKES2P.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 8,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 513 */
		/* filename             */ "LANDINGL.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 8,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 514 */
		/* filename             */ "GUNSHOT.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 8,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 515 */
		/* filename             */ "GLASS.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 8,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 516 */
		/* filename             */ "MISSLE8.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 8,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 517 */
		/* filename             */ "BEDUP2LP.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 8,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 518 */
		/* filename             */ "CLANK.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 8,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 519 */
		/* filename             */ "BLOWUP1.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 8,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 520 */
		/* filename             */ "BLOWUP2.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 8,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 521 */
		/* filename             */ "BLASTER.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 8,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 522 */
		/* filename             */ "GLASS6.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 8,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 523 */
		/* filename             */ "LIZARD1.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 8,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 524 */
		/* filename             */ "FLESH.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 8,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 525 */
		/* filename             */ "CLICK.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 8,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 526 */
		/* filename             */ "3HOUSES.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 8,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 527 */
		/* filename             */ "ANDNOW.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 8,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 528 */
		/* filename             */ "ARRIVED.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 8,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 529 */
		/* filename             */ "BATTLE.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 8,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 530 */
		/* filename             */ "BEGINS.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 8,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 531 */
		/* filename             */ "BLDING.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 8,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 532 */
		/* filename             */ "CONTROL2.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 8,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 533 */
		/* filename             */ "CONTROL3.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 8,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 534 */
		/* filename             */ "CONTROL4.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 8,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 535 */
		/* filename             */ "CONTROLS.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 8,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 536 */
		/* filename             */ "DUNE.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 8,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 537 */
		/* filename             */ "DYNASTY.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 8,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 538 */
		/* filename             */ "EACHHOME.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 8,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 539 */
		/* filename             */ "EANDNO.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 8,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 540 */
		/* filename             */ "ECONTROL.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 8,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 541 */
		/* filename             */ "EHOUSE.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 8,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 542 */
		/* filename             */ "EMPIRE.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 8,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 543 */
		/* filename             */ "EPRODUCE.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 8,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 544 */
		/* filename             */ "ERULES.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 8,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 545 */
		/* filename             */ "ETERRIT.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 8,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 546 */
		/* filename             */ "EMOST.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 8,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 547 */
		/* filename             */ "ENOSET.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 8,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 548 */
		/* filename             */ "EVIL.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 8,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 549 */
		/* filename             */ "HARK.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 8,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 550 */
		/* filename             */ "HOME.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 8,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 551 */
		/* filename             */ "HOUSE2.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 8,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 552 */
		/* filename             */ "INSID.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 8,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 553 */
		/* filename             */ "KING.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 8,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 554 */
		/* filename             */ "KNOWN.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 8,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 555 */
		/* filename             */ "MELANGE.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 8,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 556 */
		/* filename             */ "NOBLE.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 8,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 557 */
		/* filename             */ "NOW.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 8,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 558 */
		/* filename             */ "OFDUNE.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 8,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 559 */
		/* filename             */ "ORD.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 8,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 560 */
		/* filename             */ "PLANET.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 8,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 561 */
		/* filename             */ "PREVAIL.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 8,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 562 */
		/* filename             */ "PROPOSED.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 8,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 563 */
		/* filename             */ "SANDLAND.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 8,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 564 */
		/* filename             */ "SPICE.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 8,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 565 */
		/* filename             */ "SPICE2.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 8,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 566 */
		/* filename             */ "VAST.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 8,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 567 */
		/* filename             */ "WHOEVER.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 8,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 568 */
		/* filename             */ "YOUR.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 8,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 569 */
		/* filename             */ "FILLER.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 8,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 570 */
		/* filename             */ "GAFFIRM.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 13,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 571 */
		/* filename             */ "GREPORT1.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 13,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 572 */
		/* filename             */ "GREPORT2.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 13,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 573 */
		/* filename             */ "GREPORT3.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 13,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 574 */
		/* filename             */ "GOVEROUT.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 13,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 575 */
		/* filename             */ "GMOVEOUT.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 13,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 576 */
		/* filename             */ "GHARVEST.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 13,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 577 */
		/* filename             */ "GHARK.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 13,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 578 */
		/* filename             */ "GATRE.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 13,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 579 */
		/* filename             */ "GORDOS.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 13,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 580 */
		/* filename             */ "GNEXT.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 13,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 581 */
		/* filename             */ "GREPAIR.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 13,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 582 */
		/* filename             */ "GVEHICLE.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 13,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 583 */
		/* filename             */ "GATTACK.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 13,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 584 */
		/* filename             */ "GONE.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 13,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 585 */
		/* filename             */ "GTWO.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 13,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 586 */
		/* filename             */ "GTHREE.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 13,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 587 */
		/* filename             */ "GFOURE.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 13,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 588 */
		/* filename             */ "GFIVE.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 13,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 589 */
		/* filename             */ "GLAUNCH.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 13,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 590 */
		/* filename             */ "GMISSILE.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 13,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 591 */
		/* filename             */ "GFRIGATE.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 13,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 592 */
		/* filename             */ "GWORMY.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 13,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 593 */
		/* filename             */ "GBLOOM.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 13,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 594 */
		/* filename             */ "GDEPLOY.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 13,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 595 */
		/* filename             */ "GON.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 13,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 596 */
		/* filename             */ "GOFF.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 13,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 597 */
		/* filename             */ "GSTRUCT.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 13,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 598 */
		/* filename             */ "GDESTROY.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 13,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 599 */
		/* filename             */ "GAPPRCH.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 13,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 600 */
		/* filename             */ "GUNIT.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 13,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 601 */
		/* filename             */ "GSABOT.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 13,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 602 */
		/* filename             */ "GCONST.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 13,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 603 */
		/* filename             */ "GWARNING.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 13,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 604 */
		/* filename             */ "GENEMY.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 13,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 605 */
		/* filename             */ "DUNE.GER",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 13,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 606 */
		/* filename             */ "TEXTA.GER",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 13,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 607 */
		/* filename             */ "TEXTH.GER",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 13,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 608 */
		/* filename             */ "TEXTO.GER",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 13,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 609 */
		/* filename             */ "MENTATA.GER",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 13,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 610 */
		/* filename             */ "MENTATO.GER",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 13,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 611 */
		/* filename             */ "MENTATH.GER",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 13,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 612 */
		/* filename             */ "MESSAGE.GER",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 13,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 613 */
		/* filename             */ "PROTECT.GER",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 13,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 614 */
		/* filename             */ "INTRO.GER",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 13,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 615 */
		/* filename             */ "CREDITS.GER",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 13,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 616 */
		/* filename             */ "MENTAT.GER",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 13,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 617 */
		/* filename             */ "CHOAM.GER",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 13,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 618 */
		/* filename             */ "MISC.GER",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 13,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 619 */
		/* filename             */ "BTTN.GER",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 13,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 620 */
		/* filename             */ "AND.GER",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 13,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 621 */
		/* filename             */ "TITLE.GER",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 13,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 622 */
		/* filename             */ "HERALD.GER",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 13,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 623 */
		/* filename             */ "FAFFIRM.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 14,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 624 */
		/* filename             */ "FREPORT1.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 14,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 625 */
		/* filename             */ "FREPORT2.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 14,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 626 */
		/* filename             */ "FREPORT3.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 14,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 627 */
		/* filename             */ "FOVEROUT.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 14,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 628 */
		/* filename             */ "FMOVEOUT.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 14,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 629 */
		/* filename             */ "FHARVEST.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 14,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 630 */
		/* filename             */ "FHARK.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 14,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 631 */
		/* filename             */ "FATRE.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 14,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 632 */
		/* filename             */ "FORDOS.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 14,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 633 */
		/* filename             */ "FNEXT.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 14,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 634 */
		/* filename             */ "FREPAIR.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 14,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 635 */
		/* filename             */ "FVEHICLE.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 14,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 636 */
		/* filename             */ "FATTACK.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 14,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 637 */
		/* filename             */ "FONE.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 14,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 638 */
		/* filename             */ "FTWO.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 14,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 639 */
		/* filename             */ "FTHREE.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 14,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 640 */
		/* filename             */ "FFOURE.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 14,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 641 */
		/* filename             */ "FFIVE.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 14,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 642 */
		/* filename             */ "FLAUNCH.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 14,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 643 */
		/* filename             */ "FMISSILE.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 14,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 644 */
		/* filename             */ "FFRIGATE.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 14,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 645 */
		/* filename             */ "FWORMY.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 14,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 646 */
		/* filename             */ "FBLOOM.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 14,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 647 */
		/* filename             */ "FDEPLOY.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 14,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 648 */
		/* filename             */ "FON.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 14,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 649 */
		/* filename             */ "FOFF.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 14,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 650 */
		/* filename             */ "FSTRUCT.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 14,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 651 */
		/* filename             */ "FDESTROY.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 14,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 652 */
		/* filename             */ "FAPPRCH.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 14,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 653 */
		/* filename             */ "FUNIT.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 14,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 654 */
		/* filename             */ "FSABOT.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 14,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 655 */
		/* filename             */ "FCONST.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 14,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 656 */
		/* filename             */ "FWARNING.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 14,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 657 */
		/* filename             */ "FENEMY.VOC",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 14,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 658 */
		/* filename             */ "DUNE.FRE",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 14,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 659 */
		/* filename             */ "TEXTA.FRE",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 14,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 660 */
		/* filename             */ "TEXTH.FRE",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 14,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 661 */
		/* filename             */ "TEXTO.FRE",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 14,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 662 */
		/* filename             */ "MENTATA.FRE",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 14,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 663 */
		/* filename             */ "MENTATO.FRE",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 14,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 664 */
		/* filename             */ "MENTATH.FRE",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 14,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 665 */
		/* filename             */ "MESSAGE.FRE",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 14,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 666 */
		/* filename             */ "PROTECT.FRE",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 14,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 667 */
		/* filename             */ "INTRO.FRE",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 14,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 668 */
		/* filename             */ "CREDITS.FRE",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 14,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 669 */
		/* filename             */ "MENTAT.FRE",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 14,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 670 */
		/* filename             */ "CHOAM.FRE",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 14,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 671 */
		/* filename             */ "MISC.FRE",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 14,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 672 */
		/* filename             */ "BTTN.FRE",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 14,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 673 */
		/* filename             */ "AND.FRE",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 14,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 674 */
		/* filename             */ "TITLE.FRE",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 14,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	},

	{ /* 675 */
		/* filename             */ "HERALD.FRE",
		/* fileSize             */ 0,
		/* buffer               */ NULL,
		/* filePosition         */ 0,
		/* parentIndex          */ 14,
		{ /* flags */
		/* isLoaded             */ false,
		/* inMemory             */ false,
		/* inPAKFile            */ true,
		},
	}
};
