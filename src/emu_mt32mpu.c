/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "mt32mpu.h"

/**
 * Emulator wrapper around MPU_Reset()
 *
 * @name emu_MPU_Reset
 * @implements AB00:050D:0013:8F78 ()
 */
void emu_MPU_Reset()
{
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	emu_ax = MPU_Reset() ? 1 : 0;
}

/**
 * Emulator wrapper around MPU_UART()
 *
 * @name emu_MPU_UART
 * @implements AB00:0543:0013:0ECE ()
 */
void emu_MPU_UART()
{
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	MPU_UART();
}

/**
 * Emulator wrapper around MPU_WriteData()
 *
 * @name emu_MPU_WriteData
 * @implements AB00:0499:0014:F091 ()
 */
void emu_MPU_WriteData()
{
	uint8 data;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	data = emu_get_memory8(emu_ss, emu_sp, 0x0);

	MPU_WriteData(data);
}

/**
 * Emulator wrapper around MPU_Interrupt()
 *
 * @name emu_MPU_Interrupt
 * @implements AB00:1CEE:0015:5BCF ()
 */
void emu_MPU_Interrupt()
{
	MPU_Interrupt();

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
}
