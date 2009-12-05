/* $Id$ */

#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "pool/pool.h"
#include "pool/team.h"
#include "pool/house.h"
#include "team.h"
#include "house.h"

extern void emu_Tools_Random_256();

/**
 * Loop over all teams, performing various of tasks.
 */
void GameLoop_Team()
{
	PoolFindStruct find;
	bool tick = false;

	if (g_global->variable_6164 <= g_global->tickGlobal) {
		tick = true;
		emu_push(emu_cs); emu_push(0x002C); emu_cs = 0x2BB4; emu_Tools_Random_256();
		emu_ax &= 7;
		g_global->variable_6164 = g_global->tickGlobal + emu_ax + 5;
	}

	if (!tick) return;

	find.houseID = 0xFFFF;
	find.index   = 0xFFFF;
	find.type    = 0xFFFF;

	while (true) {
		Team *t;
		House *h;

		t = Team_Find(&find);
		if (t == NULL) break;

		h = House_Get_ByIndex(t->houseID);

		/* XXX -- Temporary, to keep all the emu_calls workable for now */
		g_global->teamCurrent        = g_global->teamStartPos;
		g_global->teamCurrent.s.ip  += t->index * sizeof(Team);
		g_global->houseCurrent       = g_global->houseStartPos;
		g_global->houseCurrent.s.ip += h->index * sizeof(House);

		if ((h->flags & 0x0008) == 0) continue;

		if (t->scriptDelay != 0) {
			t->scriptDelay--;
			continue;
		}

		if (!Script_IsLoaded(&t->script)) continue;


		if (g_global->debugGame) {
			g_global->variable_37A4 = 0;
			g_global->variable_37A2++;

			if (t->script.stackPointer <= 15 && 15 - t->script.stackPointer > g_global->variable_37A8) {
				g_global->variable_37A8 = 15 - t->script.stackPointer;
			}
		}

		if (!Script_Run(&t->script)) {
			/* ENHANCEMENT -- Dune2 aborts all other teams if one gives a script error. This doesn't seem correct */
			if (g_dune2_enhanced) continue;
			break;
		}
	}
}
