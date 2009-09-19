#ifndef TYPES_H
#define TYPES_H

#define MSVC_PACKED_BEGIN
#define MSVC_PACKED_END
#define GCC_PACKED

#if defined(__GNUC__)
#	undef  GCC_PACKED
#	define GCC_PACKED __attribute__((packed))
#elif defined(_MSC_VER)
#	undef MSVC_PACKED_BEGIN
#	undef MSVC_PACKED_END
#	define MSVC_PACKED_BEGIN __pragma(pack(push, 1))
#	define MSVC_PACKED_END __pragma(pack(pop))
#endif /* __GNUC__ / _MSC_VER */

typedef unsigned char  uint8;
typedef   signed char   int8;
typedef unsigned short uint16;
typedef   signed short  int16;
typedef unsigned int   uint32;
typedef   signed int    int32;

typedef unsigned char  bool;
#define false 0
#define true 1

#endif /* TYPES_H */
