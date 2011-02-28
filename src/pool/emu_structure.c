/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "../structure.h"
#include "pool.h"
#include "structure.h"

/**
 * Emulator wrapper around Structure_Recount().
 *
 * @name emu_Structure_Recount
 * @implements 1082:000F:0012:A3C7 ()
 */
void emu_Structure_Recount()
{
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	Structure_Recount();
}

