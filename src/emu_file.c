/* $Id$ */

#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "file.h"

/**
 * Emulator wrapper around File_Read().
 *
 * @name emu_File_Read
 * @implements 1FB5:0AEC:001B:A5E4 ()
 */
void emu_File_Read()
{
	uint8 index;
	csip32 buffer;
	uint32 length;
	uint32 res;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	index  = (uint8)emu_get_memory16(emu_ss, emu_sp, 0x0);
	buffer =        emu_get_csip32  (emu_ss, emu_sp, 0x2);
	length =        emu_get_memory32(emu_ss, emu_sp, 0x6);

	res = File_Read(index, (void *)emu_get_memorycsip(buffer), length);

	emu_dx = res >> 16;
	emu_ax = res & 0xFFFF;
}

/**
 * Emulator wrapper around File_Write().
 *
 * @name emu_File_Write
 * @implements 1FB5:0E9C:001B:37D1 ()
 */
void emu_File_Write()
{
	uint8 index;
	csip32 buffer;
	uint32 length;
	uint32 res;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	index  = (uint8)emu_get_memory16(emu_ss, emu_sp, 0x0);
	buffer =        emu_get_csip32  (emu_ss, emu_sp, 0x2);
	length =        emu_get_memory32(emu_ss, emu_sp, 0x6);

	res = File_Write(index, (void *)emu_get_memorycsip(buffer), length);

	emu_dx = res >> 16;
	emu_ax = res & 0xFFFF;
}
