/* $Id$ */

/** @file src/emu_driver.c Emulated driver wrapper routines. */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "driver.h"

/**
 * Emulator wrapper around Drivers_CustomTimer_Interrupt()
 *
 * @name emu_Drivers_CustomTimer_Interrupt
 * @implements 2756:050F:000B:0871 ()
 */
void emu_Drivers_CustomTimer_Interrupt()
{
	Drivers_CustomTimer_Interrupt();

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
}
