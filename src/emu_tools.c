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
 * 32bits right shift.
 *
 * @name emu_Tools_Shrd
 * @implements 01F7:05AF:0015:0AD5 ()
 */
void emu_Tools_Shrd()
{
	uint32 val;

	/* Pop the return CS:IP */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	val = ((emu_dx << 16) | emu_ax) >> emu_cl;
	emu_ax = val & 0xFFFF;
	emu_dx = (val >> 16) & 0xFFFF;
}

/**
 * Emulator wrapper around Tools_Index_GetType().
 *
 * @name emu_Tools_Index_GetType
 * @implements 167E:0088:001A:60ED ()
 */
void emu_Tools_Index_GetType()
{
	uint16 encoded;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	encoded = emu_get_memory16(emu_ss, emu_sp, 0x0);

	emu_ax = Tools_Index_GetType(encoded);
}

/**
 * Emulator wrapper around Tools_Index_Decode().
 *
 * @name emu_Tools_Index_Decode
 * @implements 167E:00B7:0034:F3DA ()
 */
void emu_Tools_Index_Decode()
{
	uint16 encoded;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	encoded = emu_get_memory16(emu_ss, emu_sp, 0x0);

	emu_ax = Tools_Index_Decode(encoded);
}

/**
 * Emulator wrapper around Tools_Index_Encode().
 *
 * @name emu_Tools_Index_Encode
 * @implements 167E:00F3:001E:8CB3 ()
 */
void emu_Tools_Index_Encode()
{
	uint16 index;
	uint16 type;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	index = emu_get_memory16(emu_ss, emu_sp, 0x0);
	type  = emu_get_memory16(emu_ss, emu_sp, 0x2);

	emu_ax = Tools_Index_Encode(index, type);
}

/**
 * Emulator wrapper around Tools_Index_IsValid().
 *
 * @name emu_Tools_Index_IsValid
 * @implements 167E:0005:0013:AF0C ()
 */
void emu_Tools_Index_IsValid()
{
	uint16 encoded;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	encoded = emu_get_memory16(emu_ss, emu_sp, 0x0);

	emu_ax = Tools_Index_IsValid(encoded) ? 1 : 0;
}

/**
 * Emulator wrapper around Tools_Index_GetPackedTile().
 *
 * @name emu_Tools_Index_GetPackedTile
 * @implements 167E:0162:000D:A6D2 ()
 */
void emu_Tools_Index_GetPackedTile()
{
	uint16 encoded;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	encoded = emu_get_memory16(emu_ss, emu_sp, 0x0);

	emu_ax = Tools_Index_GetPackedTile(encoded);
}

/**
 * Emulator wrapper around Tools_Index_GetTile().
 *
 * @name emu_Tools_Index_GetTile
 * @implements 167E:01BB:0010:85F6 ()
 */
void emu_Tools_Index_GetTile()
{
	uint16 encoded;
	tile32 tile;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	encoded = emu_get_memory16(emu_ss, emu_sp, 0x0);

	tile = Tools_Index_GetTile(encoded);
	emu_ax = tile.s.x;
	emu_dx = tile.s.y;
}

/**
 * Emulator wrapper around Tools_Index_GetUnit().
 *
 * @name emu_Tools_Index_GetUnit
 * @implements 167E:0284:000C:4C88 ()
 */
void emu_Tools_Index_GetUnit()
{
	uint16 encoded;
	Unit *u;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	encoded = emu_get_memory16(emu_ss, emu_sp, 0x0);

	u = Tools_Index_GetUnit(encoded);

	emu_ax = 0x0;
	emu_dx = 0x0;

	if (u == NULL) return;
	emu_dx = g_global->unitStartPos.s.cs;
	emu_ax = g_global->unitStartPos.s.ip + u->o.index * sizeof(Unit);
}

/**
 * Emulator wrapper around Tools_Index_GetStructure().
 *
 * @name emu_Tools_Index_GetStructure
 * @implements 167E:02AE:000C:CC85 ()
 */
void emu_Tools_Index_GetStructure()
{
	uint16 encoded;
	Structure *s;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	encoded = emu_get_memory16(emu_ss, emu_sp, 0x0);

	s = Tools_Index_GetStructure(encoded);

	emu_ax = 0x0;
	emu_dx = 0x0;

	if (s == NULL) return;
	emu_dx = g_global->structureStartPos.s.cs;
	emu_ax = g_global->structureStartPos.s.ip + s->o.index * sizeof(Structure);
}

/**
 * Emulator wrapper around Tools_Index_GetObject()
 *
 * @name emu_Tools_Index_GetObject
 * @implements 167E:02D8:000C:4C9F ()
 */
void emu_Tools_Index_GetObject()
{
	uint16 encoded;
	Object *o;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	encoded = emu_get_memory16(emu_ss, emu_sp, 0x0);

	o = Tools_Index_GetObject(encoded);

	emu_ax = 0x0;
	emu_dx = 0x0;

	if (o == NULL) return;

	if (Tools_Index_GetType(encoded) == IT_UNIT) {
		emu_dx = g_global->unitStartPos.s.cs;
		emu_ax = g_global->unitStartPos.s.ip + o->index * sizeof(Unit);
	} else {
		emu_dx = g_global->structureStartPos.s.cs;
		emu_ax = g_global->structureStartPos.s.ip + o->index * sizeof(Structure);
	}
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
 * Emulator wrapper around Tools_GetSmallestIP()
 *
 * @name emu_Tools_GetSmallestIP2
 * @implements 2B0E:00F2:0016:F9EC ()
 */
void emu_Tools_GetSmallestIP2()
{
	csip32 csip;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	csip.s.cs = emu_dx;
	csip.s.ip = emu_ax;

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
 * Emulator wrapper around Tools_Random_256()
 *
 * @name emu_Tools_Random_256
 * @implements 2BB4:0004:0027:DC1D ()
 */
void emu_Tools_Random_256()
{
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	emu_ax = Tools_Random_256();
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

	string = (char *)emu_get_memorycsip(emu_get_csip32(emu_ss, emu_ss, 0x0));
	printf("%s\n", string);
}
