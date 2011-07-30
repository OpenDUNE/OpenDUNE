/* $Id$ */

/** @file src/unknown/emu_259E.c Unknown converted routines from segment 259E. */

#include <string.h>
#include "types.h"
#include "../global.h"
#include "../os/sleep.h"
#include "../os/math.h"
#include "../gfx.h"
#include "unknown.h"

#include "../timer.h"


void Unknown_259E_0006(uint8 *palette, int16 unknown)
{
	int16  progress; /* bool */
	int16  signed04;
	int16  signed06;
	uint32 loc0C;
	int16  signed0E;
	int16  signed10;
	uint16 loc12;
	uint8 data[256 * 3];
	int i;

	if (g_paletteActive == NULL || palette == NULL) return;

	memcpy(data, g_paletteActive, 256 * 3);

	signed0E = 0;
	for (i = 0; i < 256 * 3; i++) {
		int16 diff = (int16)palette[i] - (int16)data[i];
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
	loc0C = g_timerSleep;

	do {
		progress = 0;

		loc12 += (uint16)signed10;
		loc0C += (uint32)(loc12 >> 8);
		loc12 &= 0xFF;

		for (i = 0; i < 256 * 3; i++) {
			int16 locdi = palette[i];
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
			GFX_SetPalette(data);

			while (g_timerSleep < loc0C) sleep(0); /* Spin-lock */
		}
	} while (progress != 0);
}
