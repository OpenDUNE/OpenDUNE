/* $Id$ */

#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "unknown.h"

/**
 * C-ified function of f__2618_0008_001B_FAA6()
 *
 * @name emu_Unknown_2618_0008
 * @implements 2618:0008:001B:FAA6 ()
 * @implements 2618:0023:0018:6D26
 * @implements 2618:003B:0004:893F
 */
void emu_Unknown_2618_0008()
{
	uint16 bit;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	bit = emu_get_memory16(emu_ss, emu_sp, 0x0);

	/* Return value. */
	emu_ax = 0;
	if ((g_global->variable_76B8 & (1 << bit)) != 0) emu_ax = 1;

	bit--;
	g_global->variable_76B8 |= (1 << bit);
}

/**
 * C-ified function of f__2618_003F_001B_FAA6()
 *
 * @name emu_Unknown_2618_003F
 * @implements 2618:003F:001B:FAA6 ()
 * @implements 2618:005A:001A:52A4
 * @implements 2618:0074:0004:893F
 */
void emu_Unknown_2618_003F()
{
	uint16 bit;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	bit = emu_get_memory16(emu_ss, emu_sp, 0x0);

	/* Return value. */
	emu_ax = 0;
	if ((g_global->variable_76B8 & (1 << bit)) != 0) emu_ax = 1;

	bit--;
	g_global->variable_76B8 &= ~(1 << bit);
}
