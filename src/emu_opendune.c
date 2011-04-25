/* $Id$ */

#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "opendune.h"

/**
 * Emulator wrapper around Main().
 *
 * @name emu_Main
 * @implements B480:0000:0018:A09B ()
 */
void emu_Main()
{
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	Main();
}

/**
 * Emulator wrapper around PrepareEnd().
 *
 * @name emu_PrepareEnd
 * @implements B500:0000:0008:FE1F ()
 */
void emu_PrepareEnd()
{
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	PrepareEnd();
}
