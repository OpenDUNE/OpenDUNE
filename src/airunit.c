/* $Id$ */

#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "pool/pool.h"
#include "pool/airunit.h"
#include "pool/house.h"
#include "airunit.h"
#include "house.h"

extern void f__2BB4_0004_0027_DC1D();

/**
 * Loop over all airunits, performing various of tasks.
 */
void GameLoop_AirUnit()
{
	PoolFindStruct find;
	bool tick = false;

	if (g_global->variable_6164 <= g_global->tickGlobal) {
		tick = true;
		emu_push(emu_cs); emu_push(0x002C); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
		emu_ax &= 7;
		g_global->variable_6164 = g_global->tickGlobal + emu_ax + 5;
	}

	if (!tick) return;

	find.houseID = 0xFFFF;
	find.index   = 0xFFFF;
	find.type    = 0xFFFF;

	while (true) {
		AirUnit *a;
		House *h;

		a = AirUnit_Find(&find);
		if (a == NULL) break;

		h = House_Get_ByIndex(a->houseID);

		/* XXX -- Temporary, to keep all the emu_calls workable for now */
		g_global->airUnitCurrent       = g_global->airUnitStartPos;
		g_global->airUnitCurrent.s.ip += a->index * sizeof(AirUnit);
		g_global->houseCurrent         = g_global->houseStartPos;
		g_global->houseCurrent.s.ip   += h->index * sizeof(House);

		if ((h->flags & 0x0008) == 0) continue;

		if (a->scriptDelay != 0) {
			a->scriptDelay--;
			continue;
		}

		if (!Script_IsLoaded(&a->script)) continue;


		if (g_global->debugGame) {
			g_global->variable_37A4 = 0;
			g_global->variable_37A2++;

			if (a->script.stackPointer <= 15 && 15 - a->script.stackPointer > g_global->variable_37A8) {
				g_global->variable_37A8 = 15 - a->script.stackPointer;
			}
		}

		if (!Script_Run(&a->script)) {
			/* ENHANCEMENT -- Dune2 aborts all other airunits if one gives a script error. This doesn't seem correct */
			if (g_dune2_enhanced) continue;
			break;
		}
	}
}
