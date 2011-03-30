/* $Id$ */

#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "structure.h"
#include "tools.h"
#include "unit.h"

extern void emu_Tools_Free();

/**
 * Call Tools_Free() if the pointer is valid.
 *
 * @name emu_Tools_Free_IfNotNull()
 * @implements 1DD7:0213:0016:41ED ()
 */
void emu_Tools_Free_IfNotNull()
{
	csip32 ptr;

	/* Pop the return CS:IP */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	ptr = emu_get_csip32(emu_ss, emu_sp, 0);
	if (ptr.csip == 0x0) return;

	emu_push(ptr.s.cs); emu_push(ptr.s.ip);
	emu_push(emu_cs); emu_push(0x0229); emu_cs = 0x23E1; emu_Tools_Free();
	emu_sp += 4;
}

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
 * Emulator wrapper around Tools_Memmove()
 *
 * @name emu_Tools_Memmove
 * @implements 2B0E:0006:0049:87B1 ()
 */
void emu_Tools_Memmove()
{
	csip32 src;
	csip32 dst;
	uint32 count;
	csip32 ret;

	/* Pop the return CS:IP. */
	emu_pop(&ret.s.ip);
	emu_pop(&ret.s.cs);

	src   = emu_get_csip32(emu_ss, emu_sp, 0);
	dst   = emu_get_csip32(emu_ss, emu_sp, 4);
	count = emu_get_memory32(emu_ss, emu_sp, 8);

	Tools_Memmove(src, dst, count);

	emu_cs = ret.s.cs;
	emu_ip = ret.s.ip;
}

/**
 * Emulator wrapper around Tools_RandomRange()
 *
 * @name emu_Tools_RandomRange
 * @implements 2537:000C:001C:86CB ()
 */
void emu_Tools_RandomRange()
{
	uint16 min;
	uint16 max;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	min = emu_get_memory16(emu_ss, emu_sp, 0);
	max = emu_get_memory16(emu_ss, emu_sp, 2);

	emu_ax = Tools_RandomRange(min, max);
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
