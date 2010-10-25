/* $Id$ */

#include <stdio.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "../decompiled/decompiled.h"
#include "../global.h"
#include "input.h"

static InputLocalData *s_input_local = NULL;

/**
 * Initialize the input system.
 *
 * @init System_Init_Input
 */
void System_Init_Input()
{
	s_input_local = (InputLocalData *)&emu_get_memory8(0x29E8, 0x0, 0x0);
}

/**
 * Clears the given bits in input flags.
 *
 * @param bits The bits to clear.
 * @return The new value of input flags.
 */
uint16 Input_Flags_ClearBits(uint16 bits)
{
	g_global->inputFlags &= ~bits;
	return g_global->inputFlags;
}

/**
 * Sets the given bits in input flags.
 *
 * @param bits The bits to set.
 * @return The new value of input flags.
 */
uint16 Input_Flags_SetBits(uint16 bits)
{
	g_global->inputFlags |= bits;

	if ((g_global->inputFlags & INPUT_FLAG_KEY_RELEASE) != 0) {
		uint8 i;
		for (i = 0; i < 16; i++) s_input_local->activeInputMap[i] = 0;
	}

	return g_global->inputFlags;
}
