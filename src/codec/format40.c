/** @file src/codec/format40.c Decoder for 'format40' files. */

#include "types.h"

#include "format40.h"

#include "../gfx.h"

/**
 * Decode a memory fragment which is encoded with 'format40'.
 * @param dst The place the decoded fragment will be loaded.
 * @param src The encoded fragment.
 */
void Format40_Decode(uint8 *dst, uint8 *src)
{
	while (true) {
		uint16 flag;

		flag = *src++;

		if (flag == 0) {
			flag = *src++;
			for (; flag > 0; flag--) {
				*dst++ ^= *src;
			}
			src++;

			continue;
		}

		if ((flag & 0x80) == 0) {
			for (; flag > 0; flag--) {
				*dst++ ^= *src++;
			}
			continue;
		}

		if (flag != 0x80) {
			dst += flag & 0x7F;
			continue;
		}

		flag = *src++;
		flag += (*src++) << 8;

		if (flag == 0) break;

		if ((flag & 0x8000) == 0) {
			dst += flag;
			continue;
		}

		if ((flag & 0x4000) == 0) {
			flag &= 0x3FFF;
			for (; flag > 0; flag--) {
				*dst++ ^= *src++;
			}
			continue;
		}

		{
			flag &= 0x3FFF;
			for (; flag > 0; flag--) {
				*dst++ ^= *src;
			}
			src++;
			continue;
		}
	}
}


/**
 * Xor a rectangle from a format40 compressed data source to the screen.
 * @param base Base of the rectangle (top-left pixel).
 * @param src Data source.
 * @param width Width of the rectangle.
 */
void Format40_Decode_XorToScreen(uint8 *base, uint8 *src, uint16 width)
{
	uint8 *dst;
	uint16 length;

	dst = base;
	length = 0;

	while (true) {
		uint16 flag;

		flag = *src++;

		if (flag == 0) {
			uint8 value;

			flag = *src++;
			value = *src++;
			do {
				*dst++ ^= value;
				length++;
				if (length == width) {
					length = 0;
					base += SCREEN_WIDTH;
					dst = base;
				}
				flag--;
			} while (flag != 0);
			continue;
		}

		if (flag < 128) {
			do {
				*dst++ ^= *src++;
				length++;
				if (length == width) {
					length = 0;
					base += SCREEN_WIDTH;
					dst = base;
				}
				flag--;
			} while (flag != 0);
			continue;
		}

		if (flag > 128) {
			dst   += flag & 0x7F;
			length += flag & 0x7F;
			while (length >= width) {
				length -= width;
				base += SCREEN_WIDTH;
				dst = base + length;
			}
			continue;
		}

		flag = *src | (src[1] << 8);
		src += 2;

		if (flag == 0) break;

		if (flag < 0x8000) {
			dst   += flag;
			length += flag;
			while (length >= width) {
				length -= width;
				base += SCREEN_WIDTH;
				dst = base + length;
			}
			continue;
		}

		if ((flag & 0x4000) == 0) {
			flag &= 0x3FFF;
			do {
				*dst++ ^= *src++;
				length++;
				if (length == width) {
					length = 0;
					base += SCREEN_WIDTH;
					dst = base;
				}
				flag--;
			} while (flag != 0);
			continue;
		}

		{
			uint8 value;

			flag &= 0x3FFF;
			value = *src++;
			do {
				*dst++ ^= value;
				length++;
				if (length == width) {
					length = 0;
					base += SCREEN_WIDTH;
					dst = base;
				}
				flag--;
			} while (flag != 0);
			continue;
		}
	}
}

/**
 * Copy a rectangle from a format40 compressed data source to the screen.
 * @param base Base of the rectangle (top-left pixel).
 * @param src Data source.
 * @param width Width of the rectangle.
 */
void Format40_Decode_ToScreen(uint8 *base, uint8 *src, uint16 width)
{
	uint8 *dst;
	uint16 length;

	dst = base;
	length = 0;

	while (true) {
		uint16 flag;

		flag = *src++;

		if (flag == 0) {
			uint8 value;

			flag  = *src++;
			value = *src++;
			do {
				*dst++ = value;
				length++;
				if (length == width) {
					length = 0;
					base += SCREEN_WIDTH;
					dst = base;
				}
				flag--;
			} while (flag != 0);
			continue;
		}

		if (flag < 128) {
			do {
				*dst++ = *src++;
				length++;
				if (length == width) {
					length = 0;
					base += SCREEN_WIDTH;
					dst = base;
				}
				flag--;
			} while (flag != 0);
			continue;
		}

		if (flag > 128) {
			dst   += flag & 0x7F;
			length += flag & 0x7F;
			while (length >= width) {
				length -= width;
				base += SCREEN_WIDTH;
				dst = base + length;
			}
			continue;
		}

		flag = *src | (src[1] << 8);
		src += 2;

		if (flag == 0) break;

		if (flag < 0x8000) {
			dst   += flag;
			length += flag;
			while (length >= width) {
				length -= width;
				base += SCREEN_WIDTH;
				dst = base + length;
			}
			continue;
		}

		if ((flag & 0x4000) == 0) {
			flag &= 0x3FFF;
			do {
				*dst++ = *src++;
				length++;
				if (length == width) {
					length = 0;
					base += SCREEN_WIDTH;
					dst = base;
				}
				flag--;
			} while (flag != 0);
			continue;
		}

		{
			uint8 value;

			flag &= 0x3FFF;
			value = *src++;
			do {
				*dst++ = value;
				length++;
				if (length == width) {
					length = 0;
					base += SCREEN_WIDTH;
					dst = base;
				}
				flag--;
			} while (flag != 0);
			continue;
		}
	}
}
