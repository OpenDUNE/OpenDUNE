/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "house.h"

/**
 * Emulator wrapper around House_AreAllied().
 *
 * @name emu_House_AreAllied
 * @implements 1423:0F34:0017:464D ()
 */
void emu_House_AreAllied()
{
	uint8 houseID1, houseID2;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	houseID1 = (uint8)emu_get_memory16(emu_ss, emu_sp, 0x0);
	houseID2 = (uint8)emu_get_memory16(emu_ss, emu_sp, 0x2);

	emu_ax = House_AreAllied(houseID1, houseID2) ? 1 : 0;
}

/**
 * Emulator wrapper around House_UpdateCreditsStorage().
 *
 * @name emu_House_UpdateCreditsStorage
 * @implements 1423:0DC3:0029:D1E2 ()
 */
void emu_House_UpdateCreditsStorage()
{
	uint8 houseID;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	houseID = (uint8)emu_get_memory16(emu_ss, emu_sp, 0x0);

	House_UpdateCreditsStorage(houseID);
}
