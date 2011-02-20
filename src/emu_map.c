/* $Id$ */

#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "map.h"

/**
 * Emulator wrapper around Map_SetSelection().
 *
 * @name emu_Map_SetSelection
 * @implements 0F78:02D5:0014:4ABC ()
 */
void emu_Map_SetSelection()
{
	uint16 packed;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	packed = emu_get_memory16(emu_ss, emu_sp, 0x0);

	Map_SetSelection(packed);
}

/**
 * Emulator wrapper around Map_SetSelectionSize().
 *
 * @name emu_Map_SetSelectionSize
 * @implements 0F78:0285:001C:04DB ()
 */
void emu_Map_SetSelectionSize()
{
	uint16 layout;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	layout = emu_get_memory16(emu_ss, emu_sp, 0x0);

	emu_ax = Map_SetSelectionSize(layout);
}

/**
 * Emulator wrapper around Map_IsPositionUnveiled().
 *
 * @name emu_Map_IsPositionUnveiled
 * @implements B4CD:1BC4:0013:1AB3 ()
 */
void emu_Map_IsPositionUnveiled()
{
	uint16 position;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	position = emu_get_memory16(emu_ss, emu_sp, 0x0);

	emu_ax = Map_IsPositionUnveiled(position) ? 1 : 0;
}

/**
 * Emulator wrapper around Map_Update()
 *
 * @name emu_Map_Update
 * @implements B4CD:0000:0011:95D0 ()
 */
void emu_Map_Update()
{
	uint16 packed;
	uint16 type;
	uint16 ignoreInvisible;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	packed          = emu_get_memory16(emu_ss, emu_sp, 0x0);
	type            = emu_get_memory16(emu_ss, emu_sp, 0x2);
	ignoreInvisible = emu_get_memory16(emu_ss, emu_sp, 0x4);

	Map_Update(packed, type, (ignoreInvisible != 0) ? true : false);
}
