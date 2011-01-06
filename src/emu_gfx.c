/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "gfx.h"

/**
 * Emulator wrapper around Unknown_22A6_0DF8().
 *
 * @name emu_Unknown_22A6_0DF8
 * @implements 22A6:0DF8:0022:5FD5 ()
 */
void emu_Unknown_22A6_0DF8()
{
	emu_ax = Unknown_22A6_0DF8();

	/* Return from this function */
	emu_pop(&emu_ip);
}

/**
 * Emulator wrapper around Unknown_22A6_0E1A().
 *
 * @name f__22A6_0E1A_0008_F4AE
 * @implements 22A6:0E1A:0008:F4AE ()
 */
void emu_Unknown_22A6_0E1A()
{
	emu_ax = Unknown_22A6_0E1A(emu_ax);

	/* Return from this function */
	emu_pop(&emu_ip);
}
