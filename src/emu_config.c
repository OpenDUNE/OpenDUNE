/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "config.h"

/**
 * Emulator wrapper around GameOptions_Load()
 *
 * @name emu_GameOptions_Load
 * @implements B4F2:0000:000D:C9F0 ()
 */
void emu_GameOptions_Load()
{
	csip32 ret;

	/* Pop the return CS:IP. */
	emu_pop(&ret.s.ip);
	emu_pop(&ret.s.cs);

	emu_ax = GameOptions_Load() ? 1 : 0;

	emu_cs = ret.s.cs;
	emu_ip = ret.s.ip;
}

/**
 * Emulator wrapper around GameOptions_Save()
 *
 * @name emu_GameOptions_Save
 * @implements B4F2:0051:0012:A048 ()
 */
void emu_GameOptions_Save()
{
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	GameOptions_Save();
}
