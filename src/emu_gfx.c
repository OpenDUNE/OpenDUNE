/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "gfx.h"

/**
 * Emulator wrapper around GFX_GetScreenSegment().
 *
 * @name emu_GFX_Screen_GetSegmentActive
 * @implements 22A6:0DF8:0022:5FD5 ()
 */
void emu_GFX_Screen_GetSegmentActive()
{
	/* Return from this function */
	emu_pop(&emu_ip);

	emu_ax = GFX_Screen_GetSegmentActive();
}
