/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "unknown.h"
#include "../unit.h"
#include "../tile.h"
#include "../map.h"
#include "../os/math.h"

extern void f__06F7_0602_0018_CEB0();
extern void f__07D4_034D_001F_FF64();
extern void f__151A_0196_0018_AF63();
extern void f__24D0_000D_0039_C17D();
extern void f__2598_0000_0017_EB80();
extern void f__2642_0002_005E_87F6();
extern void f__2642_0069_0008_D517();
extern void f__B4CD_0000_0011_95D0();
extern void overlay(uint16 cs, uint8 force);

/**
 * C-ified function of f__07D4_0000_0027_FA61()
 *
 * @name emu_Unknown_07D4_0000
 * @implements 07D4:0000:0027:FA61 ()
 */
void emu_Unknown_07D4_0000()
{
	uint16 arg06;
	uint16 loc10;
	uint16 loc12;
	uint16 loc14;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	if (g_global->selectionType < 1 || g_global->selectionType > 4) return;

	arg06 = emu_get_memory16(emu_ss, emu_sp, 0);
	loc10 = 0;

	emu_push(arg06);
	emu_push(emu_cs); emu_push(0x0034); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	emu_sp += 2;

	loc12 = emu_ax;

	if (arg06 != 0) g_global->variable_3A12 = 1;

	emu_push(emu_cs); emu_push(0x0049); emu_cs = 0x06F7; f__06F7_0602_0018_CEB0();

	emu_push(emu_cs); emu_push(0x004E); emu_cs = 0x151A; f__151A_0196_0018_AF63();

	Unit_Sort();

	if (g_global->variable_3A12 == 0 && g_global->viewportPosition != g_global->minimapPosition) {
		uint16 loc0C = Tile_GetPackedX(g_global->viewportPosition);
		uint16 loc0E = Tile_GetPackedY(g_global->viewportPosition);
		int16 locsi = Tile_GetPackedX(g_global->minimapPosition) - loc0C;
		int16 locdi = Tile_GetPackedY(g_global->minimapPosition) - loc0E;

		int16 loc02 = 15 - abs(locsi);
		int16 loc04 = 10 - abs(locdi);

		int16 loc06, loc08;

		if (loc02 < 1 || loc04 < 1) g_global->variable_3A12 = 1;

		if (g_global->variable_3A12 == 0 && (loc02 != 15 || loc04 != 10)) {
			Map_SetSelectionObjectPosition(0xFFFF);
			loc10 = 1;

			emu_push(2);
			emu_push(emu_cs); emu_push(0x0112); emu_cs = 0x2642; f__2642_0002_005E_87F6();
			emu_sp += 2;

			emu_push(2);
			emu_push(0);
			emu_push(loc04 << 4);
			emu_push(loc02 << 1);
			emu_push(40 + ((locdi < 0) ? 0 : (locdi << 4)));
			emu_push((locsi < 0) ? 0 : (locsi << 1));
			emu_push(40 + ((locdi < 0) ? (-locdi << 4) : 0));
			emu_push((locsi < 0) ? (-locsi << 1) : 0);
			emu_push(emu_cs); emu_push(0x016F); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
			emu_sp += 16;
		} else {
			g_global->variable_3A12 = 1;
		}

		locsi = max(0, locsi);
		locdi = max(0, locdi);

		for (loc08 = 0; loc08 < 10; loc08++) {
			uint16 loc0A = (loc08 + loc0E) << 6;

			for (loc06 = 0; loc06 < 15; loc06++) {
				if (loc06 >= locsi && (locsi + loc02) > loc06 && loc08 >= locdi && (locdi + loc04) > loc08 && g_global->variable_3A12 == 0) continue;

				emu_push(1);
				emu_push(0);
				emu_push(loc06 + loc0C + loc0A);
				emu_push(emu_cs); emu_push(0x01E1); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0000_0011_95D0();
				emu_sp += 6;
			}
		}
	}

	if (loc10 != 0) {
		Map_SetSelectionObjectPosition(0xFFFF);

		for (loc14 = 0; loc14 < 14; loc14++) {
			uint16 v = g_global->minimapPosition + loc14 + 384;

			g_global->variable_8FE5[v >> 3] |= 1 << (v & 7);
			g_global->variable_8DE5[v >> 3] |= 1 << (v & 7);

			g_global->variable_39E2++;
		}
	}

	g_global->minimapPosition = g_global->viewportPosition;
	g_global->variable_3A00 = g_global->selectionPosition;

	if (g_global->variable_37BA != 0 && g_global->variable_3346 < g_global->variable_76AC) {
		g_global->variable_37BA--;
		g_global->variable_3346 = g_global->variable_76AC + 60;

		for (loc14 = 0; loc14 < 14; loc14++) {
			emu_push(1);
			emu_push(0);
			emu_push(g_global->viewportPosition + loc14 + 384);
			emu_push(emu_cs); emu_push(0x02A8); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0000_0011_95D0();
			emu_sp += 6;
		}
	}

	emu_push(arg06);
	emu_push(loc10);
	emu_push(g_global->variable_3A12);
	emu_push(emu_cs); emu_push(0x02C2); emu_cs = 0x07D4; f__07D4_034D_001F_FF64();
	emu_sp += 6;

	g_global->variable_3A12 = 0;

	emu_push(loc12);
	emu_push(emu_cs); emu_push(0x02D4); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	emu_sp += 2;

	Map_SetSelectionObjectPosition(g_global->variable_3A00);
	Map_UpdateMinimapPosition(g_global->minimapPosition, false);

	emu_push(emu_cs); emu_push(0x02F2); emu_cs = 0x2642; f__2642_0069_0008_D517();
}
