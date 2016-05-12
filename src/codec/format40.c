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
	uint16 cmd;
	uint16 count;

	for (;;) {
		cmd = *src++;	/* 8 bit command code */

		if (cmd == 0) {
			/* XOR with value */
			for (count = *src++; count > 0; count--) {
				*dst++ ^= *src;
			}
			src++;
		} else if ((cmd & 0x80) == 0) {
			/* XOR with string */
			for (count = cmd; count > 0; count--) {
				*dst++ ^= *src++;
			}
		} else if (cmd != 0x80) {
			/* skip bytes */
			dst += (cmd & 0x7F);
		} else {
			/* last byte was 0x80 : read 16 bit value */
			cmd = *src++;
			cmd += (*src++) << 8;

			if (cmd == 0) break;	/* 0x80 0x00 0x00 => exit code */

			if ((cmd & 0x8000) == 0) {
				/* skip bytes */
				dst += cmd;
			} else if ((cmd & 0x4000) == 0) {
				/* XOR with string */
				for (count = cmd & 0x3FFF; count > 0; count--) {
					*dst++ ^= *src++;
				}
			} else {
				/* XOR with value */
				for (count = cmd & 0x3FFF; count > 0; count--) {
					*dst++ ^= *src;
				}
				src++;
			}
		}
	}
}


/**
 * Xor a rectangle from a format40 compressed data source to the screen.
 * @param base Base of the rectangle (top-left pixel).
 * @param src Data source.
 * @param width Width of the rectangle.
 */
void Format40_Decode_XorToScreen(uint8 *dst, uint8 *src, uint16 width)
{
	uint16 length;
	uint16 cmd;
	uint16 count;

	length = 0;

	for (;;) {
		cmd = *src++;	/* 8 bit command code */

		if (cmd == 0) {
			/* XOR with value */
			for(count = *src++; count > 0; count--) {
				*dst++ ^= *src;
				length++;
				if (length == width) {
					length = 0;
					dst += (SCREEN_WIDTH - width);
				}
			}
			src++;
		} else if ((cmd & 0x80) == 0) {
			/* XOR with string */
			for(count = cmd; count > 0; count --) {
				*dst++ ^= *src++;
				length++;
				if (length == width) {
					length = 0;
					dst += (SCREEN_WIDTH - width);
				}
			}
		} else if (cmd != 0x80) {
			/* skip bytes */
			dst   += cmd & 0x7F;
			length += cmd & 0x7F;
			while (length >= width) {
				length -= width;
				dst += (SCREEN_WIDTH - width);
			}
		} else {
			/* last byte was 0x80 : read 16 bit value */
			cmd = *src++;
			cmd += (*src++) << 8;

			if (cmd == 0) break;	/* 0x80 0x00 0x00 => exit code */

			if ((cmd & 0x8000) == 0) {
				/* skip bytes */
				dst   += cmd;
				length += cmd;
				while (length >= width) {
					length -= width;
					dst += (SCREEN_WIDTH - width);
				}
			} else if ((cmd & 0x4000) == 0) {
				/* XOR with string */
				for(count = cmd & 0x3FFF; count > 0; count--) {
					*dst++ ^= *src++;
					length++;
					if (length == width) {
						length = 0;
						dst += (SCREEN_WIDTH - width);
					}
				}
			} else {
				/* XOR with value */
				for(count = cmd & 0x3FFF; count > 0; count--) {
					*dst++ ^= *src;
					length++;
					if (length == width) {
						length = 0;
						dst += (SCREEN_WIDTH - width);
					}
				}
				src++;
			}
		}
	}
}

/**
 * Copy a rectangle from a format40 compressed data source to the screen.
 * @param base Base of the rectangle (top-left pixel).
 * @param src Data source.
 * @param width Width of the rectangle.
 */
void Format40_Decode_ToScreen(uint8 *dst, uint8 *src, uint16 width)
{
	uint16 length;
	uint16 cmd;
	uint16 count;

	length = 0;

	for (;;) {
		cmd = *src++;	/* 8 bit command code */

		if (cmd == 0) {
			/* fill with value */
			for (count = *src++; count > 0; count--) {
				*dst++ = *src;
				length++;
				if (length == width) {
					length = 0;
					dst += (SCREEN_WIDTH - width);
				}
			}
			src++;
		} else if ((cmd & 0x80) == 0) {
			/* copy string */
			for (count = cmd & 0x7F; count > 0; count--) {
				*dst++ = *src++;
				length++;
				if (length == width) {
					length = 0;
					dst += (SCREEN_WIDTH - width);
				}
			}
		} else if (cmd != 0x80) {
			/* skip bytes */
			dst   += cmd & 0x7F;
			length += cmd & 0x7F;
			while (length >= width) {
				length -= width;
				dst += (SCREEN_WIDTH - width);
			}
		} else {
			/* last byte was 0x80 : read 16 bit value */
			cmd = *src++;
			cmd += (*src++) << 8;

			if (cmd == 0) break;	/* 0x80 0x00 0x00 => exit code */

			if ((cmd & 0x8000) == 0) {
				/* skip bytes */
				dst   += cmd;
				length += cmd;
				while (length >= width) {
					length -= width;
					dst += (SCREEN_WIDTH - width);
				}
			} else if ((cmd & 0x4000) == 0) {
				/* copy string */
				for (count = cmd & 0x3FFF; count > 0; count--) {
					*dst++ = *src++;
					length++;
					if (length == width) {
						length = 0;
						dst += (SCREEN_WIDTH - width);
					}
				}
			} else {
				/* fill with value */
				for (count = cmd & 0x3FFF; count > 0; count--) {
					*dst++ = *src;
					length++;
					if (length == width) {
						length = 0;
						dst += (SCREEN_WIDTH - width);
					}
				}
				src++;
			}
		}
	}
}
