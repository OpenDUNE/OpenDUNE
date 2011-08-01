/* $Id$ */

/** @file src/emu_mt32mpu.c Emulated MPU routines. */

#include <assert.h>
#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "mt32mpu.h"

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
