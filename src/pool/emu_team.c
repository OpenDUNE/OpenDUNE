/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "../team.h"
#include "pool.h"
#include "team.h"

/**
 * Emulator wrapper around Team_Init().
 *
 * @name emu_Team_Init
 * @implements 104B:005D:001C:39F6 ()
 */
void emu_Team_Init()
{
	csip32 aucsip;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	aucsip = emu_get_csip32(emu_ss, emu_sp, 0x0);

	Team_Init(aucsip);

	emu_dx = 0;
	emu_ax = sizeof(Team) * TEAM_INDEX_MAX;
}

/**
 * Emulator wrapper around Team_Recount().
 *
 * @name emu_Team_Recount
 * @implements 104B:0006:0011:631B ()
 */
void emu_Team_Recount()
{
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	Team_Recount();
}

/**
 * Get a Team from the memory by index.
 *
 * @name emu_Team_Get_ByIndex
 * @implements 104B:0354:0023:5A6D ()
 */
void emu_Team_Get_ByIndex()
{
	uint16 index;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	index = emu_get_memory16(emu_ss, emu_sp, 0x0);

	emu_ax = 0x0;
	emu_dx = 0x0;

	if (index >= TEAM_INDEX_MAX) return;
	emu_dx = g_global->teamStartPos.s.cs;
	emu_ax = g_global->teamStartPos.s.ip + index * sizeof(Team);
}

/**
 * Emulator wrapper around Team_Find(). It also initializes the
 *  PoolFindStruct, and uses a default struct in case none is given.
 *
 * @name emu_Team_FindFirst
 * @implements 104B:00C2:0030:20A6 ()
 */
void emu_Team_FindFirst()
{
	PoolFindStruct *find;
	Team *t;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	find = (PoolFindStruct *)&emu_get_memory8(emu_get_memory16(emu_ss, emu_sp, 0x2), emu_get_memory16(emu_ss, emu_sp, 0x0), 0x0);
	if (emu_get_memory16(emu_ss, emu_sp, 0x2) == 0x0 && emu_get_memory16(emu_ss, emu_sp, 0x0) == 0x0) {
		emu_get_memory16(emu_ss, emu_sp, 0x2) = 0x353F;
		emu_get_memory16(emu_ss, emu_sp, 0x0) = emu_Global_GetIP(g_global->teamFindStruct, 0x353F);
		find = (PoolFindStruct *)g_global->teamFindStruct;
	}

	find->houseID = emu_get_memory16(emu_ss, emu_sp, 0x4);
	find->type    = 0xFFFF;
	find->index   = 0xFFFF;

	t = Team_Find(find);

	emu_ax = 0x0;
	emu_dx = 0x0;

	if (t == NULL) return;
	emu_dx = g_global->teamStartPos.s.cs;
	emu_ax = g_global->teamStartPos.s.ip + t->index * sizeof(Team);
}

/**
 * Emulator wrapper around Team_Find(). It uses a default struct in case
 *  none is given.
 *
 * @name emu_Team_FindNext
 * @implements 104B:00F8:002E:3820 ()
 */
void emu_Team_FindNext()
{
	PoolFindStruct *find;
	Team *t;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	find = (PoolFindStruct *)&emu_get_memory8(emu_get_memory16(emu_ss, emu_sp, 0x2), emu_get_memory16(emu_ss, emu_sp, 0x0), 0x0);
	if (emu_get_memory16(emu_ss, emu_sp, 0x2) == 0x0 && emu_get_memory16(emu_ss, emu_sp, 0x0) == 0x0) {
		emu_get_memory16(emu_ss, emu_sp, 0x2) = 0x353F;
		emu_get_memory16(emu_ss, emu_sp, 0x0) = emu_Global_GetIP(g_global->teamFindStruct, 0x353F);
		find = (PoolFindStruct *)g_global->teamFindStruct;
	}

	t = Team_Find(find);

	emu_ax = 0x0;
	emu_dx = 0x0;

	if (t == NULL) return;
	emu_dx = g_global->teamStartPos.s.cs;
	emu_ax = g_global->teamStartPos.s.ip + t->index * sizeof(Team);
}
