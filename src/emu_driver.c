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
 * Emulator wrapper around Driver_Music_FadeOut()
 *
 * @name emu_Driver_Music_FadeOut
 * @implements 1DD7:0B53:0025:36F7 ()
 */
void emu_Driver_Music_FadeOut()
{
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	Driver_Music_FadeOut();
}

/**
 * Emulator wrapper around Drivers_CustomTimer_Interrupt()
 *
 * @name emu_Drivers_CustomTimer_Interrupt
 * @implements 2756:050F:000B:0871 ()
 */
void emu_Drivers_CustomTimer_Interrupt()
{
	Drivers_CustomTimer_Interrupt();

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	emu_popf();
}

/**
 * Emulator wrapper around Drivers_CustomTimer_OriginalInterrupt()
 *
 * @name emu_Drivers_CustomTimer_OriginalInterrupt
 * @implements 2756:0622:0006:823A ()
 */
void emu_Drivers_CustomTimer_OriginalInterrupt()
{
	Drivers_CustomTimer_OriginalInterrupt();

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
}
