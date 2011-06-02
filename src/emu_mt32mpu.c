/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "mt32mpu.h"

/**
 * Emulator wrapper around MPU_Reset()
 *
 * @name emu_MPU_Reset
 * @implements AB01:050D:0013:8F78 ()
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
 * @implements AB01:0543:0013:0ECE ()
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
 * @implements AB01:0499:0014:F091 ()
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
 * @implements AB01:1CEE:0015:5BCF ()
 */
void emu_MPU_Interrupt()
{
	MPU_Interrupt();

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
}

/**
 * Emulator wrapper around MPU_Init()
 *
 * @name emu_MPU_Init
 * @implements AB01:1FA8:0072:8B95 ()
 */
void emu_MPU_Init()
{
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	MPU_Init();
}

/**
 * Emulator wrapper around MPU_Uninit()
 *
 * @name emu_MPU_Uninit
 * @implements AB01:2103:0040:93D2 ()
 */
void emu_MPU_Uninit()
{
	csip32 csip;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	/* First arg was not for us so we skipped it. */
	csip = emu_get_csip32(emu_ss, emu_sp, 0x2);

	MPU_Uninit(csip);
}

/**
 * Emulator wrapper around MPU_ClearData()
 *
 * @name emu_MPU_ClearData
 * @implements AB01:2336:002C:4FDC ()
 */
void emu_MPU_ClearData()
{
	uint16 index;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	/* First arg was not for us so we skipped it. */
	index = emu_get_memory16(emu_ss, emu_sp, 0x2);

	MPU_ClearData(index);
}

/**
 * Emulator wrapper around MPU_GetInfo()
 *
 * @name emu_MPU_GetInfo
 * @implements AB01:0C96:0019:A7D9 ()
 */
void emu_MPU_GetInfo()
{
	csip32 info_csip;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	info_csip = emu_Global_GetCSIP(MPU_GetInfo());

	emu_dx = info_csip.s.cs;
	emu_ax = info_csip.s.ip;
}
