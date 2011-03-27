/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "unknown.h"

/**
 * Set global var 6C91, and returns the previous value.
 * @param newval New value for the global variable 6C91.
 * @return Previous value of the global variable 6C91.
 */
uint16 Unknown_Set_Global_6C91(uint16 newval)
{
	uint16 oldval = g_global->variable_6C91;
	g_global->variable_6C91 = newval;
	return oldval;
}

/**
 * C-ified function of f__2598_0000_0017_EB80()
 *
 * @name emu_Unknown_Set_Global_6C91()
 * @implements 2598:0000:0017:EB80 ()
 * @implements 2598:0017:0004:893F
 */
void emu_Unknown_Set_Global_6C91()
{
	uint16 newval;

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	newval = emu_get_memory16(emu_ss, emu_sp, 0x0);
	emu_ax = Unknown_Set_Global_6C91(newval);
}
