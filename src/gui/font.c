/* $Id$ */

#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "font.h"

/**
 * Get the width of a char in pixels.
 *
 * @param c The char to ge the width of.
 * @return The width of the char in pixels.
 */
uint16 Font_GetCharWidth(char c)
{
	uint16 width;

	width = emu_get_memory8(g_global->variable_6C72.s.cs, g_global->variable_6C72.s.ip, c);
	return width + g_global->variable_6C6C;
}

/**
 * Get the width of the string in pixels.
 *
 * @param string The string to get the width of.
 * @return The width of the string in pixels.
 */
uint16 Font_GetStringWidth(char *string)
{
	uint16 width = 0;

	if (string == NULL) return 0;

	while (*string != '\0') {
		width += Font_GetCharWidth(*string++);
	}

	return width;
}
