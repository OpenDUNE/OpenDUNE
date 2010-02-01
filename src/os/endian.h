/* $Id$ */

#ifndef OS_ENDIAN_H
#define OS_ENDIAN_H

#include <endian.h>
#if __BYTE_ORDER == __LITTLE_ENDIAN
	#define HTOBE32(x) __builtin_bswap32(x)
#else
	#define HTOBE32(x) (x)
#endif

#endif /* OS_ENDIAN_H */
