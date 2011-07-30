/* $Id$ */

/** @file src/interrupt.c Interrupt routines. */

#include <stdio.h>
#include "types.h"
#include "libemu.h"

#include "interrupt.h"

/**
 * Timer Interrupt.
 *
 * @name Interrupt_Timer
 * @implements 0070:0040:0005:E17B ()
 */
void Interrupt_Timer()
{
	emu_syscall(0x8);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * User Clock Interrupt.
 *
 * @name Interrupt_User_Clock
 * @implements 0070:00E0:0005:E3FB ()
 */
void Interrupt_User_Clock()
{
	emu_syscall(0x1C);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}
