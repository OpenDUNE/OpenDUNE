/* $Id$ */

/** @file src/unknown/emu_2903.c Unknown converted routines from segment 2903. */

#include <stdio.h>
#include "types.h"
#include "../global.h"
#include "unknown.h"
#include "../codec/format80.h"

/**
 * C-ified function of f__2903_090A_0019_12A9()
 *
 * @name emu_Unknown_2903_090A
 * @implements 2903:090A:0019:4354 ()
 */
void Unknown_2903_090A(csip32 arg06, uint16 arg0A)
{
	g_global->variable_6F18 = arg06;
	g_global->variable_6F1C = arg0A;
}
