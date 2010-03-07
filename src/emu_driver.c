/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "driver.h"
#include "global.h"

/**
 * Emulator wrapper around Drivers_GetFunctionCSIP()
 *
 * @name emu_Drivers_GetFunctionCSIP
 * @implements 2756:04BC:002C:80A5 ()
 */
void emu_Drivers_GetFunctionCSIP()
{
	csip32 csip;

	/* Pop the return IP. */
	emu_pop(&emu_ip);

	csip = Drivers_GetFunctionCSIP(emu_bx, emu_ax);

	emu_dx = csip.s.cs;
	emu_ax = csip.s.ip;
}

/**
 * Emulator wrapper around Drivers_CallFunction()
 *
 * @name emu_Drivers_CallFunction
 * @implements 2756:04F8:0009:907D ()
 */
void emu_Drivers_CallFunction()
{
	csip32 ret;
	uint16 driver;
	csip32 csip;

	/* Pop the return CS:IP. */
	emu_pop(&ret.s.ip);
	emu_pop(&ret.s.cs);

	driver = emu_get_memory16(emu_ss, emu_sp, 0);

	csip = Drivers_CallFunction(driver, emu_ax);

	emu_dx = csip.s.cs;
	emu_ax = csip.s.ip;

	emu_cs = ret.s.cs;
	emu_ip = ret.s.ip;
}

/**
 * Emulator wrapper around Drivers_Init()
 *
 * @name emu_Drivers_Init
 * @implements 1DD7:12CE:0018:7A26 ()
 */
void emu_Drivers_Init()
{
	csip32 ret;
	csip32 filename;
	csip32 driver;
	csip32 extension;
	uint16 variable_0008;

	/* Pop the return CS:IP. */
	emu_pop(&ret.s.ip);
	emu_pop(&ret.s.cs);

	filename      = emu_get_csip32  (emu_ss, emu_sp, 0x0);
	driver        = emu_get_csip32  (emu_ss, emu_sp, 0x4);
	extension     = emu_get_csip32  (emu_ss, emu_sp, 0x8);
	variable_0008 = emu_get_memory16(emu_ss, emu_sp, 0xC);

	emu_ax = Drivers_Init((char *)emu_get_memorycsip(filename), filename, (Driver *)emu_get_memorycsip(driver), driver, (char *)emu_get_memorycsip(extension), variable_0008) ? 1 : 0;

	emu_cs = ret.s.cs;
	emu_ip = ret.s.ip;
}

/**
 * Emulator wrapper around Driver_Music_IsPlaying()
 *
 * @name emu_Driver_Music_IsPlaying
 * @implements 1DD7:088A:0026:5144 ()
 */
void emu_Driver_Music_IsPlaying()
{
	csip32 ret;

	/* Pop the return CS:IP. */
	emu_pop(&ret.s.ip);
	emu_pop(&ret.s.cs);

	emu_ax = Driver_Music_IsPlaying() ? 1 : 0;

	emu_cs = ret.s.cs;
	emu_ip = ret.s.ip;
}
