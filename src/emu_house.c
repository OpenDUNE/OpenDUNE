/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "house.h"
#include "pool/house.h"

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

/**
 * Emulator wrapper around House_CalculatePowerAndCredit().
 *
 * @name emu_House_CalculatePowerAndCredit
 * @implements 0C3A:1F70:0010:8DB3 ()
 */
void emu_House_CalculatePowerAndCredit()
{
	uint8 houseID;
	House *h;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	houseID = (uint8)emu_get_memory16(emu_ss, emu_sp, 0x0);

	if (houseID >= HOUSE_MAX) return;
	h = House_Get_ByIndex(houseID);

	House_CalculatePowerAndCredit(h);
}
