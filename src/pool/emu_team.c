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
