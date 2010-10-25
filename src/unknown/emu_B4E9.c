/* $Id$ */

#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "unknown.h"
#include "../tools.h"

/**
 * C-ified function of f_ _B4E9_0000_0013_DC68()
 *
 * @name emu_Unknown_B4E9_0000
 * @implements B4E9:0000:0013:DC68 ()
 */
void emu_Unknown_B4E9_0000()
{
	bool set;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	set = emu_get_memory16(emu_ss, emu_sp, 0x0) != 0;

	emu_ax = Tools_Var76B8_Set(2, set) ? 1 : 0;
}
