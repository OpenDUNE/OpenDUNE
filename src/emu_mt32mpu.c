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
 * Emulator wrapper around MPU_SetData()
 *
 * @name emu_MPU_SetData
 * @implements AB01:21F0:0024:C4F7 ()
 */
void emu_MPU_SetData()
{
	csip32 file;
	uint16 index;
	csip32 data;
	csip32 variable_0012;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	/* First arg was not for us so we skipped it. */
	file           = emu_get_csip32(emu_ss, emu_sp, 0x2);
	index          = emu_get_memory16(emu_ss, emu_sp, 0x6);
	data           = emu_get_csip32(emu_ss, emu_sp, 0x8);
	variable_0012  = emu_get_csip32(emu_ss, emu_sp, 0xC);

	emu_ax = MPU_SetData(file, index, data, variable_0012);
}

/**
 * Emulator wrapper around MPU_Play()
 *
 * @name emu_MPU_Play
 * @implements AB01:237A:002C:07AF ()
 */
void emu_MPU_Play()
{
	csip32 ret;
	uint16 index;

	/* Pop the return CS:IP. */
	emu_pop(&ret.s.ip);
	emu_pop(&ret.s.cs);

	/* First arg was not for us so we skipped it. */
	index = emu_get_memory16(emu_ss, emu_sp, 0x2);

	MPU_Play(index);

	emu_cs = ret.s.cs;
	emu_ip = ret.s.ip;
}

/**
 * Emulator wrapper around MPU_Stop()
 *
 * @name emu_MPU_Stop
 * @implements AB01:240F:0029:C429 ()
 */
void emu_MPU_Stop()
{
	csip32 ret;
	uint16 index;

	/* Pop the return CS:IP. */
	emu_pop(&ret.s.ip);
	emu_pop(&ret.s.cs);

	/* First arg was not for us so we skipped it. */
	index = emu_get_memory16(emu_ss, emu_sp, 0x2);

	MPU_Stop(index);

	emu_cs = ret.s.cs;
	emu_ip = ret.s.ip;
}

/**
 * Emulator wrapper around MPU_GetDataSize()
 *
 * @name emu_MPU_GetDataSize
 * @implements AB01:2191:0012:DA45 ()
 */
void emu_MPU_GetDataSize()
{
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	emu_ax = MPU_GetDataSize();
}

/**
 * Emulator wrapper around MPU_GetUnknownSize()
 *
 * @name emu_MPU_GetUnknownSize
 * @implements AB01:0F02:0012:D841 ()
 */
void emu_MPU_GetUnknownSize()
{
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	emu_ax = MPU_GetUnknownSize();
}
