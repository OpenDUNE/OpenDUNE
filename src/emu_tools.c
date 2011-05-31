/* $Id$ */

#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "structure.h"
#include "tools.h"
#include "unit.h"

/**
 * 32bits left shift.
 *
 * @name emu_Tools_Shld
 * @implements 01F7:058E:0015:CED2 ()
 */
void emu_Tools_Shld()
{
	uint32 val;

	/* Pop the return CS:IP */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	val = ((emu_dx << 16) | emu_ax) << emu_cl;
	emu_ax = val & 0xFFFF;
	emu_dx = (val >> 16) & 0xFFFF;
}

/**
 * 32 bits signed right shift.
 */
void emu_Tools_Shrd()
{
	uint32 val;

	/* Pop the return CS:IP */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	val = ((int32)((emu_dx << 16) | emu_ax)) >> emu_cl;
	emu_ax = val & 0xFFFF;
	emu_dx = (val >> 16) & 0xFFFF;
}

/**
 * 32 bits unsigned right shift.
 *
 * @name emu_Tools_UShrd
 * @implements 01F7:05CF:0015:0AD7 ()
 */
void emu_Tools_UShrd()
{
	uint32 val;

	/* Pop the return CS:IP */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	val = ((uint32)((emu_dx << 16) | emu_ax)) >> emu_cl;
	emu_ax = val & 0xFFFF;
	emu_dx = (val >> 16) & 0xFFFF;
}

/**
 * Emulator wrapper around Tools_GetSmallestIP()
 *
 * @name emu_Tools_GetSmallestIP
 * @implements 2B0E:00D0:0022:EC76 ()
 */
void emu_Tools_GetSmallestIP()
{
	csip32 csip;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	csip = emu_get_csip32(emu_ss, emu_sp, 0);

	csip = Tools_GetSmallestIP(csip);

	emu_dx = csip.s.cs;
	emu_ax = csip.s.ip;
}

/**
 * Print a string to the stdout.
 * @note Please replace this function as soon as you find it. It is silly for
 *  modern applications.
 *
 * @name emu_Tools_PrintString
 * @implements 28E4:0002:0017:0B15 ()
 */
void emu_Tools_PrintString()
{
	char *string;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	string = (char *)emu_get_memorycsip(emu_get_csip32(emu_ss, emu_sp, 0x0));
	printf("%s\n", string);
}
