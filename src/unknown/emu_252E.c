/* $Id$ */

#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "unknown.h"

/**
 * C-ified function of f__252E_0001_0018_08B3().
 *
 * @name emu_Screen_GetSegment_ByIndex_1
 * @implements 252E:0001:0018:08B3 ()
 */
csip32 Screen_GetSegment_ByIndex_1(uint16 index)
{
	csip32 ret;

	index &= 0xF;

	ret.s.cs = g_global->variable_6C93[index >> 1][1];
	ret.s.ip = 0x0;

	return ret;
}

/**
 * C-ified function of f__252E_001B_0018_EA2C().
 *
 * @name emu_Screen_GetSegment_ByIndex_2
 * @implements 252E:001B:0018:EA2C ()
 */
csip32 Screen_GetSegment_ByIndex_2(uint16 index)
{
	csip32 ret;

	index &= 0xF;

	ret.s.cs = g_global->variable_6C93[index >> 1][0];
	ret.s.ip = 0x0;

	return ret;
}
