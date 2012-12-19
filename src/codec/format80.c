/** @file src/codec/format80.c Decoder for 'format80' files. */

#include <string.h>
#include "types.h"

#include "format80.h"

/**
 * Decode a memory fragment which is encoded with 'format80'.
 * @param dest The place the decoded fragment will be loaded.
 * @param source The encoded fragment.
 * @param destLength The length of the destionation buffer.
 * @return The length of decoded data.
 */
uint16 Format80_Decode(uint8 *dest, uint8 *source, uint16 destLength)
{
	uint8 *start = dest;
	uint8 *end = dest + destLength;

	while (dest != end) {
		uint8 flag;
		uint16 size;
		uint16 offset;

		flag = *source++;

		/* Short move, relative */
		if ((flag & 0x80) == 0) {
			size = (flag >> 4) + 3;
			if (size > end - dest) size = end - dest;

			offset = ((flag & 0xF) << 8) + (*source++);

			/* This decoder assumes memcpy. As some platforms implement memcpy as memmove, this is much safer */
			for (; size > 0; size--) { *dest = *(dest - offset); dest++; }
			continue;
		}

		/* Exit */
		if (flag == 0x80) break;

		/* Long set */
		if (flag == 0xFE) {
			size = *source++;
			size += (*source++) << 8;
			if (size > end - dest) size = end - dest;

			memset(dest, (*source++), size);
			dest += size;
			continue;
		}

		/* Long move, absolute */
		if (flag == 0xFF) {
			uint8 *s;

			size = *source++;
			size += (*source++) << 8;
			if (size > end - dest) size = end - dest;

			offset = *source++;
			offset += (*source++) << 8;

			s = end - destLength + offset;
			/* This decoder assumes memcpy. As some platforms implement memcpy as memmove, this is much safer */
			for (; size > 0; size--) *dest++ = *s++;
			continue;
		}

		/* Short move, absolute */
		if ((flag & 0x40) != 0) {
			uint8 *s;

			size = (flag & 0x3F) + 3;
			if (size > end - dest) size = end - dest;

			offset = *source++;
			offset += (*source++) << 8;

			s = end - destLength + offset;
			/* This decoder assumes memcpy. As some platforms implement memcpy as memmove, this is much safer */
			for (; size > 0; size--) *dest++ = *s++;
			continue;
		}

		/* Short copy */
		{
			size = flag & 0x3F;
			if (size > end - dest) size = end - dest;

			/* This decoder assumes memcpy. As some platforms implement memcpy as memmove, this is much safer */
			for (; size > 0; size--) *dest++ = *source++;
			continue;
		}
	}

	return dest - start;
}
