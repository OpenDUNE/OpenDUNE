/* $Id$ */

#include <string.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "../os/sleep.h"
#include "../os/math.h"
#include "unknown.h"

extern void f__259E_0040_0015_5E4A();

void Unknown_259E_0006(csip32 ptr2, int16 unknown)
{
	int16  progress; /* bool */
	int16  signed04;
	int16  signed06;
	uint32 loc0C;
	int16  signed0E;
	int16  signed10;
	uint16 loc12;

	uint8 *ptr2data; /* Local pointer for ptr2 */
	uint8 *data;
	uint16 base;

	int i;

	uint8 *ptr1 = g_global->variable_70A2;
	ptr2data = emu_get_memorycsip(ptr2);

	/* Code below does the equivalent of
	 * uint8 data[0x300]
	 * except the array must be at the emulated stack to make it available for sub-functions.
	 *
	 * When removing it, don't forget to also remove the 'emu_sp += 0x300;' before every
	 * exit of this function.
	 */
	emu_sp -= 0x300;
	base = emu_sp;
	data = &emu_get_memory8(emu_ss, base, 0x0);

	if (ptr1 == NULL || ptr2.csip == 0x0) {
		emu_sp += 0x300;
		return;
	}

	memcpy(data, ptr1, 0x300);

	if (g_global->variable_6C76 != 0x3) {
		emu_push(ptr2.s.cs);
		emu_push(ptr2.s.ip);
		emu_push(emu_cs); emu_push(0x00F6); f__259E_0040_0015_5E4A();
		emu_sp += 4;

		emu_sp += 0x300;
		return;
	}

	signed0E = 0;
	for (i = 0; i < 0x300; i++) {
		int16 diff = (int16)ptr2data[i] - (int16)data[i];
		if (diff < 0) diff = -diff;
		signed0E = max(signed0E, diff);
	}

	signed10 = unknown << 8;
	if (signed0E != 0x0) signed10 /= signed0E;

	signed06 = signed10;
	signed04 = 0x1;
	while (signed04 <= signed0E && signed10 < 0x200) {
		signed10 += signed06;
		signed04++;
	}

	loc12 = 0x0;
	loc0C = g_global->variable_76A8;

	do {
		progress = 0;

		loc12 += (uint16)signed10;
		loc0C += (uint32)(loc12 >> 8);
		loc12 &= 0xFF;

		for (i = 0; i < 0x300; i++) {
			int16 locdi = ptr2data[i];
			int16 signed08 = data[i];

			if (signed08 == locdi) continue;

			if (signed08 < locdi) {
				signed08 = min(signed08 + signed04, locdi);
				progress = 1;
			}

			if (signed08 > locdi) {
				signed08 = max(signed08 - signed04, locdi);
				progress = 1;
			}

			data[i] = signed08 & 0xFF;
		}

		if (progress != 0x0) {
			emu_push(emu_ss); emu_push(base);
			emu_push(emu_cs); emu_push(0x0228); f__259E_0040_0015_5E4A();
			emu_sp += 4;

			while (g_global->variable_76A8 < loc0C) sleep(0); /* Spin-lock */
		}
	} while (progress != 0);

	emu_sp += 0x300;
}

/**
 * Emulator wrapper around Unknown_259E_0006().
 *
 * @name emu_Unknown_259E_0006
 * @implements 259E:0006:0016:858A ()
 */
void emu_Unknown_259E_0006()
{
	csip32 ptr2;
	int16 unknown;

	/* Pop return address from the stack. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	ptr2    =   emu_get_csip32(emu_ss, emu_sp, 0x0);
	unknown = emu_get_memory16(emu_ss, emu_sp, 0x4);

	Unknown_259E_0006(ptr2, unknown);
}
