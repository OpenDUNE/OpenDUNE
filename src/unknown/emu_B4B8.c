/* $Id$ */

#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "unknown.h"

/**
 * C-ified function f_ _B4B8_110D_000D_FD5C().
 * @param houseID The house.
 */
void Unknown_B4B8_110D(uint8 houseID)
{
	int16 i;
	int16 loc4;
	int16 loc6;
	uint8 *ptr;

	ptr = emu_get_memorycsip(g_global->variable_3C42);
	for (i = 0; i < 0x100; i++, ptr++) {
		*ptr = i & 0xFF;

		loc6 = i / 16;
		loc4 = i % 16;
		if (loc6 == 9 && loc4 <= 6) {
			*ptr = (houseID << 4) + 0x90 + loc4;
		}
	}
}

/**
 * Emulator wrapper around #Unknown_B4B8_110D
 *
 * @name emu_Unknown_B4B8_110D
 * @implements B4B8:110D:000D:FD5C ()
 */
void emu_Unknown_B4B8_110D()
{
	uint16 houseID;

	/* Pop return address from the stack. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	houseID = emu_get_memory16(emu_ss, emu_sp, 0x0);

	Unknown_B4B8_110D((uint8)houseID);
}
