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
