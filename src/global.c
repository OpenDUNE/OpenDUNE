/* $Id$ */

/** @file src/global.c Global data routines. */

#include <assert.h>
#include <stdio.h>
#include "types.h"
#include "libemu.h"

#include "global.h"

GlobalData *g_global = NULL;

/**
 * Initialize the global system.
 *
 * @init System_Init_Global
 */
void System_Init_Global()
{
	g_global = (GlobalData *)&emu_get_memory8(0x353F, 0x0, 0x0);
}

/**
 * Get a piece of memory by csip.
 */
uint8 *emu_get_memorycsip(csip32 csip)
{
	if (csip.csip == 0) return NULL;
	assert(csip.s.cs < 0xF000);
	return &emu_get_memory8(csip.s.cs, csip.s.ip, 0x0);
}
