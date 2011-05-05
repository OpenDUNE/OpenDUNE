/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "driver.h"
#include "global.h"

/**
 * Emulator wrapper around Driver_Music_FadeOut()
 *
 * @name emu_Driver_Music_FadeOut
 * @implements 1DD7:0B53:0025:36F7 ()
 */
void emu_Driver_Music_FadeOut()
{
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	Driver_Music_FadeOut();
}

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

/**
 * Emulator wrapper around Drivers_CustomTimer_OriginalInterrupt()
 *
 * @name emu_Drivers_CustomTimer_OriginalInterrupt
 * @implements 2756:0622:0006:823A ()
 */
void emu_Drivers_CustomTimer_OriginalInterrupt()
{
	Drivers_CustomTimer_OriginalInterrupt();

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
}
