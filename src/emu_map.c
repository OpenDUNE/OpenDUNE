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
 * Emulator wrapper around Map_UnveilTile().
 *
 * @name Map_UnveilTile
 * @implements B4CD:1269:0019:A3E5 ()
 */
void emu_Map_UnveilTile()
{
	uint16 packed;
	uint16 houseID;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	packed  = emu_get_memory16(emu_ss, emu_sp, 0x0);
	houseID = emu_get_memory16(emu_ss, emu_sp, 0x2);

	emu_ax = Map_UnveilTile(packed, (uint8)houseID) ? 1 : 0;
}
