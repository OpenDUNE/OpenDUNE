/** @file src/os/endian.h Os-independent endian detection routines. */

#ifndef OS_ENDIAN_H
#define OS_ENDIAN_H

#if defined(_WIN32)
	#if !defined(__LITTLE_ENDIAN)
		#define __LITTLE_ENDIAN 1234
	#endif /* __LITTLE_ENDIAN */
	#if !defined(__BIG_ENDIAN)
		#define __BIG_ENDIAN 4321
	#endif /* __BIG_ENDIAN */
	#define __BYTE_ORDER __LITTLE_ENDIAN
#elif defined(__APPLE__) || defined(__FreeBSD__) || defined(__DJGPP__)
	#include <machine/endian.h>
	#if !defined(__BYTE_ORDER)
		#define __BYTE_ORDER BYTE_ORDER
	#endif
	#if !defined(__LITTLE_ENDIAN)
		#define __LITTLE_ENDIAN LITTLE_ENDIAN
	#endif
	#if !defined(__BIG_ENDIAN)
		#define __BIG_ENDIAN BIG_ENDIAN
	#endif
#elif defined(__WATCOMC__)
	#define __LITTLE_ENDIAN 1234
	#define __BIG_ENDIAN 4321
	#define __BYTE_ORDER __LITTLE_ENDIAN
#elif defined(__HAIKU__)
	#include <posix/endian.h>
#else
	#include <endian.h>
#endif /* _WIN32 */

extern uint16 endian_bswap16(uint16 x);
extern uint32 endian_bswap32(uint32 x);

#if __BYTE_ORDER == __LITTLE_ENDIAN
	#define HTOBE32(x) endian_bswap32(x)
	#define BETOH32(x) endian_bswap32(x)
	#define HTOBE16(x) endian_bswap16(x)
	#define BETOH16(x) endian_bswap16(x)
	#define HTOLE32(x) (x)
	#define LETOH32(x) (x)
	#define HTOLE16(x) (x)
	#define LETOH16(x) (x)
#else
	#define HTOBE32(x) (x)
	#define BETOH32(x) (x)
	#define HTOBE16(x) (x)
	#define BETOH16(x) (x)
	#define HTOLE32(x) endian_bswap32(x)
	#define LETOH32(x) endian_bswap32(x)
	#define HTOLE16(x) endian_bswap16(x)
	#define LETOH16(x) endian_bswap16(x)
#endif

#define READ_LE_UINT16(p) ((uint16)(p)[0] | ((uint16)(p)[1] << 8))
#define READ_LE_UINT32(p) ((uint32)(p)[0] | ((uint32)(p)[1] << 8) | ((uint32)(p)[2] << 16) | ((uint32)(p)[3] << 24))
#define WRITE_LE_UINT16(p, value) ((p)[0] = ((value) & 0xFF), (p)[1] = (((value) >> 8) & 0xFF))

#define READ_BE_UINT32(p) (((uint32)(p)[0] << 24) | ((uint32)(p)[1] << 16) | ((uint32)(p)[2] << 8) | (uint32)(p)[3])

#endif /* OS_ENDIAN_H */
