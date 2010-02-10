/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "driver.h"

/**
 * Emulator wrapper around Drivers_All_Init()
 *
 * @name emu_Drivers_All_Init
 * @implements 1DD7:039B:0008:D3BD ()
 */
void emu_Drivers_All_Init()
{
	csip32 ret;
	uint16 sound;
	uint16 music;
	uint16 voice;

	/* Pop the return CS:IP. */
	emu_pop(&ret.s.ip);
	emu_pop(&ret.s.cs);

	sound = emu_get_memory16(emu_ss, emu_sp, 0);
	music = emu_get_memory16(emu_ss, emu_sp, 2);
	voice = emu_get_memory16(emu_ss, emu_sp, 4);

	Drivers_All_Init(sound, music, voice);

	emu_cs = ret.s.cs;
	emu_ip = ret.s.ip;
}

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
