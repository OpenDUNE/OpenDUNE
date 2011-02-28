/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "../unit.h"
#include "pool.h"
#include "unit.h"

/**
 * Emulator wrapper around Unit_Recount().
 *
 * @name emu_Unit_Recount
 * @implements 0FE4:018D:0012:A3C7 ()
 */
void emu_Unit_Recount()
{
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	Unit_Recount();
}

