/* $Id$ */

#include <stdio.h>
#include "types.h"
#include "wsa.h"

/**
 * Get the amount of frames a WSA has.
 */
uint16 WSA_GetFrameCount(WSAHeader *header)
{
	return header->frames;
}
