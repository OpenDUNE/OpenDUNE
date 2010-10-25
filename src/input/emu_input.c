/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "input.h"

/**
 * Emulator wrapper around Input_Flags_ClearBits()
 *
 * @name emu_Input_Flags_ClearBits
 * @implements 29E8:04EB:0011:9CC8 ()
 */
void emu_Input_Flags_ClearBits()
{
	uint16 bits;

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	bits = emu_get_memory16(emu_ss, emu_sp, 0x0);

	emu_ax = Input_Flags_ClearBits(bits);
}

/**
 * Emulator wrapper around Input_Flags_SetBits()
 *
 * @name emu_Input_Flags_SetBits
 * @implements 29E8:04AF:003C:ECA0 ()
 */
void emu_Input_Flags_SetBits()
{
	uint16 bits;

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	bits = emu_get_memory16(emu_ss, emu_sp, 0x0);

	emu_ax = Input_Flags_SetBits(bits);
}
