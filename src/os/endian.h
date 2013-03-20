/** @file src/os/endian.h Os-independent endian detection routines. */

#ifndef OS_ENDIAN_H
#define OS_ENDIAN_H

#if defined(_WIN32)
	#if !defined(__LITTLE_ENDIAN)
		#define __LITTLE_ENDIAN 1234
	#endif /* __LITTLE_ENDIAN */
	#define __BYTE_ORDER __LITTLE_ENDIAN
	#if defined(_MSC_VER)
		#include <stdlib.h>
		#define BSWAP32 _byteswap_ulong
		#define BSWAP16 _byteswap_ushort
	#endif /* _MSC_VER */
#elif defined(__APPLE__)
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
#else
	#include <endian.h>
#endif /* _WIN32 */

/* __builtin_bswap32 is only available from GCC-4.3 onwards */
#if defined __GNUC__ && defined __GNUC_MINOR__
	#if (((__GNUC__ << 16) + __GNUC_MINOR__) >= 0x040003)
		#define BSWAP32 __builtin_bswap32
		#if defined __POWERPC
			#define BSWAP16 __builtin_bswap16
		#else
			#define BSWAP16(x) (__builtin_bswap32(x) >> 16)
		#endif
	#endif
#endif

#ifndef BSWAP16
	#define BSWAP16(x) (((x) & 0xFF00) >> 8 | ((x) & 0x00FF) << 8)
#endif
#ifndef BSWAP32
	#define BSWAP32(x) (((x) & 0xFF000000) >> 24 | ((x) & 0x00FF0000) >> 8 | ((x) & 0x0000FF00) << 8 | ((x) & 0x000000FF) << 24)
#endif

#if __BYTE_ORDER == __LITTLE_ENDIAN
	#define HTOBE32(x) BSWAP32(x)
	#define BETOH32(x) BSWAP32(x)
	#define HTOBE16(x) BSWAP16(x)
	#define BETOH16(x) BSWAP16(x)
	#define HTOLE32(x) (x)
	#define LETOH32(x) (x)
	#define HTOLE16(x) (x)
	#define LETOH16(x) (x)
#else
	#define HTOBE32(x) (x)
	#define BETOH32(x) (x)
	#define HTOBE16(x) (x)
	#define BETOH16(x) (x)
	#define HTOLE32(x) BSWAP32(x)
	#define LETOH32(x) BSWAP32(x)
	#define HTOLE16(x) BSWAP16(x)
	#define LETOH16(x) BSWAP16(x)
#endif

#define READ_LE_UINT16(p) ((uint16)(p)[0] | ((uint16)(p)[1] << 8))
#define READ_LE_UINT32(p) ((uint32)(p)[0] | ((uint32)(p)[1] << 8) | ((uint32)(p)[2] << 16) | ((uint32)(p)[3] << 24))

#endif /* OS_ENDIAN_H */
