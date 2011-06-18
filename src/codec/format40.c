/* $Id$ */

/** @file src/codec/format40.c Decoder for 'format40' files. */

#include <stdio.h>
#include "types.h"
#include "format40.h"

/**
 * Decode a memory fragment which is encoded with 'format40'.
 * @param dest The place the decoded fragment will be loaded.
 * @param source The encoded fragment.
 */
void Format40_Decode(uint8 *dest, uint8 *source)
{
	while (true) {
		uint16 flag;

		flag = *source++;

		if (flag == 0) {
			flag = *source++;
			for (; flag > 0; flag--) {
				*dest++ ^= *source;
			}
			source++;

			continue;
		}

		if ((flag & 0x80) == 0) {
			for (; flag > 0; flag--) {
				*dest++ ^= *source++;
			}
			continue;
		}

		if (flag != 0x80) {
			dest += flag & 0x7F;
			continue;
		}

		flag = *source++;
		flag += (*source++) << 8;

		if (flag == 0) break;

		if ((flag & 0x8000) == 0) {
			dest += flag;
			continue;
		}

		if ((flag & 0x4000) == 0) {
			flag &= 0x3FFF;
			for (; flag > 0; flag--) {
				*dest++ ^= *source++;
			}
			continue;
		}

		{
			flag &= 0x3FFF;
			for (; flag > 0; flag--) {
				*dest++ ^= *source;
			}
			source++;
			continue;
		}
	}
}
