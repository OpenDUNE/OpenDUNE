#include <assert.h>
#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "global.h"

GlobalData *g_global = NULL;

/**
 * Initialize the global system.
 *
 * @init system_Init_Global
 */
void System_Init_Global()
{
	g_global = (GlobalData *)&emu_get_memory8(0x353F, 0x0, 0x0);
}

/**
 * Given a pointer inside the 16bit memory and a segment, find the IP which
 *  belongs to it.
 */
uint16 emu_Global_GetIP(void *ptr, uint16 segment)
{
	return (size_t)ptr - (size_t)emu_memory - (segment << 4);
}
