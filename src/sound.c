/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "sound.h"

extern void overlay(uint16 cs, uint8 force);
extern void f__1DD7_022D_0015_1956();
extern void f__1DD7_0719_0014_A78C();
extern void f__1DD7_05D0_0014_A7A2();
extern void f__1DD7_08EE_000E_5C89();
extern void f__1DD7_0A7B_001E_4A5A();

/**
 * Plays a sound.
 * @param index The index of the sound to play.
 */
void Sound_Play(uint16 index)
{
	if (index == 0xFFFF || index >= 38) return;

	if (g_global->musics[index].string.csip != g_global->currentMusic.csip) {
		g_global->currentMusic.csip = g_global->musics[index].string.csip;

		emu_push(emu_cs); emu_push(0x02D4); emu_cs = 0x1DD7; f__1DD7_0A7B_001E_4A5A();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x3483) { overlay(0x3483, 1); }

		emu_push(0); emu_push(0);
		emu_push(emu_cs); emu_push(0x02DF); emu_cs = 0x1DD7; f__1DD7_022D_0015_1956();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x3483) { overlay(0x3483, 1); }
		emu_sp += 4;

		emu_push(0); emu_push(0);
		emu_push(0); emu_push(0);
		emu_push(0); emu_push(0);
		emu_push(emu_cs); emu_push(0x02F8); emu_cs = 0x1DD7; f__1DD7_0719_0014_A78C();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x3483) { overlay(0x3483, 1); }
		emu_sp += 12;

		emu_push(0); emu_push(0);
		emu_push(0); emu_push(0);
		emu_push(0); emu_push(0);
		emu_push(emu_cs); emu_push(0x0312); emu_cs = 0x1DD7; f__1DD7_05D0_0014_A7A2();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x3483) { overlay(0x3483, 1); }
		emu_sp += 12;

		emu_push(0); emu_push(0);
		emu_push(0); emu_push(0);
		emu_push(g_global->currentMusic.s.cs); emu_push(g_global->currentMusic.s.ip);
		emu_push(emu_cs); emu_push(0x032E); emu_cs = 0x1DD7; f__1DD7_0719_0014_A78C();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x3483) { overlay(0x3483, 1); }
		emu_sp += 12;

		emu_push(0); emu_push(0);
		emu_push(0); emu_push(0);
		emu_push(g_global->currentMusic.s.cs); emu_push(g_global->currentMusic.s.ip);
		emu_push(emu_cs); emu_push(0x034A); emu_cs = 0x1DD7; f__1DD7_05D0_0014_A7A2();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x3483) { overlay(0x3483, 1); }
		emu_sp +=12;
	}

	emu_push(g_global->musics[index].variable_04);
	emu_push(emu_cs); emu_push(0x035F); emu_cs = 0x1DD7; f__1DD7_08EE_000E_5C89();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3483) { overlay(0x3483, 1); }
	emu_sp += 2;
}
