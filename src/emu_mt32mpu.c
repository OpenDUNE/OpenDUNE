/* $Id$ */

/** @file src/emu_mt32mpu.c Emulated MPU routines. */

#include <assert.h>
#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "mt32mpu.h"

/**
 * Emulator wrapper around MPU_Send()
 *
 * @name emu_MPU_Send
 * @implements AB01:08CE:005F:AC14 ()
 */
void emu_MPU_Send()
{
	uint8 status;
	uint8 data1;
	uint8 data2;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	status = emu_get_memory8(emu_ss, emu_sp, 0x0);
	data1  = emu_get_memory8(emu_ss, emu_sp, 0x2);
	data2  = emu_get_memory8(emu_ss, emu_sp, 0x4);

	MPU_Send(status, data1, data2);

	return;
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
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	MPU_Uninit();
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
