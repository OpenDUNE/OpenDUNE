/** @file src/os/endian.c endian routines. */

#include "types.h"

#include "endian.h"

uint16 endian_bswap16(uint16 x)
{
	return ((x & 0xFF00) >> 8 | (x & 0x00FF) << 8);
}

uint32 endian_bswap32(uint32 x)
{
	return ((x & 0xFF000000) >> 24 | (x & 0x00FF0000) >> 8 | (x & 0x0000FF00) << 8 | (x & 0x000000FF) << 24);
}
