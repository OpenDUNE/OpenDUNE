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
 * Keyboard Interrupt.
 *
 * @name Interrupt_Keyboard
 * @implements 0070:0048:0005:E15B ()
 */
void Interrupt_Keyboard()
{
	emu_syscall(0x9);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Video Interrupt.
 *
 * @name Interrupt_Video
 * @implements 0070:0080:0005:E27B ()
 */
void Interrupt_Video()
{
	emu_syscall(0x10);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * System Interrupt.
 *
 * @name Interrupt_System
 * @implements 0070:00A8:0005:E2DB ()
 */
void Interrupt_System()
{
	emu_syscall(0x15);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Clock Interrupt.
 *
 * @name Interrupt_Clock
 * @implements 0070:00D0:0005:E33B ()
 */
void Interrupt_Clock()
{
	emu_syscall(0x1A);

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

/**
 * DOS Interrupt.
 *
 * @name Interrupt_DOS
 * @implements 0070:0108:0005:E45B ()
 */
void Interrupt_DOS()
{
	emu_syscall(0x21);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * DOS Multiplex Interrupt.
 *
 * @name Interrupt_DOS_Multiplex
 * @implements 0070:0178:0005:E59B ()
 */
void Interrupt_DOS_Multiplex()
{
	emu_syscall(0x2F);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * Mouse Interrupt.
 *
 * @name Interrupt_Mouse
 * @implements 0070:0198:0005:E61B ()
 */
void Interrupt_Mouse()
{
	emu_syscall(0x33);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
	return;
}

/**
 * XMS Handler.
 *
 * @name Handler_XMS
 * @implements 0070:07D0:0002:C33A ()
 */
void Handler_XMS()
{
	emu_syscall(0xFB);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
