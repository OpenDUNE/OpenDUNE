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
