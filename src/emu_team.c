/* $Id$ */

#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "pool/unit.h"
#include "team.h"

/**
 * Emulator wrapper around GameLoop_Team().
 *
 * @name emu_GameLoop_Team
 * @implements 16C5:0009:0023:21B3 ()
 */
void emu_GameLoop_Team()
{
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	GameLoop_Team();
}
