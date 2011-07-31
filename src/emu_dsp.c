/* $Id$ */

/** @file src/emu_dsp.c Emulated DSP routines. */

#include <assert.h>
#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "dsp.h"

/**
 * Emulator wrapper around DSP_Init()
 *
 * @name emu_DSP_Init
 * @implements AB00:0DA4:0078:0101 ()
 */
void emu_DSP_Init()
{
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	DSP_Init();
}

/**
 * Emulator wrapper around DSP_Uninit()
 *
 * @name emu_DSP_Uninit
 * @implements AB00:0B91:0014:89BD ()
 */
void emu_DSP_Uninit()
{
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	DSP_Uninit();
}

/**
 * Emulator wrapper around DSP_GetInfo()
 *
 * @name emu_DSP_GetInfo
 * @implements AB00:0B73:0019:AD43 ()
 */
void emu_DSP_GetInfo()
{
	csip32 info_csip;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	info_csip = emu_Global_GetCSIP(DSP_GetInfo());

	emu_dx = info_csip.s.cs;
	emu_ax = info_csip.s.ip;
}
