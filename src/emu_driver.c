/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "driver.h"
#include "global.h"

/**
 * Emulator wrapper around Drivers_EnableSounds()
 *
 * @name emu_Drivers_EnableSounds
 * @implements 1DD7:000E:001C:4593 ()
 */
void emu_Drivers_EnableSounds()
{
	csip32 ret;
	uint16 sounds;

	/* Pop the return CS:IP. */
	emu_pop(&ret.s.ip);
	emu_pop(&ret.s.cs);

	sounds = emu_get_memory16(emu_ss, emu_sp, 0);

	emu_ax = Drivers_EnableSounds(sounds);

	emu_cs = ret.s.cs;
	emu_ip = ret.s.ip;
}

/**
 * Emulator wrapper around Drivers_EnableMusic()
 *
 * @name emu_Drivers_EnableMusic
 * @implements 1DD7:006F:001C:4403 ()
 */
void emu_Drivers_EnableMusic()
{
	csip32 ret;
	uint16 music;

	/* Pop the return CS:IP. */
	emu_pop(&ret.s.ip);
	emu_pop(&ret.s.cs);

	music = emu_get_memory16(emu_ss, emu_sp, 0);

	emu_ax = Drivers_EnableMusic(music);

	emu_cs = ret.s.cs;
	emu_ip = ret.s.ip;
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

/**
 * Decompiled function Driver_Voice_01EB()
 *
 * @name emu_Driver_Voice_01EB
 * @implements 1DD7:01EB:0013:9C3C ()
 */
void emu_Driver_Voice_01EB()
{
	csip32 ret;

	/* Pop the return CS:IP. */
	emu_pop(&ret.s.ip);
	emu_pop(&ret.s.cs);

	emu_ax = Driver_Voice_01EB() ? 1 : 0;

	emu_cs = ret.s.cs;
	emu_ip = ret.s.ip;
}

/**
 * Emulator wrapper around Driver_Music_Stop()
 *
 * @name emu_Driver_Music_Stop
 * @implements 1DD7:0A7B:001E:4A5A ()
 */
void emu_Driver_Music_Stop()
{
	csip32 ret;

	/* Pop the return CS:IP. */
	emu_pop(&ret.s.ip);
	emu_pop(&ret.s.cs);

	Driver_Music_Stop();

	emu_cs = ret.s.cs;
	emu_ip = ret.s.ip;
}

/**
 * Emulator wrapper around Driver_Sound_Stop()
 *
 * @name emu_Driver_Sound_Stop
 * @implements 1DD7:09DA:000F:D404 ()
 */
void emu_Driver_Sound_Stop()
{
	csip32 ret;

	/* Pop the return CS:IP. */
	emu_pop(&ret.s.ip);
	emu_pop(&ret.s.cs);

	Driver_Sound_Stop();

	emu_cs = ret.s.cs;
	emu_ip = ret.s.ip;
}

/**
 * Emulator wrapper around Driver_Voice_0248()
 *
 * @name emu_Driver_Voice_022D
 * @implements 1DD7:022D:0015:1956 ()
 */
void emu_Driver_Voice_022D()
{
	csip32 buffer_csip;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	buffer_csip = emu_get_csip32(emu_ss, emu_sp, 0x0);

	Driver_Voice_0248(emu_get_memorycsip(buffer_csip), buffer_csip, 0xFF, 0xFF);
}
