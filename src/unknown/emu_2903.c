/* $Id$ */

#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "unknown.h"
#include "../codec/format80.h"

/**
 * C-ified function of f__2903_00CA_0015_756E()
 *
 * @name emu_Unknown_2903_00CA
 * @implements 2903:00CA:0015:756E ()
 */
void emu_Unknown_2903_00CA()
{
	csip32 sprite_csip;
	uint8 *sprite;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	sprite_csip = emu_get_csip32(emu_ss, emu_sp, 0x0);

	emu_ax = 0;

	if (sprite_csip.csip == 0x0) return;

	sprite = emu_get_memorycsip(sprite_csip);

	emu_ax = *(uint16 *)sprite;
}

/**
 * C-ified function of f__2903_090A_0019_12A9()
 *
 * @name emu_Unknown_2903_090A
 * @implements 2903:090A:0019:4354 ()
 */
void Unknown_2903_090A(csip32 arg06, uint16 arg0A)
{
	g_global->variable_6F18 = arg06;
	g_global->variable_6F1C = arg0A;
}
